/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00231184` (_code @ 0x231184, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */


unsigned char FUN_00231184(void)

{
  return *(int *)(DAT_0043da2c + 0x10) != 1;
}
