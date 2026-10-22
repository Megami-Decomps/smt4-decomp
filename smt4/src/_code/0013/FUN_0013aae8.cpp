/* NON_MATCHING: found outside every function: branched to by FUN_00128f00; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0013aae8 for reference (not compiled; its own view of the boundaries):

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address * /

void FUN_0013aae8(char *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  float in_s0;
  float fVar3;
  
  if (*param_1 != '\0') {
    *(float *)(param_1 + 4) = in_s0;
    fVar3 = in_s0 * *(float *)(param_1 + 8);
    iVar1 = FUN_002bb274();
    if (iVar1 != 0) {
      puVar2 = *(unsigned int **)((unsigned int)_DAT_004e8282 * 4 + 0x4e8004);
      puVar2[1] = (unsigned int)fVar3;
      *puVar2 = *puVar2 | 0x10000;
    }
    return;
  }
  return;
}
*/
#include "common.h"
