/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00220d0c` (_code @ 0x220d0c, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_buttonHelp; /* 0x43da28 */


int FUN_00220d0c(void)

{
  return (int)*(char *)((*(int *)((unsigned char *)&g_buttonHelp + 0x4)) + 0x55c);
}

} /* extern "C" */
