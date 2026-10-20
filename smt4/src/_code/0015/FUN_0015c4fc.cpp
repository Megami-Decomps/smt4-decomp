/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015c4fc` (_code @ 0x15c4fc, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0015c4fc(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x20) = param_2 + param_3;
  return;
}

} /* extern "C" */
