/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3010` (_code @ 0x3c3010, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_003c3010(int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 * 0x30 != -0x580ca8) {
    temp_v0 = *(unsigned int *)(param_1 * 0x30 + 0x580cac);
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
