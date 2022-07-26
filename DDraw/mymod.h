#pragma once

#include "headers.h"
#include "patcher.h"





char* ____Units_Folder;// = "Thal_Units";
char* ____Registry_Keys_Root;// = "Thal_TA_Mod";
char* ____Weapons_Folder;// = "Thal_Weapons";
char* ____Weapons_Folder_TDFs;// = "Thal_Weapons\\*.tdf";
char* ____GameData_Folder;// = "Thal_GameData";
char* ____GameData2_Folder;// = "Thal_GameData_Translate";

char* ____Models_Folder;
char* ____Scripts_Folder;

char* ____GUIs_Folder;


char* ____Features_Folder;

char* ____Anims_Folder;
char* ____Sounds_Folder;
char* ____Sounds2_Folder; // explode.wav


char* ____Download_Folder;


LPVOID ____NewDataFile_Hook_1_Return;// = (LPVOID)0x0041D4E5;



LPVOID(WINAPI* hpiFindFirst)(LPVOID, LPVOID, int, int);// = (LPVOID(WINAPI*)(LPVOID, LPVOID, int, int))0x004BC4B0;
LPVOID(WINAPI* hpiFindNext)(LPVOID, LPVOID);// = (LPVOID(WINAPI*)(LPVOID, LPVOID))0x004BC640;
int (WINAPI* hpiInsertToArray)(LPVOID, int);// = (int(WINAPI*)(LPVOID, int))0x004BE0B0;
void (WINAPI* hpiClose)(LPVOID);// = (void(WINAPI*)(LPVOID))0x004BC8D0;
void (WINAPI* hpiHandleArray)();// = (void(WINAPI*)())0x004BE180;
void (WINAPI* hpiCdToTAPath)();// = (void(WINAPI*)())0x0049F540;
void (WINAPI* hpiLoadAll)();// = (void(WINAPI*)())0x004BE320;




LPVOID FindResult;

// structure
//LPVOID CDDrive;
BYTE FindDataAll[280];

//BYTE FindData[20];
//BYTE FoundFileName[260];
//BYTE Rev31FileName[64];
//BYTE Dest[256];

// structure end

void ____NewDataFile_Hook_1_HelperA()
{

	//if (*((DWORD*)(0x0050289C)))
	//{
		hpiHandleArray();
		hpiCdToTAPath();

		FindResult = hpiFindFirst((LPVOID)"*.th4", FindDataAll, -1, 1);
		if ((int)FindResult >= 0)
		{
			do
				hpiInsertToArray(FindDataAll + 20, 1);
			while (!hpiFindNext(FindResult, FindDataAll));
			hpiClose(FindResult);
		}

		FindResult = hpiFindFirst((LPVOID)"*.th3", FindDataAll, -1, 1);
		if ((int)FindResult >= 0)
		{
			do
				hpiInsertToArray(FindDataAll + 20, 1);
			while (!hpiFindNext(FindResult, FindDataAll));
			hpiClose(FindResult);
		}

		FindResult = hpiFindFirst((LPVOID)"*.th2", FindDataAll, -1, 1);
		if ((int)FindResult >= 0)
		{
			do
				hpiInsertToArray(FindDataAll + 20, 1);
			while (!hpiFindNext(FindResult, FindDataAll));
			hpiClose(FindResult);
		}

		FindResult = hpiFindFirst((LPVOID)"*.th1", FindDataAll, -1, 1);
		if ((int)FindResult >= 0)
		{
			do
				hpiInsertToArray(FindDataAll + 20, 1);
			while (!hpiFindNext(FindResult, FindDataAll));
			hpiClose(FindResult);
		}

		FindResult = hpiFindFirst((LPVOID)"*.th0", FindDataAll, -1, 1);
		if ((int)FindResult >= 0)
		{
			do
				hpiInsertToArray(FindDataAll + 20, 1);
			while (!hpiFindNext(FindResult, FindDataAll));
			hpiClose(FindResult);
		}

		FindResult = hpiFindFirst((LPVOID)"rev31.gp3", FindDataAll, -1, 1);
		if ((int)FindResult >= 0)
		{
			do
				hpiInsertToArray(FindDataAll + 20, 1);
			while (!hpiFindNext(FindResult, FindDataAll));
			hpiClose(FindResult);
		}

		FindResult = hpiFindFirst((LPVOID)"*.ccx", FindDataAll, -1, 1);
		if ((int)FindResult >= 0)
		{
			do
				hpiInsertToArray(FindDataAll + 20, 1);
			while (!hpiFindNext(FindResult, FindDataAll));
			hpiClose(FindResult);
		}

		FindResult = hpiFindFirst((LPVOID)"*.ufo", FindDataAll, -1, 1);
		if ((int)FindResult >= 0)
		{
			do
				hpiInsertToArray(FindDataAll + 20, 0);
			while (!hpiFindNext(FindResult, FindDataAll));
			hpiClose(FindResult);
		}

		FindResult = hpiFindFirst((LPVOID)"*.hpi", FindDataAll, -1, 1);
		if ((int)FindResult >= 0)
		{
			do
				hpiInsertToArray(FindDataAll + 20, 0);
			while (!hpiFindNext(FindResult, FindDataAll));
			hpiClose(FindResult);
		}

		hpiLoadAll();

	//}

	//__asm
	//{
	//	ret
	//}
}




//__declspec(naked) void ____NewDataFile_Hook_1()
//{
//	__asm
//	{
//		pushad
//		pushfd
//
//		call ____NewDataFile_Hook_1_HelperA
//
//		popfd
//		popad
//
//		push 0x005028D8 // 31
//		jmp ____NewDataFile_Hook_1_Return
//	}
//}







void MyMod()
{

	____Registry_Keys_Root = (char*)____malloc(sizeof("TA ReImagined"));
	____memcpy(____Registry_Keys_Root, (LPVOID)"TA ReImagined", sizeof("TA ReImagined"));

	____Units_Folder = (char*)____malloc(sizeof("ReIm_Units"));
	____memcpy(____Units_Folder, (LPVOID)"ReIm_Units", sizeof("ReIm_Units"));

	____Weapons_Folder = (char*)____malloc(sizeof("ReIm_Weapons"));
	____memcpy(____Weapons_Folder, (LPVOID)"ReIm_Weapons", sizeof("ReIm_Weapons"));

	____Weapons_Folder_TDFs = (char*)____malloc(sizeof("ReIm_Weapons\\*.tdf"));
	____memcpy(____Weapons_Folder_TDFs, (LPVOID)"ReIm_Weapons\\*.tdf", sizeof("ReIm_Weapons\\*.tdf"));

	____Models_Folder = (char*)____malloc(sizeof("ReIm_Models"));
	____memcpy(____Models_Folder, (LPVOID)"ReIm_Models", sizeof("ReIm_Models"));

	____Scripts_Folder = (char*)____malloc(sizeof("ReIm_Scripts"));
	____memcpy(____Scripts_Folder, (LPVOID)"ReIm_Scripts", sizeof("ReIm_Scripts"));

	____GameData_Folder = (char*)____malloc(sizeof("ReIm_GameData"));
	____memcpy(____GameData_Folder, (LPVOID)"ReIm_GameData", sizeof("ReIm_GameData"));

	____GameData2_Folder = (char*)____malloc(sizeof("ReIm_GameData\\translate.tdf"));
	____memcpy(____GameData2_Folder, (LPVOID)"ReIm_GameData\\translate.tdf", sizeof("ReIm_GameData\\translate.tdf"));

	____GUIs_Folder = (char*)____malloc(sizeof("ReIm_GUIs"));
	____memcpy(____GUIs_Folder, (LPVOID)"ReIm_GUIs", sizeof("ReIm_GUIs"));

	____Features_Folder = (char*)____malloc(sizeof("ReIm_Features"));
	____memcpy(____Features_Folder, (LPVOID)"ReIm_Features", sizeof("ReIm_Features"));

	____Anims_Folder = (char*)____malloc(sizeof("ReIm_Anims"));
	____memcpy(____Anims_Folder, (LPVOID)"ReIm_Anims", sizeof("ReIm_Anims"));

	____Sounds_Folder = (char*)____malloc(sizeof("ReIm_Sounds"));
	____memcpy(____Sounds_Folder, (LPVOID)"ReIm_Sounds", sizeof("ReIm_Sounds"));

	____Sounds2_Folder = (char*)____malloc(sizeof("ReIm_Sounds\\explode.wav"));
	____memcpy(____Sounds2_Folder, (LPVOID)"ReIm_Sounds\\explode.wav", sizeof("ReIm_Sounds\\explode.wav"));

	____Download_Folder = (char*)____malloc(sizeof("ReIm_Download"));
	____memcpy(____Download_Folder, (LPVOID)"ReIm_Download", sizeof("ReIm_Download"));

	____NewDataFile_Hook_1_Return = (LPVOID)0x0041D4E5;



	hpiFindFirst = (LPVOID(WINAPI*)(LPVOID, LPVOID, int, int))0x004BC4B0;
	hpiFindNext = (LPVOID(WINAPI*)(LPVOID, LPVOID))0x004BC640;
	hpiInsertToArray = (int(WINAPI*)(LPVOID, int))0x004BE0B0;
	hpiClose = (void(WINAPI*)(LPVOID))0x004BC8D0;
	hpiHandleArray = (void(WINAPI*)())0x004BE180;
	hpiCdToTAPath = (void(WINAPI*)())0x0049F540;
	hpiLoadAll = (void(WINAPI*)())0x004BE320;





	// hpis
	WriteJumpHook((LPVOID)0x0041D4C0, (LPVOID)____NewDataFile_Hook_1_HelperA);

	// units
	*((DWORD*)(0x0042AA25+1)) = (DWORD)____Units_Folder;
	*((DWORD*)(0x0042AB68+1)) = (DWORD)____Units_Folder;
	*((DWORD*)(0x0042ABDC+1)) = (DWORD)____Units_Folder;
	*((DWORD*)(0x0042D24A+1)) = (DWORD)____Units_Folder;
	*((DWORD*)(0x0042D6F1+1)) = (DWORD)____Units_Folder;
	*((DWORD*)(0x00436C7E+1)) = (DWORD)____Units_Folder;



	*((DWORD*)(0x004B68E8+1)) = (DWORD)____Registry_Keys_Root;

	//// Energy and Metal default starts
	//// must be 200/500/or increments of 500 post 500
	////*((DWORD*)(0X00449BB4+1)) = (DWORD)500;
	////*((DWORD*)(0x00430C1C+1)) = (DWORD)500;



	*((DWORD*)(0x0042A98B+1)) = (DWORD)____Weapons_Folder;
	*((DWORD*)(0x0042E39B+1)) = (DWORD)____Weapons_Folder;


	*((DWORD*)(0x0042A8EC+1)) = (DWORD)____Weapons_Folder_TDFs;
	*((DWORD*)(0x0042E350+1)) = (DWORD)____Weapons_Folder_TDFs;


	// this may break some maps that use TAFeatures213.ccx
	*((DWORD*)(0x0042A2D9+1)) = (DWORD)____Models_Folder;
	*((DWORD*)(0x0042D753+1)) = (DWORD)____Models_Folder;
	*((DWORD*)(0x0042ED0A+1)) = (DWORD)____Models_Folder;


	*((DWORD*)(0x0042A64F+1)) = (DWORD)____Scripts_Folder;
	*((DWORD*)(0x0042D284+1)) = (DWORD)____Scripts_Folder;
	*((DWORD*)(0x0042D8DF+1)) = (DWORD)____Scripts_Folder;




	*((DWORD*)(0x0042901E + 1)) = (DWORD)____GameData_Folder;
	*((DWORD*)(0x00429EB1 + 1)) = (DWORD)____GameData_Folder;
	*((DWORD*)(0x0042D301 + 1)) = (DWORD)____GameData_Folder;
	*((DWORD*)(0x0042D945 + 1)) = (DWORD)____GameData_Folder;
	*((DWORD*)(0x0042F5B7 + 1)) = (DWORD)____GameData_Folder;
	*((DWORD*)(0x0042F802 + 1)) = (DWORD)____GameData_Folder;
	*((DWORD*)(0x00431A81 + 1)) = (DWORD)____GameData_Folder;
	*((DWORD*)(0x00433150 + 1)) = (DWORD)____GameData_Folder;
	*((DWORD*)(0x00438340 + 1)) = (DWORD)____GameData_Folder;
	*((DWORD*)(0x0045F8FA + 1)) = (DWORD)____GameData_Folder;

	*((DWORD*)(0x0049EA2E + 1)) = (DWORD)____GameData2_Folder;



	*((DWORD*)(0x0041AD2C + 1)) = (DWORD)____GUIs_Folder;
	*((DWORD*)(0x0042A6FE + 1)) = (DWORD)____GUIs_Folder;
	*((DWORD*)(0x0042A752 + 1)) = (DWORD)____GUIs_Folder;
	*((DWORD*)(0x0042D82A + 1)) = (DWORD)____GUIs_Folder;
	*((DWORD*)(0x0042D888 + 1)) = (DWORD)____GUIs_Folder;
	*((DWORD*)(0x004914C2 + 1)) = (DWORD)____GUIs_Folder;

	// this will render TAFeatures2013 useless!
	*((DWORD*)(0x00422324 + 1)) = (DWORD)____Features_Folder;
	*((DWORD*)(0x00437183 + 1)) = (DWORD)____Features_Folder;


	*((DWORD*)(0x00422712 + 1)) = (DWORD)____Anims_Folder;
	*((DWORD*)(0x00429758 + 1)) = (DWORD)____Anims_Folder;
	*((DWORD*)(0x004914D9 + 1)) = (DWORD)____Anims_Folder;

	*((DWORD*)(0x0047F014 + 1)) = (DWORD)____Sounds_Folder;
	*((DWORD*)(0x0047FE6A + 1)) = (DWORD)____Sounds_Folder;

	*((DWORD*)(0x0045DC6F + 1)) = (DWORD)____Sounds2_Folder;


	*((DWORD*)(0x0042A7A4 + 1)) = (DWORD)____Download_Folder;
	*((DWORD*)(0x0042DD0E + 1)) = (DWORD)____Download_Folder;
	*((DWORD*)(0x0042DDB0 + 1)) = (DWORD)____Download_Folder;


	// EXE Hacks
	// Thanks Admiral_94!
	// Target Locking

	BYTE TargetLocking1[] = {
		0x0F, 0x84, 0x80, 0x01, 0x00, 0x00, 0x8B, 0x81, 0x12, 0x01, 0x00, 0x00, 0x66, 0x25, 0x20, 0x80,
		0x66, 0x3D, 0x20, 0x80, 0x0F, 0x85, 0x6C, 0x01, 0x00, 0x00, 0x33, 0xFF, 0x33, 0xDB, 0x89, 0x5C,
		0x24, 0x14, 0xC7, 0x44, 0x24, 0x18, 0x03, 0x00, 0x00, 0x00, 0x8B, 0x75, 0x39, 0x8A, 0x4C, 0x33,
		0x1F, 0x80, 0xE1, 0x12, 0x80, 0xF9, 0x12, 0x0F, 0x85, 0x32, 0x01, 0x00, 0x00, 0x8B, 0x54, 0x33,
		0x10, 0x8B, 0x8A, 0x12, 0x01, 0x00, 0x00, 0xF6, 0xC1, 0x01, 0x0F, 0x85, 0x1F, 0x01, 0x00, 0x00,
		0xF6, 0x44, 0x24, 0x24, 0x01, 0x75, 0x0C, 0xC1, 0xE9, 0x03, 0xF6, 0xC5, 0x80, 0x0F, 0x85, 0x0C,
		0x01, 0x00, 0x00, 0x57, 0x56, 0xE8, 0x06, 0x17, 0x08, 0x00, 0x85, 0xC0, 0x0F, 0x84, 0x9F, 0x00,
		0x00, 0x00, 0x57, 0x50, 0x56, 0x8B, 0xF0, 0xE8, 0x14, 0x21, 0x09, 0x00, 0x85, 0xC0, 0x8B, 0xC6,
		0x8B, 0x75, 0x39, 0x75, 0x07, 0x66, 0xC7, 0x44, 0x33, 0x04, 0x00, 0x00, 0x8B, 0x88, 0x96, 0x00,
		0x00, 0x00, 0x33, 0xD2, 0x8A, 0x91, 0x46, 0x01, 0x00, 0x00, 0x8B, 0x4D, 0x00, 0x80, 0xBC, 0x0A,
		0x08, 0x01, 0x00, 0x00, 0x00, 0x75, 0x5E, 0x66, 0x8B, 0x88, 0xA6, 0x00, 0x00, 0x00, 0x8B, 0xD6
	};

	//BYTE TargetLocking2[] = {
		///*0x0F, 0x85,*/ 0xA4, /*0xFE, 0xFF, 0xFF, 0xA1, 0xE8, 0x1D, 0x51, 0x00, 0x33, 0xC9, 0x8B, 0x74, 0x24*/
	//};


	____memcpy((LPVOID)0x00408A20, TargetLocking1, sizeof(TargetLocking1));
	*(BYTE*)(0x00408BA0+2) = 0xA4;




	*(BYTE*)(0x0041DD4A + 1) = 0x15;


	BYTE ScoreboardShowAll[] = {
		0x75, 0x0D, 0xE9, 0x63, 0x01, 0x00, 0x00, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90
	};

	____memcpy((LPVOID)0x0041DD52, ScoreboardShowAll, sizeof(ScoreboardShowAll));
}