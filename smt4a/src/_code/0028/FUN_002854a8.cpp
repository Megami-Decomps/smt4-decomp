/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002854a8` (_code @ 0x2854a8, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


void FUN_002854a8(int param_1,unsigned char param_2)

{
  if (param_1 < 10) {
    *(unsigned char *)(param_1 + (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x544c) = param_2;
  }
  return;
}

} /* extern "C" */
