/* NON_MATCHING: found outside every function: called by FUN_002c6202; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001009e8 for reference (not compiled; its own view of the boundaries):

void FUN_001009e8(unsigned int *param_1,unsigned int param_2,int param_3,int param_4)

{
  unsigned char uVar1;
  unsigned int uVar2;
  unsigned char *puVar3;
  int iVar4;
  unsigned char bVar5;
  
  iVar4 = 3;
  uVar2 = *param_1 & 0x800;
  if (param_3 >= 7) {
    if (uVar2 == 0) {
      puVar3 = (unsigned char *)0x100a64;
    }
    else {
      puVar3 = (unsigned char *)0x100a60;
    }
  }
  else if (uVar2 == 0) {
    puVar3 = (unsigned char *)0x100a6c;
  }
  else {
    puVar3 = (unsigned char *)0x100a68;
  }
  *param_1 = *param_1 & 0xffffffef;
  uVar2 = param_1[6];
  param_1[6] = uVar2 - 3;
  if (param_4 != 0) {
    param_1[6] = uVar2 - 4;
  }
  FUN_002c67dc(param_1);
  if (param_4 != 0) {
    (*(code *)param_1[1])(param_4,param_1[2]);
    uVar2 = param_1[8] + 1;
    param_1[8] = uVar2;
  }
  else {
    uVar2 = param_1[8];
  }
  param_1[8] = uVar2 + 3;
  while (bVar5 = iVar4 != 0, iVar4 = iVar4 - 1, bVar5) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    (*(code *)param_1[1])(uVar1,param_1[2]);
  }
  FUN_002c6808(param_1);
  return;
}
*/
#include "common.h"
