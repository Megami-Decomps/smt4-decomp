/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016ecc8` (_code @ 0x16ecc8, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern short nn_hid_CTR_detail_CalculateAccelerationTightly(int, int, int, int);
/* Supplied declaration required: nn_hidlow_CTR_AccelerometerLifoRing_ReadData. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void FUN_0016ecc8(int *param_1,int param_2,int *param_3,unsigned int param_4)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int temp_v0;
  short temp_v1;
  short *psVar3;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  unsigned long long temp_v6;
  int *temp_v7;
  int *temp_v8;
  float temp_v9;
  
  temp_v8 = param_1 + 0x13;
  temp_v7 = param_1 + 0x14;
  nn_hidlow_CTR_AccelerometerLifoRing_ReadData
            (*(unsigned int *)(*param_1 + 4),param_2,param_4,param_3);
  temp_v2 = *param_3 - 1;
  if (-1 < temp_v2) {
    temp_v6 = 0;
    do {
      psVar3 = (short *)(param_2 + temp_v2 * 6);
      temp_v1 = nn_hid_CTR_detail_CalculateAccelerationTightly
                        ((int)*psVar3,(int)(short)param_1[2],(int)(short)param_1[1],
                         (int)*(short *)((int)param_1 + 6));
      *psVar3 = temp_v1;
      *(short *)(param_1 + 2) = temp_v1;
      temp_v1 = nn_hid_CTR_detail_CalculateAccelerationTightly
                        ((int)psVar3[1],(int)*(short *)((int)param_1 + 10),(int)(short)param_1[1],
                         (int)*(short *)((int)param_1 + 6));
      psVar3[1] = temp_v1;
      *(short *)((int)param_1 + 10) = temp_v1;
      temp_v1 = nn_hid_CTR_detail_CalculateAccelerationTightly
                        ((int)psVar3[2],(int)(short)param_1[3],(int)(short)param_1[1],
                         (int)*(short *)((int)param_1 + 6));
      psVar3[2] = temp_v1;
      *(short *)(param_1 + 3) = temp_v1;
      if ((char)param_1[0x12] != '\0') {
        *psVar3 = *psVar3 - *(short *)((int)param_1 + 0xe);
        psVar3[1] = psVar3[1] - (short)param_1[4];
        psVar3[2] = psVar3[2] - *(short *)((int)param_1 + 0x12);
      }
      if (*(char *)((int)param_1 + 0x49) != '\0') {
        temp_v5 = (float)temp_v6;
        temp_v4 = 0;
        if (param_1[6] == 0x3f800000) {
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)param_1[7] == temp_v5) << 0x1e);
          temp_v4 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
        }
        if (temp_v4) {
          temp_v0 = in_fpscr & 0xfffffff;
          in_fpscr = temp_v0 | ((unsigned int)((float)param_1[8] == temp_v5) << 0x1e);
          temp_v4 = 0;
          if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
            in_fpscr = temp_v0 | ((unsigned int)((float)param_1[9] == temp_v5) << 0x1e);
            temp_v4 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
          }
          temp_v3 = 0;
          if (temp_v4) {
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)param_1[10] == temp_v5) << 0x1e);
            temp_v3 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
          }
          if (temp_v3) {
            temp_v4 = 0;
            if (param_1[0xb] == 0x3f800000) {
              in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)param_1[0xc] == temp_v5) << 0x1e);
              temp_v4 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
            }
            if (temp_v4) {
              temp_v0 = in_fpscr & 0xfffffff;
              in_fpscr = temp_v0 | ((unsigned int)((float)param_1[0xd] == temp_v5) << 0x1e);
              temp_v4 = 0;
              if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
                in_fpscr = temp_v0 | ((unsigned int)((float)param_1[0xe] == temp_v5) << 0x1e);
                temp_v4 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
              }
              temp_v3 = 0;
              if (temp_v4) {
                in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)param_1[0xf] == temp_v5) << 0x1e);
                temp_v3 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
              }
              if (temp_v3) {
                temp_v4 = 0;
                if (param_1[0x10] == 0x3f800000) {
                  in_fpscr = (in_fpscr & 0xfffffff) |
                             ((unsigned int)((float)param_1[0x11] == temp_v5) << 0x1e);
                  temp_v4 = romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0);
                }
                if (temp_v4) goto LAB_0016eed4;
              }
            }
          }
        }
        temp_v7 = (int *)VectorSignedToFloat((int)*psVar3,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v9 = (float)VectorSignedToFloat((int)psVar3[2],(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = (int *)VectorSignedToFloat((int)psVar3[1],(unsigned char)(in_fpscr >> 0x16) & 3);
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v7,param_1 + 6);
        *psVar3 = (short)(int)(float)temp_v7;
        psVar3[1] = (short)(int)(float)temp_v8;
        psVar3[2] = (short)(int)temp_v9;
      }
LAB_0016eed4:
      temp_v2 = temp_v2 - 1;
    } while (-1 < temp_v2);
  }
  return;
}
