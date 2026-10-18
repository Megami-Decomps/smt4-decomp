/* NON_MATCHING: romwright 0.5.0 decompilation of `NaviMain_GetPosX` (_code @ 0x2392a4, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f574; /* 0x57f574 */


unsigned int NaviMain_GetPosX(void)

{
  return *(unsigned int *)(DAT_0057f574 + 0xc);
}
