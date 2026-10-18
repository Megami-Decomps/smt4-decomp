/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00292b64` (_code @ 0x292b64, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0058069c; /* 0x58069c */


void FUN_00292b64(void)

{
  if (*(short *)(DAT_0058069c + 0x18) == 1) {
    *(unsigned short *)(DAT_0058069c + 0x18) = 2;
  }
  return;
}
