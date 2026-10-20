/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5d80` (_code @ 0x2c5d80, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_002c5d80(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (param_2 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 0x1000;
  }
  return temp_v0 | (unsigned int)(param_1 != 1) | (param_1 << 4) | 0xf00;
}

} /* extern "C" */
