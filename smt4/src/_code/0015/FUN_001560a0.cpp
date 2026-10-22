/* NON_MATCHING: found outside every function: branched to by FUN_002a3178; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001560a0 for reference (not compiled; its own view of the boundaries):

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address * /

void FUN_001560a0(char *param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int in_s0;
  
  if (*param_1 == '\0') {
    return;
  }
  *(unsigned int *)(param_1 + param_2 * 4 + 0xc) = in_s0;
  if (DAT_004ead10 != '\0') {
    *(unsigned int *)(param_2 * 4 + 0x4ead1c) = in_s0;
    iVar1 = FUN_002bb274();
    if (iVar1 != 0) {
      puVar2 = *(unsigned int **)((unsigned int)_DAT_004e8282 * 4 + 0x4e8004);
      puVar2[param_2 + 2] = in_s0;
      if (param_2 == 0) {
        uVar3 = *puVar2 | 0x1000000;
      }
      else {
        if (param_2 != 1) {
          return;
        }
        uVar3 = *puVar2 | 0x2000000;
      }
      *puVar2 = uVar3;
    }
    return;
  }
  return;
}
*/
#include "common.h"
