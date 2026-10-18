/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00259258` (_code @ 0x259258, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e190; /* 0x43e190 */


void FUN_00259258(void)

{
  if (DAT_0043e190 != 0) {
    *(unsigned char *)(DAT_0043e190 + 0x30) = 1;
  }
  return;
}
