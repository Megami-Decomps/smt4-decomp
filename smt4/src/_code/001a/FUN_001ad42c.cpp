/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad42c` (_code @ 0x1ad42c, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


unsigned char FUN_001ad42c(unsigned int param_1,unsigned int *param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  if (param_1 < 0x501) {
    temp_v1 = param_2[1];
    temp_v2 = param_2[2];
    temp_v3 = param_2[3];
    temp_v4 = param_2[4];
    temp_v5 = param_2[5];
    temp_v6 = param_2[6];
    temp_v7 = param_2[7];
    temp_v0 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + param_1 * 0x34;
    *(unsigned int *)(temp_v0 + 0xc1f8) = *param_2;
    *(unsigned int *)(temp_v0 + 0xc1fc) = temp_v1;
    *(unsigned int *)(temp_v0 + 0xc200) = temp_v2;
    *(unsigned int *)(temp_v0 + 0xc204) = temp_v3;
    *(unsigned int *)(temp_v0 + 0xc208) = temp_v4;
    *(unsigned int *)(temp_v0 + 0xc20c) = temp_v5;
    *(unsigned int *)(temp_v0 + 0xc210) = temp_v6;
    *(unsigned int *)(temp_v0 + 0xc214) = temp_v7;
    temp_v1 = param_2[9];
    temp_v2 = param_2[10];
    temp_v3 = param_2[0xb];
    temp_v4 = param_2[0xc];
    *(unsigned int *)(temp_v0 + 0xc218) = param_2[8];
    *(unsigned int *)(temp_v0 + 0xc21c) = temp_v1;
    *(unsigned int *)(temp_v0 + 0xc220) = temp_v2;
    *(unsigned int *)(temp_v0 + 0xc224) = temp_v3;
    *(unsigned int *)(temp_v0 + 0xc228) = temp_v4;
    *(unsigned char *)(temp_v0 + 0xc20e) = *(unsigned char *)(temp_v0 + 0xc20e) | 1;
  }
  return param_1 < 0x501;
}

} /* extern "C" */
