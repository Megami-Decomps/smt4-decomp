/* NON_MATCHING: found outside every function: the Thumb body of the ARM entry stub FUN_001006ac; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001006b4 for reference (not compiled; its own view of the boundaries):

void FUN_001006b4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char bVar7;
  unsigned long long uVar8;
  
  uVar6 = 0;
  uVar5 = 0x100714;
  piVar2 = (int *)((param_3 + 7U) & 0xfffffff8);
  iVar1 = *piVar2;
  iVar3 = piVar2[1];
  if (param_2 != 0xf5) {
    if (iVar3 < 0) {
      bVar7 = iVar1 != 0;
      iVar1 = -iVar1;
      iVar3 = -(unsigned int)bVar7 - iVar3;
      uVar5 = 0x100718;
      uVar6 = 1;
    }
    else if (*param_1 << 0x1e < 0) {
      uVar5 = 0x10071c;
      uVar6 = 1;
    }
    else if (-1 >= *param_1 << 0x1d) {
      uVar5 = 0x100720;
      uVar6 = 1;
    }
  }
  uVar8 = CONCAT44(iVar3,iVar1);
  iVar1 = 0;
  piVar2 = param_1;
  while (uVar4 = (unsigned int)uVar8 | (unsigned int)((unsigned long long)uVar8 >> 0x20), uVar4 != 0) {
    uVar8 = FUN_001527b4();
    *(char *)((int)param_1 + iVar1 + 0x24) = (char)uVar4 + '0';
    iVar1 = iVar1 + 1;
  }
  FUN_002c6700(piVar2,iVar1,uVar5,uVar6,piVar2,param_2,param_3);
  return;
}
*/
#include "common.h"
