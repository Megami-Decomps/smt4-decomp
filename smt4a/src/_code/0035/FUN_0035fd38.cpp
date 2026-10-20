/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035fd38` (_code @ 0x35fd38, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005710dc; /* 0x5710dc */


void FUN_0035fd38(unsigned char param_1)

{
  if (DAT_005710dc != 0) {
    *(unsigned char *)(DAT_005710dc + 0x2f4) = param_1;
  }
  return;
}

} /* extern "C" */
