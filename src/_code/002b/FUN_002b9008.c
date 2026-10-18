/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b9008` (_code @ 0x2b9008, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcb4; /* 0x43dcb4 */


void FUN_002b9008(void)

{
  if (*(short *)(DAT_0043dcb4 + 0x64a) >= 11) {
    *(short *)(DAT_0043dcb4 + 0x64a) = *(short *)(DAT_0043dcb4 + 0x64a) - 1;
  }
  return;
}
