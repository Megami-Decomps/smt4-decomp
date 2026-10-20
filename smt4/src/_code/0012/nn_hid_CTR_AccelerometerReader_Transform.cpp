/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_hid_CTR_AccelerometerReader_Transform` (_code @ 0x128ab4, 0x178 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(float *, int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void nn_hid_CTR_AccelerometerReader_Transform(int param_1,short *param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  
  if (*(char *)(param_1 + 0x48) != '\0') {
    *param_2 = *param_2 - *(short *)(param_1 + 0xe);
    param_2[1] = param_2[1] - *(short *)(param_1 + 0x10);
    param_2[2] = param_2[2] - *(short *)(param_1 + 0x12);
  }
  if (*(char *)(param_1 + 0x49) != '\0') {
    if (*(int *)(param_1 + 0x18) == 0x3f800000) {
      temp_v0 = in_fpscr & 0xfffffff;
      in_fpscr = temp_v0 | ((unsigned int)(*(float *)(param_1 + 0x1c) == 0.0f) << 0x1e);
      temp_v2 = 0;
      if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        in_fpscr = temp_v0 | ((unsigned int)(*(float *)(param_1 + 0x20) == 0.0f) << 0x1e);
        temp_v2 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
      }
      if (temp_v2) {
        temp_v0 = in_fpscr & 0xfffffff;
        in_fpscr = temp_v0 | ((unsigned int)(*(float *)(param_1 + 0x24) == 0.0f) << 0x1e);
        temp_v2 = 0;
        if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
          in_fpscr = temp_v0 | ((unsigned int)(*(float *)(param_1 + 0x28) == 0.0f) << 0x1e);
          temp_v2 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
        }
        if (temp_v2) {
          temp_v2 = 0;
          if (*(int *)(param_1 + 0x2c) == 0x3f800000) {
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 0x30) == 0.0f) << 0x1e);
            temp_v2 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
          }
          if (temp_v2) {
            temp_v0 = in_fpscr & 0xfffffff;
            in_fpscr = temp_v0 | ((unsigned int)(*(float *)(param_1 + 0x34) == 0.0f) << 0x1e);
            temp_v2 = 0;
            if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
              in_fpscr = temp_v0 | ((unsigned int)(*(float *)(param_1 + 0x38) == 0.0f) << 0x1e);
              temp_v2 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
            }
            temp_v1 = 0;
            if (temp_v2) {
              in_fpscr = (in_fpscr & 0xfffffff) |
                         ((unsigned int)(*(float *)(param_1 + 0x3c) == 0.0f) << 0x1e);
              temp_v1 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
            }
            if (temp_v1) {
              temp_v2 = 0;
              if (*(int *)(param_1 + 0x40) == 0x3f800000) {
                in_fpscr = (in_fpscr & 0xfffffff) |
                           ((unsigned int)(*(float *)(param_1 + 0x44) == 0.0f) << 0x1e);
                temp_v2 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
              }
              if (temp_v2) {
                return;
              }
            }
          }
        }
      }
    }
    temp_v3 = (float)VectorSignedToFloat((int)*param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = (float)VectorSignedToFloat((int)param_2[2],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = (float)VectorSignedToFloat((int)param_2[1],(unsigned char)(in_fpscr >> 0x16) & 3);
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v3,param_1 + 0x18);
    *param_2 = (short)(int)temp_v3;
    param_2[1] = (short)(int)temp_v4;
    param_2[2] = (short)(int)temp_v5;
  }
  return;
}

} /* extern "C" */
