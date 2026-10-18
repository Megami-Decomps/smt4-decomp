/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158784` (_code @ 0x158784, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00158784(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 0x84) = param_2;
  *(unsigned int *)(param_1 + 0x88) = param_3;
  return;
}
