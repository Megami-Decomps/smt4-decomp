/* NON_MATCHING: found outside every function: branched to by FUN_002ab8c4; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0014d7cc for reference (not compiled; its own view of the boundaries):

void FUN_0014d7cc(unsigned int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned char bVar5;
  int aiStack_28 [3];
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  iVar1 = DAT_004c632c;
  uVar4 = (int)DAT_004652a0 - *(int *)(DAT_004c632c + 4);
  bVar5 = (uVar4 & 8) != 0;
  puVar3 = DAT_004652a0;
  if (bVar5) {
    puVar3 = (unsigned int *)(uVar4 + 0x18);
  }
  *(unsigned int *)(DAT_004c632c + 0xc) = uVar4;
  if (bVar5) {
    *(unsigned int **)(iVar1 + 0xc) = puVar3;
  }
  else {
    *(unsigned int *)(iVar1 + 0xc) = uVar4 + 0x20;
    if (puVar3 < DAT_004652a4) {
      DAT_004652a0 = puVar3 + 2;
      puVar3[1] = 0x8025e;
      *puVar3 = 0;
    }
  }
  aiStack_28[0] = param_2 >> 3;
  aiStack_28[1] = 0;
  aiStack_28[2] = FUN_00147a7c();
  aiStack_28[2] = (unsigned int)aiStack_28[2] >> 3;
  uStack_1c = FUN_00147a7c(*(int *)(iVar1 + 4) + *(int *)(iVar1 + 0xc));
  uStack_1c = uStack_1c >> 3;
  uStack_18 = 1;
  if (*(int *)(iVar1 + 0x30) == 0) {
    *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 0x14);
  }
  iVar2 = *(int *)(iVar1 + 0x34);
  if (iVar2 != 0) {
    *(unsigned int *)(iVar2 + 8) = (unsigned int)((int)DAT_004652a0 - iVar2) >> 3;
  }
  *(unsigned int **)(iVar1 + 0x34) = DAT_004652a0;
  FUN_002aa6ac(0x238,5,aiStack_28);
  return;
}
*/
#include "common.h"
