/* NON_MATCHING: found outside every function: its address is in FUN_0027f404's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00100788 for reference (not compiled; its own view of the boundaries):

void FUN_00100788(unsigned int *param_1,unsigned int param_2,int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  puVar2 = (unsigned int *)((param_3 + 7U) & 0xfffffff8);
  uVar6 = puVar2[1];
  iVar1 = 0;
  for (uVar4 = *puVar2; uVar4 != 0 || uVar6 != 0; uVar4 = (uVar4 >> 3) | uVar7) {
    *(unsigned char *)((int)param_1 + iVar1 + 0x24) = ((unsigned char)uVar4 & 7) + 0x30;
    uVar7 = uVar6 << 0x1d;
    iVar1 = iVar1 + 1;
    uVar6 = uVar6 >> 3;
  }
  uVar5 = 0;
  uVar3 = 0x100794;
  if (((int)(*param_1 << 0x1c) < 0) && ((*param_1 & 0x20) != 0 || iVar1 != 0)) {
    uVar5 = 1;
    uVar3 = 0x100798;
    param_1[7] = param_1[7] - 1;
  }
  FUN_002c6700(param_1,iVar1,uVar3,uVar5);
  return;
}
*/
#include "common.h"
