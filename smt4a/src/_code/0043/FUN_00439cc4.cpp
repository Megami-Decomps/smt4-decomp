/* NON_MATCHING: fragment of a larger function (conditional tail branches beyond this unit to an unregistered target at +0x18c). */
/* romwright 0.5.0 decompilation of FUN_00439cc4 for reference (not compiled; its own view of the boundaries):

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address * /

void FUN_00439cc4(char *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  float in_s0;
  float fVar3;
  
  if (*param_1 == '\0') {
    return;
  }
  *(float *)(param_1 + 8) = in_s0;
  if (DAT_00647708 != '\0') {
    fVar3 = _DAT_0064770c * in_s0;
    _DAT_00647710 = in_s0;
    iVar1 = FUN_001c6e20();
    if (iVar1 != 0) {
      puVar2 = *(unsigned int **)((unsigned int)uRam006446ee * 4 + 0x644470);
      puVar2[1] = (unsigned int)fVar3;
      *puVar2 = *puVar2 | 0x10000;
    }
    return;
  }
  return;
}
*/
#include "common.h"
