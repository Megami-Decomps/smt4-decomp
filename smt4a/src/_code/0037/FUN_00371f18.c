/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00371f18` (_code @ 0x371f18, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */


void FUN_00371f18(void)

{
  if (DAT_00588fd4 != 0) {
    *(unsigned char *)(DAT_00588fd4 + 0x20d1) = 0;
  }
  return;
}
