/* NON_MATCHING: romwright 0.5.0 decompilation of `NaviMain_IsMapOpen` (_code @ 0x21e9cc, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cdf0; /* 0x44cdf0 */


unsigned char NaviMain_IsMapOpen(void)

{
  if (DAT_0044cdf0 == 0) {
    return 0;
  }
  return *(int *)(DAT_0044cdf0 + 0x44) == 4 || *(int *)(DAT_0044cdf0 + 0x44) == 6;
}
