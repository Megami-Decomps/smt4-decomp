/* NON_MATCHING: romwright 0.5.0 decompilation of `NaviMain_GetPosX` (_code @ 0x231dd8, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cdf0; /* 0x44cdf0 */


unsigned int NaviMain_GetPosX(void)

{
  return *(unsigned int *)(DAT_0044cdf0 + 0xc);
}
