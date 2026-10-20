/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d508c` (_code @ 0x2d508c, 0x2a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026413c(void);
int FUN_0027f958(float [9], unsigned int *, int);
int FUN_00281e34(void);
int FUN_00282390(void);
int FUN_0028250c(void);
int FUN_002ed094(int, int *);
int SBORROW4(int, int);
int VectorSignedToFloat(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern int g_lmapScene; /* 0x447e88 */
extern signed char DAT_0049f934; /* 0x49f934 */
extern signed char DAT_0049fc64; /* 0x49fc64 */
extern signed char DAT_0049fce8; /* 0x49fce8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
extern unsigned int FUN_00256540(void);
/* Supplied declaration required: FUN_0026413c. */
/* Supplied declaration required: FUN_0027f958. */
/* Supplied declaration required: FUN_00281e34. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
extern int FUN_002c2950(void);
/* Supplied declaration required: FUN_002ed094. */


void FUN_002d508c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned int *puVar9;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned long long temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  int temp_v15;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int temp_v16;
  float temp_v17 [9];
  
  temp_v1 = FUN_002c2950();
  temp_v4 = g_lmapScene;
  temp_v14 = 1.0f;
  temp_v9 = 60.0f;
  temp_v5 = 0;
  if ((DAT_0049fc64 == '\0') && (DAT_0049f934 == '\0')) {
    temp_v13 = 0.0f;
    temp_v11 = *(unsigned long long *)(g_lmapScene + 0x1c);
    temp_v12 = *(unsigned int *)(g_lmapScene + 0x24);
    *(int *)(g_lmapScene + 0x28) = (int)temp_v11;
    *(int *)(temp_v4 + 0x2c) = (int)((unsigned long long)temp_v11 >> 0x20);
    *(unsigned int *)(temp_v4 + 0x30) = temp_v12;
    temp_v10 = temp_v14;
    temp_v2 = FUN_00256540();
    temp_v8 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = temp_v8 * 0.01f;
    temp_v7 = SBORROW4((int)temp_v8,0x40000000);
    temp_v4 = (int)temp_v8 - 0x40000000;
    temp_v6 = temp_v8 == 2.0f;
    if ((int)temp_v8 >= 0x40000001) {
      temp_v8 = 2.0f;
    }
    else {
      temp_v7 = SBORROW4((int)temp_v8,0x3f800000);
      temp_v4 = (int)temp_v8 - 0x3f800000;
      temp_v6 = temp_v8 == 1.0f;
    }
    if (!temp_v6 && temp_v4 < 0 == temp_v7) {
      temp_v14 = temp_v8;
    }
    FUN_0027f958(temp_v17,&temp_v16,0);
    FUN_0026413c();
    *(unsigned int *)(param_1 + 0xc0) = 0;
    if (((((unsigned int)temp_v17[0] < 0xbf000000) && ((int)temp_v17[0] < 0x3f000000)) &&
        (temp_v16 < 0xbf000000)) && ((int)temp_v16 < 0x3f000000)) {
      temp_v9 = *(float *)(param_1 + 0x3c) * 0.5f;
      *(float *)(param_1 + 0x3c) = temp_v9;
      if ((int)temp_v9 < 0x3a83126f) {
        *(float *)(param_1 + 0x3c) = temp_v13;
      }
    }
    else {
      temp_v8 = *(float *)(param_1 + 0x3c);
      if ((int)temp_v8 < 0x3f800001) {
        temp_v8 = temp_v10;
      }
      temp_v8 = temp_v8 + temp_v8 * 0.7f;
      *(float *)(param_1 + 0x3c) = temp_v8;
      if ((int)temp_v8 < 0x42700001) {
        temp_v9 = temp_v8;
      }
      *(float *)(param_1 + 0x3c) = temp_v9;
      FUN_00281e34();
      temp_v9 = -(temp_v17[0] * 57.32484f - *(float *)(param_1 + 0x50));
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 <= temp_v9) << 0x1d);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        temp_v9 = temp_v9 + 360.0f;
      }
      if ((int)temp_v9 >= 0x43b40001) {
        temp_v9 = temp_v9 - 360.0f;
      }
      *(float *)(g_lmapScene + 0x50) = temp_v9;
      *(unsigned int *)(param_1 + 0xc0) = 1;
    }
    temp_v4 = 1;
    temp_v9 = 0.017453292f;
    if (*(int *)(param_1 + 0x3c) >= 0x420c0001) {
      temp_v4 = 2;
    }
    temp_v1 = 0;
    do {
      temp_v0 = g_lmapScene;
      temp_v8 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = *(unsigned int *)(g_lmapScene + 0x1c);
      uStack_4c = *(unsigned int *)(g_lmapScene + 0x20);
      uStack_48 = *(unsigned int *)(g_lmapScene + 0x24);
      puVar9 = (unsigned int *)(g_lmapScene + 0x20);
      temp_v2 = *(unsigned int *)(g_lmapScene + 0x24);
      *(unsigned int *)(g_lmapScene + 0x28) = *(unsigned int *)(g_lmapScene + 0x1c);
      *(unsigned int *)(temp_v0 + 0x2c) = *puVar9;
      *(unsigned int *)(temp_v0 + 0x30) = temp_v2;
      temp_v10 = (*(float *)(param_1 + 0x3c) / temp_v8) * temp_v14;
      temp_v8 = *(float *)(temp_v0 + 0x50) * temp_v9;
      FUN_0028250c();
      temp_v0 = g_lmapScene;
      *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v8 * temp_v10;
      temp_v8 = *(float *)(temp_v0 + 0x50) * temp_v9;
      FUN_00282390();
      temp_v0 = g_lmapScene;
      *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v8 * temp_v10;
      if (DAT_0049fce8 == '\0') {
        temp_v5 = temp_v0 + 0x28;
        FUN_002ed094(temp_v5,&temp_v15);
      }
      temp_v0 = g_lmapScene;
      *(float *)(g_lmapScene + 0x1c) =
           (*(float *)(g_lmapScene + 0x28) - *(float *)(g_lmapScene + 0x1c)) +
           *(float *)(g_lmapScene + 0x1c);
      *(float *)(temp_v0 + 0x24) =
           (*(float *)(temp_v0 + 0x30) - *(float *)(temp_v0 + 0x24)) + *(float *)(temp_v0 + 0x24);
      temp_v0 = g_lmapScene;
    } while ((temp_v5 == 0) && (temp_v1 = temp_v1 + 1, temp_v1 < temp_v4));
    puVar9 = (unsigned int *)(g_lmapScene + 0x40);
    *(unsigned int *)(g_lmapScene + 0x4c) = *(unsigned int *)(g_lmapScene + 0x50);
    temp_v2 = *(unsigned int *)(temp_v0 + 0x20);
    temp_v3 = *(unsigned int *)(temp_v0 + 0x24);
    *puVar9 = *(unsigned int *)(temp_v0 + 0x1c);
    *(unsigned int *)(temp_v0 + 0x44) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x48) = temp_v3;
    *(int *)(temp_v0 + 0x34) = (int)temp_v11;
    *(int *)(temp_v0 + 0x38) = (int)((unsigned long long)temp_v11 >> 0x20);
    *(unsigned int *)(temp_v0 + 0x3c) = temp_v12;
    return;
  }
  *(unsigned int *)(temp_v1 + 0xd94) = 0;
  return;
}

} /* extern "C" */
