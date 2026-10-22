/* NON_MATCHING: found outside every function: branched to by FUN_002bd29c; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00155e54 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_00155e54(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  code *pcVar5;
  unsigned int uVar6;
  
  if (0x7fff < param_2) {
    return 0;
  }
  FUN_002c38a4(param_1 + 4);
  iVar1 = FUN_0015a580(*param_1);
  if (iVar1 == 0x18) {
    uVar3 = param_1[2];
    if ((*(int *)(uVar3 + 0x20) == 0x7fff) || ((int)param_2 < *(int *)(uVar3 + 0x20))) {
      FUN_002c3820(param_1 + 4);
      return 0;
    }
    pcVar5 = *(code **)(uVar3 + 0x2c);
    uVar6 = *(unsigned int *)(uVar3 + 0x30);
    FUN_00155fe8(param_1);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar3,uVar6);
    }
  }
  uVar3 = *param_1;
  uVar4 = 0;
  iVar1 = -LZCOUNT((uVar3 + 1) & ~uVar3);
  if ((iVar1 != -0x20) && ((int)(iVar1 + 0x1fU) < 0x18)) {
    *param_1 = uVar3 | (1 << ((iVar1 + 0x1fU) & 0xff));
    *(short *)(param_1 + 3) = (short)param_1[3] + 1;
    uVar4 = param_1[iVar1 + 0x596];
    FUN_0015a034(uVar4);
  }
  *(unsigned int *)(uVar4 + 0x20) = param_2;
  uVar3 = param_1[1];
  if (param_1[1] != 0) {
    do {
      uVar2 = uVar3;
      if (*(int *)(uVar2 + 0x20) <= (int)param_2) {
        iVar1 = *(int *)(uVar2 + 0x24);
        *(unsigned int *)(uVar4 + 0x28) = uVar2;
        *(int *)(uVar4 + 0x24) = iVar1;
        if (iVar1 != 0) {
          *(unsigned int *)(iVar1 + 0x28) = uVar4;
        }
        else {
          *(unsigned int *)(uVar4 + 0x24) = 0;
          param_1[1] = uVar4;
        }
        *(unsigned int *)(uVar2 + 0x24) = uVar4;
        FUN_002c3820(param_1 + 4);
        FUN_0015a514(*(unsigned int *)(uVar4 + 0x68),2);
        *(short *)(*(int *)(uVar4 + 0x68) + 4) = *(short *)(*(int *)(uVar4 + 0x68) + 4) + 1;
        *(unsigned int *)(uVar4 + 0x2c) = param_3;
        *(unsigned int *)(uVar4 + 0x30) = param_4;
        return uVar4;
      }
      uVar3 = *(unsigned int *)(uVar2 + 0x28);
    } while (*(unsigned int *)(uVar2 + 0x28) != 0);
    *(unsigned int *)(uVar2 + 0x28) = uVar4;
    *(unsigned int *)(uVar4 + 0x24) = uVar2;
    *(unsigned int *)(uVar4 + 0x28) = 0;
  }
  else {
    *(unsigned int *)(uVar4 + 0x24) = 0;
    param_1[1] = uVar4;
    *(unsigned int *)(uVar4 + 0x28) = 0;
  }
  param_1[2] = uVar4;
  FUN_002c3820(param_1 + 4);
  FUN_0015a514(*(unsigned int *)(uVar4 + 0x68),2);
  *(short *)(*(int *)(uVar4 + 0x68) + 4) = *(short *)(*(int *)(uVar4 + 0x68) + 4) + 1;
  *(unsigned int *)(uVar4 + 0x2c) = param_3;
  *(unsigned int *)(uVar4 + 0x30) = param_4;
  return uVar4;
}
*/
#include "common.h"
