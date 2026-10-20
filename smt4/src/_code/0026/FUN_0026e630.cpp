/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026e630` (_code @ 0x26e630, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


void FUN_0026e630(int param_1)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  puVar2 = (unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x9870);
  *(int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x986c) = *(int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x986c) + param_1;
  temp_v0 = *puVar2 + param_1;
  *puVar2 = temp_v0;
  temp_v1 = 9999;
  if (temp_v0 < 10000) {
    temp_v1 = temp_v0;
  }
  *(unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x9870) = temp_v1;
  return;
}

} /* extern "C" */
