/* NON_MATCHING: found outside every function: its address is in FUN_00344348's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0035a3f0 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_0035a3f0(int param_1)

{
  unsigned short uVar1;
  short sVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  float fVar9;
  int uStack_24;
  
  uVar8 = 0;
  switch(*(unsigned int *)(param_1 + 0x3bc)) {
  case 0:
    iVar4 = FUN_0032169c();
    if (iVar4 != 0) {
      FUN_00275f44(*(unsigned int *)(param_1 + 0x364),1);
      *(int *)(param_1 + 0x3bc) = *(int *)(param_1 + 0x3bc) + 1;
    }
    break;
  case 1:
    iVar4 = FUN_00224880(*(unsigned int *)(param_1 + 0x364));
    if (iVar4 != 2) {
      return 0;
    }
    *(unsigned int *)(param_1 + 0x3d4) = 0;
    iVar4 = *(int *)(param_1 + 0x3bc) + 1;
    *(int *)(param_1 + 0x3bc) = iVar4;
    break;
  case 2:
    iVar6 = 0;
    iVar4 = 0;
    uStack_24 = 0xc000b;
    do {
      *(int *)(param_1 + 0x3d4) = iVar4;
      iVar7 = *(int *)(param_1 + iVar4 * 4 + 0x3cc);
      uVar1 = *(unsigned short *)((int)&uStack_24 + iVar4 * 2);
      if (0 < iVar7) {
        uVar3 = FUN_004813bc(uVar1);
        func_0x00342628(*(unsigned int *)(param_1 + 0x7d8),iVar6,uVar1,iVar7,uVar3 ^ 1);
        FUN_00480e30(uVar1,iVar7);
        iVar6 = iVar6 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x3c0)) {
      do {
        if (9 < iVar6) break;
        iVar7 = param_1 + iVar4 * 2;
        sVar2 = *(short *)(iVar7 + 0x368);
        if (sVar2 != 0) {
          uVar3 = FUN_004813bc(sVar2);
          func_0x00342628(*(unsigned int *)(param_1 + 0x7d8),iVar6,sVar2,1,uVar3 ^ 1);
          FUN_00480e30(sVar2,1);
          iVar6 = iVar6 + 1;
          *(unsigned short *)(iVar7 + 0x368) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x3c0));
    }
    *(unsigned int *)(param_1 + 0x3dc) = *(unsigned int *)(param_1 + 0x3dc) & 0xfffffffd;
    if (0 < iVar6) {
      *(int *)(param_1 + 0x3bc) = *(int *)(param_1 + 0x3bc) + 1;
      FUN_00183f58(5,1,0x25);
      FUN_00183f58(0,0x12,0,1);
      FUN_00183f58(1,0x12,0);
      FUN_00183f58(2,0x12,0,1);
      FUN_00183f58(3,0x12,0,1);
      FUN_00183f58(4,0x12,0,1);
      *(unsigned int *)(param_1 + 0x7dc) = 0;
      *(unsigned int *)(param_1 + 0x7e4) = 0;
      *(unsigned int *)(param_1 + 0x7e0) = 400;
      *(unsigned int *)(param_1 + 0x7e8) = 0;
      *(unsigned char *)(param_1 + 0x7ec) = 0;
      return 0;
    }
    iVar4 = FUN_00388024();
    if (iVar4 != 9) {
      *(int *)(param_1 + 0x3b0) = iVar4;
      *(unsigned int *)(param_1 + 0x3bc) = 0;
      return 3;
    }
    *(unsigned int *)(param_1 + 0x3bc) = 10;
    FUN_003216ec();
    break;
  case 3:
    if (*(char *)(param_1 + 0x7ec) == '\0') {
      iVar4 = *(int *)(param_1 + 0x7e0) - 0x43;
      *(int *)(param_1 + 0x7e0) = iVar4;
      *(float *)(param_1 + 0x7dc) = *(float *)(param_1 + 0x7dc) + 0.2f;
      *(int *)(param_1 + 0x7e8) = *(int *)(param_1 + 0x7e8) + 1;
      if (0 < iVar4) {
        return 0;
      }
      *(unsigned int *)(param_1 + 0x7e0) = 0;
      *(unsigned int *)(param_1 + 0x7dc) = 0x3f800000;
      *(unsigned char *)(param_1 + 0x7ec) = 1;
      *(unsigned int *)(param_1 + 0x7e8) = 0;
      return 0;
    }
    iVar4 = 0;
    FUN_001517b4(0,1);
    if (iVar4 == 0) {
      return 0;
    }
    *(unsigned char *)(param_1 + 0x7ec) = 0;
    *(int *)(param_1 + 0x3bc) = *(int *)(param_1 + 0x3bc) + 1;
    *(unsigned int *)(param_1 + 0x7e8) = 0;
    FUN_003d2150(0x100020e);
    FUN_003216ec();
    break;
  case 4:
    if (*(char *)(param_1 + 0x7ec) == '\0') {
      fVar9 = *(float *)(param_1 + 0x7dc) - 0.34f;
      *(float *)(param_1 + 0x7dc) = fVar9;
      *(int *)(param_1 + 0x7e8) = *(int *)(param_1 + 0x7e8) + 1;
      if (0.0f < fVar9) {
        return 0;
      }
      *(unsigned int *)(param_1 + 0x7e0) = 0;
      *(unsigned int *)(param_1 + 0x7dc) = 0;
      *(unsigned char *)(param_1 + 0x7ec) = 1;
      *(unsigned int *)(param_1 + 0x7e8) = 0;
      return 0;
    }
    iVar4 = 10;
    *(int *)(param_1 + 0x3bc) = iVar4;
    break;
  case 10:
    iVar4 = FUN_0034efb0();
    if (iVar4 != 0) {
      *(unsigned int *)(param_1 + 0x3bc) = 0;
      FUN_0035fc4c();
      uVar5 = FUN_00388024(*(unsigned int *)(param_1 + 0x3dc));
      uVar8 = 3;
      *(unsigned int *)(param_1 + 0x3b0) = uVar5;
    }
  }
  return uVar8;
}
*/
#include "common.h"
