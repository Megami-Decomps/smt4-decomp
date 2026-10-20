/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107734` (_code @ 0x107734, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00107734(unsigned int *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  if (param_1 == (unsigned int *)0x0) {
    param_1 = (unsigned int *)0x4d9748;
  }
  param_2 = param_2 ^ 0xaed1a0c;
  *param_1 = param_2;
  temp_v0 = (param_2 >> 8) | (param_2 << 0x18);
  param_1[1] = temp_v0;
  temp_v0 = temp_v0 ^ 0xaa5a02fe;
  temp_v0 = (temp_v0 >> 8) | (temp_v0 << 0x18);
  param_1[2] = temp_v0;
  temp_v0 = temp_v0 ^ 0x11be81c7;
  param_1[3] = (temp_v0 >> 8) | (temp_v0 << 0x18);
  return;
}

} /* extern "C" */
