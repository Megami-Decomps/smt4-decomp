/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022e500` (_code @ 0x22e500, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */


void FUN_0022e500(unsigned char param_1)

{
  if (DAT_0044e144 != 0) {
    *(unsigned char *)(DAT_0044e144 + 0x1e65) = param_1;
  }
  return;
}
