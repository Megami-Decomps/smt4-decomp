/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a833c` (_code @ 0x4a833c, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002a4b28(unsigned short);


void FUN_004a833c(short *param_1,unsigned short *param_2)

{
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int unaff_r4;
  int temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  temp_v3 = (unsigned int)*param_1;
  if ((int)temp_v3 < 1) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = temp_v3 & 1;
    if (temp_v2 != 0) {
      unaff_r4 = (unsigned int)*param_2;
    }
    temp_v4 = 0;
    if (temp_v2 != 0) {
      do {
        if ((unsigned short)param_1[temp_v4 * 0x10 + 2] == unaff_r4) {
          return;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < (int)temp_v2);
    }
  }
  if ((int)temp_v2 < (int)temp_v3) {
    temp_v0 = *param_2;
    do {
      temp_v1 = param_1[temp_v2 * 0x10 + 2];
      temp_v5 = temp_v1 == temp_v0;
      if (!temp_v5) {
        temp_v1 = param_1[temp_v2 * 0x10 + 0x12];
      }
      if (temp_v5 || temp_v1 == temp_v0) {
        return;
      }
      temp_v2 = temp_v2 + 2;
    } while ((int)temp_v2 < (int)temp_v3);
  }
  temp_v6 = *(unsigned int *)(param_2 + 2);
  temp_v7 = *(unsigned int *)(param_2 + 4);
  temp_v8 = *(unsigned int *)(param_2 + 6);
  temp_v9 = *(unsigned int *)(param_2 + 8);
  temp_v10 = *(unsigned int *)(param_2 + 10);
  temp_v11 = *(unsigned int *)(param_2 + 0xc);
  temp_v12 = *(unsigned int *)(param_2 + 0xe);
  *(unsigned int *)(param_1 + temp_v3 * 0x10 + 2) = *(unsigned int *)param_2;
  *(unsigned int *)(param_1 + temp_v3 * 0x10 + 4) = temp_v6;
  *(unsigned int *)(param_1 + temp_v3 * 0x10 + 6) = temp_v7;
  *(unsigned int *)(param_1 + temp_v3 * 0x10 + 8) = temp_v8;
  *(unsigned int *)(param_1 + temp_v3 * 0x10 + 10) = temp_v9;
  *(unsigned int *)(param_1 + temp_v3 * 0x10 + 0xc) = temp_v10;
  *(unsigned int *)(param_1 + temp_v3 * 0x10 + 0xe) = temp_v11;
  *(unsigned int *)(param_1 + temp_v3 * 0x10 + 0x10) = temp_v12;
  *param_1 = *param_1 + 1;
  temp_v4 = FUN_002a4b28(*param_2);
  if (temp_v4 != 0) {
    param_1[0x5004] = param_1[0x5004] + 1;
  }
  return;
}

} /* extern "C" */
