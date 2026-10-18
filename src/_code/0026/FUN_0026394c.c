/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026394c` (_code @ 0x26394c, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0026394c(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 4);
  if ((temp_v0 == 0) || (temp_v1 = 0, *(float *)(temp_v0 + 0x48) <= *(float *)(temp_v0 + 0x38))) {
    temp_v1 = 1;
  }
  return temp_v1;
}
