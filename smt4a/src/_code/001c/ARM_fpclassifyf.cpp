/* NON_MATCHING: romwright 0.5.0 decompilation of `ARM_fpclassifyf` (_code @ 0x1c4334, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int ARM_fpclassifyf(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((param_1 & 0x7fffff) != 0) {
    temp_v0 = 4;
  }
  if ((param_1 & 0x7fffffff) >> 0x17 != 0) {
    temp_v0 = temp_v0 | 1;
  }
  if ((~(param_1 << 1) & 0xff000000) == 0) {
    temp_v0 = temp_v0 | 2;
  }
  if (temp_v0 == 1) {
    temp_v0 = 5;
  }
  return temp_v0;
}

} /* extern "C" */
