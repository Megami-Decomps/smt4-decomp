/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036a434` (_code @ 0x36a434, 0x5b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "title/titleMain.h"

extern "C" {

int uiSetFloatPair(unsigned char *);
int FUN_0014f0dc(unsigned char *, int, int, int);
int FUN_001523b8(unsigned char *, int);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int residentApplyFallbackValues(void);
int FUN_003250ac(unsigned char [4]);
int FUN_003881f8(int, float *, float *);
int FUN_0050d8e4(void);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
} param_1_stack;

extern int g_lmapView; /* 0x5806a4 */
extern unsigned long long *g_lmapScene; /* 0x581288 */
extern unsigned char g_localCamera; /* 0x5f10cc */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: uiSetFloatPair. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: residentApplyFallbackValues. */
/* Supplied declaration required: FUN_003250ac. */
/* Supplied declaration required: FUN_0036b824. */
/* Supplied declaration required: FUN_003881f8. */
/* Supplied declaration required: FUN_0050d8e4. */


void FUN_0036a434(int param_1)

{
/* irregular: irregular input(s): in_d8; 12 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned long long *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned long long in_d8;
  float temp_v11;
  unsigned long long temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned char temp_v16 [4];
  unsigned int temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  
  temp_v11 = (float)((unsigned long long)in_d8 >> 0x20);
  temp_v1 = gameFlagsGetBlock();
  temp_v5 = *(int *)(param_1 + 0xcc) == 7;
  temp_v10 = 0.017453292f;
  puVar5 = g_lmapScene;
  if (temp_v5) {
    temp_v11 = *(float *)(g_lmapScene + 6);
    puVar5 = g_lmapScene + 5;
  }
  if (!temp_v5) {
    temp_v11 = *(float *)((int)puVar5 + 0x24);
    puVar5 = (unsigned long long *)((int)puVar5 + 0x1c);
  }
  temp_v12 = *puVar5;
  temp_v0 = *(unsigned char *)(temp_v1 + 0x14f4);
  temp_v2 = *(int *)(g_lmapView + 200);
  *(int *)(param_1 + 0x6c) = (int)temp_v12;
  *(float *)(param_1 + 0x74) = temp_v11;
  temp_v2 = temp_v2 + (unsigned int)temp_v0;
  temp_v6 = *(float *)(param_1 + 0x50) * 0.017453292f;
  FUN_001bc124();
  *(float *)(param_1 + 0x60) = (float)temp_v12 - temp_v6 * *(float *)(g_lmapView + temp_v2 * 4 + 0x18c);
  temp_v10 = *(float *)(param_1 + 0x50) * temp_v10;
  FUN_001bbf0c();
  temp_v1 = g_lmapView;
  temp_v2 = g_lmapView + temp_v2 * 4;
  *(float *)(param_1 + 0x68) = temp_v11 - temp_v10 * *(float *)(temp_v2 + 0x18c);
  temp_v10 = (float)((unsigned long long)temp_v12 >> 0x20);
  temp_v6 = temp_v10 + *(float *)(temp_v2 + 0xcc) + *(float *)(temp_v1 + 0x1c);
  *(float *)(param_1 + 0x70) = temp_v6;
  temp_v10 = temp_v10 + *(float *)(temp_v2 + 0x10c);
  *(float *)(param_1 + 100) = temp_v10;
  if (*(char *)(param_1 + 0xb) != '\0') {
    temp_v6 = temp_v6 + *(float *)(param_1 + 0x90);
    *(float *)(param_1 + 0x70) = temp_v6;
  }
  if ((int)temp_v6 >= 0x44960001) {
    temp_v6 = 1200.0f;
  }
  *(float *)(param_1 + 0x70) = temp_v6;
  temp_v20 = *(float *)(param_1 + 0x74);
  temp_v18 = *(float *)(param_1 + 0x6c);
  if ((int)temp_v10 >= 0x452f0001) {
    temp_v10 = 2800.0f;
  }
  *(float *)(param_1 + 100) = temp_v10;
  temp_v19 = *(float *)(param_1 + 100);
  if ((*(char *)(param_1 + 0xb) != '\0') ||
     (((((*(int *)(param_1 + 0x40) != 0x65 || ((int)temp_v12 + 0x39d8cfffU >= 0xf9fff)) ||
        ((unsigned int)temp_v11 >= 0xc62be000)) || (0xc61ab000 >= (unsigned int)temp_v11)) &&
      (temp_v1 = *(int *)(param_1 + 0xcc), !((temp_v1 == 4 || temp_v1 == 5) || temp_v1 == 6))))) {
    FUN_003881f8(param_1 + 0x60,&temp_v18,&temp_v13);
    temp_v11 = (temp_v13 - temp_v18) * (temp_v13 - temp_v18) +
             (temp_v14 - temp_v19) * (temp_v14 - temp_v19) +
             (temp_v15 - temp_v20) * (temp_v15 - temp_v20);
  }
  else {
    temp_v13 = *(float *)(param_1 + 0x60);
    temp_v14 = *(float *)(param_1 + 100);
    temp_v15 = *(float *)(param_1 + 0x68);
    temp_v11 = (temp_v13 - temp_v18) * (temp_v13 - temp_v18) +
             (temp_v14 - temp_v19) * (temp_v14 - temp_v19) +
             (temp_v15 - temp_v20) * (temp_v15 - temp_v20);
  }
  temp_v1 = g_lmapView;
  temp_v11 = romwright_sqrt_4(temp_v11);
  temp_v10 = 0.0f;
  if ((int)temp_v11 >= 0x38d1b718) {
    temp_v6 = 1.0f / temp_v11;
    temp_v10 = (temp_v18 - temp_v13) * temp_v6;
    temp_v7 = (temp_v20 - temp_v15) * temp_v6;
    temp_v6 = (temp_v19 - temp_v14) * temp_v6;
  }
  else {
    temp_v7 = 0.1f;
    temp_v6 = temp_v10;
  }
  puVar1 = (unsigned int *)(g_lmapView + 0xa4);
  if (*(char *)(param_1 + 0x94) != '\0') {
    *(float *)(g_lmapView + 0xa0) = temp_v11;
    *puVar1 = 0;
  }
  else {
    temp_v9 = *(float *)(g_lmapView + 0xa0);
    if ((temp_v9 != temp_v9) || (temp_v11 != temp_v11)) {
      temp_v8 = *(float *)(g_lmapView + 0xa4) + 10.0f;
      *(float *)(g_lmapView + 0xa4) = temp_v8;
      if ((int)temp_v8 >= 0x42c80001) {
        temp_v8 = 100.0f;
      }
      *(float *)(temp_v1 + 0xa4) = temp_v8;
      temp_v9 = temp_v9 + temp_v8;
      *(float *)(temp_v1 + 0xa0) = temp_v9;
      if (temp_v11 < temp_v9) {
        temp_v9 = temp_v11;
      }
      *(float *)(temp_v1 + 0xa0) = temp_v9;
    }
    else {
      *(float *)(g_lmapView + 0xa0) = temp_v11;
      *(unsigned int *)(temp_v1 + 0xa4) = 0;
    }
  }
  if (*(char *)(param_1 + 0x95) != '\0') {
    *(unsigned char *)(param_1 + 0x95) = 0;
    temp_v1 = g_lmapView;
    *(unsigned int *)(g_lmapView + 0xa4) = 0;
    *(float *)(temp_v1 + 0xa0) = temp_v11;
  }
  temp_v13 = temp_v18 - temp_v10 * *(float *)(g_lmapView + 0xa0);
  temp_v14 = temp_v19 - temp_v6 * *(float *)(g_lmapView + 0xa0);
  temp_v15 = temp_v20 - temp_v7 * *(float *)(g_lmapView + 0xa0);
  if (*(char *)(param_1 + 0x94) != '\0') {
    *(unsigned int *)(param_1 + 0x84) = *(unsigned int *)(param_1 + 0x6c);
    *(unsigned int *)(param_1 + 0x88) = *(unsigned int *)(param_1 + 0x70);
    *(unsigned int *)(param_1 + 0x8c) = *(unsigned int *)(param_1 + 0x74);
    *(unsigned char *)(param_1 + 0x94) = 0;
    *(float *)(param_1 + 0x78) = temp_v13;
    *(float *)(param_1 + 0x7c) = temp_v14;
    *(float *)(param_1 + 0x80) = temp_v15;
  }
  else {
    temp_v1 = *(int *)(param_1 + 0xcc);
    if ((temp_v1 != 3) && (!((temp_v1 == 4 || temp_v1 == 5) || temp_v1 == 6))) {
      *(float *)(param_1 + 0x84) =
           (*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x84)) + *(float *)(param_1 + 0x84);
      *(float *)(param_1 + 0x88) =
           (*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x88)) + *(float *)(param_1 + 0x88);
      *(float *)(param_1 + 0x8c) =
           (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x8c)) + *(float *)(param_1 + 0x8c);
      *(float *)(param_1 + 0x78) =
           (temp_v13 - *(float *)(param_1 + 0x78)) + *(float *)(param_1 + 0x78);
      *(float *)(param_1 + 0x7c) =
           *(float *)(param_1 + 0x7c) + (temp_v14 - *(float *)(param_1 + 0x7c)) * 0.5f;
      *(float *)(param_1 + 0x80) =
           (temp_v15 - *(float *)(param_1 + 0x80)) + *(float *)(param_1 + 0x80);
    }
    else {
      *(float *)(param_1 + 0x8c) =
           *(float *)(param_1 + 0x8c) +
           (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x8c)) * 0.33333334f;
      *(float *)(param_1 + 0x78) =
           *(float *)(param_1 + 0x78) + (temp_v13 - *(float *)(param_1 + 0x78)) * 0.33333334f;
      *(float *)(param_1 + 0x84) =
           *(float *)(param_1 + 0x84) +
           (*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x84)) * 0.33333334f;
      *(float *)(param_1 + 0x88) =
           *(float *)(param_1 + 0x88) +
           (*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x88)) * 0.33333334f;
      *(float *)(param_1 + 0x7c) =
           *(float *)(param_1 + 0x7c) + (temp_v14 - *(float *)(param_1 + 0x7c)) * 0.33333334f;
      *(float *)(param_1 + 0x80) =
           *(float *)(param_1 + 0x80) + (temp_v15 - *(float *)(param_1 + 0x80)) * 0.33333334f;
    }
  }
  FUN_0036b824(reinterpret_cast<u32>(&g_localCamera));
  uiSetFloatPair(&g_localCamera);
  FUN_001523b8(&g_localCamera,1);
  FUN_0014f0dc(&g_localCamera,param_1 + 0x78,param_1 + 0x84,param_1 + 0x54);
  *(unsigned char **)(*(int *)(param_1 + 0x936c) + 0xc) = &g_localCamera;
  temp_v1 = g_lmapView;
  temp_v3 = *(unsigned int *)(param_1 + 0x88);
  temp_v4 = *(unsigned int *)(param_1 + 0x8c);
  *(unsigned int *)(g_lmapView + 0x5c) = *(unsigned int *)(param_1 + 0x84);
  *(unsigned int *)(temp_v1 + 0x60) = temp_v3;
  *(unsigned int *)(temp_v1 + 100) = temp_v4;
  temp_v3 = *(unsigned int *)(param_1 + 0x7c);
  temp_v4 = *(unsigned int *)(param_1 + 0x80);
  *(unsigned int *)(temp_v1 + 0x50) = *(unsigned int *)(param_1 + 0x78);
  *(unsigned int *)(temp_v1 + 0x54) = temp_v3;
  *(unsigned int *)(temp_v1 + 0x58) = temp_v4;
  *(unsigned int *)(temp_v1 + 0x18) = *(unsigned int *)(param_1 + 0x50);
  FUN_003250ac(temp_v16);
  *(unsigned int *)(g_lmapView + 0x308) = temp_v17;
  FUN_0050d8e4();
  residentApplyFallbackValues();
  return;
}

} /* extern "C" */
