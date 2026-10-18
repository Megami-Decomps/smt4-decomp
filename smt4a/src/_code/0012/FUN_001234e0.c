/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001234e0` (_code @ 0x1234e0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_001234e0(unsigned short *param_1)

{
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v1 = 1;
  for (; temp_v0 = *param_1, temp_v0 != 0; param_1 = param_1 + 1) {
    if (temp_v0 < 0x80) {
      temp_v1 = temp_v1 + 1;
    }
    else if (temp_v0 < 0x800) {
      temp_v1 = temp_v1 + 2;
    }
    else {
      temp_v1 = temp_v1 + 3;
    }
  }
  return temp_v1;
}
