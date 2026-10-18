/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad484` (_code @ 0x1ad484, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433278; /* 0x433278 */


void FUN_001ad484(int param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  if (-1 < (DAT_00433278 - param_1) - 1) {
    temp_v0 = param_2[1];
    temp_v1 = param_2[2];
    temp_v2 = param_2[3];
    temp_v3 = param_2[4];
    temp_v4 = param_2[5];
    temp_v5 = param_2[6];
    temp_v6 = param_2[7];
    param_1 = param_1 * 0x148;
    *(unsigned int *)(param_1 + 0x4780dc) = *param_2;
    *(unsigned int *)(param_1 + 0x4780e0) = temp_v0;
    *(unsigned int *)(param_1 + 0x4780e4) = temp_v1;
    *(unsigned int *)(param_1 + 0x4780e8) = temp_v2;
    *(unsigned int *)(param_1 + 0x4780ec) = temp_v3;
    *(unsigned int *)(param_1 + 0x4780f0) = temp_v4;
    *(unsigned int *)(param_1 + 0x4780f4) = temp_v5;
    *(unsigned int *)(param_1 + 0x4780f8) = temp_v6;
  }
  return;
}
