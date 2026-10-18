/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466458` (_code @ 0x466458, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00466458(int param_1,int param_2)

{
  param_2 = param_2 + *(int *)(param_1 + 0x16c);
  *(int *)(param_1 + 0x16c) = param_2;
  if (*(int *)(param_1 + 0x170) < param_2) {
    param_2 = *(int *)(param_1 + 0x170);
  }
  *(int *)(param_1 + 0x16c) = param_2;
  return;
}
