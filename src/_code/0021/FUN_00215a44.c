/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00215a44` (_code @ 0x215a44, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */


void FUN_00215a44(unsigned short param_1)

{
  if (DAT_0044e190 != 0) {
    *(unsigned short *)(DAT_0044e190 + 0x47e) = param_1;
  }
  return;
}
