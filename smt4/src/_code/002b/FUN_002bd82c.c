/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd82c` (_code @ 0x2bd82c, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002bd82c(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x38) = param_2 & 0xffffff00;
  return;
}
