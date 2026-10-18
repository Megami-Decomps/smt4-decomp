/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00337a0c` (_code @ 0x337a0c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00337a0c(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x3f0) * 8 + 0x1f0) = param_3;
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x3f0) * 8 + 500) = param_2;
  *(int *)(param_1 + 0x3f0) = *(int *)(param_1 + 0x3f0) + 1;
  return;
}
