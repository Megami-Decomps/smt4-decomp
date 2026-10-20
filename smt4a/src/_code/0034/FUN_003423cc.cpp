/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003423cc` (_code @ 0x3423cc, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f0c8; /* 0x57f0c8 */


void FUN_003423cc(unsigned short param_1)

{
  if (DAT_0057f0c8 != 0) {
    *(unsigned short *)(DAT_0057f0c8 + 0x5e6) = param_1;
  }
  return;
}

} /* extern "C" */
