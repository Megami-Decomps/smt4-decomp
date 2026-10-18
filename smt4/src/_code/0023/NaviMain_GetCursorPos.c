/* NON_MATCHING: romwright 0.5.0 decompilation of `NaviMain_GetCursorPos` (_code @ 0x231dc4, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cdf0; /* 0x44cdf0 */


int NaviMain_GetCursorPos(void)

{
  return DAT_0044cdf0 + 0x38;
}
