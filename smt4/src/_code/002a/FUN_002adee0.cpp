/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002adee0` (_code @ 0x2adee0, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_002adee0(int param_1)

{
  int *piVar1;
  int temp_v0;
  
  temp_v0 = 0;
  if (param_1 != 0) {
    temp_v0 = *(int *)(param_1 + 8);
  }
  if ((param_1 != 0 && temp_v0 != 0) && (piVar1 = (int *)(temp_v0 + 4), temp_v0 = 0, *piVar1 != 0)) {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
