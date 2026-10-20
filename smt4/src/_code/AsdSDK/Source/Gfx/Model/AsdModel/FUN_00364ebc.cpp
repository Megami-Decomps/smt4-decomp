/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00364ebc` (_code @ 0x364ebc, 0x330 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e3494(void);
int VectorFloatToUnsigned(double, int);
int nw_gfx_internal_FastWordCopyAsm_8(unsigned int, unsigned int [3]);

typedef int romwright_code(...);
/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern unsigned int g_commandBufferCursor; /* 0x4652a0 */
extern unsigned char DAT_00472098; /* 0x472098 */
extern unsigned int DAT_004720a0; /* 0x4720a0 */
extern unsigned int DAT_004720ec; /* 0x4720ec */
extern float DAT_004720f4; /* 0x4720f4 */
extern float DAT_004720f8; /* 0x4720f8 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_003e3494. */
/* Supplied declaration required: nw_gfx_internal_FastWordCopyAsm_8. */


void FUN_00364ebc(int param_1,int *param_2,float *param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  float temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7 [3];
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  *(int **)(param_1 + 0x18) = param_2;
  if (param_2 == (int *)0x0) {
    return;
  }
  (**(romwright_code **)(*param_2 + 0x10))();
  FUN_003e3494();
  puVar1 = (unsigned int *)(**(romwright_code **)(**(int **)(param_1 + 0x18) + 0xc))();
  temp_v6 = *puVar1;
  temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x18) + 0xc))();
  (*(unsigned int *)((unsigned char *)&(*(unsigned int *)((unsigned char *)&DAT_00472098 - 0x4)) + 0x4)) = *(unsigned int *)(temp_v0 + 4);
  temp_v3 = VectorFloatToUnsigned(*param_3,3);
  temp_v0 = VectorFloatToUnsigned(param_3[1],3);
  temp_v10 = 0;
  temp_v4 = (param_3[2] - *param_3) * 0.5f;
  temp_v7[0] = 0;
  if (((unsigned int)temp_v4 & 0x80000000) != 0) {
    temp_v7[0] = 0x800000;
  }
  if (romwright_fabs_4(temp_v4) == 0.0f) {
    temp_v1 = 0;
    temp_v7[0] = (((unsigned int)temp_v4 & 0x7fffff) >> 7) | temp_v7[0] | ((temp_v1 & 0x7f) << 0x10);
  }
  else {
    temp_v1 = ((unsigned int)romwright_fabs_4(temp_v4) >> 0x17) - 0x40;
    if (-1 < (int)temp_v1) {
      if ((int)temp_v1 >= 0x80) {
        temp_v7[0] = 0x7f0000;
      }
      else {
        temp_v7[0] = (((unsigned int)temp_v4 & 0x7fffff) >> 7) | temp_v7[0] | ((temp_v1 & 0x7f) << 0x10);
      }
    }
  }
  temp_v7[1] = 0x803f0041;
  temp_v4 = 2.0f / (param_3[2] - *param_3);
  temp_v7[2] = 0;
  if (((unsigned int)temp_v4 & 0x80000000) != 0) {
    temp_v7[2] = 0x40000000;
  }
  temp_v1 = 0;
  if (romwright_fabs_4(temp_v4) != 0.0f) {
    temp_v1 = ((unsigned int)romwright_fabs_4(temp_v4) >> 0x17) - 0x40;
    if (-1 < (int)temp_v1) {
      if ((int)temp_v1 >= 0x80) {
        temp_v7[2] = 0x3f800000;
      }
      else {
        temp_v7[2] = ((unsigned int)temp_v4 & 0x7fffff) | temp_v7[2] | ((temp_v1 & 0x7f) << 0x17);
      }
    }
  }
  else {
    temp_v7[2] = ((unsigned int)temp_v4 & 0x7fffff) | temp_v7[2] | ((temp_v1 & 0x7f) << 0x17);
  }
  temp_v7[2] = temp_v7[2] << 1;
  temp_v4 = (param_3[3] - param_3[1]) * 0.5f;
  temp_v8 = 0;
  if (((unsigned int)temp_v4 & 0x80000000) != 0) {
    temp_v8 = 0x800000;
  }
  if (romwright_fabs_4(temp_v4) == 0.0f) {
    temp_v1 = 0;
    temp_v8 = (((unsigned int)temp_v4 & 0x7fffff) >> 7) | temp_v8 | ((temp_v1 & 0x7f) << 0x10);
  }
  else {
    temp_v1 = ((unsigned int)romwright_fabs_4(temp_v4) >> 0x17) - 0x40;
    if (-1 < (int)temp_v1) {
      if ((int)temp_v1 >= 0x80) {
        temp_v8 = 0x7f0000;
      }
      else {
        temp_v8 = (((unsigned int)temp_v4 & 0x7fffff) >> 7) | temp_v8 | ((temp_v1 & 0x7f) << 0x10);
      }
    }
  }
  temp_v4 = 2.0f / (param_3[3] - param_3[1]);
  temp_v1 = 0;
  if (((unsigned int)temp_v4 & 0x80000000) != 0) {
    temp_v1 = 0x40000000;
  }
  temp_v2 = 0;
  if (romwright_fabs_4(temp_v4) != 0.0f) {
    temp_v2 = ((unsigned int)romwright_fabs_4(temp_v4) >> 0x17) - 0x40;
    if (-1 < (int)temp_v2) {
      if ((int)temp_v2 >= 0x80) {
        temp_v1 = 0x3f800000;
      }
      else {
        temp_v1 = ((unsigned int)temp_v4 & 0x7fffff) | temp_v1 | ((temp_v2 & 0x7f) << 0x17);
      }
    }
  }
  else {
    temp_v1 = ((unsigned int)temp_v4 & 0x7fffff) | temp_v1 | ((temp_v2 & 0x7f) << 0x17);
  }
  temp_v9 = temp_v1 << 1;
  temp_v11 = (temp_v3 & 0xffff) | (temp_v0 << 0x10);
  temp_v12 = 0xf0068;
  (*(unsigned int *)((unsigned char *)&DAT_00472098 - 0x4)) = temp_v6;
  nw_gfx_internal_FastWordCopyAsm_8(g_commandBufferCursor,temp_v7);
  temp_v5 = param_3[4];
  temp_v4 = param_3[5];
  DAT_004720f4 = 1.0f;
  if ((temp_v5 <= 1.0f) && (DAT_004720f4 = 0.0f, 0.0f <= temp_v5)) {
    DAT_004720f4 = temp_v5;
  }
  DAT_004720f8 = 1.0f;
  if ((temp_v4 <= 1.0f) && (DAT_004720f8 = 0.0f, 0.0f <= temp_v4)) {
    DAT_004720f8 = temp_v4;
  }
  temp_v4 = DAT_004720f4 - DAT_004720f8;
  DAT_004720a0 = 0;
  if (((unsigned int)temp_v4 & 0x80000000) != 0) {
    DAT_004720a0 = 0x800000;
  }
  if (romwright_fabs_4(temp_v4) == 0.0f) {
    temp_v3 = 0;
  }
  else {
    temp_v3 = ((unsigned int)romwright_fabs_4(temp_v4) >> 0x17) - 0x40;
    if ((int)temp_v3 < 0) {
      temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x18) + 0xc))();
      DAT_004720ec = (unsigned int)*(unsigned short *)(temp_v0 + 10);
      return;
    }
    if ((int)temp_v3 >= 0x80) {
      DAT_004720a0 = 0x7f0000;
      temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x18) + 0xc))();
      DAT_004720ec = (unsigned int)*(unsigned short *)(temp_v0 + 10);
      return;
    }
  }
  DAT_004720a0 = (((unsigned int)temp_v4 & 0x7fffff) >> 7) | DAT_004720a0 | ((temp_v3 & 0x7f) << 0x10);
  temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x18) + 0xc))();
  DAT_004720ec = (unsigned int)*(unsigned short *)(temp_v0 + 10);
  return;
}

} /* extern "C" */
