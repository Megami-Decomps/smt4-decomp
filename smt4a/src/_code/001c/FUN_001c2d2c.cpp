/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c2d2c` (_code @ 0x1c2d2c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_001c2d2c(int param_1,unsigned int param_2,unsigned char param_3)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  for (; (temp_v0 < *(unsigned int *)(param_1 + 0x224) && (param_2 != 0)); param_2 = param_2 >> 1) {
    if ((param_2 & 1) != 0) {
      *(unsigned char *)(param_1 + temp_v0 * 0x24 + 0x2075) = param_3;
    }
    temp_v0 = temp_v0 + 1;
  }
  return;
}

} /* extern "C" */
