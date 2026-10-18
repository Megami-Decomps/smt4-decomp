/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e255c` (_code @ 0x1e255c, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004474d8; /* 0x4474d8 */


void FUN_001e255c(void)

{
  if (*(short *)(DAT_004474d8 + 0x14) == 1) {
    *(unsigned short *)(DAT_004474d8 + 0x14) = 2;
  }
  return;
}
