/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c9744` (_code @ 0x3c9744, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_003c9744(int param_1,unsigned char param_2,unsigned short param_3)

{
  *(unsigned char *)(param_1 + 0x143) = param_2;
  *(unsigned short *)(param_1 + 0x144) = param_3;
  return;
}

} /* extern "C" */
