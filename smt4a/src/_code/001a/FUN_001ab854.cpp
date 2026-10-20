/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ab854` (_code @ 0x1ab854, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


int FUN_001ab854(int param_1)

{
  return (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + param_1 * 300 + 0xf4;
}

} /* extern "C" */
