/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad8d4` (_code @ 0x1ad8d4, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd3c; /* 0x43dd3c */


void FUN_001ad8d4(unsigned char param_1)

{
  if (DAT_0043dd3c != 0) {
    *(unsigned char *)(DAT_0043dd3c + 0x10) = param_1;
  }
  return;
}
