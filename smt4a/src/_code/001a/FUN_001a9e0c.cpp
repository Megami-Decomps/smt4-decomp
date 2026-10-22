/* NON_MATCHING: found outside every function: branched to by FUN_0018622c; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001a9e0c for reference (not compiled; its own view of the boundaries):

void FUN_001a9e0c(unsigned int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned char bVar5;
  int aiStack_28 [3];
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  iVar1 = DAT_0061a50c;
  uVar4 = (int)DAT_005b40e0 - *(int *)(DAT_0061a50c + 4);
  bVar5 = (uVar4 & 8) != 0;
  puVar3 = DAT_005b40e0;
  if (bVar5) {
    puVar3 = (unsigned int *)(uVar4 + 0x18);
  }
  *(unsigned int *)(DAT_0061a50c + 0xc) = uVar4;
  if (bVar5) {
    *(unsigned int **)(iVar1 + 0xc) = puVar3;
  }
  else {
    *(unsigned int *)(iVar1 + 0xc) = uVar4 + 0x20;
    if (puVar3 < DAT_005b40e4) {
      DAT_005b40e0 = puVar3 + 2;
      puVar3[1] = 0x8025e;
      *puVar3 = 0;
    }
  }
  aiStack_28[0] = param_2 >> 3;
  aiStack_28[1] = 0;
  aiStack_28[2] = FUN_001a2634();
  aiStack_28[2] = (unsigned int)aiStack_28[2] >> 3;
  uStack_1c = FUN_001a2634(*(int *)(iVar1 + 4) + *(int *)(iVar1 + 0xc));
  uStack_1c = uStack_1c >> 3;
  uStack_18 = 1;
  if (*(int *)(iVar1 + 0x30) == 0) {
    *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 0x14);
  }
  iVar2 = *(int *)(iVar1 + 0x34);
  if (iVar2 != 0) {
    *(unsigned int *)(iVar2 + 8) = (unsigned int)((int)DAT_005b40e0 - iVar2) >> 3;
  }
  *(unsigned int **)(iVar1 + 0x34) = DAT_005b40e0;
  FUN_001a9380(0x238,5,aiStack_28);
  return;
}
*/
#include "common.h"
