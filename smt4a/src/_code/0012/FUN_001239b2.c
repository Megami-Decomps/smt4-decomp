/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001239b2` (_code @ 0x1239b2, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_001239b2(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x20);
  if (temp_v0 > param_2) {
    *(unsigned int *)(param_1 + 0x20) = temp_v0 - param_2;
  }
  return temp_v0 <= param_2;
}
