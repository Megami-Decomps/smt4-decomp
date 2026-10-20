/* NON_MATCHING: romwright 0.5.0 decompilation of `wstrcmpU16` (_code @ 0x2e92e4, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int wstrcmpU16(unsigned short *param_1,unsigned short *param_2)

{
  unsigned int temp_v0;
  
  for (; (temp_v0 = (unsigned int)*param_1, temp_v0 != 0 && (temp_v0 == *param_2)); param_1 = param_1 + 1) {
    param_2 = param_2 + 1;
  }
  return temp_v0 - *param_2;
}

} /* extern "C" */
