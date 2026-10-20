/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002666a0` (_code @ 0x2666a0, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_002666a0(int param_1,int param_2,unsigned int param_3)

{
  *(int *)(param_1 + 4) = param_2 + 100;
  *(unsigned int *)(param_1 + 8) = param_3;
  return;
}

} /* extern "C" */
