/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003acc2c` (_code @ 0x3acc2c, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043d9e4; /* 0x43d9e4 */


void FUN_003acc2c(void)

{
  if (*(unsigned char *)(DAT_0043d9e4 + 0x1c) >= 3) {
    *(unsigned char *)(DAT_0043d9e4 + 0x1f) = 4;
  }
  return;
}
