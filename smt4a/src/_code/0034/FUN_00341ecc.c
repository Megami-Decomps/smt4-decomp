/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00341ecc` (_code @ 0x341ecc, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f4c4; /* 0x57f4c4 */


void FUN_00341ecc(unsigned char param_1)

{
  if (DAT_0057f4c4 != 0) {
    *(unsigned char *)(DAT_0057f4c4 + 0x5f6) = param_1;
  }
  return;
}
