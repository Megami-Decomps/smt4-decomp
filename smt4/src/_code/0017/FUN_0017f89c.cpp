/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017f89c` (_code @ 0x17f89c, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0017f89c(int *param_1,int param_2,int param_3,int param_4,unsigned short *param_5)

{
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned short *puVar7;
  
  temp_v2 = 0;
  if (temp_v2 < param_3) {
    do {
      temp_v1 = *(unsigned char *)(param_2 + temp_v2);
      temp_v2 = temp_v2 + 1;
      temp_v5 = param_1[1] + (int)*(char *)((temp_v1 & 7) + 0x40bc4c);
      temp_v3 = (int)*(short *)(param_1[1] * 2 + 0x40bb9a);
      param_1[1] = temp_v5;
      if (temp_v5 < 1) {
        temp_v5 = 0;
      }
      param_1[1] = temp_v5;
      if (temp_v5 >= 0x59) {
        temp_v5 = 0x58;
      }
      param_1[1] = temp_v5;
      temp_v5 = temp_v3 >> 3;
      if ((temp_v1 & 4) != 0) {
        temp_v5 = temp_v5 + temp_v3;
      }
      if ((temp_v1 & 2) != 0) {
        temp_v5 = temp_v5 + (temp_v3 >> 1);
      }
      if ((temp_v1 & 1) != 0) {
        temp_v5 = temp_v5 + (temp_v3 >> 2);
      }
      temp_v0 = (int)(unsigned int)temp_v1 >> 4;
      if ((temp_v1 & 8) != 0) {
        temp_v5 = -temp_v5;
      }
      temp_v5 = *param_1 + temp_v5;
      temp_v3 = temp_v5;
      if (temp_v5 < -0x7fff) {
        temp_v3 = -0x8000;
      }
      *param_1 = temp_v5;
      *param_1 = temp_v3;
      if (temp_v3 >= 0x8000) {
        temp_v3 = 0x7fff;
      }
      *param_1 = temp_v3;
      temp_v5 = param_1[1] + (int)*(char *)((temp_v0 & 7) + 0x40bc4c);
      temp_v4 = (int)*(short *)(param_1[1] * 2 + 0x40bb9a);
      param_1[1] = temp_v5;
      if (temp_v5 < 1) {
        temp_v5 = 0;
      }
      param_1[1] = temp_v5;
      if (temp_v5 >= 0x59) {
        temp_v5 = 0x58;
      }
      param_1[1] = temp_v5;
      temp_v5 = temp_v4 >> 3;
      if ((temp_v0 & 4) != 0) {
        temp_v5 = temp_v5 + temp_v4;
      }
      if ((temp_v0 & 2) != 0) {
        temp_v5 = temp_v5 + (temp_v4 >> 1);
      }
      if ((temp_v0 & 1) != 0) {
        temp_v5 = temp_v5 + (temp_v4 >> 2);
      }
      if ((temp_v0 & 8) != 0) {
        temp_v5 = -temp_v5;
      }
      temp_v5 = *param_1 + temp_v5;
      temp_v4 = temp_v5;
      if (temp_v5 < -0x7fff) {
        temp_v4 = -0x8000;
      }
      *param_1 = temp_v5;
      *param_1 = temp_v4;
      if (temp_v4 >= 0x8000) {
        temp_v4 = 0x7fff;
      }
      *param_1 = temp_v4;
      *param_5 = (short)temp_v3;
      puVar7 = param_5 + param_4;
      param_5 = puVar7 + param_4;
      *puVar7 = (short)temp_v4;
    } while (temp_v2 < param_3);
  }
  return;
}

} /* extern "C" */
