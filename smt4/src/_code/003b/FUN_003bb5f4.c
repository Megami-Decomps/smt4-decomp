/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb5f4` (_code @ 0x3bb5f4, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003bb5f4(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(param_1 + *(int *)(param_1 + 0x52c) * 4 + 0x530) = param_2;
    *(int *)(param_1 + 0x52c) = *(int *)(param_1 + 0x52c) + 1;
  }
  return;
}
