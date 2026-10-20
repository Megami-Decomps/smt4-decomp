/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290d5c` (_code @ 0x290d5c, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043da2c; /* 0x43da2c */


void FUN_00290d5c(unsigned char param_1)

{
  if (DAT_0043da2c != 0) {
    *(unsigned char *)(DAT_0043da2c + 0x4c9) = param_1;
  }
  return;
}

} /* extern "C" */
