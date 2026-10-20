/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e0f8` (_code @ 0x29e0f8, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e140; /* 0x44e140 */


unsigned char FUN_0029e0f8(void)

{
  return *(int *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x12dc) != 1;
}

} /* extern "C" */
