/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021e8d0` (_code @ 0x21e8d0, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cdf0; /* 0x44cdf0 */


unsigned char FUN_0021e8d0(void)

{
  if (DAT_0044cdf0 == 0) {
    return 0;
  }
  return *(int *)(DAT_0044cdf0 + 0x44) == 4 || *(int *)(DAT_0044cdf0 + 0x44) == 6;
}
