/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001681a4` (_code @ 0x1681a4, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_001681a4(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (param_1 != 0) {
    temp_v0 = (*(unsigned int *)(param_1 + 0xf4) & 2) >> 1;
  }
  return temp_v0;
}

} /* extern "C" */
