/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5004` (_code @ 0x2f5004, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


void FUN_002f5004(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = param_1 + *(int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x24ba8);
  if (temp_v0 >= 10000000) {
    *(unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x24ba8) = 9999999;
  }
  else {
    *(unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x24ba8) = temp_v0;
  }
  return;
}

} /* extern "C" */
