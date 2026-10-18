/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004db29c` (_code @ 0x4db29c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_004db29c(int param_1,unsigned char param_2,unsigned short *param_3)

{
  *(unsigned char *)(param_1 + 0x16a) = param_2;
  if (param_3 != (unsigned short *)0x0) {
    *(unsigned short *)(param_1 + 0x16c) = *param_3;
  }
  return;
}
