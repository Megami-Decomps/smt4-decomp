/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023553c` (_code @ 0x23553c, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e190; /* 0x43e190 */


void FUN_0023553c(unsigned char param_1)

{
  if (DAT_0043e190 != 0) {
    *(unsigned char *)(DAT_0043e190 + 0x2f) = param_1;
  }
  return;
}

} /* extern "C" */
