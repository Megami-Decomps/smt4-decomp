/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2728` (_code @ 0x2c2728, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


int FUN_002c2728(unsigned int param_1,int param_2)

{
  if (param_1 < 2) {
    param_2 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + param_1 * 8 + 0x27ec8;
  }
  return param_2;
}

} /* extern "C" */
