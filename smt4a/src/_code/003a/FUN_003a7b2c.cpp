/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7b2c` (_code @ 0x3a7b2c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


void FUN_003a7b2c(void)

{
  if (DAT_00588fe8 != 0) {
    *(unsigned char *)(DAT_00588fe8 + 0x2584) = 0;
  }
  return;
}

} /* extern "C" */
