/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050c2dc` (_code @ 0x50c2dc, 0x290 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
extern unsigned int FUN_001931d8(int);


void FUN_0050c2dc(int *param_1,int param_2,float *param_3)

{
/* irregular: 1 goto(s) */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  switch(*(unsigned int *)(*param_1 + 0x14)) {
  case 0:
    temp_v4 = param_3[1];
    temp_v5 = param_3[2];
    temp_v6 = param_3[3];
    *(float *)(param_2 + 0xbc) = *param_3;
    *(float *)(param_2 + 0xc0) = temp_v4;
    *(float *)(param_2 + 0xc4) = temp_v5;
    *(float *)(param_2 + 200) = temp_v6;
    temp_v0 = FUN_001931d8(param_2 + 0xbc);
    *(unsigned int *)(param_2 + 0xfc) = temp_v0;
    return;
  case 1:
    temp_v4 = param_3[1];
    temp_v5 = param_3[2];
    temp_v6 = param_3[3];
    *(float *)(param_2 + 0xcc) = *param_3;
    *(float *)(param_2 + 0xd0) = temp_v4;
    *(float *)(param_2 + 0xd4) = temp_v5;
    *(float *)(param_2 + 0xd8) = temp_v6;
    temp_v0 = FUN_001931d8(param_2 + 0xcc);
    *(unsigned int *)(param_2 + 0x100) = temp_v0;
    return;
  case 2:
    temp_v4 = param_3[1];
    temp_v5 = param_3[2];
    temp_v6 = param_3[3];
    *(float *)(param_2 + 0xdc) = *param_3;
    *(float *)(param_2 + 0xe0) = temp_v4;
    *(float *)(param_2 + 0xe4) = temp_v5;
    *(float *)(param_2 + 0xe8) = temp_v6;
    temp_v0 = FUN_001931d8(param_2 + 0xdc);
    *(unsigned int *)(param_2 + 0x104) = temp_v0;
    return;
  case 3:
    temp_v4 = param_3[1];
    temp_v5 = param_3[2];
    temp_v6 = param_3[3];
    *(float *)(param_2 + 0xec) = *param_3;
    *(float *)(param_2 + 0xf0) = temp_v4;
    *(float *)(param_2 + 0xf4) = temp_v5;
    *(float *)(param_2 + 0xf8) = temp_v6;
    temp_v0 = FUN_001931d8(param_2 + 0xec);
    *(unsigned int *)(param_2 + 0x108) = temp_v0;
    return;
  case 4:
    temp_v6 = *param_3;
    temp_v5 = param_3[1];
    temp_v4 = param_3[2];
    temp_v7 = 1.0f / romwright_sqrt_4(temp_v6 * temp_v6 + temp_v5 * temp_v5 + temp_v4 * temp_v4);
    *(float *)(param_2 + 0x10c) = temp_v6 * temp_v7;
    *(float *)(param_2 + 0x110) = temp_v5 * temp_v7;
    *(float *)(param_2 + 0x114) = temp_v4 * temp_v7;
    return;
  case 5:
    temp_v5 = *param_3;
    *(float *)(param_2 + 0x120) = temp_v5;
    temp_v4 = *(float *)(param_2 + 0x124) - temp_v5;
    if ((int)romwright_fabs_4(temp_v4) < 0x3c23d70a) {
      temp_v4 = 0.01f;
    }
    temp_v6 = 1.0f / temp_v4;
    temp_v3 = 0;
    if (((unsigned int)temp_v6 & 0x80000000) != 0) {
      temp_v3 = 0x80000;
    }
    if (romwright_fabs_4(temp_v6) == 0.0f) {
      temp_v2 = 0;
      temp_v3 = (((unsigned int)temp_v6 & 0x7fffff) >> 0xb) | temp_v3 | ((temp_v2 & 0x7f) << 0xc);
    }
    else {
      temp_v2 = ((unsigned int)romwright_fabs_4(temp_v6) >> 0x17) - 0x40;
      if (-1 < (int)temp_v2) {
        if ((int)temp_v2 >= 0x80) {
          temp_v3 = 0x7f000;
        }
        else {
          temp_v3 = (((unsigned int)temp_v6 & 0x7fffff) >> 0xb) | temp_v3 | ((temp_v2 & 0x7f) << 0xc);
        }
      }
    }
    *(unsigned int *)(param_2 + 0x128) = temp_v3;
    temp_v4 = -temp_v5 / temp_v4;
    temp_v3 = 0;
    if (((unsigned int)temp_v4 & 0x80000000) != 0) {
      temp_v3 = 0x80000;
    }
    temp_v2 = (unsigned int)temp_v4 & 0x7fffff;
    if (romwright_fabs_4(temp_v4) == 0.0f) {
      temp_v1 = 0;
      break;
    }
joined_r0x0050c554:
    temp_v1 = ((unsigned int)romwright_fabs_4(temp_v4) >> 0x17) - 0x40;
    if ((int)temp_v1 < 0) {
      *(unsigned int *)(param_2 + 300) = temp_v3;
      return;
    }
    if ((int)temp_v1 >= 0x80) {
      temp_v3 = 0x7f000;
      *(unsigned int *)(param_2 + 300) = temp_v3;
      return;
    }
    break;
  case 6:
    temp_v4 = *param_3;
    *(float *)(param_2 + 0x124) = temp_v4;
    temp_v4 = temp_v4 - *(float *)(param_2 + 0x120);
    if ((int)romwright_fabs_4(temp_v4) < 0x3c23d70a) {
      temp_v4 = 0.01f;
    }
    temp_v5 = 1.0f / temp_v4;
    temp_v3 = 0;
    if (((unsigned int)temp_v5 & 0x80000000) != 0) {
      temp_v3 = 0x80000;
    }
    if (romwright_fabs_4(temp_v5) == 0.0f) {
      temp_v2 = 0;
      temp_v3 = (((unsigned int)temp_v5 & 0x7fffff) >> 0xb) | temp_v3 | ((temp_v2 & 0x7f) << 0xc);
    }
    else {
      temp_v2 = ((unsigned int)romwright_fabs_4(temp_v5) >> 0x17) - 0x40;
      if (-1 < (int)temp_v2) {
        if ((int)temp_v2 >= 0x80) {
          temp_v3 = 0x7f000;
        }
        else {
          temp_v3 = (((unsigned int)temp_v5 & 0x7fffff) >> 0xb) | temp_v3 | ((temp_v2 & 0x7f) << 0xc);
        }
      }
    }
    *(unsigned int *)(param_2 + 0x128) = temp_v3;
    temp_v4 = -*(float *)(param_2 + 0x120) / temp_v4;
    temp_v3 = 0;
    if (((unsigned int)temp_v4 & 0x80000000) != 0) {
      temp_v3 = 0x80000;
    }
    temp_v2 = (unsigned int)temp_v4 & 0x7fffff;
    if (romwright_fabs_4(temp_v4) != 0.0f) goto joined_r0x0050c554;
    temp_v1 = 0;
    break;
  default:
    return;
  }
  temp_v3 = (temp_v2 >> 0xb) | temp_v3 | ((temp_v1 & 0x7f) << 0xc);
  *(unsigned int *)(param_2 + 300) = temp_v3;
  return;
}
