/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a8a8c` (_code @ 0x2a8a8c, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcb4; /* 0x43dcb4 */


void FUN_002a8a8c(void)

{
  if (0 < *(short *)(DAT_0043dcb4 + 0x64c)) {
    *(short *)(DAT_0043dcb4 + 0x64c) = *(short *)(DAT_0043dcb4 + 0x64c) - 1;
  }
  return;
}
