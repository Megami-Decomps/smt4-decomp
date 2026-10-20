/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031e6b0` (_code @ 0x31e6b0, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


void FUN_0031e6b0(void)

{
  *(unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x5464) = 0;
  return;
}

} /* extern "C" */
