/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5f7c` (_code @ 0x2c5f7c, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002c5f7c(int param_1,int param_2)

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
