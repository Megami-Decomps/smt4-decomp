/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033feb8` (_code @ 0x33feb8, 0x2a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_00317af8(float [9], unsigned int *, int);
int FUN_0033f9f4(void);
int FUN_0036d5e0(int, int *);
int FUN_0050d8e4(void);
int SBORROW4(int, int);
int VectorSignedToFloat(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern int g_lmapScene; /* 0x581288 */
extern signed char DAT_005f1614; /* 0x5f1614 */
extern signed char DAT_005f1bc4; /* 0x5f1bc4 */
extern signed char DAT_005f1c48; /* 0x5f1c48 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
extern unsigned int FUN_0029202c(void);
/* Supplied declaration required: FUN_00317af8. */
/* Supplied declaration required: FUN_0033f9f4. */
/* Supplied declaration required: FUN_0036d5e0. */
/* Supplied declaration required: FUN_0050d8e4. */


void FUN_0033feb8(int param_1)

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
  unsigned long long temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  int temp_v15;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int temp_v16;
  float temp_v17 [9];
  
  temp_v1 = gameFlagsGetBlock();
  temp_v4 = g_lmapScene;
  temp_v12 = 1.0f;
  temp_v13 = 60.0f;
  temp_v5 = 0;
  if ((DAT_005f1bc4 == '\0') && (DAT_005f1614 == '\0')) {
    temp_v14 = 0.0f;
    temp_v10 = *(unsigned long long *)(g_lmapScene + 0x1c);
    temp_v11 = *(unsigned int *)(g_lmapScene + 0x24);
    *(int *)(g_lmapScene + 0x28) = (int)temp_v10;
    *(int *)(temp_v4 + 0x2c) = (int)((unsigned long long)temp_v10 >> 0x20);
    *(unsigned int *)(temp_v4 + 0x30) = temp_v11;
    temp_v9 = temp_v12;
    temp_v2 = FUN_0029202c();
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
      temp_v9 = temp_v8;
    }
    FUN_00317af8(temp_v17,&temp_v16,0);
    FUN_0033f9f4();
    *(unsigned int *)(param_1 + 0xc0) = 0;
    if (((((unsigned int)temp_v17[0] < 0xbf000000) && ((int)temp_v17[0] < 0x3f000000)) &&
        (temp_v16 < 0xbf000000)) && ((int)temp_v16 < 0x3f000000)) {
      temp_v12 = *(float *)(param_1 + 0x3c) * 0.5f;
      *(float *)(param_1 + 0x3c) = temp_v12;
      if ((int)temp_v12 < 0x3a83126f) {
        *(float *)(param_1 + 0x3c) = temp_v14;
      }
    }
    else {
      if ((int)*(float *)(param_1 + 0x3c) >= 0x3f800001) {
        temp_v12 = *(float *)(param_1 + 0x3c);
      }
      temp_v12 = temp_v12 + temp_v12 * 0.7f;
      *(float *)(param_1 + 0x3c) = temp_v12;
      if ((int)temp_v12 >= 0x42700001) {
        temp_v12 = temp_v13;
      }
      *(float *)(param_1 + 0x3c) = temp_v12;
      FUN_0050d8e4();
      temp_v12 = -(temp_v17[0] * 57.32484f - *(float *)(param_1 + 0x50));
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 <= temp_v12) << 0x1d);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        temp_v12 = temp_v12 + 360.0f;
      }
      if ((int)temp_v12 >= 0x43b40001) {
        temp_v12 = temp_v12 - 360.0f;
      }
      *(float *)(g_lmapScene + 0x50) = temp_v12;
      *(unsigned int *)(param_1 + 0xc0) = 1;
    }
    temp_v4 = 1;
    temp_v12 = 0.017453292f;
    if (*(int *)(param_1 + 0x3c) >= 0x420c0001) {
      temp_v4 = 2;
    }
    temp_v1 = 0;
    do {
      temp_v0 = g_lmapScene;
      temp_v15 = *(unsigned int *)(g_lmapScene + 0x1c);
      uStack_4c = *(unsigned int *)(g_lmapScene + 0x20);
      uStack_48 = *(unsigned int *)(g_lmapScene + 0x24);
      temp_v13 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar9 = (unsigned int *)(g_lmapScene + 0x20);
      temp_v2 = *(unsigned int *)(g_lmapScene + 0x24);
      *(unsigned int *)(g_lmapScene + 0x28) = *(unsigned int *)(g_lmapScene + 0x1c);
      *(unsigned int *)(temp_v0 + 0x2c) = *puVar9;
      *(unsigned int *)(temp_v0 + 0x30) = temp_v2;
      temp_v8 = (*(float *)(param_1 + 0x3c) / temp_v13) * temp_v9;
      temp_v13 = *(float *)(temp_v0 + 0x50) * temp_v12;
      FUN_001bc124();
      temp_v0 = g_lmapScene;
      *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v13 * temp_v8;
      temp_v13 = *(float *)(temp_v0 + 0x50) * temp_v12;
      FUN_001bbf0c();
      temp_v0 = g_lmapScene;
      *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v13 * temp_v8;
      if (DAT_005f1c48 == '\0') {
        temp_v5 = temp_v0 + 0x28;
        FUN_0036d5e0(temp_v5,&temp_v15);
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
    *(int *)(temp_v0 + 0x34) = (int)temp_v10;
    *(int *)(temp_v0 + 0x38) = (int)((unsigned long long)temp_v10 >> 0x20);
    *(unsigned int *)(temp_v0 + 0x3c) = temp_v11;
    return;
  }
  *(unsigned int *)(temp_v1 + 0xdc8) = 0;
  return;
}

} /* extern "C" */
