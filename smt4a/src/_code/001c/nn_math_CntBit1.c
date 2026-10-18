/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_math_CntBit1` (_code @ 0x1c7d50, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int nn_math_CntBit1(unsigned int param_1)

{
  unsigned int temp_v0;
  
  param_1 = param_1 - ((param_1 >> 1) & 0x55555555);
  temp_v0 = ((param_1 >> 2) & 0x33333333) + (param_1 & 0x33333333);
  temp_v0 = (temp_v0 + (temp_v0 >> 4)) & 0xf0f0f0f;
  temp_v0 = temp_v0 + (temp_v0 >> 8);
  return (temp_v0 + (temp_v0 >> 0x10)) & 0x3f;
}
