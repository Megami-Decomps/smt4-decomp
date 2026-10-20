/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2404` (_code @ 0x2e2404, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f114; /* 0x57f114 */


void FUN_002e2404(unsigned int param_1)

{
  if (DAT_0057f114 != 0) {
    *(unsigned int *)(DAT_0057f114 + 0x14c) = param_1;
  }
  return;
}

} /* extern "C" */
