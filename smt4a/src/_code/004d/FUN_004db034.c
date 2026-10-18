/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004db034` (_code @ 0x4db034, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_004db034(int param_1,unsigned char param_2,unsigned short param_3)

{
  *(unsigned char *)(param_1 + 0x14c) = param_2;
  *(unsigned short *)(param_1 + 0x14e) = param_3;
  return;
}
