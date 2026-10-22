/* NON_MATCHING: found outside every function: branched to by FUN_002ac780; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00151ecc for reference (not compiled; its own view of the boundaries):

unsigned int FUN_00151ecc(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  uVar5 = 0xffffffff;
  switch(param_2 >> 0x18) {
  default:
    return uVar5;
  case 1:
    if (param_2 >> 0x18 != 1) {
      return 0xffffffff;
    }
    puVar2 = (unsigned int *)(iVar1 + *(int *)(iVar1 + 4));
    if (*puVar2 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    puVar3 = (unsigned int *)((int)puVar2 + puVar2[(param_2 & 0xffffff) * 2 + 2]);
    goto joined_r0x00151fec;
  case 2:
    if (param_2 >> 0x18 != 2) {
      return 0xffffffff;
    }
    puVar2 = (unsigned int *)(*(int *)(iVar1 + 0xc) + iVar1);
    if (*puVar2 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((unsigned int *)((int)puVar2 + puVar2[(param_2 & 0xffffff) * 2 + 2]) == (unsigned int *)0x0) {
      return 0xffffffff;
    }
    uVar4 = *(unsigned int *)((int)puVar2 + puVar2[(param_2 & 0xffffff) * 2 + 2]);
    if (uVar4 >> 0x18 != 1) {
      return 0xffffffff;
    }
    uVar4 = uVar4 & 0xffffff;
    puVar2 = (unsigned int *)(iVar1 + *(int *)(iVar1 + 4));
    if (*puVar2 <= uVar4) {
      return 0xffffffff;
    }
    puVar3 = (unsigned int *)((int)puVar2 + puVar2[uVar4 * 2 + 2]);
    break;
  case 3:
    if (param_2 >> 0x18 != 3) {
      return 0xffffffff;
    }
    puVar2 = (unsigned int *)(iVar1 + *(int *)(iVar1 + 0x14));
    if (*puVar2 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    puVar3 = (unsigned int *)((int)puVar2 + puVar2[(param_2 & 0xffffff) * 2 + 2]);
    break;
  case 5:
    if (param_2 >> 0x18 != 5) {
      return 0xffffffff;
    }
    puVar2 = (unsigned int *)(iVar1 + *(int *)(iVar1 + 0x1c));
    if (*puVar2 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    puVar3 = (unsigned int *)((int)puVar2 + puVar2[(param_2 & 0xffffff) * 2 + 2]);
    break;
  case 6:
    if (param_2 >> 0x18 != 6) {
      return 0xffffffff;
    }
    puVar2 = (unsigned int *)(iVar1 + *(int *)(iVar1 + 0x24));
    if (*puVar2 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    puVar3 = (unsigned int *)((int)puVar2 + puVar2[(param_2 & 0xffffff) * 2 + 2]);
joined_r0x00151fec:
    if (puVar3 == (unsigned int *)0x0) {
      return 0xffffffff;
    }
  }
  if (puVar3 != (unsigned int *)0x0) {
    uVar5 = *puVar3;
  }
  return uVar5;
}
*/
#include "common.h"
