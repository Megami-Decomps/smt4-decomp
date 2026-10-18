/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a0f68` (_code @ 0x2a0f68, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */


void FUN_002a0f68(unsigned char param_1)

{
  if (DAT_0044e144 != 0) {
    *(unsigned char *)(DAT_0044e144 + 0x1e64) = param_1;
  }
  return;
}
