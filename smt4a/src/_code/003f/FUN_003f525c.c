/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f525c` (_code @ 0x3f525c, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003f525c(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 0x40) = param_2;
  *(unsigned int *)(param_1 + 0x44) = param_3;
  return;
}
