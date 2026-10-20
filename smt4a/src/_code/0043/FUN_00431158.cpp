/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00431158` (_code @ 0x431158, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00431158(unsigned int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 < 0xbb) {
    temp_v0 = *(unsigned int *)(param_1 * 4 + 0x5b44a4);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
