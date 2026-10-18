/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c1eec` (_code @ 0x1c1eec, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001c1eec(int param_1,int param_2,unsigned short param_3)

{
  *(unsigned short *)(param_1 + param_2 * 2 + 0x10c) = param_3;
  return;
}
