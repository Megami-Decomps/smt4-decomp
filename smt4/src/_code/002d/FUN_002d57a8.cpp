/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d57a8` (_code @ 0x2d57a8, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_002d57a8(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((((*(int *)(param_1 + 0x68) < 1) ||
       (temp_v0 = *(int *)(param_1 + 0x2c), *(int *)(temp_v0 + 0x150) == 0)) ||
      (temp_v0 = *(int *)(*(int *)(*(int *)(temp_v0 + 0x28) + 0x1c) +
                       *(int *)(temp_v0 + 0x154) * *(int *)(*(int *)(temp_v0 + 0x28) + 0x28) * 4),
      temp_v0 == 0)) || (*(float *)(temp_v0 + 0x48) <= *(float *)(temp_v0 + 0x38))) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
