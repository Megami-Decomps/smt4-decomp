/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f0a8` (_code @ 0x31f0a8, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


void FUN_0031f0a8(unsigned char param_1,int param_2)

{
  unsigned char temp_v0;
  
  temp_v0 = *(unsigned char *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x27e97);
  if (param_2 != 0) {
    param_1 = param_1 | temp_v0;
  }
  else {
    param_1 = temp_v0 & ~param_1;
  }
  *(unsigned char *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x27e97) = param_1;
  return;
}

} /* extern "C" */
