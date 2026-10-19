/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bff50` (_code @ 0x2bff50, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e18c; /* 0x43e18c */


void FUN_002bff50(void)

{
  if (DAT_0043e18c != 0) {
    *(unsigned char *)(DAT_0043e18c + 0xa11) = 0x14;
  }
  return;
}
