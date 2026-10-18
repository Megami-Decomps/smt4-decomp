/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038800c` (_code @ 0x38800c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f118; /* 0x57f118 */


void FUN_0038800c(unsigned int param_1)

{
  if (DAT_0057f118 != 0) {
    *(unsigned int *)(DAT_0057f118 + 0x14c) = param_1;
  }
  return;
}
