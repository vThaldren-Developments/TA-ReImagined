#pragma once


#include "headers.h"
#include "patcher.h"



LPVOID ____MixingBuffers_Hook_1_Return;


__declspec(naked) void ____MixingBuffers_Hook_1()
{
	__asm
	{
		push 256 // 128 default, but lets try this
		mov edx, dword ptr ds:[0x00511DE8]
		mov ecx, [edx+0x10]
		jmp ____MixingBuffers_Hook_1_Return
	}
}





void SoundMixingBuffers()
{
	____MixingBuffers_Hook_1_Return = (LPVOID)0x0042FE7D;

	WriteJumpHook((LPVOID)0x0042FE4A, ____MixingBuffers_Hook_1);
}