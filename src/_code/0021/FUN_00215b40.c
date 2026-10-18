/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00215b40` (_code @ 0x215b40, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */


void FUN_00215b40(unsigned short param_1)

{
  if (DAT_0044e190 != 0) {
    *(unsigned short *)(DAT_0044e190 + 0x47e) = param_1;
  }
  return;
}
