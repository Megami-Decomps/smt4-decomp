/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e19f8` (_code @ 0x2e19f8, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f0c8; /* 0x57f0c8 */


unsigned char FUN_002e19f8(void)

{
  return *(int *)(DAT_0057f0c8 + 0x10) != 3;
}

} /* extern "C" */
