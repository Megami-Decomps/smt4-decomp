/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e8794` (_code @ 0x3e8794, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_003e8794(int param_1,int param_2)

{
  *(int *)(param_1 + 0x23a0) = param_2 + *(int *)(param_1 + 0x23a0);
  return;
}

} /* extern "C" */
