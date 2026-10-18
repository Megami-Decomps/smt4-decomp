/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001940b0` (_code @ 0x1940b0, 0x1f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_4_stack;

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif


void FUN_001940b0(int param_1,int *param_2,unsigned int param_3,int param_4)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  float temp_v4;
  float temp_v5;
  
  param_3 = param_3 & 0xffff;
  temp_v0 = *param_2 + param_3 * 0x278;
  temp_v3 = temp_v0 + 4;
  if (*(char *)(param_1 + 0x29) == '\0') {
    *(unsigned char *)(temp_v3 + param_4 + 0x164) = 0;
  }
  else {
    temp_v1 = temp_v3 + param_4;
    *(unsigned char *)(temp_v1 + 0x164) = 1;
    if (*(char *)(param_1 + 0x28) != '\v') {
      *(unsigned char *)(temp_v1 + 0x16c) = 0;
      *(unsigned int *)(*param_2 + param_3 * 0x278 + param_4 * 4 + 0x238) = 0;
    }
    else {
      *(unsigned char *)(temp_v1 + 0x16c) = 1;
      *(unsigned int *)(*param_2 + param_3 * 0x278 + param_4 * 4 + 0x238) =
           *(unsigned int *)(param_1 + 0x50);
      *(unsigned char *)(temp_v0 + 0x1a0) = *(unsigned char *)(param_1 + 0x2b) & 0xf;
      *(unsigned char *)(temp_v0 + 0x1a2) = *(unsigned char *)(param_1 + 0x2b) >> 4;
      *(unsigned char *)(temp_v0 + 0x1a1) = **(unsigned char **)(param_1 + 0x50) & 1;
    }
    if ((*(unsigned char *)(param_1 + 0x2a) & 2) != 0) {
      *(unsigned char *)(temp_v1 + 0x174) = 1;
      temp_v1 = temp_v3 + param_4 * 0x2c;
      temp_v4 = 1.0f / (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x54));
      temp_v5 = -(*(float *)(param_1 + 0x54) * temp_v4);
      temp_v0 = 0;
      if ((romwright_fabs_4(temp_v4) != 0.0f) && (temp_v0 = ((unsigned int)romwright_fabs_4(temp_v4) >> 0x17) - 0x40, -1 >= temp_v0)) {
        temp_v2 = ((unsigned int)temp_v4 >> 0x1f) << 0x13;
      }
      else {
        temp_v2 = (((unsigned int)temp_v4 & 0x7fffff) >> 0xb) | (temp_v0 << 0xc) | (((unsigned int)temp_v4 >> 0x1f) << 0x13)
        ;
      }
      *(unsigned int *)(temp_v1 + 0x24) = temp_v2;
      temp_v0 = 0;
      if ((romwright_fabs_4(temp_v5) != 0.0f) && (temp_v0 = ((unsigned int)romwright_fabs_4(temp_v5) >> 0x17) - 0x40, -1 >= temp_v0)) {
        temp_v2 = ((unsigned int)temp_v5 >> 0x1f) << 0x13;
      }
      else {
        temp_v2 = (((unsigned int)temp_v5 & 0x7fffff) >> 0xb) | (temp_v0 << 0xc) | (((unsigned int)temp_v5 >> 0x1f) << 0x13)
        ;
      }
      *(unsigned int *)(temp_v1 + 0x20) = temp_v2;
      *(unsigned int *)(*param_2 + param_3 * 0x278 + param_4 * 4 + 600) =
           *(unsigned int *)(param_1 + 0x4c);
    }
    else {
      *(unsigned char *)(temp_v1 + 0x174) = 0;
      *(unsigned int *)(*param_2 + param_3 * 0x278 + param_4 * 4 + 600) = 0;
    }
    temp_v3 = temp_v3 + param_4 * 0x2c;
    if ((*(unsigned char *)(param_1 + 0x2a) & 1) != 0) {
      *(unsigned char *)(temp_v3 + 5) = 1;
    }
    else {
      *(unsigned char *)(temp_v3 + 5) = 0;
    }
    *(unsigned int *)(*param_2 + param_3 * 0x278 + param_4 * 0x10 + 0x1b4) =
         *(unsigned int *)(param_1 + 0x30);
    *(unsigned int *)(*param_2 + param_3 * 0x278 + param_4 * 0x10 + 0x1b8) =
         *(unsigned int *)(param_1 + 0x34);
    *(unsigned int *)(*param_2 + param_3 * 0x278 + param_4 * 0x10 + 0x1bc) =
         *(unsigned int *)(param_1 + 0x38);
    *(unsigned int *)(*param_2 + param_3 * 0x278 + param_4 * 0x10 + 0x1c0) =
         *(unsigned int *)(param_1 + 0x3c);
  }
  return;
}
