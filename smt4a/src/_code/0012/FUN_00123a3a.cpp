/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123a3a` (_code @ 0x123a3a, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00123a3a(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    temp_v0 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x24);
  }
  return temp_v0;
}

} /* extern "C" */
