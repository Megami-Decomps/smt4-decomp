/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001641c4` (_code @ 0x1641c4, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f24c; /* 0x57f24c */


void FUN_001641c4(void)

{
  if (*(short *)(DAT_0057f24c + 0x64a) >= 11) {
    *(short *)(DAT_0057f24c + 0x64a) = *(short *)(DAT_0057f24c + 0x64a) - 1;
  }
  return;
}
