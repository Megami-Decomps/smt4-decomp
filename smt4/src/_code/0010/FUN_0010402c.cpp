/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010402c` (_code @ 0x10402c, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


void FUN_0010402c(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = param_1 + *(int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x1f4e0);
  if (temp_v0 >= 36000000) {
    *(unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x1f4e0) = 35999999;
  }
  else {
    *(unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x1f4e0) = temp_v0;
  }
  return;
}

} /* extern "C" */
