/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c607c` (_code @ 0x3c607c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


void FUN_003c607c(unsigned char param_1)

{
  if (DAT_00588fe8 != 0) {
    *(unsigned char *)(DAT_00588fe8 + 0x2598) = param_1;
  }
  return;
}

} /* extern "C" */
