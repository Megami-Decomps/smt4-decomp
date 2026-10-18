/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd9ec` (_code @ 0x2bd9ec, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002bd9ec(int param_1)

{
  int *piVar1;
  int temp_v0;
  
  piVar1 = *(int **)(param_1 + 8);
  temp_v0 = *piVar1;
  if (temp_v0 != 0) {
    if (*(int **)(temp_v0 + 8) == piVar1) {
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    if (*(int **)(*piVar1 + 0xc) == piVar1) {
      *(unsigned int *)(*piVar1 + 0xc) = 0;
    }
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
  }
  return;
}
