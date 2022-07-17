#pragma once



#include "headers.h"
#include "builtin.h"
#include "defines.h"
#include "patcher.h"


BYTE* WeaponTypeDefinitions;


#pragma pack(1)

struct PacketFeatureDestroy
{
    BYTE PacketType;
    BYTE WeaponId; // old
    WORD xPos;
    WORD yPos;
    DWORD ExpandedWeaponId;
};


struct PacketWeaponProjectile
{
    BYTE PacketType;
    DWORD StartX;
    DWORD StartY;
    DWORD StartZ;
    DWORD EndX;
    DWORD EndY;
    DWORD EndZ;
    BYTE WeaponId; // old weapon id
    BYTE Interceptor;
    WORD Angle;
    WORD TrajectoryResult;
    WORD TargetUnitId;
    WORD AttackerUnitId;
    BYTE WeaponIndex;
    DWORD ExpandedWeaponId;
};


struct PacketAreaOfEffectDamage
{
    BYTE PacketType;
    DWORD xPos;
    DWORD yPos;
    DWORD zPos;
    BYTE WeaponId; // old weapon id
    DWORD ExpandedWeaponId;
};



struct PositionDWORD
{
    DWORD x;
    DWORD y;
    DWORD z;
};

#pragma pack(4)


PacketFeatureDestroy* SendFeaturePacketBuffer1;
PacketWeaponProjectile* SendFireWeaponPacketBuffer1;
PacketAreaOfEffectDamage* SendAreaOfEffectDamageBuffer1;


// asm x86 memory
DWORD Stor_1;
DWORD Stor_2;
DWORD Stor_3;
DWORD Stor_4;
DWORD Stor_5;
DWORD Stor_6;
DWORD Stor_7;
DWORD Stor_8;

WORD wStor_1;
WORD wStor_2;

BYTE bStor_1;
BYTE bStor_2;


// ____ReceiveWeaponFired_Hook_1 Variables
DWORD ExpandedWeaponId;
LPVOID CorrespondingWeaponIdOffset;



// asm x86 returns
LPVOID ____LoadAllWeapons_Hook_1_Return;// = (LPVOID)0x0042E345;
LPVOID ____LoadWeaponFromTDF_Hook_1_Return;// = (LPVOID)0x0042E490;
LPVOID ____LoadWeaponFromTDF_Hook_2_Return;// = (LPVOID)0x0042ECF9;
LPVOID ____LoadUnitInfoFromFBI_Hook_1_Return;// = (LPVOID)0x0042CDEE;
LPVOID ____WeaponUnknown_Hook_1_Return;// = (LPVOID)0x00409555;
LPVOID ____WeaponUnknown_Hook_2_Return;// = (LPVOID)0x00409682;
LPVOID ____WeaponUnknown_Hook_3_Return;// = (LPVOID)0x00409948;
LPVOID ____StartWeaponsScripts_Hook_1_Return;// = (LPVOID)0x0049E0CE;


LPVOID ____PacketDispatcher_Hook_1_Return;// = (LPVOID)0x0045548B;
LPVOID ____SendFireWeapon_Hook_1_Return;// = (LPVOID)0x00499B90;

//////////LPVOID ____PacketDispatcher_Hook_2_Return = (LPVOID);
////////LPVOID ____ReceiveWeaponFired_Hook_1_Return = (LPVOID)0x0049D2AF;
LPVOID ____FeaturesTakeWeaponDamage_Hook_1_Return;// = (LPVOID)0x00424569;
LPVOID ____FeaturesTakeWeaponDamage_Hook_2_Return;// = (LPVOID)0x00424591;
LPVOID ____FeaturesTakeWeaponDamage_Hook_3_Return;// = (LPVOID)0x00424632;
LPVOID ____FeaturesTakeWeaponDamage_Hook_4_Return;// = (LPVOID)0x00424664;
LPVOID ____FeaturesTakeWeaponDamage_Hook_5_Return;// = (LPVOID)0x00424694;

LPVOID ____AreaOfEffectDamage_Hook_1_Return;// = (LPVOID)0x0049A7EE;
LPVOID ____ReceiveAreaOfEffectDamage_Hook_1_Return;// = (LPVOID)0x0049AFD4;

LPVOID ____FireCallback1_Hook_1_Return;// = (LPVOID)0x0049D85E;
LPVOID ____FireCallback2_Hook_1_Return;// = (LPVOID)0x0049DD2C;
LPVOID ____FireCallback3_Hook_1_Return;// = (LPVOID)0x0049DEF3;
LPVOID ____FireCallback4_Hook_1_Return;// = (LPVOID)0x0049DB52;

LPVOID ____FireMapWeapon_Hook_1_Return;// = (LPVOID)0x0049DFFB;



LPVOID ____ReceiveWeaponFired_Hook_1_Return;// = (LPVOID)0x0049D2AD;
LPVOID ____ReceiveWeaponFired_Hook_1_Return_Jmp1;
LPVOID ____ReceiveWeaponFired_Hook_1_Return_JNZ;// = (LPVOID)0x0049D2AF;
LPVOID ____ReceiveWeaponFired_Hook_1_Return_JZ;// = (LPVOID)0x0049D329;


LPVOID ____SaveGame_SaveUnit_Hook_1_Return;// = (LPVOID)0x00487A22;
LPVOID ____LoadGame_LoadUnit_Hook_1_Return;// = (LPVOID)0x0048762E;



LPVOID ____PacketSize_PacketFeatureExplode_Hook_1_Return;// = (LPVOID)0x0045213B;


LPVOID ____TotalA_strcmpi;// = (LPVOID)0x004F8A70;
LPVOID ____TotalA_HAPIBroadcastMessage;// = (LPVOID)0x00451DF0;
LPVOID ____TotalA_GetLocalPlayerDPID;// = (LPVOID)0x0049DFF0;


LPVOID ____TotalA_jmpToCode_42ECF9;// = (LPVOID)0x0042ECF9;
LPVOID ____TotalA_jmpToCode_42F340;// = (LPVOID)0x0042F340;
LPVOID ____TotalA_jmpToCode_42EDA1;// = (LPVOID)0x0042EDA1;
LPVOID ____TotalA_jmpToCode_42ED7B;// = (LPVOID)0x0042ED7B;

LPVOID ____TotalA_jumpToCode_WeaponId253_4554D4;// = (LPVOID)0x004554D4;
LPVOID ____TotalA_jumpToCode_WeaponId254_4554BA;// = (LPVOID)0x004554BA;
LPVOID ____TotalA_jumpToCode_WeaponId255_4554A0;// = (LPVOID)0x004554A0;

LPVOID ____TotalA_jmpToCode_InCode_49D329;// = (LPVOID)0x0049D329;
LPVOID ____TotalA_jmpToCode_InCode_42469F;// = (LPVOID)0x0042469F;


LPVOID ____FeaturesDestroy253;// = (LPVOID)0x00423550;
LPVOID ____FeaturesDestroy254;
LPVOID ____FeaturesDestroy255;
LPVOID ____FeaturesDestroyDefault;

LPVOID ____GetGridPlotPos;



//LPVOID ____FeaturesTakeWeaponDamage_Hook_0_1;
LPVOID ____FeaturesTakeWeaponDamage_Hook_0_1_Return;



// the whole glory of missing something lmfao

LPVOID ____StartTreeBurn_Hook_1_Return;// = (LPVOID)0x00423531;
LPVOID ____ReclaimFinished_Hook_1_Return;
LPVOID ____Order_Resurrect_Hook_1_Return;


// prototypes
void AllocateNewArray();
void ApplyWeaponIdsPatches();
void WeaponIds();
void StaticInitializers_WeaponIds();




__declspec(naked) void ____LoadAllWeapons_Hook_1()
{
    __asm
    {
        push esi
        push edi

        pushad
        pushfd

        call AllocateNewArray

        popfd
        popad

        jmp ____LoadAllWeapons_Hook_1_Return
    }
}





// asm x86 patches
LPVOID WINAPI ____LoadWeaponFromTDF_Hook_1_HelperA(DWORD Id)
{
	return (LPVOID)((DWORD)WeaponTypeDefinitions + (Id * WEAPON_ID_STRUCT_SIZE));
}


__declspec(naked) void ____LoadWeaponFromTDF_Hook_1()
{
	__asm
	{
		pushad
		pushfd

		push eax
		call ____LoadWeaponFromTDF_Hook_1_HelperA
		mov [Stor_1], eax

		popfd
		popad

		mov ebp, [Stor_1]
        xor eax, eax

		push 0x005119B8
		push 0x40
		push 0x00503884

		// Not Needed as ebp is set
		//mov [Stor_1], ebp
		//add ebp, 0x20
		//push ebp
		//mov ebp, [Stor_1]

		jmp ____LoadWeaponFromTDF_Hook_1_Return

		//0042e46e 8d 0c 40        LEA        ECX, [EAX + EAX * 0x2]
		//0042e471 c1 e1 03        SHL        ECX, 0x3
		//0042e474 2b c8           SUB        ECX, EAX
		//0042e476 03 d0           ADD        EDX, EAX
		//0042e478 33 c0           XOR        EAX, EAX
		//0042e47a 68 b8 19        PUSH       lpData_005119b8 = 00000000
		//         51 00
		//0042e47f 8d 0c 49        LEA        ECX, [ECX + ECX * 0x2]
		//0042e482 6a 40           PUSH       0x40
		//0042e484 68 84 38        PUSH       DAT_00503884 = 6Eh    n
		//         50 00
		//0042e489 8d ac 8a        LEA        EBP, [EDX + ECX * 0x4 + 0x2cf3]
		//         f3 2c 00 00
	}
}











__declspec(naked) void ____LoadWeaponFromTDF_Hook_2()
{
	__asm
	{
		mov eax, [ebp+0x115]
        mov dword ptr [esp+0x18], 0
        test eax, eax
        mov [esp+0x10], eax
        jbe jmpToCode_42ECF9

    innerloop:

        pushad
        pushfd

        mov esi, [esp+0x24+0x18]
        push esi
        mov [Stor_2], esi
        
        call ____LoadWeaponFromTDF_Hook_1_HelperA
        mov [Stor_1], eax

        popfd
        popad
        
        mov eax, [Stor_1]
        mov esi, [Stor_2]

        add eax, 0x80
        lea ecx, [esp+0x40]
        push eax
        push ecx
        call [____TotalA_strcmpi]
        add esp, 8
        test eax, eax
        jz jmpToCode_42F340
        mov eax, [esp+0x18]
        mov ecx, [esp+0x10]
        inc eax
        cmp eax, ecx
        mov [esp+0x18], eax
        jb innerloop


		jmp ____LoadWeaponFromTDF_Hook_2_Return


    jmpToCode_42ECF9:
        jmp ____TotalA_jmpToCode_42ECF9
    jmpToCode_42F340:
        jmp ____TotalA_jmpToCode_42F340
        
        



        //0042ecaa 76 4d           JBE        LAB_0042ecf9
        //LAB_0042ecac                                    XREF[1]:     0042ecf7(j)
        //0042ecac 8b 74 24 18     MOV        ESI, dword ptr[ESP + local_328]
        //0042ecb0 8b 15 e8        MOV        EDX, dword ptr[TAMainStruct] = ? ?
        //         1d 51 00
        //0042ecb6 8b c6           MOV        EAX, ESI
        //0042ecb8 25 ff 00        AND        EAX, 0xff
        //         00 00
        //0042ecbd 03 d0           ADD        EDX, EAX
        //0042ecbf 8d 0c 40        LEA        ECX, [EAX + EAX * 0x2]
        //0042ecc2 c1 e1 03        SHL        ECX, 0x3
        //0042ecc5 2b c8           SUB        ECX, EAX
        //0042ecc7 8d 0c 49        LEA        ECX, [ECX + ECX * 0x2]
        //0042ecca 8d 84 8a        LEA        EAX, [EDX + ECX * 0x4 + 0x2d73]
        //         73 2d 00 00
        //0042ecd1 8d 4c 24 40     LEA        ECX = > local_300, [ESP + 0x40]
        //0042ecd5 50              PUSH       EAX
        //0042ecd6 51              PUSH       ECX
        //0042ecd7 e8 94 9d        CALL       FUN_004f8a70                                     uint FUN_004f8a70(byte * param_1
        //         0c 00
        //0042ecdc 83 c4 08        ADD        ESP, 0x8
        //0042ecdf 85 c0           TEST       EAX, EAX
        //0042ece1 0f 84 59        JZ         LAB_0042f340
        //         06 00 00
        //0042ece7 8a 44 24 18     MOV        AL, byte ptr[ESP + local_328]
        //0042eceb 8a 4c 24 10     MOV        CL, byte ptr[ESP + local_330]
        //0042ecef fe c0           INC        AL
        //0042ecf1 3a c1           CMP        AL, CL
        //0042ecf3 88 44 24 18     MOV        byte ptr[ESP + local_328], AL
        //0042ecf7 72 b3           JC         LAB_0042ecac
        //LAB_0042ecf9                                    XREF[1]:     0042ecaa(j)
        //0042ecf9 8d 54 24 40     LEA        EDX = > local_300, [ESP + 0x40]
        //0042ecfd 68 f0 36        PUSH       PTR_BYTE_005036f0 = 004f4433
        //         50 00
        //0042ed02 52              PUSH       EDX
        //0042ed03 8d 84 24        LEA        EAX = > local_100, [ESP + 0x248]
        //         48 02 00 00
        //0042ed0a 68 e4 36        PUSH       s_objects3d_005036e4 = "objects3d"
        //         50 00
        //0042ed0f 50              PUSH       EAX
        //0042ed10 e8 db a3        CALL       FUN_004290f0                                     uint * FUN_004290f0(uint * param
        //         ff ff
        //0042ed15 8d 8c 24        LEA        ECX = > local_100, [ESP + 0x240]
        //         40 02 00 00
        //0042ed1c 51              PUSH       ECX
        //0042ed1d e8 3e c8        CALL       FUN_004cb560                                     int** FUN_004cb560(uint * para
        //         09 00
        //0042ed22 8b f0           MOV        ESI, EAX
        //0042ed24 85 f6           TEST       ESI, ESI
        //0042ed26 75 0d           JNZ        LAB_0042ed35
        //0042ed28 8d 94 24        LEA        EDX = > local_100, [ESP + 0x240]
        //         40 02 00 00
        //0042ed2f 52              PUSH       EDX
        //0042ed30 e8 5b 75        CALL       FUN_004b6290                                     undefined FUN_004b6290(LPCSTR pa
        //         08 00
        //LAB_0042ed35                                    XREF[1]:     0042ed26(j)
        //0042ed35 56              PUSH       ESI
        //0042ed36 e8 55 c8        CALL       FUN_004cb590                                     undefined FUN_004cb590(int param
        //         09 00
        //0042ed3b 8d 44 24 40     LEA        EAX = > local_300, [ESP + 0x40]
        //0042ed3f 50              PUSH       EAX
        //0042ed40 56              PUSH       ESI
        //0042ed41 e8 fa b3        CALL       FUN_0042a140                                     undefined FUN_0042a140(ushort *
        //         ff ff
        //0042ed46 8b 15 e8        MOV        EDX, dword ptr[TAMainStruct] = ? ?
        //         1d 51 00
        //0042ed4c 8d 7c 24 40     LEA        EDI = > local_300, [ESP + 0x40]
        //0042ed50 8b 44 24 10     MOV        EAX, dword ptr[ESP + local_330]
        //0042ed54 25 ff 00        AND        EAX, 0xff
        //         00 00
        //0042ed59 8d 0c 40        LEA        ECX, [EAX + EAX * 0x2]
        //0042ed5c c1 e1 03        SHL        ECX, 0x3
        //0042ed5f 2b c8           SUB        ECX, EAX
        //0042ed61 8d 0c 49        LEA        ECX, [ECX + ECX * 0x2]
        //0042ed64 8d 04 88        LEA        EAX, [EAX + ECX * 0x4]
        //0042ed67 89 b4 02        MOV        dword ptr[EDX + EAX * 0x1 + 0x2d67], ESI
        //         67 2d 00 00
        //0042ed6e 8b 0d e8        MOV        ECX, dword ptr[TAMainStruct] = ? ?
        //         1d 51 00
        //0042ed74 8d 94 01        LEA        EDX, [ECX + EAX * 0x1 + 0x2d73]
        //         73 2d 00 00
        //0042ed7b 83 c9 ff        OR         ECX, 0xffffffff
        //0042ed7e 33 c0           XOR        EAX, EAX
        //0042ed80 f2 ae           SCASB.RE   ES : EDI
        //0042ed82 f7 d1           NOT        ECX
        //0042ed84 2b f9           SUB        EDI, ECX
        //0042ed86 8b c1           MOV        EAX, ECX
        //0042ed88 8b f7           MOV        ESI, EDI
        //0042ed8a 8b fa           MOV        EDI, EDX
        //0042ed8c c1 e9 02        SHR        ECX, 0x2
        //0042ed8f f3 a5           MOVSD.REP  ES : EDI, ESI
        //0042ed91 8b c8           MOV        ECX, EAX
        //0042ed93 83 e1 03        AND        ECX, 0x3
        //0042ed96 f3 a4           MOVSB.REP  ES : EDI, ESI
        //0042ed98 eb 07           JMP        LAB_0042eda1
	}
}





__declspec(naked) void ____LoadWeaponFromTDF_Hook_3()
{
    __asm
    {
        pushad
        pushfd

        mov eax, [esp+0x24+0x10]
        push eax
        call ____LoadWeaponFromTDF_Hook_1_HelperA
        mov [Stor_1], eax

        popfd
        popad

        mov eax, [Stor_1]
        add eax, 0x80
        mov byte ptr [eax], 0x00
        //mov esi, [esp+0x18] // extra, probs just use esi, actually xD ???
        
        pushad
        pushfd

        mov esi, [esp+0x24+0x18]
        push esi
        call ____LoadWeaponFromTDF_Hook_1_HelperA
        mov [Stor_2], eax

        popfd
        popad

        mov eax, [Stor_1]
        mov esi, [Stor_2]
        add eax, 0x74
        add esi, 0x74
        mov ecx, [esi]
        mov [eax], ecx // should work for ModelDebris?
        jmp ____TotalA_jmpToCode_42EDA1



        //                             LAB_0042f340                                    XREF[1]:     0042ece1(j)  
        //0042f340 8b 44 24 10     MOV        EAX,dword ptr [ESP + local_330]
        //0042f344 81 e6 ff        AND        ESI,0xff
        //         00 00 00
        //0042f34a 25 ff 00        AND        EAX,0xff
        //         00 00
        //0042f34f 8d 0c 40        LEA        ECX,[EAX + EAX*0x2]
        //0042f352 c1 e1 03        SHL        ECX,0x3
        //0042f355 2b c8           SUB        ECX,EAX
        //0042f357 8d 14 49        LEA        EDX,[ECX + ECX*0x2]
        //0042f35a 8b ce           MOV        ECX,ESI
        //0042f35c 8d 14 90        LEA        EDX,[EAX + EDX*0x4]
        //0042f35f a1 e8 1d        MOV        EAX,[TAMainStruct]                               = ??
        //         51 00
        //0042f364 c6 84 10        MOV        byte ptr [EAX + EDX*0x1 + 0x2d73],0x0
        //         73 2d 00 
        //         00 00
        //0042f36c 8d 04 49        LEA        EAX,[ECX + ECX*0x2]
        //0042f36f c1 e0 03        SHL        EAX,0x3
        //0042f372 2b c1           SUB        EAX,ECX
        //0042f374 8d 34 40        LEA        ESI,[EAX + EAX*0x2]
        //0042f377 a1 e8 1d        MOV        EAX,[TAMainStruct]                               = ??
        //         51 00
        //0042f37c 8b f8           MOV        EDI,EAX
        //0042f37e 03 f9           ADD        EDI,ECX
        //0042f380 8b 8c b7        MOV        ECX,dword ptr [EDI + ESI*0x4 + 0x2d67]
        //         67 2d 00 00
        //0042f387 89 8c 10        MOV        dword ptr [EAX + EDX*0x1 + 0x2d67],ECX
        //         67 2d 00 00
        //0042f38e e9 0e fa        JMP        LAB_0042eda1
        //         ff ff

    }
}




__declspec(naked) void ____LoadWeaponFromTDF_Hook_4()
{
    __asm
    {
        // dont forget ModelName!

        pushad
        pushfd

        // 0x24 from pushad and pushfd
        mov eax, [esp+0x24+0x10]
        push eax
        call ____LoadWeaponFromTDF_Hook_1_HelperA
        mov [Stor_1], eax

        popfd
        popad



        mov eax, [Stor_1]
        add eax, 0x74
        mov [eax], esi // ModelDebris

        // strcpy
        mov edx, [Stor_1]
        add edx, 0x80

        lea edi, [esp+0x40]

        jmp ____TotalA_jmpToCode_42ED7B



        //0042ed46 8b 15 e8        MOV        EDX,dword ptr [TAMainStruct]                     = ??
        //         1d 51 00
        //0042ed4c 8d 7c 24 40     LEA        EDI=>local_300,[ESP + 0x40]
        //0042ed50 8b 44 24 10     MOV        EAX,dword ptr [ESP + local_330]
        //0042ed54 25 ff 00        AND        EAX,0xff
        //         00 00
        //0042ed59 8d 0c 40        LEA        ECX,[EAX + EAX*0x2]
        //0042ed5c c1 e1 03        SHL        ECX,0x3
        //0042ed5f 2b c8           SUB        ECX,EAX
        //0042ed61 8d 0c 49        LEA        ECX,[ECX + ECX*0x2]
        //0042ed64 8d 04 88        LEA        EAX,[EAX + ECX*0x4]
        //0042ed67 89 b4 02        MOV        dword ptr [EDX + EAX*0x1 + 0x2d67],ESI
        //         67 2d 00 00
        //0042ed6e 8b 0d e8        MOV        ECX,dword ptr [TAMainStruct]                     = ??
        //         1d 51 00
        //0042ed74 8d 94 01        LEA        EDX,[ECX + EAX*0x1 + 0x2d73]
        //         73 2d 00 00
        //0042ed7b 83 c9 ff        OR         ECX,0xffffffff
        //0042ed7e 33 c0           XOR        EAX,EAX
        //0042ed80 f2 ae           SCASB.RE   ES:EDI
        //0042ed82 f7 d1           NOT        ECX
        //0042ed84 2b f9           SUB        EDI,ECX
        //0042ed86 8b c1           MOV        EAX,ECX
        //0042ed88 8b f7           MOV        ESI,EDI
        //0042ed8a 8b fa           MOV        EDI,EDX
        //0042ed8c c1 e9 02        SHR        ECX,0x2
        //0042ed8f f3 a5           MOVSD.REP  ES:EDI,ESI
        //0042ed91 8b c8           MOV        ECX,EAX
        //0042ed93 83 e1 03        AND        ECX,0x3
        //0042ed96 f3 a4           MOVSB.REP  ES:EDI,ESI
        //0042ed98 eb 07           JMP        LAB_0042eda1

    }
}




__declspec(naked) void ____LoadUnitInfoFromFBI_Hook_1()
{
    __asm
    {
        // not needed, just get the ptr to new weapontypedef array
        //pushad
        //pushfd

        //push 0
        //push 



        //popfd
        //popad





        push 0x80
        lea ecx, [esp + 0xb0]
        push 0x00503810
        push ecx
        mov ecx, [esp + 0x24]

        // esi
        mov esi, WeaponTypeDefinitions


        jmp ____LoadUnitInfoFromFBI_Hook_1_Return


        //0042cdcd a1 e8 1d        MOV        EAX,[TAMainStruct]                               = ??
        //         51 00
        //0042cdd2 68 80 00        PUSH       0x80
        //         00 00
        //0042cdd7 8d 8c 24        LEA        ECX=>local_480,[ESP + 0xb0]
        //         b0 00 00 00
        //0042cdde 68 10 38        PUSH       s_weapon1_00503810                               = "weapon1"
        //         50 00
        //0042cde3 51              PUSH       ECX
        //0042cde4 8b 4c 24 24     MOV        ECX,dword ptr [ESP + local_514]
        //0042cde8 8d b0 f3        LEA        ESI,[EAX + 0x2cf3]
        //         2c 00 00

    }
}





/*__declspec(naked)*/ char* WINAPI ____WeaponNameToWeaponTypeDefinition_Replace(char* WeaponName)
{
    if (!WeaponName || !____strlen(WeaponName))
        return (char*)0;

    for (SIZE_T off = 0; off < MAX_NUMBER_OF_WEAPONS * WEAPON_ID_STRUCT_SIZE; off += WEAPON_ID_STRUCT_SIZE)
    {
        if (!____strcmpi(((const char*)((DWORD)WeaponTypeDefinitions + off)), WeaponName))
        {
            return ((char*)((DWORD)WeaponTypeDefinitions + off));
        }
    }

    return (char*)0;

    //__asm
    //{
        //push ebx






        //LAB_0049e5cb                                    XREF[1]:     0049e5f1(j)  
        //0049e5cb a1 e8 1d        MOV        EAX,[TAMainStruct]                               = ??
        //         51 00
        //0049e5d0 53              PUSH       EBX
        //0049e5d1 8d bc 30        LEA        EDI,[EAX + ESI*0x1 + 0x2cf3]
        //         f3 2c 00 00
        //0049e5d8 57              PUSH       EDI
        //0049e5d9 e8 92 a4        CALL       !____strcmpi                                     uint !____strcmpi(byte * param_1
        //         05 00
        //0049e5de 83 c4 08        ADD        ESP,0x8
        //0049e5e1 85 c0           TEST       EAX,EAX
        //0049e5e3 74 16           JZ         LAB_0049e5fb
        //0049e5e5 81 c6 15        ADD        ESI,0x115
        //         01 00 00
        //0049e5eb 81 fe 00        CMP        ESI,0x11500
        //         15 01 00
        //0049e5f1 7c d8           JL         LAB_0049e5cb

    //}
}





__declspec(naked) void ____WeaponUnknown1_Hook_1()
{
    __asm
    {
        mov eax, [esi+0x115]
        test eax, eax
        jmp ____WeaponUnknown_Hook_1_Return
    }
}

__declspec(naked) void ____WeaponUnknown2_Hook_1()
{
    __asm
    {
        mov eax, [esi + 0x115]
        test eax, eax
        jmp ____WeaponUnknown_Hook_2_Return
    }
}

__declspec(naked) void ____WeaponUnknown3_Hook_1()
{
    __asm
    {
        mov eax, [esi + 0x115]
        test eax, eax
        jmp ____WeaponUnknown_Hook_3_Return
    }
}






__declspec(naked) void ____StartWeaponsScripts_Hook_1()
{
    __asm
    {
        mov ebx, [ecx+0x115]
        mov byte ptr [esi-0x1], 0
        test ebx, ebx

        jmp ____StartWeaponsScripts_Hook_1_Return
    }
}














__declspec(naked) void ____PacketDispatcher_Hook_1()
{
    __asm
    {
        mov edi, [esp+0x10]
        //inc edi
        mov [Stor_2], edi // feature destroy packet
        mov eax, [edi+6] // weapon id
        mov [Stor_1], eax
    }

    if (Stor_1 == 253) // weapon id
    {
        __asm
        {
            xor eax, eax
            xor ecx, ecx
            mov edi, [Stor_2]
            mov ax, [edi + 0x4]
            mov cx, [edi + 0x2]
            push 0
            push eax
            push ecx
            call ____FeaturesDestroy253
        }
    }
    else if (Stor_1 == 254)
    {
        __asm
        {
            xor ecx, ecx
            xor edx, edx
            mov edi, [Stor_2]
            mov cx, [edi + 0x4]
            mov dx, [edi + 0x2]
            push 1
            push ecx
            push edx
            call ____FeaturesDestroy254
        }
    }
    else if (Stor_1 == 255)
    {
        __asm
        {
            xor eax, eax
            xor ecx, ecx
            mov edi, [Stor_2]
            mov ax, [edi + 0x4]
            mov cx, [edi + 0x2]
            push 1
            push eax
            push ecx
            call ____FeaturesDestroy255
        }
    }
    else
    {
        __asm
        {
            xor edx, edx
            xor esi, esi
            mov edi, [Stor_2]
            mov dx, [edi + 0x4]
            mov si, [edi + 0x2]
            mov eax, [Stor_1]
            push eax
            call ____LoadWeaponFromTDF_Hook_1_HelperA // ------------------------------------------------------------------------------
            push eax // weapon ptr
            push edx
            push esi
            push edx
            push esi
            call ____GetGridPlotPos
            push eax
            call ____FeaturesDestroyDefault
        }
    }

    __asm
    {
        mov eax, 0x00455F50 // lazy atm - pls fix!
        jmp eax
    }


    //__asm
    //{
        //mov ecx, [edi+/* New ID Offset */0x06] // adjust packet send ---------- not done yet!!
        //mov eax, ecx
        //sub eax, 253
        //jz ____TotalA_jumpToCode_WeaponId253
        //dec eax
        //jz ____TotalA_jumpToCode_WeaponId254
        //dec eax
        //jz ____TotalA_jumpToCode_WeaponId255

        //// eax is trashed after in a GetGridPosPlot call

        //xor edx, edx
        //mov dx, [edi+0x4]
        //xor esi, esi
        //mov si, [edi+0x2]

        //pushad
        //pushfd

        //push ecx
        //call ____LoadWeaponFromTDF_Hook_1_HelperA
        //mov [Stor_1], eax

        //popfd
        //popad

        //mov ecx, [Stor_1]


        //// rewriting chunk instead

        //jmp ____PacketDispatcher_Hook_1_Return

        //____TotalA_jumpToCode_WeaponId253:
        //jmp ____TotalA_jumpToCode_WeaponId253_4554D4

        //____TotalA_jumpToCode_WeaponId254:
        //jmp ____TotalA_jumpToCode_WeaponId254_4554BA

        //____TotalA_jumpToCode_WeaponId255:
        //jmp ____TotalA_jumpToCode_WeaponId255_4554A0

    //}
}



// rewrite chunk instead
//__declspec(naked) void ____PacketDispatcher_Hook_2()
//{
//    __asm
//    {
//        pushad
//        pushfd
//
//
//
//        popfd
//        popad
//
//
//
//        jmp ____PacketDispatcher_Hook_2_Return
//    }
//}





//////////////__declspec(naked) void ____ReceiveWeaponFired_Hook_1()
//////////////{
//////////////    __asm
//////////////    {
//////////////        mov edx, [eax+/* updated receive weapon fired packet offset */0x24] // weapon id
//////////////        push esi
//////////////        push edi
//////////////
//////////////
//////////////
//////////////        pushad
//////////////        pushfd
//////////////
//////////////        push edx
//////////////        call ____LoadWeaponFromTDF_Hook_1_HelperA
//////////////        mov [Stor_1], eax
//////////////
//////////////        //push edx
//////////////        //call ____LoadWeaponFromTDF_Hook_1_HelperA
//////////////        //mov [Stor_2], eax
//////////////
//////////////        popfd
//////////////        popad
//////////////
//////////////        mov ebp, [Stor_1] // weapontypedef ptr
//////////////        //mov edx, [Stor_2] // weapontypedef ptr
//////////////        mov [esp+0x1C], ebp // var stack weapontypedef ptr for rest of function
//////////////
//////////////        add ebp, 0x111
//////////////        mov edx, [ebp]
//////////////        and edx, 0x20
//////////////        shr edx, 5
//////////////        test dl, 1
//////////////
//////////////
//////////////        jz ____TotalA_jmpToCode_49D329
//////////////
//////////////        jmp ____ReceiveWeaponFired_Hook_1_Return
//////////////
//////////////        ____TotalA_jmpToCode_49D329:
//////////////        jmp ____TotalA_jmpToCode_InCode_49D329
//////////////
//////////////
//////////////
//////////////
//////////////    }
//////////////}
//////////////
//////////////
//////////////
//////////////
//////////////





void WINAPI ____FeaturesTakeWeaponDamage_Hook_1_HelperA()
{
    if (SendFeaturePacketBuffer1)
    {
        ____free(SendFeaturePacketBuffer1);
    }

    SendFeaturePacketBuffer1 = (PacketFeatureDestroy*)____malloc(sizeof(PacketFeatureDestroy));
    ____memset(SendFeaturePacketBuffer1, 0, sizeof(PacketFeatureDestroy));
}








//DWORD FeaturesPacketInited;




__declspec(naked) void ____FeaturesTakeWeaponDamage_Hook_0_1() // 0x004244B0 // ret 0x004244B6
{
    __asm
    {
        mov [Stor_1], eax
		mov [Stor_2], edx
		mov [Stor_3], ecx
		mov [Stor_4], ebx
		mov [Stor_5], esi
		mov [Stor_6], edi
		mov [Stor_7], ebp

        call ____FeaturesTakeWeaponDamage_Hook_1_HelperA

        mov eax, [Stor_1]
        mov edx, [Stor_2]
        mov ecx, [Stor_3]
        mov ebx, [Stor_4]
        mov esi, [Stor_5]
        mov edi, [Stor_6]
        mov ebp, [Stor_7]

        mov ecx, dword ptr ds:[0x511DE8]
        jmp ____FeaturesTakeWeaponDamage_Hook_0_1_Return
    }
}








__declspec(naked) void ____FeaturesTakeWeaponDamage_Hook_1()
{
    __asm
    {
        //pushad
        //pushfd

        //call ____FeaturesTakeWeaponDamage_Hook_1_HelperA
        //mov dword ptr [FeaturesPacketInited], 1

        //popfd
        //popad


        mov eax, [esp+0x28]
        mov eax, [eax+0x115]
        mov [Stor_1], eax

        
        mov ax, [esp+0x20] // eax is trashed after anyway
        mov [wStor_1], ax

        mov ax, [esp+0x24] // stack adjusted
        mov [wStor_2], ax

        mov [Stor_8], eax
		mov [Stor_2], edx
		mov [Stor_3], ecx
		mov [Stor_4], ebx
		mov [Stor_5], esi
		mov [Stor_6], edi
		mov [Stor_7], ebp
    }

    SendFeaturePacketBuffer1->PacketType = 15; // Packet Type:  0xF  (15)
    SendFeaturePacketBuffer1->ExpandedWeaponId = Stor_1;
    SendFeaturePacketBuffer1->xPos = wStor_1;
    SendFeaturePacketBuffer1->yPos = wStor_2;


        //mov [Stor_1], edi
        //mov edi, [SendFeaturePacketBuffer1] // ptr

        //mov byte ptr [edi+0x0], 15 // packet type
        //mov edx, [esp+0x28] // weapontypedef ptr
        //mov eax, [edx+0x115] // new weapon id
        //mov dword ptr [edi+0x6], eax // buffer new weapon id
        //mov cx, [esp+0x20]
        //push 10 // 0xA  new packet size
        //mov dx, [esp+0x20]
        //push edi // packet buffer start ptr
        //mov [edi+0x2], cx
        //mov [edi+0x4], dx

    __asm
    {
        mov eax, [Stor_8]
        mov edx, [Stor_2]
        mov ecx, [Stor_3]
        mov ebx, [Stor_4]
        mov esi, [Stor_5]
        mov edi, [Stor_6]
        mov ebp, [Stor_7]

        push 6 + 4 // new packet size

        mov eax, [SendFeaturePacketBuffer1] // buffer ptr
        push eax

        jmp ____FeaturesTakeWeaponDamage_Hook_1_Return
    }
}





__declspec(naked) void ____FeaturesTakeWeaponDamage_Hook_2()
{

        __asm
        {
            //test dword ptr [FeaturesPacketInited], 0
            //jz skip
            mov [Stor_1], edi
            mov edi, [SendFeaturePacketBuffer1]
            mov dword ptr [edi+0x6], 252
            mov edi, [Stor_1]
            //skip:
            jmp ____FeaturesTakeWeaponDamage_Hook_2_Return
    }
}

__declspec(naked) void ____FeaturesTakeWeaponDamage_Hook_3()
{

        __asm
        {
            //test dword ptr [FeaturesPacketInited], 0
            //jz skip
            mov [Stor_1], edi
            mov edi, [SendFeaturePacketBuffer1]
            mov dword ptr [edi+0x6], 253
            mov edi, [Stor_1]

            //skip:
            jmp ____FeaturesTakeWeaponDamage_Hook_3_Return
    }
}

__declspec(naked) void ____FeaturesTakeWeaponDamage_Hook_4()
{

        __asm
        {
            //pushad
            //pushfd
            //test dword ptr [FeaturesPacketInited], 0
            //jz skip
            mov [Stor_1], edi
            mov edi, [SendFeaturePacketBuffer1]
            mov dword ptr [edi+0x6], 253
            mov edi, [Stor_1]
            //skip:
            //popfd
            //popad
            jmp ____FeaturesTakeWeaponDamage_Hook_4_Return
    }
}


BOOL WINAPI ____FeaturesTakeWeaponDamage_Hook_5_HelperA(DWORD Id)
{
    if (Id > 252 && Id < 256)
    {
        return true;
    }

    return false;
}




// should be done
__declspec(naked) void ____FeaturesTakeWeaponDamage_Hook_5()
{
    __asm
    {
        //pushad
        //pushfd

        //call ____FeaturesTakeWeaponDamage_Hook_1_HelperA

        //popfd
        //popad

        mov eax, [esp+0x28]
        mov eax, [eax+0x115]
        mov [Stor_1], eax

        push eax
        call ____FeaturesTakeWeaponDamage_Hook_5_HelperA
        test eax, eax
        jz ____TotalA_jmpToCode_42469F

        mov ax, [esp+0x20] // eax is trashed after anyway
        mov [wStor_1], ax

        mov ax, [esp+0x24] // stack adjusted
        mov [wStor_2], ax

        jmp skipJmpToCode
        ____TotalA_jmpToCode_42469F:
        jmp ____TotalA_jmpToCode_InCode_42469F // same as ____FeaturesTakeWeaponDamage_Hook_1_Return
        skipJmpToCode:
    }

    SendFeaturePacketBuffer1->PacketType = 15; // Packet Type:  0xF  (15)
    SendFeaturePacketBuffer1->ExpandedWeaponId = Stor_1;
    SendFeaturePacketBuffer1->xPos = wStor_1;
    SendFeaturePacketBuffer1->yPos = wStor_2;

    __asm
    {
        push 6 + 4 // new packet size
        //push SendFeaturePacketBuffer1 // buffer ptr
        mov eax, [SendFeaturePacketBuffer1]
        push eax

        jmp ____FeaturesTakeWeaponDamage_Hook_5_Return
    }
}



    //__asm
    //{
    //    pushad
    //    pushfd

    //    mov edi, [SendFeaturePacketBuffer1]

    //    mov esi, [edi+0x6]
    //    push esi

    //    call ____FeaturesTakeWeaponDamage_Hook_5_HelperA
    //    test eax, eax

    //    jz ____TotalA_jmpToCode_0042469F // jump if false

    //    //cmp [edi+0x6], 252
    //    //jbe 

    //    mov byte ptr [edi+0x0], 15 // packet type
    //    // mov [edi+0x6], un-needed
    //    mov [edi+0x2], bx
    //    mov [edi+0x4], ax

    //    popfd
    //    popad

    //    push 10 // packet size
    //    push edi

    //    jmp ____FeaturesTakeWeaponDamage_Hook_5_Return


    //    ____TotalA_jmpToCode_0042469F:

    //    popfd
    //    popad

    //    jmp ____TotalA_jmpToCode_InCode_42469F
    //}
//}









void WINAPI ____SendFireWeapon_Hook_1_HelperA()
{
    if (SendFireWeaponPacketBuffer1)
    {
        ____free(SendFireWeaponPacketBuffer1);
    }

    SendFireWeaponPacketBuffer1 = (PacketWeaponProjectile*)____malloc(sizeof(PacketWeaponProjectile));
    ____memset(SendFireWeaponPacketBuffer1, 0, sizeof(PacketWeaponProjectile));
}

//////////////
//////////////
//////////////
//////////////
//////////////
//////////////__declspec(naked) void ____SendFireWeapon_Hook_1()
//////////////{
//////////////    __asm
//////////////    {
//////////////
//////////////
//////////////        pushad
//////////////        pushfd
//////////////
//////////////        push esi
//////////////
//////////////        call ____SendFireWeapon_Hook_1_HelperA
//////////////
//////////////        push edi
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////
//////////////        mov [edi+0x0], 13 // packet type
//////////////        mov ecx, [esp+0x34+0x28+0x4] // position start
//////////////        mov edx, [esp+0x38+0x28+0x4] // position end
//////////////        mov eax, [ecx+0x0] // start x
//////////////        mov [edi+0x1], eax
//////////////        mov eax, [ecx+0x4]
//////////////        mov [edi+0x5], eax
//////////////        mov eax, [ecx+0x8]
//////////////        mov [edi+0x9], eax
//////////////
//////////////        mov eax, [edx+0x0] // end x
//////////////        mov [edi+13], eax
//////////////        mov eax, [edx+0x4]
//////////////        mov [edi+17], eax
//////////////        mov eax, [edx+0x8]
//////////////        mov [edi+21], eax
//////////////
//////////////        mov esi, [esp+0x28+0x2C+0x4] // weapontypedef
//////////////        mov eax, [esi+0x115] // expanded weapon id
//////////////        mov [edi+0x24], eax
//////////////
//////////////        mov al, [esi+0x1B]
//////////////        shr al, 2
//////////////        and al, 3
//////////////        mov [edi+0x23], al // weapon index
//////////////
//////////////        mov edx, [esp+0x28+0x30+0x4]
//////////////        test edx, edx
//////////////        jnz JmpOver1
//////////////        mov [edi+0x21], dx
//////////////        jmp Post1
//////////////        JmpOver1:
//////////////        mov si, [edx+0xA8]
//////////////        mov [edi+0x21], si
//////////////        Post1:
//////////////        mov esi, [esp+0x28+0x34+0x4]
//////////////        test esi, esi
//////////////        jnz JmpOver2
//////////////        mov [edi+0x1F], si
//////////////        jmp Post2
//////////////        JmpOver2:
//////////////        mov si, [esi+0xA8]
//////////////        mov [edi+0x1F], si
//////////////        Post2:
//////////////        mov eax, [esp+0x28+0x2C+0x4]
//////////////        mov si, [eax+0x16]
//////////////        mov ax, [eax+0x18]
//////////////        mov [edi+0x1B], si // angle
//////////////        mov [edi+0x1D], ax // trajectory result
//////////////
//////////////        mov eax, [esp+0x28+0x2C+0x4]
//////////////        mov ecx, [eax+0x111]
//////////////        mov al, [edi+0x1A]
//////////////        shr ecx, 0x1E
//////////////        xor cl, al
//////////////        push 0x24+0x4 // added 4 bytes for expanded weapon ids DWORD
//////////////        and cl, 1
//////////////        xor al, cl
//////////////        mov ecx, [edx+0x96]
//////////////        mov [edi+0x1A], al
//////////////        push edi
//////////////        mov edx, [ecx+0x4]
//////////////        //push eax
//////////////        push edx
//////////////        call ____TotalA_HAPIBroadcastMessage
//////////////        
//////////////        pop esi
//////////////        pop edi
//////////////
//////////////        popfd
//////////////        popad
//////////////
//////////////        jmp ____SendFireWeapon_Hook_1_Return
//////////////    }
//////////////}
//////////////
//////////////
//////////////

void WINAPI ____AreaOfEffectDamage_Hook_1_HelperA()
{
    if (SendAreaOfEffectDamageBuffer1 != nullptr)
    {
        ____free(SendAreaOfEffectDamageBuffer1);
    }

    SendAreaOfEffectDamageBuffer1 = (PacketAreaOfEffectDamage*)____malloc(sizeof(PacketAreaOfEffectDamage));
    ____memset(SendAreaOfEffectDamageBuffer1, 0, sizeof(PacketAreaOfEffectDamage));
}

//////////////
//////////////
//////////////__declspec(naked) void ____AreaOfEffectDamage_Hook_1()
//////////////{
//////////////    __asm
//////////////    {
//////////////        pushad
//////////////        pushfd
//////////////
//////////////        call ____AreaOfEffectDamage_Hook_1_HelperA
//////////////
//////////////        popfd
//////////////        popad
//////////////
//////////////        lea ecx, [ebx+0x1C]
//////////////        mov edi, [SendAreaOfEffectDamageBuffer1]
//////////////        mov [edi+0x0], 14 // packet types
//////////////        push 0xE+0x4
//////////////        mov edx, [ecx]
//////////////        mov [edi+0x1], edx
//////////////        mov edx, [esi]
//////////////        mov eax, [ecx+0x4]
//////////////        mov esi, [ebp+0x8]
//////////////        mov [edi+0x5], eax
//////////////        mov ecx, [ecx+0x8]
//////////////        mov [edi+0x9], ecx
//////////////        mov eax, [edx+0x115]
//////////////        mov edx, [esi+0x52]
//////////////        mov [edi+0xE], eax
//////////////        push edi
//////////////        mov eax, [edx+0x96]
//////////////        push ecx
//////////////        mov ecx, [eax+0x4]
//////////////        push ecx
//////////////        call ____TotalA_HAPIBroadcastMessage // edi preserved
//////////////        lea edx, [esi+0x28]
//////////////        mov [edi+0x0], 14 // whoa be careful xD almost typed 0x14, well i did but xD yeah fixed now
//////////////        push 0xE+0x4
//////////////        mov eax, [edx]
//////////////        mov [edi+0x1], eax
//////////////        mov eax, [esi]
//////////////        mov ecx, [edx+0x4]
//////////////        mov [edi+0x5], ecx
//////////////        mov edx, [edx+0x8]
//////////////        mov [edi+0x9], edx
//////////////        mov ecx, [eax+0x115] // expanded weapon ids
//////////////        mov eax, [esi+0x52]
//////////////        mov [edi+0xE], ecx
//////////////        push edi
//////////////        mov ecx, [eax+0x96]
//////////////        //push edx
//////////////        mov edx, [ecx+0x4]
//////////////        push edx
//////////////        call ____TotalA_HAPIBroadcastMessage
//////////////
//////////////        jmp ____AreaOfEffectDamage_Hook_1_Return
//////////////    }
//////////////}
//////////////
//////////////
//////////////
//////////////
//////////////

__declspec(naked) void ____ReceiveAreaOfEffectDamage_Hook_1()
{
    __asm
    {
        mov ebx, [ebx+0x115]
        cmp ebx, [edi+0xE]
        jmp ____ReceiveAreaOfEffectDamage_Hook_1_Return
    }
}

//////////////
//////////////
//////////////
//////////////// i dont know if this works
//////////////__declspec(naked) void ____FireCallBack1_Hook_1()
//////////////{
//////////////    __asm
//////////////    {
//////////////
//////////////
//////////////        pushad
//////////////        pushfd
//////////////
//////////////        //push ebp
//////////////
//////////////        call ____SendFireWeapon_Hook_1_HelperA
//////////////
//////////////        //pop ebp
//////////////
//////////////        push edi
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////        
//////////////        mov [edi+0x0], 13 // packet type
//////////////        lea ecx, [esp+0x54-0x3C+0x20+0x4+0x4] // position start
//////////////        mov edx, ebp // position end
//////////////
//////////////        push eax
//////////////
//////////////        mov eax, [ecx+0x0] // start x
//////////////        mov [edi+0x1], eax
//////////////        mov eax, [ecx+0x4]
//////////////        mov [edi+0x5], eax
//////////////        mov eax, [ecx+0x8]
//////////////        mov [edi+0x9], eax
//////////////
//////////////        mov eax, [edx+0x0] // end x
//////////////        mov [edi+13], eax
//////////////        mov eax, [edx+0x4]
//////////////        mov [edi+17], eax
//////////////        mov eax, [edx+0x8]
//////////////        mov [edi+21], eax
//////////////
//////////////        mov ebx, [esi+0xC]
//////////////        //mov esi, [esp+0x28+0x2C] // weapontypedef
//////////////        mov eax, [ebx+0x115] // expanded weapon id
//////////////        mov [edi+0x24], eax
//////////////
//////////////        pop eax
//////////////
//////////////        //mov al, [esi+0x1B]
//////////////        shr al, 2
//////////////        and al, 3
//////////////        mov [edi+0x23], al // weapon index
//////////////        
//////////////        pop edi
//////////////
//////////////        //mov edx, [edi+0xA8]
//////////////        test edx, edx
//////////////
//////////////        push edi
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////
//////////////        jnz JmpOver1
//////////////
//////////////
//////////////
//////////////        mov [edi+0x1F], dx
//////////////        //mov [edi+0x21], dx
//////////////
//////////////        push edi
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////
//////////////        jmp Post1
//////////////        JmpOver1:
//////////////        push esi
//////////////        mov si, [edx+0xA8]
//////////////        mov [edi+0x1F], si
//////////////        //mov [edi+0x21], si
//////////////        pop esi
//////////////        Post1:
//////////////
//////////////        pop edi
//////////////        
//////////////        
//////////////
//////////////        //mov esi, [esp+0x28+0x34] // should not be needed
//////////////        test esi, esi
//////////////
//////////////
//////////////
//////////////        jnz JmpOver2
//////////////
//////////////        push edi
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////        mov [edi+0x1F], si
//////////////        //mov [edi+0x21], si
//////////////        pop edi
//////////////
//////////////   
//////////////        jmp Post2
//////////////        JmpOver2:
//////////////        push esi
//////////////        mov si, [edi+0xA8]
//////////////
//////////////        push edi
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////        mov [edi+0x1F], si
//////////////        //mov [edi+0x21], si
//////////////        pop edi
//////////////
//////////////
//////////////        pop esi
//////////////        Post2:
//////////////
//////////////        //pop edi
//////////////
//////////////        mov eax, esi // no error here due to checks
//////////////
//////////////        push edi
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////
//////////////        push esi
//////////////        mov si, [eax+0x16]
//////////////        mov ax, [eax+0x18]
//////////////        mov [edi+0x1B], si // angle
//////////////        mov [edi+0x1D], ax // trajectory result
//////////////        pop esi
//////////////
//////////////        mov ecx, [esi+0xC]
//////////////        mov ecx, [ecx+0x111]
//////////////        mov al, [edi+0x1A]
//////////////        shr ecx, 0x1E
//////////////        xor cl, al
//////////////        
//////////////        and cl, 1
//////////////        xor al, cl
//////////////        mov [edi+0x1A], al
//////////////        //mov ecx, [esi+0xC]
//////////////        //mov eax, [ecx+0x111]
//////////////        pop edi
//////////////
//////////////        mov ecx, [edi+0x96]
//////////////
//////////////        push edi
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////
//////////////        push 0x24+0x4 // added 4 bytes for expanded weapon ids DWORD
//////////////        push edi
//////////////        mov edx, [ecx+0x4]
//////////////        //push eax
//////////////        push edx
//////////////        call ____TotalA_HAPIBroadcastMessage
//////////////        
//////////////        pop edi
//////////////
//////////////        popfd
//////////////        popad
//////////////
//////////////
//////////////
//////////////        jmp ____FireCallBack1_Hook_1_Return
//////////////
//////////////        //0049d7ad 8b 4c 24 1c     MOV        ECX,dword ptr [ESP + 0x1c]
//////////////        //0049d7b1 8b 54 24 18     MOV        EDX,dword ptr [ESP + 0x18]
//////////////        //0049d7b5 89 4c 24 35     MOV        dword ptr [ESP + 0x35],ECX
//////////////        //0049d7b9 8b 4d 00        MOV        ECX,dword ptr [EBP]
//////////////        //0049d7bc 89 54 24 31     MOV        dword ptr [ESP + 0x31],EDX
//////////////        //0049d7c0 8b 54 24 20     MOV        EDX,dword ptr [ESP + 0x20]
//////////////        //0049d7c4 89 4c 24 3d     MOV        dword ptr [ESP + 0x3d],ECX
//////////////        //0049d7c8 8b 4d 08        MOV        ECX,dword ptr [EBP + 0x8]
//////////////        //0049d7cb 89 54 24 39     MOV        dword ptr [ESP + 0x39],EDX
//////////////        //0049d7cf 8b 55 04        MOV        EDX,dword ptr [EBP + 0x4]
//////////////        //0049d7d2 89 4c 24 45     MOV        dword ptr [ESP + 0x45],ECX
//////////////        //0049d7d6 8b 4e 0c        MOV        ECX,dword ptr [ESI + 0xc]
//////////////        //0049d7d9 c0 e8 02        SHR        AL,0x2
//////////////        //0049d7dc c6 44 24        MOV        byte ptr [ESP + 0x30],0xd
//////////////        //         30 0d
//////////////        //0049d7e1 89 54 24 41     MOV        dword ptr [ESP + 0x41],EDX
//////////////        //0049d7e5 8a 91 0a        MOV        DL,byte ptr [ECX + 0x10a]
//////////////        //         01 00 00
//////////////        //0049d7eb 24 03           AND        AL,0x3
//////////////        //0049d7ed 88 44 24 53     MOV        byte ptr [ESP + 0x53],AL
//////////////        //0049d7f1 33 c0           XOR        EAX,EAX
//////////////        //0049d7f3 3b f8           CMP        EDI,EAX
//////////////        //0049d7f5 88 54 24 49     MOV        byte ptr [ESP + 0x49],DL
//////////////        //0049d7f9 75 07           JNZ        LAB_0049d802
//////////////        //0049d7fb 66 89 44        MOV        word ptr [ESP + 0x51],AX
//////////////        //         24 51
//////////////        //0049d800 eb 0c           JMP        LAB_0049d80e
//////////////        //                     LAB_0049d802                                    XREF[1]:     0049d7f9(j)  
//////////////        //0049d802 66 8b 97        MOV        DX,word ptr [EDI + 0xa8]
//////////////        //         a8 00 00 00
//////////////        //0049d809 66 89 54        MOV        word ptr [ESP + 0x51],DX
//////////////        //         24 51
//////////////        //                     LAB_0049d80e                                    XREF[1]:     0049d800(j)  
//////////////        //0049d80e 3b d8           CMP        EBX,EAX
//////////////        //0049d810 74 07           JZ         LAB_0049d819
//////////////        //0049d812 66 8b 83        MOV        AX,word ptr [EBX + 0xa8]
//////////////        //         a8 00 00 00
//////////////        //                     LAB_0049d819                                    XREF[1]:     0049d810(j)  
//////////////        //0049d819 66 8b 56 16     MOV        DX,word ptr [ESI + 0x16]
//////////////        //0049d81d 66 89 44        MOV        word ptr [ESP + 0x4f],AX
//////////////        //         24 4f
//////////////        //0049d822 66 8b 46 18     MOV        AX,word ptr [ESI + 0x18]
//////////////        //0049d826 66 89 54        MOV        word ptr [ESP + 0x4b],DX
//////////////        //         24 4b
//////////////        //0049d82b 66 89 44        MOV        word ptr [ESP + 0x4d],AX
//////////////        //         24 4d
//////////////        //0049d830 8b 89 11        MOV        ECX,dword ptr [ECX + 0x111]
//////////////        //         01 00 00
//////////////        //0049d836 8a 44 24 4a     MOV        AL,byte ptr [ESP + 0x4a]
//////////////        //0049d83a 8d 54 24 30     LEA        EDX,[ESP + 0x30]
//////////////        //0049d83e c1 e9 1e        SHR        ECX,0x1e
//////////////        //0049d841 32 c8           XOR        CL,AL
//////////////        //0049d843 6a 24           PUSH       0x24
//////////////        //0049d845 80 e1 01        AND        CL,0x1
//////////////        //0049d848 52              PUSH       EDX
//////////////        //0049d849 32 c1           XOR        AL,CL
//////////////        //0049d84b 88 44 24 52     MOV        byte ptr [ESP + 0x52],AL
//////////////        //0049d84f 8b 87 96        MOV        EAX,dword ptr [EDI + 0x96]
//////////////        //         00 00 00
//////////////        //0049d855 8b 48 04        MOV        ECX,dword ptr [EAX + 0x4]
//////////////        //0049d858 51              PUSH       ECX
//////////////        //0049d859 e8 92 45        CALL       FUN_00451df0                                     undefined4 FUN_00451df0(uint par
//////////////        //         fb ff
//////////////
//////////////    }
//////////////}
//////////////
//////////////
//////////////
//////////////
//////////////
//////////////__declspec(naked) void ____FireCallBack2_Hook_1()
//////////////{
//////////////    __asm
//////////////    {
//////////////
//////////////
//////////////        pushad
//////////////        pushfd
//////////////
//////////////        call ____SendFireWeapon_Hook_1_HelperA
//////////////
//////////////        push edi
//////////////
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////        
//////////////        mov [edi+0x0], 13 // packet type
//////////////
//////////////        pop edi
//////////////
//////////////        mov ecx, [edi+0x6A] // unit position start
//////////////
//////////////        push edi
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////
//////////////        //mov ecx, [esp+0x18+0x24] // position start
//////////////        mov edx, ebx // position end
//////////////
//////////////        //push eax
//////////////
//////////////        mov eax, [ecx+0x0] // start x
//////////////        mov [edi+0x1], eax
//////////////        mov eax, [ecx+0x4]
//////////////        mov [edi+0x5], eax
//////////////        mov eax, [ecx+0x8]
//////////////        mov [edi+0x9], eax
//////////////
//////////////        mov eax, [edx+0x0] // end x
//////////////        mov [edi+13], eax
//////////////        mov eax, [edx+0x4]
//////////////        mov [edi+17], eax
//////////////        mov eax, [edx+0x8]
//////////////        mov [edi+21], eax
//////////////
//////////////        //mov esi, [esp+0x28+0x2C] // weapontypedef
//////////////        //push esi
//////////////
//////////////        mov eax, [esi+0xC]
//////////////        mov eax, [eax+0x115] // expanded weapon id
//////////////        mov [edi+0x24], eax
//////////////
//////////////        //pop eax
//////////////
//////////////        mov eax, [esi+0xC]
//////////////        mov al, [eax+0x1B]
//////////////        shr al, 2
//////////////        and al, 3
//////////////        mov [edi+0x23], al // weapon index
//////////////        
//////////////        pop edi
//////////////
//////////////        xor edx, edx
//////////////        //mov edx, edi
//////////////        cmp edi, edx
//////////////
//////////////        push edi
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////
//////////////        jnz JmpOver1
//////////////
//////////////
//////////////
//////////////        mov [edi+0x21], dx
//////////////        jmp Post1
//////////////        JmpOver1:
//////////////        push esi
//////////////        mov si, [edx+0xA8]
//////////////        mov [edi+0x21], si
//////////////        pop esi
//////////////        Post1:
//////////////
//////////////        
//////////////        pop edi
//////////////
//////////////
//////////////        //mov esi, [esp+0x28+0x34] // should not be needed
//////////////        cmp ebp, edx
//////////////        jnz JmpOver2
//////////////        mov [edi+0x1F], si
//////////////        jmp Post2
//////////////        JmpOver2:
//////////////        push esi
//////////////        mov si, [esi+0xA8]
//////////////        mov [edi+0x1F], si
//////////////        pop esi
//////////////        Post2:
//////////////
//////////////        
//////////////
//////////////
//////////////
//////////////        
//////////////
//////////////
//////////////        mov eax, esi // no error here due to checks
//////////////
//////////////        push esi
//////////////        mov si, [eax+0x16]
//////////////        mov ax, [eax+0x18]
//////////////        mov [edi+0x1B], si // angle
//////////////        mov [edi+0x1D], ax // trajectory result
//////////////        pop esi
//////////////
//////////////        mov ecx, [esi+0xC]
//////////////        mov ecx, [ecx+0x111]
//////////////        mov al, [edi+0x1A]
//////////////
//////////////        pop edi
//////////////
//////////////        shr ecx, 0x1E
//////////////        xor cl, al
//////////////        
//////////////        and cl, 1
//////////////        xor al, cl
//////////////
//////////////        push edi
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////
//////////////        mov [edi+0x1A], al
//////////////
//////////////
//////////////
//////////////        //mov ecx, [esi+0xC]
//////////////
//////////////        pop edi
//////////////
//////////////        push 0x24+0x4 // added 4 bytes for expanded weapon ids DWORD
//////////////
//////////////        //mov eax, [ecx+0x111]
//////////////        mov ecx, [edi+0x96]
//////////////        push edi
//////////////        mov edx, [ecx+0x4]
//////////////        //push eax
//////////////        push edx
//////////////        call ____TotalA_HAPIBroadcastMessage
//////////////        
//////////////
//////////////
//////////////
//////////////        popfd
//////////////        popad
//////////////
//////////////        jmp ____FireCallBack4_Hook_1_Return
//////////////
//////////////
//////////////    }
//////////////}
//////////////
//////////////
//////////////
//////////////
//////////////
//////////////
//////////////// its labeled weird in the idb and here but whatever ;)
//////////////// doing them in order by Ghidra search
//////////////__declspec(naked) void ____FireCallBack3_Hook_1()
//////////////{
//////////////    __asm
//////////////    {
//////////////
//////////////
//////////////        pushad
//////////////        pushfd
//////////////
//////////////        call ____SendFireWeapon_Hook_1_HelperA
//////////////
//////////////        push edi
//////////////
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////        
//////////////        mov [edi+0x0], 13 // packet type
//////////////
//////////////        pop edi
//////////////
//////////////        lea ecx, [esp+0x24+0x10] // unit position start
//////////////
//////////////
//////////////        //mov ecx, [esp+0x18+0x24] // position start
//////////////        mov edx, edi // position end
//////////////
//////////////        push edi
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////
//////////////        //push eax
//////////////
//////////////        mov eax, [ecx+0x0] // start x
//////////////        mov [edi+0x1], eax
//////////////        mov eax, [ecx+0x4]
//////////////        mov [edi+0x5], eax
//////////////        mov eax, [ecx+0x8]
//////////////        mov [edi+0x9], eax
//////////////
//////////////        mov eax, [edx+0x0] // end x
//////////////        mov [edi+13], eax
//////////////        mov eax, [edx+0x4]
//////////////        mov [edi+17], eax
//////////////        mov eax, [edx+0x8]
//////////////        mov [edi+21], eax
//////////////
//////////////        //mov esi, [esp+0x28+0x2C] // weapontypedef
//////////////        //push esi
//////////////        mov eax, [esi+0xC]
//////////////        mov eax, [eax+0x115] // expanded weapon id
//////////////        //pop esi
//////////////        mov [edi+0x24], eax
//////////////
//////////////        //pop eax
//////////////
//////////////        //mov eax, [esi+0xC]
//////////////        mov al, [esi+0x1B]
//////////////        shr al, 2
//////////////        and al, 3
//////////////        mov [edi+0x23], al // weapon index
//////////////        
//////////////        pop edi
//////////////
//////////////        xor edx, edx
//////////////        //mov edx, edi
//////////////        cmp ebx, edx
//////////////
//////////////        push edi
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////
//////////////
//////////////        jnz JmpOver1
//////////////
//////////////
//////////////
//////////////        mov [edi+0x21], dx
//////////////        jmp Post1
//////////////        JmpOver1:
//////////////        push esi
//////////////        mov si, [ebx+0xA8]
//////////////        mov [edi+0x21], si
//////////////        pop esi
//////////////        Post1:
//////////////
//////////////        pop edi
//////////////        
//////////////
//////////////
//////////////        //mov esi, [esp+0x28+0x34] // should not be needed
//////////////        cmp ebp, edx
//////////////        jnz JmpOver2
//////////////        mov [edi+0x1F], si
//////////////        jmp Post2
//////////////        JmpOver2:
//////////////        push esi
//////////////        mov si, [ebx+0xA8]
//////////////        mov [edi+0x1F], si
//////////////        pop esi
//////////////        Post2:
//////////////
//////////////        
//////////////
//////////////
//////////////
//////////////        
//////////////
//////////////
//////////////        mov eax, [esi] // no error here due to checks
//////////////
//////////////        push esi
//////////////        mov si, [eax+0x16]
//////////////        mov ax, [eax+0x18]
//////////////        mov [edi+0x1B], si // angle
//////////////        mov [edi+0x1D], ax // trajectory result
//////////////        pop esi
//////////////
//////////////
//////////////        mov ecx, [esi+0xC]
//////////////        mov ecx, [ecx+0x111]
//////////////        mov al, [edi+0x1A]
//////////////        shr ecx, 0x1E
//////////////        xor cl, al
//////////////        push 0x24+0x4 // added 4 bytes for expanded weapon ids DWORD
//////////////        and cl, 1
//////////////        xor al, cl
//////////////        mov [edi+0x1A], al
//////////////        //mov ecx, [esi+0xC]
//////////////        //mov eax, [ecx+0x111]
//////////////        mov ecx, [ebx+0x96]
//////////////        push edi
//////////////        mov edx, [ecx+0x4]
//////////////        //push eax
//////////////        push edx
//////////////        call ____TotalA_HAPIBroadcastMessage
//////////////        
//////////////        pop edi
//////////////
//////////////
//////////////        popfd
//////////////        popad
//////////////
//////////////        jmp ____FireCallBack3_Hook_1_Return
//////////////
//////////////        
//////////////    }
//////////////}
//////////////
//////////////
//////////////
//////////////
//////////////
//////////////
//////////////
//////////////
//////////////
//////////////
//////////////
//////////////
//////////////// its labeled weird in the idb and here but whatever ;)
//////////////// doing them in order by Ghidra search
//////////////__declspec(naked) void ____FireCallBack4_Hook_1()
//////////////{
//////////////    __asm
//////////////    {
//////////////
//////////////
//////////////        pushad
//////////////        pushfd
//////////////
//////////////        call ____SendFireWeapon_Hook_1_HelperA
//////////////
//////////////        push edi
//////////////
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////        
//////////////        mov [edi+0x0], 13 // packet type
//////////////
//////////////        pop edi
//////////////
//////////////        mov ecx, [esp+0x24+0x10] // unit position start
//////////////
//////////////
//////////////        //mov ecx, [esp+0x18+0x24] // position start
//////////////        lea edx, [esp+0x24+0x50] // position end
//////////////
//////////////        push edi
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////
//////////////        //push eax
//////////////
//////////////        mov eax, [ecx+0x0] // start x
//////////////        mov [edi+0x1], eax
//////////////        mov eax, [ecx+0x4]
//////////////        mov [edi+0x5], eax
//////////////        mov eax, [ecx+0x8]
//////////////        mov [edi+0x9], eax
//////////////
//////////////        mov eax, [edx+0x0] // end x
//////////////        mov [edi+13], eax
//////////////        mov eax, [edx+0x4]
//////////////        mov [edi+17], eax
//////////////        mov eax, [edx+0x8]
//////////////        mov [edi+21], eax
//////////////
//////////////        //mov esi, [esp+0x28+0x2C] // weapontypedef
//////////////        //push esi
//////////////        mov eax, [esi+0xC]
//////////////        mov eax, [eax+0x115] // expanded weapon id
//////////////        //pop esi
//////////////        mov [edi+0x24], eax
//////////////
//////////////        //pop eax
//////////////
//////////////        //mov eax, [esi+0xC]
//////////////        mov al, [esi+0x1B]
//////////////        shr al, 2
//////////////        and al, 3
//////////////        mov [edi+0x23], al // weapon index
//////////////        
//////////////        pop edi
//////////////
//////////////        xor ebp, ebp
//////////////        //mov edx, edi
//////////////        cmp ebp, edi
//////////////
//////////////        push edi
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////
//////////////        jnz JmpOver1
//////////////
//////////////
//////////////
//////////////        mov [edi+0x21], bp
//////////////        jmp Post1
//////////////        JmpOver1:
//////////////        push esi
//////////////        mov si, [ebx+0xA8]
//////////////        mov [edi+0x21], si
//////////////        pop esi
//////////////        Post1:
//////////////
//////////////        
//////////////        pop edi
//////////////
//////////////
//////////////        //mov esi, [esp+0x28+0x34] // should not be needed
//////////////        mov ecx, [esp+0x24+0x4C]
//////////////        cmp ecx, ebp
//////////////        jnz JmpOver2
//////////////        mov [edi+0x1F], bp
//////////////        jmp Post2
//////////////        JmpOver2:
//////////////        push esi
//////////////        mov si, [ecx+0xA8]
//////////////        mov [edi+0x1F], si
//////////////        pop esi
//////////////        Post2:
//////////////
//////////////        
//////////////
//////////////
//////////////
//////////////        
//////////////
//////////////
//////////////        mov eax, esi // no error here due to checks
//////////////
//////////////        push esi
//////////////
//////////////        mov si, [eax+0x16]
//////////////        mov ax, [eax+0x18]
//////////////        mov [edi+0x1B], si // angle
//////////////        mov [edi+0x1D], ax // trajectory result
//////////////
//////////////        pop esi
//////////////
//////////////        mov ecx, [esi+0xC]
//////////////        mov ecx, [ecx+0x111]
//////////////        mov al, [edi+0x1A]
//////////////        shr ecx, 0x1E
//////////////        xor cl, al
//////////////        push 0x24+0x4 // added 4 bytes for expanded weapon ids DWORD
//////////////        and cl, 1
//////////////        xor al, cl
//////////////        mov [edi+0x1A], al
//////////////        //mov ecx, [esi+0xC]
//////////////        //mov eax, [ecx+0x111]
//////////////        mov ecx, [ebx+0x96]
//////////////        push edi
//////////////        mov edx, [ecx+0x4]
//////////////        //push eax
//////////////        push edx
//////////////        call ____TotalA_HAPIBroadcastMessage
//////////////        
//////////////        pop edi
//////////////
//////////////
//////////////        popfd
//////////////        popad
//////////////
//////////////        jmp ____FireCallBack4_Hook_1_Return
//////////////
//////////////        
//////////////    }
//////////////}
//////////////
//////////////
//////////////
//////////////
//////////////
//////////////__declspec(naked) void ____FireMapWeapon_Hook_1()
//////////////{
//////////////    __asm
//////////////    {
//////////////        mov edx, dword ptr ds:[0x511DE8]
//////////////        test [edx+0x2A44], 1
//////////////        jz Return
//////////////
//////////////
//////////////
//////////////        pushad
//////////////        pushfd
//////////////
//////////////        mov ecx, edi
//////////////
//////////////        push edi
//////////////        mov edi, [SendFireWeaponPacketBuffer1]
//////////////
//////////////        push eax
//////////////
//////////////        mov eax, [ecx+0x0] // start x
//////////////        mov [edi+0x1], eax
//////////////        mov eax, [ecx+0x4]
//////////////        mov [edi+0x5], eax
//////////////        mov eax, [ecx+0x8]
//////////////        mov [edi+0x9], eax
//////////////
//////////////        pop eax
//////////////        mov edx, eax
//////////////
//////////////        mov eax, [edx+0x0] // end x
//////////////        mov [edi+13], eax
//////////////        mov eax, [edx+0x4]
//////////////        mov [edi+17], eax
//////////////        mov eax, [edx+0x8]
//////////////        mov [edi+21], eax
//////////////
//////////////        mov [edi+0x0], 13 // packet type
//////////////
//////////////        //mov esi, [esp+0x28+0x2C] // weapontypedef
//////////////        //push esi
//////////////        mov eax, [ebx+0xC]
//////////////        mov eax, [eax+0x115] // expanded weapon id
//////////////        //pop esi
//////////////        mov [edi+0x24], eax
//////////////
//////////////
//////////////        push 0x24+0x4 // expanded weapon packet
//////////////        push edi
//////////////
//////////////        call ____TotalA_GetLocalPlayerDPID
//////////////        push eax
//////////////
//////////////        call ____TotalA_HAPIBroadcastMessage
//////////////
//////////////
//////////////        popfd
//////////////        popad
//////////////
//////////////
//////////////        Return:
//////////////        jmp ____FireMapWeapon_Hook_1_Return
//////////////    }
//////////////}
//////////////



__declspec(naked) void ____PacketSize_PacketFeatureExplode_Hook_1()
{
    __asm
    {
        mov dword ptr ds:[0x00512B14], 6 + 4 // weapon ids

        jmp ____PacketSize_PacketFeatureExplode_Hook_1_Return
    }
}











PacketWeaponProjectile* IncomingPacketPtr;




// dont use function headers!!
__declspec(naked) void WINAPI ____ReceiveWeaponFired_Hook_1(/*LPVOID PlayerPtr, PacketWeaponProjectile* IncomingPacket*/)
{
    __asm
    {
        mov eax, [esp + 0x8]
        mov[IncomingPacketPtr], eax

        sub esp, 16 // 4 vars
        push ebx
        push ebp
        push esi
        push edi
    }

    ExpandedWeaponId = IncomingPacketPtr->ExpandedWeaponId;
    CorrespondingWeaponIdOffset = ____LoadWeaponFromTDF_Hook_1_HelperA(ExpandedWeaponId);

    __asm
    {
        mov ebp, [CorrespondingWeaponIdOffset]
        mov [esp + 32 - 4], ebp
        mov eax, [IncomingPacketPtr]
        mov ecx, dword ptr ds:[0x511DE8]

        mov edx, ebp
        mov edx, [edx+0x111]
        shr edx, 5
        test dl, 1
        jmp ____ReceiveWeaponFired_Hook_1_Return_Jmp1
    }



    //if ((*((DWORD*)((DWORD)CorrespondingWeaponIdOffset + 0x111)) & 0x20) != 0)
    //{
    //    __asm
    //    {
    //        mov ebp, [CorrespondingWeaponIdOffset]
    //        mov [esp+32-4], ebp
    //        mov eax, [IncomingPacketPtr]
    //        mov ecx, dword ptr ds:[0x511DE8]
    //        jmp ____ReceiveWeaponFired_Hook_1_Return_JNZ
    //    }
    //}

    //__asm
    //{
    //    mov ebp, [CorrespondingWeaponIdOffset]
    //    mov [esp+32-4], ebp
    //    mov eax, [IncomingPacketPtr]
    //    mov ecx, dword ptr ds : [0x511DE8]
    //    jmp ____ReceiveWeaponFired_Hook_1_Return_JZ
    //}
}























PositionDWORD* PositionStart;
PositionDWORD* PositionEnd;
DWORD AttackerDPID;




__declspec(naked) void ____FireCallback1_Hook_1()
{
    __asm
    {
        mov [Stor_1], eax
    }

    ____SendFireWeapon_Hook_1_HelperA();
    
    __asm
    {
        lea eax, [esp+0x18]
        mov [PositionStart], eax

        // ebp should still be the same
        mov [PositionEnd], ebp

        // esi should still be the same
        mov [Stor_5], esi

        mov eax, [esi+0xC]

        mov [Stor_6], eax

        mov edx, [eax+0x115]
        mov [Stor_2], edx

        // edi should still be the same
        mov [Stor_3], edi

        // ebx should still be the same
        mov [Stor_4], ebx
    }

    SendFireWeaponPacketBuffer1->StartX = PositionStart->x;
    SendFireWeaponPacketBuffer1->StartY = PositionStart->y;
    SendFireWeaponPacketBuffer1->StartZ = PositionStart->z;
    SendFireWeaponPacketBuffer1->EndX = PositionEnd->x;
    SendFireWeaponPacketBuffer1->EndY = PositionEnd->y;
    SendFireWeaponPacketBuffer1->EndZ = PositionEnd->z;
    SendFireWeaponPacketBuffer1->PacketType = 13;
    SendFireWeaponPacketBuffer1->WeaponIndex = (Stor_1 >> 2) & 3;
    SendFireWeaponPacketBuffer1->ExpandedWeaponId = Stor_2;

    if (Stor_3) // attacker ptr
        SendFireWeaponPacketBuffer1->AttackerUnitId = *((WORD*)((DWORD)Stor_3 + 0xA8));
    else
        SendFireWeaponPacketBuffer1->AttackerUnitId = 0;

    if(Stor_4)
        SendFireWeaponPacketBuffer1->TargetUnitId = *((WORD*)((DWORD)Stor_4 + 0xA8));

    SendFireWeaponPacketBuffer1->Angle = *((WORD*)((DWORD)Stor_5 + 0x16));
    SendFireWeaponPacketBuffer1->TrajectoryResult = *((WORD*)((DWORD)Stor_5 + 0x18));
    SendFireWeaponPacketBuffer1->Interceptor ^= (SendFireWeaponPacketBuffer1->Interceptor ^ (*((DWORD*)((DWORD)Stor_6 + 0x111)) >> 30 )) & 1;

    AttackerDPID = *((DWORD*)(* ((DWORD*)((DWORD)Stor_3 + 0x96)) + 0x4));
    
    __asm
    {
        push 36 + 4
        mov eax, [SendFireWeaponPacketBuffer1]
        push eax
        mov eax, [AttackerDPID]
        push eax
        call ____TotalA_HAPIBroadcastMessage

        jmp ____FireCallback1_Hook_1_Return
    }
}











//PositionDWORD* PositionStart;
//PositionDWORD* PositionEnd;
//DWORD AttackerDPID;




__declspec(naked) void ____FireCallback2_Hook_1()
{
    //__asm
    //{
    //    mov [Stor_1], eax
    //}

    // DONT TOUCH

    ____SendFireWeapon_Hook_1_HelperA();
    
    __asm
    {
        lea eax, [esp+0x10]
        mov [PositionStart], eax

        // edi should still be the same
        mov [PositionEnd], edi

        // esi should still be the same
        mov [Stor_5], esi


        mov al, [esi+0x1B]
        mov [bStor_1], al

        
        mov eax, [esi+0xC]
        mov [Stor_6], eax

        // weapon
        mov eax, [Stor_6]
        mov edx, [eax+0x115]
        mov [Stor_2], edx

        // ebx should still be the same
        mov [Stor_3], ebx

        // ebp should still be the same
        mov eax, [esp+0x4C]
        mov [Stor_4], ebp
    }

    SendFireWeaponPacketBuffer1->StartX = PositionStart->x;
    SendFireWeaponPacketBuffer1->StartY = PositionStart->y;
    SendFireWeaponPacketBuffer1->StartZ = PositionStart->z;
    SendFireWeaponPacketBuffer1->EndX = PositionEnd->x;
    SendFireWeaponPacketBuffer1->EndY = PositionEnd->y;
    SendFireWeaponPacketBuffer1->EndZ = PositionEnd->z;
    SendFireWeaponPacketBuffer1->PacketType = 13;
    SendFireWeaponPacketBuffer1->WeaponIndex = (bStor_1 >> 2) & 3;
    SendFireWeaponPacketBuffer1->ExpandedWeaponId = Stor_2;

    if (Stor_3) // attacker ptr
        SendFireWeaponPacketBuffer1->AttackerUnitId = *((WORD*)((DWORD)Stor_3 + 0xA8));
    else
        SendFireWeaponPacketBuffer1->AttackerUnitId = 0;

    if(Stor_4)
        SendFireWeaponPacketBuffer1->TargetUnitId = *((WORD*)((DWORD)Stor_4 + 0xA8));

    SendFireWeaponPacketBuffer1->Angle = *((WORD*)((DWORD)Stor_5 + 0x16));
    SendFireWeaponPacketBuffer1->TrajectoryResult = *((WORD*)((DWORD)Stor_5 + 0x18));
    SendFireWeaponPacketBuffer1->Interceptor ^= (SendFireWeaponPacketBuffer1->Interceptor ^ (*((DWORD*)((DWORD)Stor_6 + 0x111)) >> 30 )) & 1;

    AttackerDPID = *((DWORD*)(* ((DWORD*)((DWORD)Stor_3 + 0x96)) + 0x4));
    
    __asm
    {
        push 36 + 4
        mov eax, [SendFireWeaponPacketBuffer1]
        push eax
        mov eax, [AttackerDPID]
        push eax
        call ____TotalA_HAPIBroadcastMessage

        jmp ____FireCallback2_Hook_1_Return
    }
}













__declspec(naked) void ____FireCallback3_Hook_1()
{
    //__asm
    //{
    //    mov [Stor_1], eax
    //}

    // TOUCH - 3

    ____SendFireWeapon_Hook_1_HelperA();

    __asm
    {
        lea eax, [esp+0x10]
        mov [PositionStart], eax


        mov eax, [esp+0x50]
        mov [PositionEnd], eax


        // unitweapon
        mov [Stor_5], ebx


        mov al, [ebx+0x1B]
        mov [bStor_1], al

        // weapontypedef ptr
        mov eax, [ebx+0xC]
        mov [Stor_6], eax

        // weapon
        mov eax, [Stor_6]
        mov edx, [eax+0x115]
        mov [Stor_2], edx


        mov [Stor_3], edi

        // victim (target) unit
        mov ecx, [esp+0x4C]
        mov [Stor_4], ecx
    }

    SendFireWeaponPacketBuffer1->StartX = PositionStart->x;
    SendFireWeaponPacketBuffer1->StartY = PositionStart->y;
    SendFireWeaponPacketBuffer1->StartZ = PositionStart->z;
    SendFireWeaponPacketBuffer1->EndX = PositionEnd->x;
    SendFireWeaponPacketBuffer1->EndY = PositionEnd->y;
    SendFireWeaponPacketBuffer1->EndZ = PositionEnd->z;
    SendFireWeaponPacketBuffer1->PacketType = 13;
    SendFireWeaponPacketBuffer1->WeaponIndex = (bStor_1 >> 2) & 3;
    SendFireWeaponPacketBuffer1->ExpandedWeaponId = Stor_2;

    if (Stor_3) // attacker ptr
        SendFireWeaponPacketBuffer1->AttackerUnitId = *((WORD*)((DWORD)Stor_3 + 0xA8));
    else
        SendFireWeaponPacketBuffer1->AttackerUnitId = 0;

    if (Stor_4)
        SendFireWeaponPacketBuffer1->TargetUnitId = *((WORD*)((DWORD)Stor_4 + 0xA8));

    SendFireWeaponPacketBuffer1->Angle = *((WORD*)((DWORD)Stor_5 + 0x16));
    SendFireWeaponPacketBuffer1->TrajectoryResult = *((WORD*)((DWORD)Stor_5 + 0x18));
    SendFireWeaponPacketBuffer1->Interceptor ^= (SendFireWeaponPacketBuffer1->Interceptor ^ (*((DWORD*)((DWORD)Stor_6 + 0x111)) >> 30)) & 1;

    AttackerDPID = *((DWORD*)(*((DWORD*)((DWORD)Stor_3 + 0x96)) + 0x4));

    __asm
    {
        push 36 + 4
        mov eax, [SendFireWeaponPacketBuffer1]
        push eax
        mov eax, [AttackerDPID]
        push eax
        call ____TotalA_HAPIBroadcastMessage

        jmp ____FireCallback3_Hook_1_Return
    }
}














__declspec(naked) void ____FireCallback4_Hook_1()
{
    //__asm
    //{
    //    mov [Stor_1], eax
    //}

    // TOUCH - 4

    ____SendFireWeapon_Hook_1_HelperA();

    __asm
    {
        // attacker ptr for pos
        lea eax, [edi+0x6A]
        mov [PositionStart], eax

        // is ebx
        mov [PositionEnd], ebx

        // is esi
        mov [Stor_5], esi


        mov al, [esi+0x1B]
        mov [bStor_1], al

        // weapontypedef
        mov eax, [esi+0xC]
        mov [Stor_6], eax

        // weapon
        mov eax, [Stor_6]
        mov edx, [eax+0x115]
        mov [Stor_2], edx

        // attacker
        mov [Stor_3], edi

        // victim (target)
        mov [Stor_4], ebp
    }

    SendFireWeaponPacketBuffer1->StartX = PositionStart->x;
    SendFireWeaponPacketBuffer1->StartY = PositionStart->y;
    SendFireWeaponPacketBuffer1->StartZ = PositionStart->z;
    SendFireWeaponPacketBuffer1->EndX = PositionEnd->x;
    SendFireWeaponPacketBuffer1->EndY = PositionEnd->y;
    SendFireWeaponPacketBuffer1->EndZ = PositionEnd->z;
    SendFireWeaponPacketBuffer1->PacketType = 13;
    SendFireWeaponPacketBuffer1->WeaponIndex = (bStor_1 >> 2) & 3;
    SendFireWeaponPacketBuffer1->ExpandedWeaponId = Stor_2;

    if (Stor_3) // attacker ptr
        SendFireWeaponPacketBuffer1->AttackerUnitId = *((WORD*)((DWORD)Stor_3 + 0xA8));
    else
        SendFireWeaponPacketBuffer1->AttackerUnitId = 0;

    if (Stor_4)
        SendFireWeaponPacketBuffer1->TargetUnitId = *((WORD*)((DWORD)Stor_4 + 0xA8));

    SendFireWeaponPacketBuffer1->Angle = *((WORD*)((DWORD)Stor_5 + 0x16));
    SendFireWeaponPacketBuffer1->TrajectoryResult = *((WORD*)((DWORD)Stor_5 + 0x18));
    SendFireWeaponPacketBuffer1->Interceptor ^= (SendFireWeaponPacketBuffer1->Interceptor ^ (*((DWORD*)((DWORD)Stor_6 + 0x111)) >> 30)) & 1;

    AttackerDPID = *((DWORD*)(*((DWORD*)((DWORD)Stor_3 + 0x96)) + 0x4));

    __asm
    {
        push 36 + 4
        mov eax, [SendFireWeaponPacketBuffer1]
        push eax
        mov eax, [AttackerDPID]
        push eax
        call ____TotalA_HAPIBroadcastMessage

        jmp ____FireCallback4_Hook_1_Return
    }
}




__declspec(naked) void ____SendFireWeapon_Hook_1()
{
   //__asm
    //{
    //    mov [Stor_1], eax
    //}

    // TOUCH - 4

    ____SendFireWeapon_Hook_1_HelperA();

    __asm
    {
        push esi

        // attacker ptr for pos
        mov eax, [esp+0x34+0x4] // everything below stack adjusted already!
        mov [PositionStart], eax

        // position end
        mov eax, [esp+0x3C]
        mov [PositionEnd], eax

        // is 

        mov eax, [esp+0x2C]
        mov [Stor_5], eax

        mov eax, [Stor_5] // redundant but meh
        mov al, [eax+0x1B]
        mov [bStor_1], al

        // weapontypedef
        mov eax, [Stor_5]
        mov eax, [eax+0xC]
        mov [Stor_6], eax

        // weapon
        mov eax, [Stor_6] // redundant but idc
        mov edx, [eax+0x115]
        mov [Stor_2], edx

        // attacker
        mov eax, [esp+0x34]
        mov [Stor_3], eax

        // victim (target)
        mov eax, [esp+0x30]
        mov [Stor_4], eax
    }

    SendFireWeaponPacketBuffer1->StartX = PositionStart->x;
    SendFireWeaponPacketBuffer1->StartY = PositionStart->y;
    SendFireWeaponPacketBuffer1->StartZ = PositionStart->z;
    SendFireWeaponPacketBuffer1->EndX = PositionEnd->x;
    SendFireWeaponPacketBuffer1->EndY = PositionEnd->y;
    SendFireWeaponPacketBuffer1->EndZ = PositionEnd->z;
    SendFireWeaponPacketBuffer1->PacketType = 13;
    SendFireWeaponPacketBuffer1->WeaponIndex = (bStor_1 >> 2) & 3;
    SendFireWeaponPacketBuffer1->ExpandedWeaponId = Stor_2;

    if (Stor_3) // attacker ptr
        SendFireWeaponPacketBuffer1->AttackerUnitId = *((WORD*)((DWORD)Stor_3 + 0xA8));
    else
        SendFireWeaponPacketBuffer1->AttackerUnitId = 0;

    if (Stor_4)
        SendFireWeaponPacketBuffer1->TargetUnitId = *((WORD*)((DWORD)Stor_4 + 0xA8));

    SendFireWeaponPacketBuffer1->Angle = *((WORD*)((DWORD)Stor_5 + 0x16));
    SendFireWeaponPacketBuffer1->TrajectoryResult = *((WORD*)((DWORD)Stor_5 + 0x18));
    SendFireWeaponPacketBuffer1->Interceptor ^= (SendFireWeaponPacketBuffer1->Interceptor ^ (*((DWORD*)((DWORD)Stor_6 + 0x111)) >> 30)) & 1;

    AttackerDPID = *((DWORD*)(*((DWORD*)((DWORD)Stor_3 + 0x96)) + 0x4));

    __asm
    {
        push 36 + 4

        mov eax, [SendFireWeaponPacketBuffer1]
        push eax
        mov eax, [AttackerDPID]
        push eax
        call ____TotalA_HAPIBroadcastMessage

        pop esi

        jmp ____SendFireWeapon_Hook_1_Return
    }
}






DWORD OwnerDPID;


__declspec(naked) void ____AreaOfEffectDamage_Hook_1()
{
    ____AreaOfEffectDamage_Hook_1_HelperA();

    __asm
    {
        mov [PositionStart], ebx

        mov eax, [esi] // weapon projectile to weapon
        mov [Stor_1], eax
        
        mov eax, [Stor_1] // redundant
        mov eax, [eax+0x115]
        mov [Stor_2], eax // expanded weapon id

        mov eax, ebp // projectile ptr
        mov eax, [eax+8] // ebp stack +8
        // projectile ptr
        mov [Stor_3], eax

        mov eax, [Stor_3] // projectile ptr - redundant
        mov eax, [eax+0x52] // attacker unit ptr
        mov eax, [eax+0x96] // owner ptr
        mov eax, [eax+0x4] // DPID from
        mov [OwnerDPID], eax
    }

    SendAreaOfEffectDamageBuffer1->PacketType = 14; // 0xE
    SendAreaOfEffectDamageBuffer1->xPos = PositionStart->x;
    SendAreaOfEffectDamageBuffer1->yPos = PositionStart->y;
    SendAreaOfEffectDamageBuffer1->zPos = PositionStart->z;
    SendAreaOfEffectDamageBuffer1->ExpandedWeaponId = Stor_2;

    __asm
    {
        push 14 + 4
        mov eax, [SendAreaOfEffectDamageBuffer1]
        push eax
        mov eax, [OwnerDPID]
        push eax
        call ____TotalA_HAPIBroadcastMessage
    }

    ____AreaOfEffectDamage_Hook_1_HelperA();

    __asm
    {
        mov eax, [Stor_3]
        lea eax, [eax+0x28]
        mov [PositionEnd], eax

        mov eax, [Stor_1] // stored weapon from above (double packet)
        mov eax, [eax+115] // weapon
        mov [Stor_4], eax
    }

    SendAreaOfEffectDamageBuffer1->PacketType = 14; // 0xE
    SendAreaOfEffectDamageBuffer1->xPos = PositionEnd->x;
    SendAreaOfEffectDamageBuffer1->yPos = PositionEnd->y;
    SendAreaOfEffectDamageBuffer1->zPos = PositionEnd->z;
    SendAreaOfEffectDamageBuffer1->ExpandedWeaponId = Stor_4;

    __asm
    {
        push 14 + 4
        mov eax, [SendAreaOfEffectDamageBuffer1]
        push eax
        mov eax, [OwnerDPID]
        push eax
        call ____TotalA_HAPIBroadcastMessage

        jmp ____AreaOfEffectDamage_Hook_1_Return
    }

}





__declspec(naked) void ____FireMapWeapon_Hook_1()
{
    __asm
    {
        mov [Stor_1], eax
        mov [Stor_2], edx
        mov [Stor_3], ecx
        mov [Stor_4], ebx
        mov [Stor_5], esi
        mov [Stor_6], edi
        mov [Stor_7], ebp
    }

    ____SendFireWeapon_Hook_1_HelperA();

    __asm
    {
        mov eax, [Stor_1]
        mov edx, [Stor_2]
        mov ecx, [Stor_3]
        mov ebx, [Stor_4]
        mov esi, [Stor_5]
        mov edi, [Stor_6]
        mov ebp, [Stor_7]
    }

    __asm
    {
        mov [Stor_1], eax

        mov eax, [ebx+0x115]
        mov [Stor_2], eax

        mov [PositionStart], edi

        mov eax, [Stor_1]
        mov [PositionEnd], eax
    }

    SendFireWeaponPacketBuffer1->PacketType = 13;
    SendFireWeaponPacketBuffer1->StartX = PositionStart->x;
    SendFireWeaponPacketBuffer1->StartY = PositionStart->y;
    SendFireWeaponPacketBuffer1->StartZ = PositionStart->z;
    SendFireWeaponPacketBuffer1->EndX = PositionEnd->x;
    SendFireWeaponPacketBuffer1->EndY = PositionEnd->y;
    SendFireWeaponPacketBuffer1->EndZ = PositionEnd->z;
    SendFireWeaponPacketBuffer1->ExpandedWeaponId = Stor_2;

    __asm
    {
        push 36 + 4
        mov eax, [SendFireWeaponPacketBuffer1]
        push eax
        call ____TotalA_GetLocalPlayerDPID
        push eax
        call ____TotalA_HAPIBroadcastMessage

        jmp ____FireMapWeapon_Hook_1_Return
    }
}













__declspec(naked) void ____StartTreeBurn_Hook_1()
{
    __asm
    {
        mov [Stor_1], eax
		mov [Stor_2], edx
		mov [Stor_3], ecx
		mov [Stor_4], ebx
		mov [Stor_5], esi
		mov [Stor_6], edi
		mov [Stor_7], ebp

        call ____FeaturesTakeWeaponDamage_Hook_1_HelperA

        mov eax, [Stor_1]
        mov edx, [Stor_2]
        mov ecx, [Stor_3]
        mov ebx, [Stor_4]
        mov esi, [Stor_5]
        mov edi, [Stor_6]
        mov ebp, [Stor_7]

        mov [wStor_1], si
        mov [wStor_2], bp
    }

    
    
    SendFeaturePacketBuffer1->xPos = wStor_1;
    SendFeaturePacketBuffer1->yPos = wStor_2;
    SendFeaturePacketBuffer1->ExpandedWeaponId = 254;
    SendFeaturePacketBuffer1->PacketType = 0xF;




    __asm
    {
        push 6 + 4

        mov eax, [SendFeaturePacketBuffer1]
        push eax

        jmp ____StartTreeBurn_Hook_1_Return
    }

}






__declspec(naked) void ____ReclaimFinished_Hook_1()
{
    __asm
    {
        mov [Stor_1], eax
        mov [Stor_2], edx
        mov [Stor_3], ecx
        mov [Stor_4], ebx
        mov [Stor_5], esi
        mov [Stor_6], edi
        mov [Stor_7], ebp

        call ____FeaturesTakeWeaponDamage_Hook_1_HelperA

        mov eax, [Stor_1]
        mov edx, [Stor_2]
        mov ecx, [Stor_3]
        mov ebx, [Stor_4]
        mov esi, [Stor_5]
        mov edi, [Stor_6]
        mov ebp, [Stor_7]

        mov [wStor_1], di
        mov [wStor_2], bp
    }

    __asm
    {
        mov [Stor_1], eax
        mov [Stor_2], edx
        mov [Stor_3], ecx
        mov [Stor_4], ebx
        mov [Stor_5], esi
        mov [Stor_6], edi
        mov [Stor_7], ebp
    }

    SendFeaturePacketBuffer1->PacketType = 0xF;
    SendFeaturePacketBuffer1->ExpandedWeaponId = 255;
    SendFeaturePacketBuffer1->xPos = wStor_1;
    SendFeaturePacketBuffer1->yPos = wStor_2;

    __asm
    {
        mov eax, [Stor_1]
        mov edx, [Stor_2]
        mov ecx, [Stor_3]
        mov ebx, [Stor_4]
        mov esi, [Stor_5]
        mov edi, [Stor_6]
        mov ebp, [Stor_7]

        mov edx, [esi+0x96]

        push 6 + 4
        mov ecx, [SendFeaturePacketBuffer1]
        push ecx
        mov eax, [edx+0x4]
        push eax

        call ____TotalA_HAPIBroadcastMessage

        jmp ____ReclaimFinished_Hook_1_Return
    }
}






__declspec(naked) void ____Order_Resurrect_Hook_1()
{
    __asm
    {
        mov [Stor_1], eax
        mov [Stor_2], edx
        mov [Stor_3], ecx
        mov [Stor_4], ebx
        mov [Stor_5], esi
        mov [Stor_6], edi
        mov [Stor_7], ebp

        call ____FeaturesTakeWeaponDamage_Hook_1_HelperA

        mov eax, [Stor_1]
        mov edx, [Stor_2]
        mov ecx, [Stor_3]
        mov ebx, [Stor_4]
        mov esi, [Stor_5]
        mov edi, [Stor_6]
        mov ebp, [Stor_7]

        mov ebx, dword ptr ds:[0x511DE8]
        mov eax, 0x4EC4EC4F
        push 6 + 4
        sub edi, [ebx+0x14287]
        imul edi
        sar edx, 2
        mov eax, edx
        mov edi, [ebx+0x14233]
        shr eax, 0x1F
        add edx, eax
        mov ecx, edx
        mov eax, ecx
        cdq
        idiv edi
        mov eax, ecx

        //// ebx gets trashed later
        //mov ebx, [SendFeaturePacketBuffer1]
        //mov [ebx+0], 0xF // packet type
        //mov dword ptr [ebx+6], 255


        mov bx, dx
        cdq
        idiv edi


        //mov ecx, edx
        //mov eax, ecx
        //cdq
        //idiv edi
        //mov eax, ecx
        // lea and push buffer
        //
        //push ebx // done
        //

        //mov bx, dx
        //cdq
        //idiv edi
       
        mov [Stor_7], ebp
        mov ebp, [SendFeaturePacketBuffer1]
        push ebp
        mov byte ptr [ebp+0], 0xF // packet type
        mov dword ptr [ebp+6], 255
        mov word ptr [ebp+2], bx
        mov word ptr [ebp+4], ax
        mov ebp, [Stor_7]

        mov edx, [ebp+0x96]
        mov eax, [edx+4]
        push eax
        call ____TotalA_HAPIBroadcastMessage

    
        jmp ____Order_Resurrect_Hook_1_Return
    }
}












__declspec(naked) void ____SaveGame_SaveUnit_Hook_1()
{
    __asm
    {
        mov edx, [ecx+0x115]
        
        jmp ____SaveGame_SaveUnit_Hook_1_Return
    }
}



__declspec(naked) void ____LoadGame_LoadUnit_Hook_1()
{
    __asm
    {
        mov ecx, [edi-0x14]
        add eax, 0x1C
        mov [edx+0x115], ecx

        jmp ____LoadGame_LoadUnit_Hook_1_Return
    }
}




// dll functions
void ApplyWeaponIdsPatches()
{
    // singleplayer
    WriteJumpHook((LPVOID)0x0042E316, (LPVOID)____LoadAllWeapons_Hook_1);
	WriteJumpHook((LPVOID)0x0042E468, (LPVOID)____LoadWeaponFromTDF_Hook_1);
	WriteJumpHook((LPVOID)0x0042EC99, (LPVOID)____LoadWeaponFromTDF_Hook_2);
	WriteJumpHook((LPVOID)0x0042F340, (LPVOID)____LoadWeaponFromTDF_Hook_3);
	WriteJumpHook((LPVOID)0x0042ED46, (LPVOID)____LoadWeaponFromTDF_Hook_4);
	WriteJumpHook((LPVOID)0x0042CDCD, (LPVOID)____LoadUnitInfoFromFBI_Hook_1);
	WriteJumpHook((LPVOID)0x0049E5B0, (LPVOID)____WeaponNameToWeaponTypeDefinition_Replace);
	WriteJumpHook((LPVOID)0x0040954D, (LPVOID)____WeaponUnknown1_Hook_1);
	WriteJumpHook((LPVOID)0x00409682, (LPVOID)____WeaponUnknown2_Hook_1);
	WriteJumpHook((LPVOID)0x00409682, (LPVOID)____WeaponUnknown3_Hook_1);
	WriteJumpHook((LPVOID)0x0049E0C2, (LPVOID)____StartWeaponsScripts_Hook_1);


    // attempt 2 in cpp for Multiplayer
    // capture the stack 
    // capture each necessary pointer
    // cpp assign data to packet
    // send
    // receive


    WriteJumpHook((LPVOID)0x0049D270, (LPVOID)____ReceiveWeaponFired_Hook_1);
    WriteJumpHook((LPVOID)0x0049D7AD, (LPVOID)____FireCallback1_Hook_1);
    WriteJumpHook((LPVOID)0x0049DC71, (LPVOID)____FireCallback2_Hook_1); // re-test ballistics - test successful
    WriteJumpHook((LPVOID)0x0049DE32, (LPVOID)____FireCallback3_Hook_1);
    WriteJumpHook((LPVOID)0x0049DA9F, (LPVOID)____FireCallback4_Hook_1);






    //////// multiplayer
    //////// here comes the mess of code xD
    WriteJumpHook((LPVOID)0x0045544D, (LPVOID)____PacketDispatcher_Hook_1);
    ////////WriteJumpHook((LPVOID)0x00455474, (LPVOID)____PacketDispatcher_Hook_2);

    //////WriteJumpHook((LPVOID)0x0049D27B, (LPVOID)____ReceiveWeaponFired_Hook_1);

    //////

    //////// FeaturesTakeWeaponDamage
    ////////*((BYTE*)(0x004244B6+2)) = 8+10; // original stack size + new packet size

    WriteJumpHook((LPVOID)0x004244B0, ____FeaturesTakeWeaponDamage_Hook_0_1);
    WriteJumpHook((LPVOID)0x0042453B, (LPVOID)____FeaturesTakeWeaponDamage_Hook_1);
    WriteJumpHook((LPVOID)0x0042458C, (LPVOID)____FeaturesTakeWeaponDamage_Hook_2);
    WriteJumpHook((LPVOID)0x0042462D, (LPVOID)____FeaturesTakeWeaponDamage_Hook_3);
    WriteJumpHook((LPVOID)0x0042465F, (LPVOID)____FeaturesTakeWeaponDamage_Hook_4);
    WriteJumpHook((LPVOID)0x00424672, (LPVOID)____FeaturesTakeWeaponDamage_Hook_5);


    //////// SendFireWeapon
    WriteJumpHook((LPVOID)0x00499AC5, (LPVOID)____SendFireWeapon_Hook_1);

    //////// AreaOfEffectDamage
    WriteJumpHook((LPVOID)0x0049A769, (LPVOID)____AreaOfEffectDamage_Hook_1);
    WriteJumpHook((LPVOID)0x0049AFCB, (LPVOID)____ReceiveAreaOfEffectDamage_Hook_1);

    //////// Fire Callback 1
    //////WriteJumpHook((LPVOID)0x0049D7AD, (LPVOID)____FireCallBack1_Hook_1);
    //////WriteJumpHook((LPVOID)0x0049DA9F, (LPVOID)____FireCallBack2_Hook_1);
    //////WriteJumpHook((LPVOID)0x0049DC71, (LPVOID)____FireCallBack3_Hook_1);
    //////WriteJumpHook((LPVOID)0x0049DE32, (LPVOID)____FireCallBack4_Hook_1);
    WriteJumpHook((LPVOID)0x0049DFA3, (LPVOID)____FireMapWeapon_Hook_1);






    WriteJumpHook((LPVOID)0x00423516, (LPVOID)____StartTreeBurn_Hook_1);

    WriteJumpHook((LPVOID)0x0042397F, (LPVOID)____ReclaimFinished_Hook_1);




    WriteJumpHook((LPVOID)0x004051B9, (LPVOID)____Order_Resurrect_Hook_1);




    // packet classes
    *((DWORD*)(0x00452117+6)) = 36 + 4; // weapon ids
    *((DWORD*)(0x00452126+6)) = 14 + 4; // weapon ids

    WriteJumpHook((LPVOID)0x00452135, (LPVOID)____PacketSize_PacketFeatureExplode_Hook_1);

    //*((DWORD*)(0x00512B14)) = 6 + 4; // weapon ids






    // Save Games

    // Do Save Units
    WriteJumpHook((LPVOID)0x00487A1C, (LPVOID)____SaveGame_SaveUnit_Hook_1);

    // Do Load Units
    WriteJumpHook((LPVOID)0x00487622, (LPVOID)____LoadGame_LoadUnit_Hook_1);


}




void StaticInitializers_WeaponIds()
{
    // asm x86 returns
    ____LoadAllWeapons_Hook_1_Return = (LPVOID)0x0042E345;
    ____LoadWeaponFromTDF_Hook_1_Return = (LPVOID)0x0042E490;
    ____LoadWeaponFromTDF_Hook_2_Return = (LPVOID)0x0042ECF9;
    ____LoadUnitInfoFromFBI_Hook_1_Return = (LPVOID)0x0042CDEE;
    ____WeaponUnknown_Hook_1_Return = (LPVOID)0x00409555;
    ____WeaponUnknown_Hook_2_Return = (LPVOID)0x00409682;
    ____WeaponUnknown_Hook_3_Return = (LPVOID)0x00409948;
    ____StartWeaponsScripts_Hook_1_Return = (LPVOID)0x0049E0CE;


    ____PacketDispatcher_Hook_1_Return = (LPVOID)0x0045548B;
    ____SendFireWeapon_Hook_1_Return = (LPVOID)0x00499B90;

    //////////LPVOID ____PacketDispatcher_Hook_2_Return = (LPVOID);
    ////////LPVOID ____ReceiveWeaponFired_Hook_1_Return = (LPVOID)0x0049D2AF;
    ____FeaturesTakeWeaponDamage_Hook_1_Return = (LPVOID)0x00424569;
    ____FeaturesTakeWeaponDamage_Hook_2_Return = (LPVOID)0x00424591;
    ____FeaturesTakeWeaponDamage_Hook_3_Return = (LPVOID)0x00424632;
    ____FeaturesTakeWeaponDamage_Hook_4_Return = (LPVOID)0x00424664;
    ____FeaturesTakeWeaponDamage_Hook_5_Return = (LPVOID)0x00424694;

    ____AreaOfEffectDamage_Hook_1_Return = (LPVOID)0x0049A7EE;
    ____ReceiveAreaOfEffectDamage_Hook_1_Return = (LPVOID)0x0049AFD4;

    ____FireCallback1_Hook_1_Return = (LPVOID)0x0049D85E;
    ____FireCallback2_Hook_1_Return = (LPVOID)0x0049DD2C;
    ____FireCallback3_Hook_1_Return = (LPVOID)0x0049DEF3;
    ____FireCallback4_Hook_1_Return = (LPVOID)0x0049DB52;

    ____FireMapWeapon_Hook_1_Return = (LPVOID)0x0049DFFB;



    ____ReceiveWeaponFired_Hook_1_Return = (LPVOID)0x0049D2AD;

    ____ReceiveWeaponFired_Hook_1_Return_Jmp1 = (LPVOID)0x0049D2AD;


    ____ReceiveWeaponFired_Hook_1_Return_JNZ = (LPVOID)0x0049D2AF;
    ____ReceiveWeaponFired_Hook_1_Return_JZ = (LPVOID)0x0049D329;


    ____SaveGame_SaveUnit_Hook_1_Return = (LPVOID)0x00487A22;
    ____LoadGame_LoadUnit_Hook_1_Return = (LPVOID)0x0048762E;



    ____PacketSize_PacketFeatureExplode_Hook_1_Return = (LPVOID)0x0045213B;


    ____TotalA_strcmpi = (LPVOID)0x004F8A70;
    ____TotalA_HAPIBroadcastMessage = (LPVOID)0x00451DF0;
    ____TotalA_GetLocalPlayerDPID = (LPVOID)0x0044FDB0;


    ____TotalA_jmpToCode_42ECF9 = (LPVOID)0x0042ECF9;
    ____TotalA_jmpToCode_42F340 = (LPVOID)0x0042F340;
    ____TotalA_jmpToCode_42EDA1 = (LPVOID)0x0042EDA1;
    ____TotalA_jmpToCode_42ED7B = (LPVOID)0x0042ED7B;

    ____TotalA_jumpToCode_WeaponId253_4554D4 = (LPVOID)0x004554D4;
    ____TotalA_jumpToCode_WeaponId254_4554BA = (LPVOID)0x004554BA;
    ____TotalA_jumpToCode_WeaponId255_4554A0 = (LPVOID)0x004554A0;

    ____TotalA_jmpToCode_InCode_49D329 = (LPVOID)0x0049D329;
    ____TotalA_jmpToCode_InCode_42469F = (LPVOID)0x0042469F;




    ____FeaturesDestroy253 = (LPVOID)0x00423550; // same
    ____FeaturesDestroy254 = (LPVOID)0x004233A0; // diff
    ____FeaturesDestroy255 = (LPVOID)0x00423550; // same

    ____FeaturesDestroyDefault = (LPVOID)0x004244B0;


    ____GetGridPlotPos = (LPVOID)0x00481550;




    //____FeaturesTakeWeaponDamage_Hook_0_1 = (LPVOID)0x004244B0;
    ____FeaturesTakeWeaponDamage_Hook_0_1_Return = (LPVOID)0x004244B6;

    ____StartTreeBurn_Hook_1_Return = (LPVOID)0x00423531;



    ____ReclaimFinished_Hook_1_Return = (LPVOID)0x004239A9;
    ____Order_Resurrect_Hook_1_Return = (LPVOID)0x00405215;

}



void WeaponIds()
{
    StaticInitializers_WeaponIds();

	//AllocateNewArray(); // will be done by game, not here
	ApplyWeaponIdsPatches();
}




void AllocateNewArray()
{
    if (WeaponTypeDefinitions)
    {
        ____free(WeaponTypeDefinitions);
        WeaponTypeDefinitions = 0;
    }

	// implement new array
	if (WeaponTypeDefinitions == 0)
	{
		WeaponTypeDefinitions = (BYTE*)____malloc(MAX_NUMBER_OF_WEAPONS * WEAPON_ID_STRUCT_SIZE);

		if (WeaponTypeDefinitions != 0)
		{
            ____memset(WeaponTypeDefinitions, 0, MAX_NUMBER_OF_WEAPONS * WEAPON_ID_STRUCT_SIZE);

			for (SIZE_T off = 0, id = 0; off < MAX_NUMBER_OF_WEAPONS * WEAPON_ID_STRUCT_SIZE; off += WEAPON_ID_STRUCT_SIZE, id++)
			{
				// set ids, names already zero'd from memset
				*((DWORD*)((DWORD)WeaponTypeDefinitions + off + 0x115)) = (DWORD)id; // new offset for id [0x115]
			}
		}
	}

}