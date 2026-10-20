/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e2650` (_code @ 0x1e2650, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_004474d8; /* 0x4474d8 */


void FUN_001e2650(void)

{
  if (*(short *)(DAT_004474d8 + 0x14) == 1) {
    *(unsigned short *)(DAT_004474d8 + 0x14) = 2;
  }
  return;
}

} /* extern "C" */
