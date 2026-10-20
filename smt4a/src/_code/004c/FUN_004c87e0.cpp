/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c87e0` (_code @ 0x4c87e0, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005738e8; /* 0x5738e8 */


unsigned char FUN_004c87e0(void)

{
  return *(int *)(DAT_005738e8 + 8) >= 2;
}

} /* extern "C" */
