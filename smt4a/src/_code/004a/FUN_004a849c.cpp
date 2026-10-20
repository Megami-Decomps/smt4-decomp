/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a849c` (_code @ 0x4a849c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002a4b28(unsigned short);


void FUN_004a849c(short *param_1,unsigned int *param_2)

{
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v0 = *param_1;
  temp_v2 = param_2[1];
  temp_v3 = param_2[2];
  temp_v4 = param_2[3];
  temp_v5 = param_2[4];
  temp_v6 = param_2[5];
  temp_v7 = param_2[6];
  temp_v8 = param_2[7];
  *(unsigned int *)(param_1 + temp_v0 * 0x10 + 2) = *param_2;
  *(unsigned int *)(param_1 + temp_v0 * 0x10 + 4) = temp_v2;
  *(unsigned int *)(param_1 + temp_v0 * 0x10 + 6) = temp_v3;
  *(unsigned int *)(param_1 + temp_v0 * 0x10 + 8) = temp_v4;
  *(unsigned int *)(param_1 + temp_v0 * 0x10 + 10) = temp_v5;
  *(unsigned int *)(param_1 + temp_v0 * 0x10 + 0xc) = temp_v6;
  *(unsigned int *)(param_1 + temp_v0 * 0x10 + 0xe) = temp_v7;
  *(unsigned int *)(param_1 + temp_v0 * 0x10 + 0x10) = temp_v8;
  *param_1 = *param_1 + 1;
  temp_v1 = FUN_002a4b28(*(unsigned short *)param_2);
  if (temp_v1 != 0) {
    param_1[0x5004] = param_1[0x5004] + 1;
  }
  return;
}

} /* extern "C" */
