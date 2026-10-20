/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e0db8` (_code @ 0x1e0db8, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_001e0db8(int param_1,int param_2)

{
  param_1 = param_1 + param_2 * 4;
  *(unsigned int *)(param_1 + 0x385c) = 0xf;
  *(unsigned int *)(param_1 + 0x3870) = 0x41000000;
  return;
}

} /* extern "C" */
