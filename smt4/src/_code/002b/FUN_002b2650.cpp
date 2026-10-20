/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2650` (_code @ 0x2b2650, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_002b2650(int param_1,unsigned short param_2,unsigned short param_3)

{
  *(unsigned short *)(param_1 + 0x18) = param_2;
  *(unsigned short *)(param_1 + 0x1a) = param_3;
  return;
}

} /* extern "C" */
