/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb814` (_code @ 0x3bb814, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003bb814(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(param_1 + *(int *)(param_1 + 0x52c) * 4 + 0x530) = param_2;
    *(int *)(param_1 + 0x52c) = *(int *)(param_1 + 0x52c) + 1;
  }
  return;
}
