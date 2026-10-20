/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf750` (_code @ 0x2cf750, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_uiQuest; /* 0x43dd50 */


int FUN_002cf750(void)

{
  return (int)*(char *)(g_uiQuest + 0x5f3);
}

} /* extern "C" */
