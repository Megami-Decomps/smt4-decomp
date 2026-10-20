/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c33c8` (_code @ 0x1c33c8, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_001c33c8(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 0x88) = param_2;
  *(unsigned int *)(param_1 + 0x8c) = param_3;
  return;
}

} /* extern "C" */
