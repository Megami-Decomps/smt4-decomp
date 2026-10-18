/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cb7e0` (_code @ 0x2cb7e0, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002cb7e0(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (param_1 < 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(unsigned int *)(param_2 * 0x284 + param_1 * 4 + 0x4d9fec);
  }
  return temp_v0;
}
