/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034543c` (_code @ 0x34543c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */


void FUN_0034543c(unsigned int param_1)

{
  if (param_1 < 0x501) {
    *(unsigned short *)(DAT_0057f69c + param_1 * 0x50 + 0x5f5a) = 0;
  }
  return;
}
