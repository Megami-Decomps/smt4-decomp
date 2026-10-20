/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318ddc` (_code @ 0x318ddc, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_buttonHelp; /* 0x57f0c4 */


int FUN_00318ddc(void)

{
  return (int)*(char *)((*(int *)((unsigned char *)&g_buttonHelp + 0x4)) + 0x67c);
}

} /* extern "C" */
