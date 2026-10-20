/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8fb4` (_code @ 0x3c8fb4, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_003c8fb4(int param_1,unsigned char param_2,unsigned short param_3)

{
  *(unsigned char *)(param_1 + 0x11c) = param_2;
  *(unsigned short *)(param_1 + 0x11e) = param_3;
  return;
}

} /* extern "C" */
