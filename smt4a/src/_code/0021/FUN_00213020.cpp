/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00213020` (_code @ 0x213020, 0x300 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002039d0(int, double, int);
int FUN_00237da0(double, float *, float *, int, double, float *, unsigned int, int, int, double);
int nodeTreeReleaseItemClearOwner(double);
int FUN_0028324c(int, double, int);
int FUN_00283328(int, double, int);
int nodeTreeReleaseItem(...);
int FUN_0034a16c(float *, float *, float *, float *, float *);
int FUN_0035cc80(float *, float *, float *, float *, float *, float *, float *, float *);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(double, int);

#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002039d0. */
/* Supplied declaration required: FUN_00237da0. */
/* Supplied declaration required: nodeTreeReleaseItemClearOwner. */
/* Supplied declaration required: FUN_0028324c. */
/* Supplied declaration required: FUN_00283328. */
/* Supplied declaration required: nodeTreeReleaseItem. */
/* Supplied declaration required: FUN_0034a16c. */
/* Supplied declaration required: FUN_0035cc80. */


void FUN_00213020(float *param_1)

{
/* irregular: irregular input(s): in_d8, in_fpscr; 11 native warning(s); review required */
  short temp_v0;
  float temp_v1;
  float temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  unsigned long long in_d8;
  long long temp_v7;
  unsigned int temp_v8;
  unsigned long long temp_v9;
  
  temp_v8 = (unsigned int)((unsigned long long)in_d8 >> 0x20);
  if (param_1[0x61] == param_1[9]) {
    temp_v0 = *(short *)(param_1 + 0xc0) - 1;
    *(short *)(param_1 + 0xc0) = temp_v0;
    param_1[9] = 0.0f;
    if (temp_v0 < 1) {
      temp_v3 = 0;
      if (param_1 != (float *)0x0) {
        do {
          nodeTreeReleaseItemClearOwner(param_1[temp_v3 + 0x8e]);
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 0x32);
        param_1[9] = 0.0f;
        param_1[10] = 0.0f;
        param_1[0xb] = 0.0f;
        param_1[0xc] = 0.0f;
        if ((unsigned int *)romwright_f2u((float)(param_1[0x8a])) != (unsigned int *)0x0) {
          *(unsigned int *)romwright_f2u((float)(param_1[0x8a])) = 0;
        }
        nodeTreeReleaseItem(param_1);
        return;
      }
    }
    else {
      *param_1 = 0.0f;
      param_1[1] = 0.0f;
      param_1[2] = 0.0f;
      param_1[3] = 0.0f;
      param_1[4] = 0.0f;
      param_1[5] = 0.0f;
      param_1[6] = 0.0f;
      param_1[7] = 0.0f;
      param_1[8] = 0.0f;
      param_1[10] = 0.0f;
      param_1[0xb] = 0.0f;
      param_1[0xc] = 0.0f;
      param_1[0xd] = 0.0f;
      FUN_0034a16c(param_1 + 0x5b,param_1 + 10,param_1 + 0xc,param_1 + 3,param_1 + 6);
    }
    return;
  }
  if ((-1 < (int)param_1[0x8c]) && (param_1[(int)param_1[0x8c] + 0x8e] == 0.0f)) {
    do {
      if (param_1[0x8d] == param_1[0x8c]) break;
      temp_v1 = (float)(((int)param_1[0x8c] + 1) % 0x32);
      param_1[0x8c] = temp_v1;
    } while (param_1[(int)temp_v1 + 0x8e] == 0.0f);
  }
  temp_v3 = 0;
  temp_v4 = (int)*param_1 - (int)param_1[0xd];
  if (0 < temp_v4) {
    temp_v8 = 0x41200000;
  }
  temp_v7 = (unsigned long long)temp_v8 << 0x20;
  if (0 < temp_v4) {
    temp_v9 = 0x3c23d70a;
    do {
      temp_v1 = (float)(((int)param_1[0x8d] + 1) % 0x32);
      if ((int)param_1[0x8c] < 0) {
        param_1[0x8c] = 0.0f;
      }
      else if (param_1[(int)temp_v1 + 0x8e] != 0.0f) {
        nodeTreeReleaseItem();
      }
      temp_v5 = (float)VectorFloatToUnsigned(param_1[0x5f] * (float)((unsigned long long)temp_v7 >> 0x20),3);
      temp_v2 = param_1[0x89];
      temp_v6 = temp_v5;
      FUN_00237da0(temp_v2,param_1 + 0xe,param_1 + 0x5b,2,param_1[0x87],param_1 + (int)temp_v1 + 0x8e,
                   (unsigned int)temp_v1 & 0xff,*(unsigned char *)(param_1 + 0x8b),1,param_1[0x88]);
      param_1[(int)temp_v1 + 0x8e] = temp_v2;
      FUN_002039d0(2,param_1[0x60],100);
      temp_v6 = temp_v6 + *(float *)((int)temp_v2 + 0x120);
      *(float *)((int)temp_v2 + 0x120) = temp_v6;
      FUN_0028324c(0,temp_v5,10);
      *(float *)((int)temp_v2 + 500) = temp_v6 * *(float *)((int)temp_v2 + 500);
      temp_v6 = (float)VectorSignedToFloat(param_1[0x62],(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)((int)temp_v2 + 0x34c) = temp_v6;
      FUN_002039d0(0,param_1[0x5c],100);
      temp_v5 = (float)VectorSignedToFloat(param_1[0x5b],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = temp_v6 + temp_v5 * (float)temp_v9;
      *(float *)((int)temp_v2 + 0x340) = temp_v6;
      *(int *)((int)temp_v2 + 0x33c) = (int)temp_v7;
      FUN_00283328(2,param_1[0x5d],100);
      *(float *)((int)temp_v2 + 0x344) = temp_v6;
      temp_v3 = temp_v3 + 1;
      param_1[0xd] = (float)((int)param_1[0xd] + 1);
      param_1[0x8d] = temp_v1;
    } while (temp_v3 < temp_v4);
  }
  FUN_0035cc80(param_1 + 0x5b,param_1 + 0xb,param_1 + 10,param_1 + 0xc,param_1,param_1 + 3,
               param_1 + 6,param_1 + 0xd);
  param_1[9] = (float)((int)param_1[9] + 1);
  return;
}

} /* extern "C" */
