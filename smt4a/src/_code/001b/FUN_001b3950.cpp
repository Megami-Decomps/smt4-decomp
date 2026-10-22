/* NON_MATCHING: found outside every function: branched to by FUN_001a8e14; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001b3950 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_001b3950(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  uVar4 = 0xffffffff;
  switch(param_2 >> 0x18) {
  default:
    return uVar4;
  case 1:
    if (param_2 >> 0x18 != 1) {
      return 0xffffffff;
    }
    puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 4));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    puVar2 = (unsigned int *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2]);
    goto joined_r0x001b3a68;
  case 2:
    if (param_2 >> 0x18 != 2) {
      return 0xffffffff;
    }
    puVar1 = (unsigned int *)(*(int *)(param_1 + 0xc) + param_1);
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    if ((unsigned int *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2]) == (unsigned int *)0x0) {
      return 0xffffffff;
    }
    uVar3 = *(unsigned int *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2]);
    if (uVar3 >> 0x18 != 1) {
      return 0xffffffff;
    }
    uVar3 = uVar3 & 0xffffff;
    puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 4));
    if (*puVar1 <= uVar3) {
      return 0xffffffff;
    }
    puVar2 = (unsigned int *)((int)puVar1 + puVar1[uVar3 * 2 + 2]);
    break;
  case 3:
    if (param_2 >> 0x18 != 3) {
      return 0xffffffff;
    }
    puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 0x14));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    puVar2 = (unsigned int *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2]);
    break;
  case 5:
    if (param_2 >> 0x18 != 5) {
      return 0xffffffff;
    }
    puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 0x1c));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    puVar2 = (unsigned int *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2]);
    break;
  case 6:
    if (param_2 >> 0x18 != 6) {
      return 0xffffffff;
    }
    puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 0x24));
    if (*puVar1 <= (param_2 & 0xffffff)) {
      return 0xffffffff;
    }
    puVar2 = (unsigned int *)((int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2]);
joined_r0x001b3a68:
    if (puVar2 == (unsigned int *)0x0) {
      return 0xffffffff;
    }
  }
  if (puVar2 != (unsigned int *)0x0) {
    uVar4 = *puVar2;
  }
  return uVar4;
}
*/
#include "common.h"
