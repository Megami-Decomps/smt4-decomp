/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00232a54` (_code @ 0x232a54, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00232a54(int *param_1)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *param_1;
  piVar1 = *(int **)(temp_v0 + 4);
  if (*(char *)(piVar1[1] + 0xc) == *(char *)(temp_v0 + 0xc)) {
    temp_v1 = *(int *)(temp_v0 + 8);
    *(int *)(temp_v0 + 4) = *piVar1;
    *piVar1 = *param_1;
    *param_1 = (int)piVar1;
    temp_v0 = *piVar1;
    piVar1[2] = temp_v1;
    *(int *)(temp_v0 + 8) = *param_1;
    *(int *)(*(int *)(temp_v0 + 4) + 8) = temp_v0;
    *(char *)(*param_1 + 0xc) = *(char *)(*param_1 + 0xc) + '\x01';
  }
  return;
}
