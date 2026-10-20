/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001695a0` (_code @ 0x1695a0, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f58c; /* 0x57f58c */


void FUN_001695a0(void)

{
  if (DAT_0057f58c != 0) {
    *(unsigned char *)(DAT_0057f58c + 0x19c5) = 0x15;
  }
  return;
}

} /* extern "C" */
