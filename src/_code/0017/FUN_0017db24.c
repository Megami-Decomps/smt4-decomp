/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017db24` (_code @ 0x17db24, 0x134 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0017db24(unsigned int *param_1,int *param_2,int param_3)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v0 = (*param_1 >> 1) & 0x7f7f7f7f;
  temp_v1 = (param_1[1] >> 1) & 0x7f7f7f7f;
  temp_v2 = (param_1[2] >> 1) & 0x7f7f7f7f;
  temp_v3 = (param_1[3] >> 1) & 0x7f7f7f7f;
  temp_v0 = ((temp_v0 + (temp_v0 >> 8) + temp_v1 * 0x1000000) >> 1) & 0x7f7f7f7f;
  temp_v1 = ((temp_v1 + (temp_v1 >> 8) + temp_v2 * 0x1000000) >> 1) & 0x7f7f7f7f;
  temp_v2 = ((temp_v2 + (temp_v2 >> 8) + temp_v3 * 0x1000000) >> 1) & 0x7f7f7f7f;
  temp_v3 = ((temp_v3 + (temp_v3 >> 8) + (unsigned int)(unsigned char)((unsigned char)param_1[4] >> 1) * 0x1000000) >> 1) &
          0x7f7f7f7f;
  do {
    temp_v4 = (param_1[0x80] >> 1) & 0x7f7f7f7f;
    temp_v5 = (param_1[0x81] >> 1) & 0x7f7f7f7f;
    temp_v6 = (param_1[0x82] >> 1) & 0x7f7f7f7f;
    temp_v7 = (param_1[0x83] >> 1) & 0x7f7f7f7f;
    temp_v4 = ((temp_v4 + (temp_v4 >> 8) + temp_v5 * 0x1000000) >> 1) & 0x7f7f7f7f;
    temp_v5 = ((temp_v5 + (temp_v5 >> 8) + temp_v6 * 0x1000000) >> 1) & 0x7f7f7f7f;
    temp_v6 = ((temp_v6 + (temp_v6 >> 8) + temp_v7 * 0x1000000) >> 1) & 0x7f7f7f7f;
    temp_v7 = ((temp_v7 + (temp_v7 >> 8) + (unsigned int)(unsigned char)((unsigned char)param_1[0x84] >> 1) * 0x1000000) >> 1) &
            0x7f7f7f7f;
    *param_2 = temp_v0 + temp_v4;
    param_2[1] = temp_v1 + temp_v5;
    param_2[2] = temp_v2 + temp_v6;
    param_2[3] = temp_v3 + temp_v7;
    temp_v0 = (param_1[0x100] >> 1) & 0x7f7f7f7f;
    temp_v1 = (param_1[0x101] >> 1) & 0x7f7f7f7f;
    temp_v2 = (param_1[0x102] >> 1) & 0x7f7f7f7f;
    temp_v3 = (param_1[0x103] >> 1) & 0x7f7f7f7f;
    temp_v0 = ((temp_v0 + (temp_v0 >> 8) + temp_v1 * 0x1000000) >> 1) & 0x7f7f7f7f;
    temp_v1 = ((temp_v1 + (temp_v1 >> 8) + temp_v2 * 0x1000000) >> 1) & 0x7f7f7f7f;
    temp_v2 = ((temp_v2 + (temp_v2 >> 8) + temp_v3 * 0x1000000) >> 1) & 0x7f7f7f7f;
    temp_v3 = ((temp_v3 + (temp_v3 >> 8) + (unsigned int)(unsigned char)((unsigned char)param_1[0x104] >> 1) * 0x1000000) >> 1) &
            0x7f7f7f7f;
    param_2[0x80] = temp_v4 + temp_v0;
    param_2[0x81] = temp_v5 + temp_v1;
    param_2[0x82] = temp_v6 + temp_v2;
    param_2[0x83] = temp_v7 + temp_v3;
    param_2 = param_2 + 0x100;
    param_3 = param_3 - 2;
    param_1 = param_1 + 0x100;
  } while (param_3 != 0);
  return;
}
