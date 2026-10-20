/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed294` (_code @ 0x2ed294, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_002ed294(int param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (*(int *)(param_1 + 0x18) - param_2);
  *(int *)(param_1 + 0x18) = param_2;
  return;
}

} /* extern "C" */
