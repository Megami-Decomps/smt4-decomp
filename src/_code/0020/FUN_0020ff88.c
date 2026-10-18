/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ff88` (_code @ 0x20ff88, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0020ff88(unsigned int *param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (param_2 != 0) {
    temp_v0 = *param_1 | 4;
  }
  else {
    temp_v0 = *param_1 & 0xfffffffb;
  }
  *param_1 = temp_v0;
  return;
}
