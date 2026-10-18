/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00317e34` (_code @ 0x317e34, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */


void FUN_00317e34(void)

{
  if (DAT_0044e190 != 0) {
    *(unsigned char *)(DAT_0044e190 + 0x2391) = 1;
  }
  return;
}
