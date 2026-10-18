/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380fbc` (_code @ 0x380fbc, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00380fbc(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = param_2 & 0xffffff9f;
  if ((~param_2 & 0x180) == 0) {
    temp_v0 = temp_v0 | 0x40;
  }
  if ((~param_2 & 0x240) == 0) {
    temp_v0 = temp_v0 | 0x20;
  }
  *(unsigned int *)(param_1 + 0x3c) = (*(unsigned int *)(param_1 + 0x3c) & 0xfffff81f) | temp_v0;
  return;
}
