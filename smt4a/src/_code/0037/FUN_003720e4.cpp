/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003720e4` (_code @ 0x3720e4, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fd4; /* 0x588fd4 */


void FUN_003720e4(unsigned char param_1)

{
  if (DAT_00588fd4 != 0) {
    *(unsigned char *)(DAT_00588fd4 + 0x2016) = param_1;
  }
  return;
}

} /* extern "C" */
