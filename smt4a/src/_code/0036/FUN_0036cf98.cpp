/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036cf98` (_code @ 0x36cf98, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f118; /* 0x57f118 */


void FUN_0036cf98(unsigned char param_1)

{
  if (DAT_0057f118 != 0) {
    *(unsigned char *)(DAT_0057f118 + 0x189) = param_1;
  }
  return;
}

} /* extern "C" */
