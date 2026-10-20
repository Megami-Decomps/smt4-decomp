/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002542ec` (_code @ 0x2542ec, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


int FUN_002542ec(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  temp_v1 = (int)*(char *)(param_1 + (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x8c + 0x9108);
  if (-1 < temp_v1) {
    temp_v0 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x8c + temp_v1 * 0x604 + 0x90;
  }
  return temp_v0;
}

} /* extern "C" */
