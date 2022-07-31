

#include "Headers.hpp"
#include "Patch.hpp"


struct DataBunch
{
	DWORD UnitInGame_p;
	DWORD UnitTypeInfo_p;
	DWORD InstrIndex;
	DWORD InstrOpCode;
};

std::string COB_Log_FileName = "TotalA_COB_Trace";

DWORD PreviousLastUnitInGamePointer;
DWORD LastUnitInGamePointer;
DWORD PreviousLastUnitTypeInfoPointer;
DWORD LastUnitTypeInfoPointer;
DWORD LastInstructionIndex;
DWORD LastInstructionOpCode;

//DWORD CurrentLine = 0;
DWORD RecentLines = 1000;
int CurrentInfLoopCounter = 0;
int InfiniteLoop = 100000000;

std::list<DataBunch> DataBunches;


void NewGlobalExceptionFilter(LPEXCEPTION_POINTERS lpExceptionPointers);
unsigned int (WINAPI* OriginalGlobalExceptionFilter)(LPEXCEPTION_POINTERS) = (unsigned int (WINAPI*)(LPEXCEPTION_POINTERS))0x004DA2A0;


void InfLoopDoKillGame()
{
	__asm
	{
		int 3
	}

	return;
}



void COB_Debug_InstrPtr_Logger()
{
	DataBunch data;

	data.UnitInGame_p = LastUnitInGamePointer;
	data.UnitTypeInfo_p = LastUnitTypeInfoPointer;
	data.InstrIndex = LastInstructionIndex;
	data.InstrOpCode = LastInstructionOpCode;

	DataBunches.push_front(data);

	if (DataBunches.size() > RecentLines)
		DataBunches.pop_back();
}



// Instruction Index
__declspec(naked) void COB_Debug_InstrPtr()
{
	__asm
	{
		mov edx, [edi+8] // COB File Start
		mov ecx, [esi+4] // Instruction Index
		mov eax, [edx+0x24] // Instructions Start Offset
		mov ebx, [eax+ecx*4] // Instruction OpCode


		mov LastInstructionIndex, ecx
		mov LastInstructionOpCode, ebx


		pushad
		pushfd


		mov eax, [edi+0x540] // Object3d_p
		mov eax, [eax+0xC] // InGameUnit_p
		mov esi, [eax+0x92] // LoadedUnitType_p

		mov LastUnitTypeInfoPointer, esi
		// inf loop counter


		mov ecx, LastUnitInGamePointer
		mov edx, PreviousLastUnitInGamePointer


		cmp ecx, edx
		jz noResetInfLoopCounter

		mov dword ptr [CurrentInfLoopCounter], 0

	noResetInfLoopCounter:
		inc dword ptr [CurrentInfLoopCounter]

		mov ebx, CurrentInfLoopCounter
		cmp ebx, InfiniteLoop
		jle  bypassInfLoopHandler

		jmp infLoopGameKill

	bypassInfLoopHandler:
		mov PreviousLastUnitInGamePointer, ecx
		mov LastUnitInGamePointer, eax


		popfd
		popad






		pushad
		pushfd

		call COB_Debug_InstrPtr_Logger

		popfd
		popad

		push 0x004B0E69
		ret


	infLoopGameKill:
		//push 0 // not an actual exception based crash with pointers
		//call NewGlobalExceptionFilter
		call InfLoopDoKillGame
	}
}




LPTOP_LEVEL_EXCEPTION_FILTER WINAPI SetUnhandledExceptionFilter_Redirect(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)
{
	return SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)NewGlobalExceptionFilter);
}




void NewGlobalExceptionFilter(LPEXCEPTION_POINTERS lpExceptionPointers)
{

	SYSTEMTIME time;
	DataBunch data;
	std::ofstream COB_Log;
	std::string timeStr;
	std::string Nameified1;
	std::string Nameified2;
	std::string data1str;
	std::string data2str;
	std::stringstream ss;
	TCHAR Path[MAX_PATH];
	TCHAR Name[32];
	TCHAR UnitName[32];
	DWORD Index;

	GetSystemTime(&time);

	timeStr = COB_Log_FileName + std::to_string(time.wYear) + "---" + std::to_string(time.wMonth) + "_" + std::to_string(time.wDay) + "_" + std::to_string(time.wHour) + "_" + std::to_string(time.wMinute) + "_" + std::to_string(time.wSecond) + "_" + std::to_string(time.wMilliseconds) + ".txt";

	

	COB_Log.open(timeStr);

	if (COB_Log.is_open())
	{
		goto doWrite;
	}
	else
	{
		Index = GetEnvironmentVariable("LOCALAPPDATA", Path, MAX_PATH);
		lstrcpy(Path + Index, timeStr.c_str());

		COB_Log.open(Path);

		if (COB_Log.is_open())
		{
doWrite:
			while (DataBunches.size() > 0)
			{
				data = DataBunches.back();
				DataBunches.pop_back();

				lstrcpy(Name, (LPCSTR)data.UnitTypeInfo_p);
				lstrcpy(UnitName, (LPCSTR)(data.UnitTypeInfo_p + 32));

				Nameified1 = std::string(Name);
				Nameified2 = std::string(UnitName);

				ss = std::stringstream();

				ss << std::hex;
				ss << data.InstrIndex;
				data1str = ss.str();

				ss = std::stringstream();

				ss << std::hex;
				ss << data.InstrOpCode;
				data2str = ss.str();

				COB_Log << std::hex << "<" << Nameified1 << " - " << Nameified2 << ">" << " " << "|||" << " " << "InstrIndex: " << data1str << " | " << "InstrOpCode: " << data2str << std::endl;
			}

			COB_Log.close();
		}
	}

	if (CurrentInfLoopCounter < InfiniteLoop)
	{
		OriginalGlobalExceptionFilter(lpExceptionPointers);
	}
}





BOOL WINAPI DllMain(HINSTANCE hInstDll, DWORD fdwReason, LPVOID lpReserved)
{
	if (fdwReason == DLL_PROCESS_ATTACH)
	{
		SetExeMemoryProtection((LPVOID)0x401000, (LPVOID)(0x401000 + 0xFAA00), PAGE_EXECUTE_READWRITE);

		WriteJumpHook((LPVOID)0x004B0E5D, COB_Debug_InstrPtr);

		SetExeMemoryProtection((LPVOID)0x401000, (LPVOID)(0x401000 + 0xFAA00), PAGE_EXECUTE_READWRITE);



		SetExeMemoryProtection((LPVOID)0x4FC000, (LPVOID)(0x4FC000 + 0x4800), PAGE_READWRITE);

		WritePtr((LPVOID)0x004FC1AC, (DWORD)SetUnhandledExceptionFilter_Redirect, 4);

		SetExeMemoryProtection((LPVOID)0x4FC000, (LPVOID)(0x4FC000 + 0x4800), PAGE_READONLY);




		


	}

	return TRUE;
}












