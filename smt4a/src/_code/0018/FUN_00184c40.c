/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00184c40` (_code @ 0x184c40, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00184c40(int param_1,unsigned short param_2,unsigned short param_3)

{
  *(unsigned short *)(param_1 + 0x18) = param_2;
  *(unsigned short *)(param_1 + 0x1a) = param_3;
  return;
}
