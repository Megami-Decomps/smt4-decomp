/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192ac8` (_code @ 0x192ac8, 0x664 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00193c70(unsigned int *);
int FUN_00193f38(unsigned int *);
int FUN_00291434(float *, unsigned int, unsigned int, unsigned int);
int FUN_00291620(...);
int FUN_002916ac(void);
int VectorSignedToFloat(unsigned int, int);
int rt_memcpy_w(unsigned int *, unsigned int *, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_00193c70. */
/* Supplied declaration required: FUN_00193f38. */
/* Supplied declaration required: FUN_00291434. */
/* Supplied declaration required: FUN_00291620. */
/* Supplied declaration required: FUN_002916ac. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00192ac8(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 7 native warning(s); review required */
  short temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  
  temp_v7 = 0.0f;
  if ((unsigned int)(unsigned short)param_1[0xb3] == *param_1) {
    *(unsigned short *)(param_1 + 0xb3) = 0;
    *(unsigned short *)((int)param_1 + 0x2ce) = 0;
    temp_v0 = *(short *)((int)param_1 + 0x3ea) - 1;
    *(short *)((int)param_1 + 0x3ea) = temp_v0;
    param_1[0xb5] = 0;
    param_1[0xb6] = 0;
    param_1[0xb7] = 0;
    if (0 < temp_v0) {
      FUN_00193c70(param_1);
      return;
    }
    if (param_1 == (unsigned int *)0x0) {
      return;
    }
    if ((unsigned int *)param_1[0xe1] != (unsigned int *)0x0) {
      *(unsigned int *)param_1[0xe1] = 0;
    }
    FUN_002916ac();
    return;
  }
  FUN_00193f38(param_1);
  if ((char)param_1[0xe0] != '\0') {
    temp_v9 = 0.1f;
    temp_v8 = 0.01f;
    param_1[0xb5] = param_1[0x48];
    param_1[0xb6] = param_1[0x49];
    param_1[0xb7] = param_1[0x4a];
    temp_v1 = (char)param_1[0xe0];
    temp_v10 = temp_v7;
    temp_v11 = temp_v7;
    temp_v12 = temp_v7;
    if (temp_v1 != '\x01') {
      if (temp_v1 != '\x02') {
        if (temp_v1 == '\x03') {
          FUN_00291620(0,param_1[0x57],1);
          temp_v6 = (float)VectorSignedToFloat(param_1[0x56],(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 <= (float)param_1[0x48]) << 0x1d);
          temp_v9 = (in_s0 + temp_v6) * temp_v9 * temp_v9;
          if (!romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0)) {
            temp_v6 = (float)param_1[0xd2] - temp_v9;
            param_1[0xd2] = (unsigned int)temp_v6;
            FUN_00291620(1,param_1[0x55]);
            temp_v6 = (temp_v6 + (float)param_1[0xd2]) * temp_v8;
          }
          else {
            temp_v6 = (float)param_1[0xd2] + temp_v9;
            param_1[0xd2] = (unsigned int)temp_v6;
            FUN_00291620(0,param_1[0x55],1);
            temp_v6 = (temp_v6 + (float)param_1[0xd2]) * temp_v8;
          }
          temp_v3 = (temp_v3 & 0xfffffff) | ((unsigned int)(temp_v7 <= (float)param_1[0x49]) << 0x1d);
          if (!romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0)) {
            temp_v5 = (float)param_1[0xd3] - temp_v9;
            param_1[0xd3] = (unsigned int)temp_v5;
            FUN_00291620(1,param_1[0x55]);
            temp_v5 = (temp_v5 + (float)param_1[0xd3]) * temp_v8;
          }
          else {
            temp_v5 = (float)param_1[0xd3] + temp_v9;
            param_1[0xd3] = (unsigned int)temp_v5;
            FUN_00291620(0,param_1[0x55],1);
            temp_v5 = (temp_v5 + (float)param_1[0xd3]) * temp_v8;
          }
          temp_v3 = (temp_v3 & 0xfffffff) | ((unsigned int)(temp_v7 <= (float)param_1[0x4a]) << 0x1d);
          if (!romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0)) {
            temp_v9 = (float)param_1[0xd4] - temp_v9;
            param_1[0xd4] = (unsigned int)temp_v9;
            FUN_00291620(1,param_1[0x55]);
            temp_v12 = (temp_v9 + (float)param_1[0xd4]) * temp_v8;
          }
          else {
            temp_v9 = (float)param_1[0xd4] + temp_v9;
            param_1[0xd4] = (unsigned int)temp_v9;
            FUN_00291620(0,param_1[0x55],1);
            temp_v12 = (temp_v9 + (float)param_1[0xd4]) * temp_v8;
          }
          temp_v10 = temp_v6 * *(float *)(param_1[0xd5] + 0x14);
          temp_v11 = temp_v5 * *(float *)(param_1[0xd5] + 0x14);
          temp_v12 = temp_v12 * *(float *)(param_1[0xd5] + 0x14);
          FUN_00291434(&temp_v10,param_1[0x58],param_1[0x59],param_1[0x5a]);
          param_1[0x48] = (unsigned int)((float)param_1[0x48] + temp_v10);
          temp_v9 = (float)param_1[0x49];
          param_1[0x49] = (unsigned int)(temp_v9 + temp_v11);
          param_1[0x4a] = (unsigned int)((float)param_1[0x4a] + temp_v12);
          temp_v6 = (float)VectorSignedToFloat(param_1[0x50],(unsigned char)(temp_v3 >> 0x16) & 3);
          param_1[0x49] =
               (unsigned int)((temp_v9 + temp_v11) - *(float *)(param_1[0xd5] + 0x14) * temp_v6 * temp_v8);
        }
      }
      else {
        FUN_00291620(0,param_1[0x57],1);
        temp_v6 = (float)VectorSignedToFloat(param_1[0x56],(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v9 = (float)param_1[0xd3] + (in_s0 + temp_v6) * temp_v9 * temp_v9;
        param_1[0xd3] = (unsigned int)temp_v9;
        FUN_00291620(0,param_1[0x55],1);
        temp_v10 = (float)param_1[0xd2] * temp_v8 * *(float *)(param_1[0xd5] + 0x14);
        temp_v11 = (temp_v9 + (float)param_1[0xd3]) * temp_v8 * *(float *)(param_1[0xd5] + 0x14);
        temp_v12 = (float)param_1[0xd4] * temp_v8 * *(float *)(param_1[0xd5] + 0x14);
        FUN_00291434(&temp_v10,param_1[0x58],param_1[0x59],param_1[0x5a]);
        param_1[0x48] = (unsigned int)((float)param_1[0x48] + temp_v10);
        temp_v9 = (float)param_1[0x49];
        param_1[0x49] = (unsigned int)(temp_v9 + temp_v11);
        param_1[0x4a] = (unsigned int)((float)param_1[0x4a] + temp_v12);
        temp_v6 = (float)VectorSignedToFloat(param_1[0x50],(unsigned char)(in_fpscr >> 0x16) & 3);
        param_1[0x49] =
             (unsigned int)((temp_v9 + temp_v11) - *(float *)(param_1[0xd5] + 0x14) * temp_v6 * temp_v8);
      }
    }
    else {
      FUN_00291620(0,param_1[0x57],1);
      temp_v6 = (float)VectorSignedToFloat(param_1[0x56],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (float)param_1[0xd3] + (in_s0 + temp_v6) * temp_v9 * temp_v9;
      param_1[0xd3] = (unsigned int)temp_v9;
      FUN_00291620(0,param_1[0x55],1);
      temp_v10 = (float)param_1[0xdc] + (float)param_1[0xd2] * temp_v8;
      param_1[0xdc] = (unsigned int)temp_v10;
      temp_v11 = (float)param_1[0xdd] + (temp_v9 + (float)param_1[0xd3]) * temp_v8;
      param_1[0xdd] = (unsigned int)temp_v11;
      param_1[0xde] = (unsigned int)((float)param_1[0xde] + (float)param_1[0xd4] * temp_v8);
      temp_v10 = temp_v10 * *(float *)(param_1[0xd5] + 0x14);
      temp_v11 = temp_v11 * *(float *)(param_1[0xd5] + 0x14);
      temp_v12 = (float)param_1[0xde] * *(float *)(param_1[0xd5] + 0x14);
      FUN_00291434(&temp_v10,param_1[0x58],param_1[0x59],param_1[0x5a]);
      param_1[0x48] = (unsigned int)((float)param_1[0x48] + temp_v10);
      param_1[0x49] = (unsigned int)((float)param_1[0x49] + temp_v11);
      param_1[0x4a] = (unsigned int)((float)param_1[0x4a] + temp_v12);
    }
    temp_v9 = (float)param_1[0xd1];
    temp_v8 = (float)param_1[0xcf] + temp_v9;
    if (((float)param_1[0xd0] < temp_v8) || (temp_v8 < -(float)param_1[0xd0])) {
      temp_v9 = -temp_v9;
      param_1[0xd1] = (unsigned int)temp_v9;
    }
    param_1[0xcf] = (unsigned int)((float)param_1[0xcf] + temp_v9);
    param_1[0x48] = (unsigned int)((float)param_1[0x48] + temp_v9);
    if ((char)param_1[0xe0] == '\x01') {
      temp_v3 = (unsigned int)(unsigned short)param_1[0xd9];
    }
    else {
      temp_v3 = (unsigned int)(float)param_1[0x7c];
    }
  }
  else {
    temp_v3 = (unsigned int)(float)param_1[0x7c];
  }
  *(char *)(param_1 + 0xfa) = (char)temp_v3;
  if ((temp_v3 & 0xff) != 0) {
    rt_memcpy_w(param_1 + 0xe2,param_1 + 0x9b,0x60);
    temp_v3 = (unsigned int)(unsigned char)param_1[0xfa] | ((int)(float)param_1[0x79] << 0x18) |
            ((int)(float)param_1[0x7a] << 0x10) | ((int)(float)param_1[0x7b] << 8);
    param_1[0xe7] = temp_v3;
    param_1[0xed] = temp_v3;
    param_1[0xf3] = temp_v3;
    param_1[0xf9] = temp_v3;
    param_1[0xe5] = (unsigned int)temp_v7;
    param_1[0xe6] = (unsigned int)temp_v7;
    param_1[0xeb] = (unsigned int)temp_v7;
    param_1[0xec] = 0x3f800000;
    param_1[0xf1] = 0x3f800000;
    param_1[0xf2] = (unsigned int)temp_v7;
    param_1[0xf7] = 0x3f800000;
    param_1[0xf8] = 0x3f800000;
  }
  temp_v0 = *(short *)((int)param_1 + 0x2ce);
  if (-1 < temp_v0) {
    temp_v2 = *(unsigned char *)((int)param_1 + 0x131);
    if (temp_v2 >= 2) {
      temp_v4 = *(int *)(param_1[0x9a] + (unsigned int)(unsigned short)param_1[0xb4] * 0x28 + 0x20);
      if (temp_v4 <= temp_v0) {
        temp_v3 = (unsigned short)param_1[0xb4] + 1;
        *(short *)(param_1 + 0xb4) = (short)temp_v3;
        *(short *)((int)param_1 + 0x2ce) = temp_v0 - (short)temp_v4;
        if ((unsigned int)temp_v2 <= (temp_v3 & 0xffff)) {
          if ((param_1[0x4c] & 0x10) != 0) {
            *(unsigned short *)(param_1 + 0xb4) = 0;
          }
          else {
            *(unsigned short *)(param_1 + 0xb4) = temp_v2 - 1;
            *(unsigned short *)((int)param_1 + 0x2ce) = 0xffff;
          }
        }
        param_1[0x4b] = *(unsigned int *)(param_1[0x9a] + (unsigned int)(unsigned short)param_1[0xb4] * 0x28 + 0x24);
      }
    }
    *(short *)((int)param_1 + 0x2ce) = *(short *)((int)param_1 + 0x2ce) + 1;
  }
  *(short *)(param_1 + 0xb3) = (short)param_1[0xb3] + 1;
  return;
}

} /* extern "C" */
