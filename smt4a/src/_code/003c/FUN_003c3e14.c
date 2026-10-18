/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3e14` (_code @ 0x3c3e14, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f590; /* 0x57f590 */


void FUN_003c3e14(void)

{
  if (DAT_0057f590 != 0) {
    *(unsigned char *)(DAT_0057f590 + 0x30) = 0;
  }
  return;
}
