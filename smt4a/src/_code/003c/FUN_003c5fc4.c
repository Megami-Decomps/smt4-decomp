/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c5fc4` (_code @ 0x3c5fc4, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f590; /* 0x57f590 */


void FUN_003c5fc4(unsigned char param_1)

{
  if (DAT_0057f590 != 0) {
    *(unsigned char *)(DAT_0057f590 + 0x2f) = param_1;
  }
  return;
}
