/* NON_MATCHING: romwright 0.5.0 decompilation of `NaviMain_GetCurrentMap` (_code @ 0x492a8c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00587f28; /* 0x587f28 */


unsigned int NaviMain_GetCurrentMap(void)

{
  return *(unsigned int *)(DAT_00587f28 + 0x28);
}
