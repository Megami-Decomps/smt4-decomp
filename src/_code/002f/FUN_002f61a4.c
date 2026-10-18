/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f61a4` (_code @ 0x2f61a4, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e18c; /* 0x43e18c */


unsigned char FUN_002f61a4(void)

{
  return *(char *)(DAT_0043e18c + 8) == '\x04';
}
