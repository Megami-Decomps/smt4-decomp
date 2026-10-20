/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e14e4` (_code @ 0x2e14e4, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_002e14e4(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0xffffffff;
  if ((param_1 < 4) && (*(int *)(param_1 * 0x50 + 0x4e2434) != 0)) {
    temp_v0 = *(unsigned int *)(param_1 * 0x50 + 0x4e2468);
  }
  return temp_v0;
}

} /* extern "C" */
