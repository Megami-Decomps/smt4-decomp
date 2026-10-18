/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00317fa4` (_code @ 0x317fa4, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */


void FUN_00317fa4(unsigned int param_1)

{
  if (DAT_0044e144 != 0) {
    *(unsigned int *)(DAT_0044e144 + 0x1898) = param_1;
  }
  return;
}
