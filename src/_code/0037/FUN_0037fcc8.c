/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037fcc8` (_code @ 0x37fcc8, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0037fcc8(int param_1,int param_2)

{
  param_2 = param_2 + *(int *)(param_1 + 0xf8);
  *(int *)(param_1 + 0xf8) = param_2;
  if (*(int *)(param_1 + 0xfc) < param_2) {
    param_2 = *(int *)(param_1 + 0xfc);
  }
  *(int *)(param_1 + 0xf8) = param_2;
  return;
}
