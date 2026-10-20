/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004386a4` (_code @ 0x4386a4, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_004386a4(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 8) = 0;
  *(int *)param_1 = param_1;
  *(unsigned int *)(param_1 + 0xc) = param_2;
  *(unsigned int *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 4) = param_1;
  *(unsigned int *)(param_1 + 8) = param_3;
  return;
}

} /* extern "C" */
