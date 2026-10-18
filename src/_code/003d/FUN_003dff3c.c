/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dff3c` (_code @ 0x3dff3c, 0x170 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern unsigned char LAB_00200080; /* 0x200080 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


unsigned int * FUN_003dff3c(char *param_1,unsigned int *param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned int *puVar5;
  char *pcVar6;
  int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  float temp_v6;
  
  if (*param_1 != '\0') {
    *param_2 = 0xe40103;
    puVar5 = param_2 + 2;
    param_2[1] = 0x10100;
    temp_v1 = 0;
    if (param_4 != 0) {
      *puVar5 = 0;
      param_2[3] = (unsigned int)&LAB_00200080;
      param_2[4] = 0;
      puVar5 = param_2 + 6;
      param_2[5] = 0;
    }
    temp_v6 = *(float *)(param_1 + 4);
    if ((0.0f < temp_v6) && ((unsigned int)romwright_fabs_4(temp_v6) >> 0x17 != 0xff)) {
      if ((int)(temp_v6 * 16777216.0f) < 0x4b800000) {
        temp_v1 = VectorFloatToUnsigned(temp_v6 * 16777216.0f,3);
      }
      else {
        temp_v1 = 0xffffff;
      }
    }
    *puVar5 = (unsigned int)(param_1[1] == '\0') | (temp_v1 & 0xfffffffe);
    puVar5[1] = 0xf008b;
    temp_v6 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x10);
    temp_v3 = 0;
    if ((romwright_fabs_4(temp_v6) != 0.0f) && (temp_v3 = ((unsigned int)romwright_fabs_4(temp_v6) >> 0x17) - 0x70, -1 >= temp_v3)) {
      temp_v1 = ((unsigned int)temp_v6 >> 0x1f) << 0xf;
    }
    else {
      temp_v1 = (((((unsigned int)temp_v6 & 0xe07fffff) >> 0xd) | (temp_v3 << 10)) & 0xffff) |
              (((unsigned int)temp_v6 >> 0x1f) << 0xf);
    }
    temp_v6 = -*(float *)(param_1 + 0xc);
    temp_v3 = 0;
    if ((romwright_fabs_4(temp_v6) != 0.0f) && (temp_v3 = ((unsigned int)romwright_fabs_4(temp_v6) >> 0x17) - 0x70, -1 >= temp_v3)) {
      temp_v2 = ((unsigned int)temp_v6 >> 0x1f) << 0xf;
    }
    else {
      temp_v2 = (((((unsigned int)temp_v6 & 0xe07fffff) >> 0xd) | (temp_v3 << 10)) & 0xffff) |
              (((unsigned int)temp_v6 >> 0x1f) << 0xf);
    }
    puVar5[2] = temp_v1 | (temp_v2 << 0x10);
    param_2 = puVar5 + 4;
    puVar5[3] = 0xf0130;
  }
  if (param_3 == 0) {
    return param_2;
  }
  piVar4 = (int *)(*(int *)(param_1 + 0x14) + 0x7c);
  *param_2 = 1;
  param_2[1] = 0xf0111;
  param_2[2] = 1;
  param_2[3] = 0xf0110;
  pcVar6 = (char *)*piVar4;
  if (pcVar6[0x18] != '\0') {
    param_2[4] = 0xf;
    param_2[5] = 0x10112;
    param_2[6] = 0xf;
    param_2[7] = 0x10113;
    param_2[8] = 0;
    param_2[9] = 0x10114;
    param_2[10] = 0;
    param_2[0xb] = 0x10115;
    return param_2 + 0xc;
  }
  temp_v0 = pcVar6[0x50];
  if (temp_v0 != '\0') {
    temp_v4 = temp_v0 == '\x0f';
    if (temp_v4) {
      temp_v0 = *pcVar6;
    }
    temp_v5 = temp_v4 && temp_v0 == '\0';
    if (temp_v4 && temp_v0 == '\0') {
      temp_v5 = pcVar6[0x10] == '\0';
    }
    if (!temp_v5) {
      temp_v1 = 0xf;
    }
    else {
      temp_v1 = 0;
    }
  }
  else {
    temp_v1 = 0;
  }
  param_2[4] = temp_v1;
  param_2[5] = 0x10112;
  temp_v1 = 0;
  if (*(char *)(*piVar4 + 0x50) != '\0') {
    temp_v1 = 0xf;
  }
  param_2[6] = temp_v1;
  temp_v2 = 0;
  param_2[7] = 0x10113;
  temp_v3 = *piVar4;
  temp_v1 = 0;
  if (*(char *)(temp_v3 + 0x54) != '\0') {
    if (*(char *)(temp_v3 + 0x55) != '\0') {
      temp_v2 = 2;
      temp_v1 = temp_v2;
    }
    else if (*(char *)(temp_v3 + 0x50) != '\0') {
      temp_v2 = 2;
    }
  }
  if (*(char *)(temp_v3 + 0x38) != '\0') {
    if (*(char *)(temp_v3 + 0x39) != '\0') {
      temp_v2 = temp_v2 | 1;
      temp_v1 = temp_v1 | 1;
    }
    else if (*(char *)(temp_v3 + 0x50) != '\0') {
      temp_v2 = temp_v2 | 1;
    }
  }
  param_2[8] = temp_v2;
  param_2[9] = 0x10114;
  param_2[10] = temp_v1;
  param_2[0xb] = 0x10115;
  return param_2 + 0xc;
}
