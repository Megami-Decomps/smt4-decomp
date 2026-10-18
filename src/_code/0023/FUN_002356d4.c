/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002356d4` (_code @ 0x2356d4, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e190; /* 0x43e190 */


void FUN_002356d4(unsigned char param_1)

{
  if (DAT_0043e190 != 0) {
    *(unsigned char *)(DAT_0043e190 + 0x2f) = param_1;
  }
  return;
}
