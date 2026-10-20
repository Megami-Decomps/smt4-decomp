/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016a0f0` (_code @ 0x16a0f0, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_0016a0f0(unsigned int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 < 0x50) {
    temp_v0 = *(unsigned int *)(param_1 * 0x10 + 0x5e2218);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
