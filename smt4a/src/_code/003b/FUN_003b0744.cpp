/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b0744` (_code @ 0x3b0744, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


void FUN_003b0744(void)

{
  if (DAT_00588fe8 != 0) {
    *(unsigned char *)(DAT_00588fe8 + 0x24a9) = 1;
  }
  return;
}

} /* extern "C" */
