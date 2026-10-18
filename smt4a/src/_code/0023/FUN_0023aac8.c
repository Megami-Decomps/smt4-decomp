/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023aac8` (_code @ 0x23aac8, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005702f8; /* 0x5702f8 */


void FUN_0023aac8(int param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  if (-1 < (DAT_005702f8 - param_1) - 1) {
    temp_v0 = param_2[1];
    temp_v1 = param_2[2];
    temp_v2 = param_2[3];
    temp_v3 = param_2[4];
    temp_v4 = param_2[5];
    temp_v5 = param_2[6];
    temp_v6 = param_2[7];
    param_1 = param_1 * 0x148;
    *(unsigned int *)(param_1 + 0x5c60bc) = *param_2;
    *(unsigned int *)(param_1 + 0x5c60c0) = temp_v0;
    *(unsigned int *)(param_1 + 0x5c60c4) = temp_v1;
    *(unsigned int *)(param_1 + 0x5c60c8) = temp_v2;
    *(unsigned int *)(param_1 + 0x5c60cc) = temp_v3;
    *(unsigned int *)(param_1 + 0x5c60d0) = temp_v4;
    *(unsigned int *)(param_1 + 0x5c60d4) = temp_v5;
    *(unsigned int *)(param_1 + 0x5c60d8) = temp_v6;
  }
  return;
}
