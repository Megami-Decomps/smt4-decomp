/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dfaf0` (_code @ 0x3dfaf0, 0x210 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(unsigned int, int);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


unsigned int * FUN_003dfaf0(float *param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0;
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(*param_1 == 0.0f) << 0x1e);
  if (romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0)) {
    *param_2 = 1;
    param_2[1] = 0xf006d;
    temp_v3 = param_1[3] - param_1[4];
    temp_v2 = 0;
    if ((romwright_fabs_4(temp_v3) != 0.0f) && (temp_v2 = ((unsigned int)romwright_fabs_4(temp_v3) >> 0x17) - 0x40, -1 >= temp_v2)) {
      temp_v1 = ((unsigned int)temp_v3 >> 0x1f) << 0x17;
    }
    else {
      temp_v1 = (((unsigned int)temp_v3 & 0x7fffff) >> 7) | (temp_v2 << 0x10) | (((unsigned int)temp_v3 >> 0x1f) << 0x17);
    }
    param_2[2] = temp_v1;
    param_2[3] = 0xf004d;
    if (*(char *)(param_1 + 1) == '\0') {
      temp_v3 = param_1[3];
    }
    else {
      temp_v3 = (float)VectorSignedToFloat((1 << *(signed char *)(param_1 + 5)) - 1,
                                         (unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v3 = param_1[3] - ((param_1[3] - param_1[4]) * 128.0f * param_1[2]) / temp_v3;
    }
    temp_v2 = 0;
    if ((romwright_fabs_4(temp_v3) != 0.0f) && (temp_v2 = ((unsigned int)romwright_fabs_4(temp_v3) >> 0x17) - 0x40, -1 >= temp_v2)) {
      temp_v0 = ((unsigned int)temp_v3 >> 0x1f) << 0x17;
    }
    else {
      temp_v0 = (((unsigned int)temp_v3 & 0x7fffff) >> 7) | (temp_v2 << 0x10) | (((unsigned int)temp_v3 >> 0x1f) << 0x17);
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0xf006d;
    temp_v3 = -*param_1;
    temp_v2 = 0;
    if ((romwright_fabs_4(temp_v3) != 0.0f) && (temp_v2 = ((unsigned int)romwright_fabs_4(temp_v3) >> 0x17) - 0x40, -1 >= temp_v2)) {
      temp_v1 = ((unsigned int)temp_v3 >> 0x1f) << 0x17;
    }
    else {
      temp_v1 = (((unsigned int)temp_v3 & 0x7fffff) >> 7) | (temp_v2 << 0x10) | (((unsigned int)temp_v3 >> 0x1f) << 0x17);
    }
    param_2[2] = temp_v1;
    param_2[3] = 0xf004d;
    if (*(char *)(param_1 + 1) != '\0') {
      if (*(unsigned char *)(param_1 + 5) != 0x18) {
        temp_v3 = (float)VectorSignedToFloat((1 << (unsigned int)*(unsigned char *)(param_1 + 5)) - 1,
                                           (unsigned char)(temp_v0 >> 0x16) & 3);
        temp_v3 = param_1[2] / temp_v3;
        temp_v2 = 0;
        if ((romwright_fabs_4(temp_v3) == 0.0f) || (temp_v2 = ((unsigned int)romwright_fabs_4(temp_v3) >> 0x17) - 0x40, temp_v2 >= 0)) {
          temp_v1 = (((unsigned int)temp_v3 & 0x7fffff) >> 7) | (temp_v2 << 0x10) |
                  (((unsigned int)temp_v3 >> 0x1f) << 0x17);
        }
        else {
          temp_v1 = ((unsigned int)temp_v3 >> 0x1f) << 0x17;
        }
      }
      else {
        temp_v3 = (param_1[2] * 128.0f) / 16777215.0f;
        temp_v2 = 0;
        if ((romwright_fabs_4(temp_v3) == 0.0f) || (temp_v2 = ((unsigned int)romwright_fabs_4(temp_v3) >> 0x17) - 0x40, -1 < temp_v2)) {
          temp_v1 = (((unsigned int)temp_v3 & 0x7fffff) >> 7) | (temp_v2 << 0x10) |
                  (((unsigned int)temp_v3 >> 0x1f) << 0x17);
        }
        else {
          temp_v1 = ((unsigned int)temp_v3 >> 0x1f) << 0x17;
        }
      }
      temp_v4 = VectorUnsignedToFloat(temp_v1,(unsigned char)(temp_v0 >> 0x16) & 3);
    }
    temp_v0 = VectorFloatToUnsigned(temp_v4,3);
  }
  param_2[4] = temp_v0;
  param_2[5] = 0xf004e;
  return param_2 + 6;
}

} /* extern "C" */
