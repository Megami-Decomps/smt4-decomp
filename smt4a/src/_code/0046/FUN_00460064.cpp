/* NON_MATCHING: found outside every function: branched to by FUN_00463894; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00460064 for reference (not compiled; its own view of the boundaries):

void FUN_00460064(int param_1,int param_2)

{
  unsigned char bVar1;
  int iVar2;
  unsigned int unaff_r4;
  int *piVar3;
  int *piVar4;
  int iVar5;
  unsigned int uVar6;
  int *piVar7;
  unsigned int in_lr;
  
  piVar7 = (int *)(param_1 + 0x2c);
  FUN_002f5970(piVar7);
  uVar6 = 0;
  do {
    iVar5 = param_1 + (uVar6 & 0xff) * 0xc;
    piVar4 = (int *)*(int *)(iVar5 + 4);
    while (piVar3 = piVar4, piVar3 != (int *)(iVar5 + 4)) {
      piVar4 = (int *)*piVar3;
      if (piVar3[5] == param_2) {
        FUN_0018c87c(iVar5);
        *(unsigned char *)(piVar3 + 4) = 4;
        FUN_001a08d8(piVar3 + 2);
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  iVar5 = *(int *)(param_1 + 0x34) - 1;
  *(int *)(param_1 + 0x34) = iVar5;
  if (iVar5 != 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0x30) = 0;
  do {
    iVar2 = *piVar7;
    iVar5 = -iVar2;
    bVar1 = (unsigned char)hasExclusiveAccess(piVar7);
  } while (!bVar1);
  *piVar7 = iVar5;
  if (iVar2 != -1 && 0 < iVar5) {
    FUN_001b4a58(DAT_005c0ad8,piVar7,0,1,0,0,unaff_r4,in_lr);
  }
  return;
}
*/
#include "common.h"
