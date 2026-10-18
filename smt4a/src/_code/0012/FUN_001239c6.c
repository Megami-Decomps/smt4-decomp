/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001239c6` (_code @ 0x1239c6, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_001239c6(int param_1)

{
  int *piVar1;
  int temp_v0;
  
  piVar1 = *(int **)(param_1 + 0x44);
  temp_v0 = 0;
  if (piVar1 != (int *)0x0) {
    temp_v0 = ((piVar1[1] - *piVar1) >> 2) - 1;
  }
  return temp_v0;
}
