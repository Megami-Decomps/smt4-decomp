/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026b564` (_code @ 0x26b564, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */


unsigned char FUN_0026b564(void)

{
  return *(int *)(DAT_0043da2c + 0x10) != 3;
}
