/* NON_MATCHING: found outside every function: branched to by FUN_00507c74; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0050945c for reference (not compiled; its own view of the boundaries):

/* WARNING: Removing unreachable block (ram,0x00508660) * /

void FUN_0050945c(int param_1,int param_2)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int iVar7;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 == 0) {
    return;
  }
  puVar6 = (unsigned int *)(*(int *)(iVar3 + 0xc) + iVar3);
  iVar7 = 0;
  if (*puVar6 < puVar6[1]) {
    puVar5 = puVar6 + *puVar6 * 5 + 2;
    iVar2 = FUN_002e3390(param_2);
    uVar1 = (unsigned short)*puVar5;
    while ((uVar1 & 1) == 0) {
      uVar4 = (unsigned int)(*(unsigned short *)((int)puVar5 + 2) >> 3);
      if (((int)uVar4 < iVar2) &&
         (((int)*(char *)(param_2 + uVar4) &
          (1 << ((7 - (*(unsigned short *)((int)puVar5 + 2) & 7)) & 0xff))) != 0)) {
        uVar4 = puVar5[2];
      }
      else {
        uVar4 = puVar5[1];
      }
      puVar5 = puVar6 + uVar4 * 5 + 2;
      uVar1 = (unsigned short)*puVar5;
    }
    if (puVar5 + 3 != (unsigned int *)0x0) {
      uVar4 = puVar5[3];
      if ((uVar4 != 0xffffffff) && (iVar3 = *(int *)(iVar3 + 4) + iVar3, iVar3 != 0)) {
        iVar7 = iVar3 + *(int *)(iVar3 + uVar4 * 0xc + 8);
      }
      FUN_0030ea58(param_2,iVar7);
    }
  }
  return;
}
*/
#include "common.h"
