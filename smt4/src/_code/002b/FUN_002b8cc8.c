/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b8cc8` (_code @ 0x2b8cc8, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcb4; /* 0x43dcb4 */


void FUN_002b8cc8(void)

{
  if (*(short *)(DAT_0043dcb4 + 0x64a) >= 11) {
    *(short *)(DAT_0043dcb4 + 0x64a) = *(short *)(DAT_0043dcb4 + 0x64a) - 1;
  }
  return;
}
