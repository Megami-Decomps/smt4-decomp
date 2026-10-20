/* NON_MATCHING: romwright 0.5.0 decompilation of `wstrlenU16` (_code @ 0x2b5a48, 0x12 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int wstrlenU16(short *param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    temp_v0 = temp_v0 + 1;
  }
  return temp_v0;
}

} /* extern "C" */
