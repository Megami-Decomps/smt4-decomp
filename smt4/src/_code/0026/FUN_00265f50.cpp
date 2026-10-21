/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00265f50` (_code @ 0x265f50, 0x56c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025247c(unsigned char [4]);
int residentApplyFallbackValues(void);
int FUN_00281e34(void);
int FUN_00282390(void);
int FUN_0028250c(void);
int FUN_00298d50(unsigned char *);
int FUN_002c159c(unsigned char *);
int FUN_002c1e30(unsigned char *, int);
int FUN_002c1edc(unsigned char *, int, int, int);
int FUN_002fcae0(int, float *, float *);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern unsigned long long *g_lmapScene; /* 0x447e88 */
extern unsigned char g_fixedCamera; /* 0x49f3f0 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_0025247c. */
/* Supplied declaration required: residentApplyFallbackValues. */
/* Supplied declaration required: FUN_00281e34. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: FUN_00298d50. */
/* Supplied declaration required: FUN_002c159c. */
/* Supplied declaration required: FUN_002c1e30. */
/* Supplied declaration required: FUN_002c1edc. */
/* Supplied declaration required: FUN_002fcae0. */


void FUN_00265f50(int param_1)

{
/* irregular: irregular input(s): in_s16; 11 native warning(s); review required */
  unsigned int *puVar1;
  unsigned long long *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float in_s16;
  float temp_v9;
  unsigned long long temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned char temp_v14 [4];
  unsigned int temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  
  temp_v9 = 0.017453292f;
  temp_v3 = *(int *)(param_1 + 0xcc) == 7;
  puVar2 = g_lmapScene;
  if (temp_v3) {
    in_s16 = *(float *)(g_lmapScene + 6);
    puVar2 = g_lmapScene + 5;
  }
  if (!temp_v3) {
    in_s16 = *(float *)((int)puVar2 + 0x24);
    puVar2 = (unsigned long long *)((int)puVar2 + 0x1c);
  }
  temp_v10 = *puVar2;
  *(int *)(param_1 + 0x6c) = (int)temp_v10;
  *(float *)(param_1 + 0x74) = in_s16;
  temp_v4 = *(float *)(param_1 + 0x50) * 0.017453292f;
  FUN_0028250c();
  *(float *)(param_1 + 0x60) =
       (float)temp_v10 - temp_v4 * *(float *)(DAT_004474f4 + *(int *)(DAT_004474f4 + 0xc4) * 4 + 0x188);
  temp_v9 = *(float *)(param_1 + 0x50) * temp_v9;
  FUN_00282390();
  temp_v0 = DAT_004474f4;
  *(float *)(param_1 + 0x68) =
       in_s16 - temp_v9 * *(float *)(DAT_004474f4 + *(int *)(DAT_004474f4 + 0xc4) * 4 + 0x188);
  temp_v9 = (float)((unsigned long long)temp_v10 >> 0x20);
  temp_v4 = temp_v9 + *(float *)(temp_v0 + *(int *)(temp_v0 + 0xc4) * 4 + 200);
  *(float *)(param_1 + 0x70) = temp_v4;
  temp_v9 = temp_v9 + *(float *)(temp_v0 + *(int *)(temp_v0 + 0xc4) * 4 + 0x108);
  *(float *)(param_1 + 100) = temp_v9;
  if (*(char *)(param_1 + 0xb) != '\0') {
    temp_v4 = temp_v4 + *(float *)(param_1 + 0x90);
    *(float *)(param_1 + 0x70) = temp_v4;
  }
  if ((int)temp_v4 >= 0x44960001) {
    temp_v4 = 1200.0f;
  }
  *(float *)(param_1 + 0x70) = temp_v4;
  temp_v18 = *(float *)(param_1 + 0x74);
  temp_v16 = *(float *)(param_1 + 0x6c);
  if ((int)temp_v9 >= 0x452f0001) {
    temp_v9 = 2800.0f;
  }
  *(float *)(param_1 + 100) = temp_v9;
  temp_v17 = *(float *)(param_1 + 100);
  if ((*(char *)(param_1 + 0xb) != '\0') ||
     (((((*(int *)(param_1 + 0x40) != 0x65 || ((int)temp_v10 + 0x39d8cfffU >= 0xf9fff)) ||
        ((unsigned int)in_s16 >= 0xc62be000)) || (0xc61ab000 >= (unsigned int)in_s16)) &&
      (temp_v0 = *(int *)(param_1 + 0xcc), !((temp_v0 == 4 || temp_v0 == 5) || temp_v0 == 6))))) {
    FUN_002fcae0(param_1 + 0x60,&temp_v16,&temp_v11);
    temp_v9 = (temp_v11 - temp_v16) * (temp_v11 - temp_v16) +
             (temp_v12 - temp_v17) * (temp_v12 - temp_v17) +
             (temp_v13 - temp_v18) * (temp_v13 - temp_v18);
  }
  else {
    temp_v11 = *(float *)(param_1 + 0x60);
    temp_v12 = *(float *)(param_1 + 100);
    temp_v13 = *(float *)(param_1 + 0x68);
    temp_v9 = (temp_v11 - temp_v16) * (temp_v11 - temp_v16) +
             (temp_v12 - temp_v17) * (temp_v12 - temp_v17) +
             (temp_v13 - temp_v18) * (temp_v13 - temp_v18);
  }
  temp_v0 = DAT_004474f4;
  temp_v4 = 0.0f;
  temp_v9 = romwright_sqrt_4(temp_v9);
  if ((int)temp_v9 >= 0x38d1b718) {
    temp_v7 = 1.0f / temp_v9;
    temp_v4 = (temp_v16 - temp_v11) * temp_v7;
    temp_v8 = (temp_v18 - temp_v13) * temp_v7;
    temp_v7 = (temp_v17 - temp_v12) * temp_v7;
  }
  else {
    temp_v8 = 0.1f;
    temp_v7 = temp_v4;
  }
  puVar1 = (unsigned int *)(DAT_004474f4 + 0xa0);
  if (*(char *)(param_1 + 0x94) != '\0') {
    *(float *)(DAT_004474f4 + 0x9c) = temp_v9;
    *puVar1 = 0;
  }
  else {
    temp_v5 = *(float *)(DAT_004474f4 + 0x9c);
    if ((temp_v5 != temp_v5) || (temp_v9 != temp_v9)) {
      temp_v6 = *(float *)(DAT_004474f4 + 0xa0) + 10.0f;
      *(float *)(DAT_004474f4 + 0xa0) = temp_v6;
      if ((int)temp_v6 >= 0x42c80001) {
        temp_v6 = 100.0f;
      }
      *(float *)(temp_v0 + 0xa0) = temp_v6;
      temp_v5 = temp_v5 + temp_v6;
      *(float *)(temp_v0 + 0x9c) = temp_v5;
      if (temp_v9 < temp_v5) {
        temp_v5 = temp_v9;
      }
      *(float *)(temp_v0 + 0x9c) = temp_v5;
    }
    else {
      *(float *)(DAT_004474f4 + 0x9c) = temp_v9;
      *(unsigned int *)(temp_v0 + 0xa0) = 0;
    }
  }
  temp_v11 = temp_v16 - temp_v4 * *(float *)(DAT_004474f4 + 0x9c);
  temp_v12 = temp_v17 - temp_v7 * *(float *)(DAT_004474f4 + 0x9c);
  temp_v13 = temp_v18 - temp_v8 * *(float *)(DAT_004474f4 + 0x9c);
  if (*(char *)(param_1 + 0x94) != '\0') {
    *(unsigned int *)(param_1 + 0x84) = *(unsigned int *)(param_1 + 0x6c);
    *(unsigned int *)(param_1 + 0x88) = *(unsigned int *)(param_1 + 0x70);
    *(unsigned int *)(param_1 + 0x8c) = *(unsigned int *)(param_1 + 0x74);
    *(unsigned char *)(param_1 + 0x94) = 0;
    *(float *)(param_1 + 0x78) = temp_v11;
    *(float *)(param_1 + 0x7c) = temp_v12;
    *(float *)(param_1 + 0x80) = temp_v13;
  }
  else {
    temp_v0 = *(int *)(param_1 + 0xcc);
    if ((temp_v0 != 3) && (!((temp_v0 == 4 || temp_v0 == 5) || temp_v0 == 6))) {
      *(float *)(param_1 + 0x84) =
           (*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x84)) + *(float *)(param_1 + 0x84);
      *(float *)(param_1 + 0x88) =
           (*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x88)) + *(float *)(param_1 + 0x88);
      *(float *)(param_1 + 0x8c) =
           (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x8c)) + *(float *)(param_1 + 0x8c);
      *(float *)(param_1 + 0x78) =
           (temp_v11 - *(float *)(param_1 + 0x78)) + *(float *)(param_1 + 0x78);
      *(float *)(param_1 + 0x7c) =
           *(float *)(param_1 + 0x7c) + (temp_v12 - *(float *)(param_1 + 0x7c)) * 0.5f;
      *(float *)(param_1 + 0x80) =
           (temp_v13 - *(float *)(param_1 + 0x80)) + *(float *)(param_1 + 0x80);
    }
    else {
      *(float *)(param_1 + 0x78) =
           *(float *)(param_1 + 0x78) + (temp_v11 - *(float *)(param_1 + 0x78)) * 0.33333334f;
      *(float *)(param_1 + 0x84) =
           *(float *)(param_1 + 0x84) +
           (*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x84)) * 0.33333334f;
      *(float *)(param_1 + 0x88) =
           *(float *)(param_1 + 0x88) +
           (*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x88)) * 0.33333334f;
      *(float *)(param_1 + 0x8c) =
           *(float *)(param_1 + 0x8c) +
           (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x8c)) * 0.33333334f;
      *(float *)(param_1 + 0x7c) =
           *(float *)(param_1 + 0x7c) + (temp_v12 - *(float *)(param_1 + 0x7c)) * 0.33333334f;
      *(float *)(param_1 + 0x80) =
           *(float *)(param_1 + 0x80) + (temp_v13 - *(float *)(param_1 + 0x80)) * 0.33333334f;
    }
  }
  FUN_00298d50(&g_fixedCamera);
  FUN_002c159c(&g_fixedCamera);
  FUN_002c1e30(&g_fixedCamera,1);
  FUN_002c1edc(&g_fixedCamera,param_1 + 0x78,param_1 + 0x84,param_1 + 0x54);
  temp_v0 = DAT_004474f4;
  temp_v1 = *(unsigned int *)(param_1 + 0x88);
  temp_v2 = *(unsigned int *)(param_1 + 0x8c);
  *(unsigned int *)(DAT_004474f4 + 0x58) = *(unsigned int *)(param_1 + 0x84);
  *(unsigned int *)(temp_v0 + 0x5c) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x60) = temp_v2;
  temp_v1 = *(unsigned int *)(param_1 + 0x7c);
  temp_v2 = *(unsigned int *)(param_1 + 0x80);
  *(unsigned int *)(temp_v0 + 0x4c) = *(unsigned int *)(param_1 + 0x78);
  *(unsigned int *)(temp_v0 + 0x50) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x54) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x18) = *(unsigned int *)(param_1 + 0x50);
  FUN_0025247c(temp_v14);
  *(unsigned int *)(DAT_004474f4 + 700) = temp_v15;
  FUN_00281e34();
  residentApplyFallbackValues();
  return;
}

} /* extern "C" */
