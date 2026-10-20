/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003112f6` (_code @ 0x3112f6, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_003112f6(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  if (param_2 < *(unsigned int *)(param_1 + 0x14)) {
    *(unsigned int *)(param_1 + 0x14) = param_2;
  }
  if (*(unsigned int *)(param_1 + 0x18) < param_2) {
    *(unsigned int *)(param_1 + 0x18) = param_2;
  }
  return;
}

} /* extern "C" */
