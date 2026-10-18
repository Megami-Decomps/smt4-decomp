/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291000` (_code @ 0x291000, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */


void FUN_00291000(unsigned char param_1)

{
  if (DAT_0043da2c != 0) {
    *(unsigned char *)(DAT_0043da2c + 0x4c9) = param_1;
  }
  return;
}
