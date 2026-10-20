/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003076e6` (_code @ 0x3076e6, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int * FUN_003076e6(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = 1 << (temp_v0 & 0xff);
  return param_1 + 2;
}

} /* extern "C" */
