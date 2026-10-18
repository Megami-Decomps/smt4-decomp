/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d659c` (_code @ 0x2d659c, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dfc0; /* 0x43dfc0 */


void FUN_002d659c(unsigned char param_1)

{
  if (DAT_0043dfc0 != 0) {
    *(unsigned char *)(DAT_0043dfc0 + 0x5f2) = param_1;
  }
  return;
}
