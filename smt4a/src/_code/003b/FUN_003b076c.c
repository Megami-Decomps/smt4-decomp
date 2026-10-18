/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b076c` (_code @ 0x3b076c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */


void FUN_003b076c(unsigned int param_1)

{
  if (DAT_00588fd4 != 0) {
    *(unsigned int *)(DAT_00588fd4 + 0x1930) = param_1;
  }
  return;
}
