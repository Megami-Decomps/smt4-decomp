/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004da900` (_code @ 0x4da900, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_004da900(int param_1,unsigned char param_2,unsigned short param_3)

{
  *(unsigned char *)(param_1 + 0x148) = param_2;
  *(unsigned short *)(param_1 + 0x14a) = param_3;
  return;
}
