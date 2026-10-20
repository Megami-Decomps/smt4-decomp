/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9fc2` (_code @ 0x2f9fc2, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_002f9fc2(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(unsigned int *)(param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    *(int *)(param_1 + 0x1c) = param_2;
  }
  return;
}

} /* extern "C" */
