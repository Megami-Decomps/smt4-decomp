/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023b4b4` (_code @ 0x23b4b4, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f288; /* 0x57f288 */


void FUN_0023b4b4(unsigned char param_1)

{
  if (DAT_0057f288 != 0) {
    *(unsigned char *)(DAT_0057f288 + 0x10) = param_1;
  }
  return;
}

} /* extern "C" */
