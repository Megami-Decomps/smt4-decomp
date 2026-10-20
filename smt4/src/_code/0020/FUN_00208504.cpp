/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00208504` (_code @ 0x208504, 0x674 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282228(int *);
int FUN_00282390(void);
int FUN_0028250c(void);

/* stack frame of void: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB8; /* 0xb8: local_b8 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern int g_lmapScene; /* 0x447e88 */

extern int FUN_002820a4(void);
/* Supplied declaration required: FUN_00282228. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */


void FUN_00208504(void)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  unsigned long long temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  int temp_v14;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  
  temp_v2 = 0.017453292f;
  temp_v7 = 120.0f;
  temp_v3 = 155.0f;
  temp_v11 = 250.0f;
  temp_v9 = 160.0f;
  temp_v6 = 0;
  temp_v12 = 370.0f;
  temp_v13 = 50.0f;
  temp_v4 = 350.0f;
  temp_v10 = 140.0f;
  temp_v8 = 150.0f;
  temp_v1 = DAT_004474f4 + 0x220;
  switch(*(unsigned int *)(DAT_004474f4 + 4)) {
  case 0:
    temp_v14 = *(unsigned int *)(DAT_004474f4 + 0x58);
    uStack_b4 = *(unsigned int *)(DAT_004474f4 + 0x5c);
    uStack_b0 = *(unsigned int *)(DAT_004474f4 + 0x60);
    temp_v16 = *(unsigned int *)(DAT_004474f4 + 0x50);
    temp_v15 = *(unsigned int *)(DAT_004474f4 + 0x4c);
    temp_v17 = *(unsigned int *)(DAT_004474f4 + 0x54);
    temp_v8 = *(float *)(g_lmapScene + 0x1c);
    temp_v12 = *(float *)(g_lmapScene + 0x20);
    temp_v4 = *(float *)(g_lmapScene + 0x4c) * 0.017453292f;
    temp_v10 = *(float *)(g_lmapScene + 0x24);
    FUN_0028250c();
    temp_v13 = 300.0f;
    temp_v12 = temp_v12 + temp_v7;
    temp_v8 = temp_v8 + temp_v4 * 300.0f;
    temp_v4 = *(float *)(g_lmapScene + 0x4c) * temp_v2;
    FUN_00282390();
    temp_v20 = temp_v10 + temp_v4 * temp_v13;
    temp_v7 = *(float *)(g_lmapScene + 0x1c);
    temp_v13 = *(float *)(g_lmapScene + 0x20);
    temp_v10 = *(float *)(g_lmapScene + 0x24);
    temp_v4 = (*(float *)(g_lmapScene + 0x4c) - temp_v3) * temp_v2;
    temp_v18 = temp_v8;
    temp_v19 = temp_v12;
    FUN_0028250c();
    temp_v7 = temp_v7 + temp_v4 * temp_v11;
    temp_v13 = temp_v13 + temp_v9;
    temp_v2 = (*(float *)(g_lmapScene + 0x4c) - temp_v3) * temp_v2;
    FUN_00282390();
    temp_v23 = temp_v10 + temp_v2 * temp_v11;
    temp_v25 = 0x1e;
    temp_v24 = 0;
    temp_v21 = temp_v7;
    temp_v22 = temp_v13;
    temp_v26 = temp_v6;
    FUN_00282228(&temp_v14);
    temp_v1 = DAT_004474f4;
    *(unsigned char *)(DAT_004474f4 + 0x21c) = 1;
    piVar1 = (int *)(temp_v1 + 4);
    *piVar1 = *piVar1 + 1;
    *(unsigned int *)(temp_v1 + 8) = 0;
    break;
  case 1:
    temp_v0 = FUN_002820a4();
    if (temp_v0 != 0) {
      temp_v14 = *(unsigned int *)(temp_v1 + 0x30);
      uStack_b4 = *(unsigned int *)(temp_v1 + 0x34);
      uStack_b0 = *(unsigned int *)(temp_v1 + 0x38);
      temp_v15 = *(unsigned int *)(temp_v1 + 0x3c);
      temp_v16 = *(unsigned int *)(temp_v1 + 0x40);
      temp_v17 = *(unsigned int *)(temp_v1 + 0x44);
      temp_v8 = *(float *)(g_lmapScene + 0x1c);
      temp_v11 = *(float *)(g_lmapScene + 0x20);
      temp_v4 = *(float *)(g_lmapScene + 0x4c) * temp_v2;
      temp_v10 = *(float *)(g_lmapScene + 0x24);
      FUN_0028250c();
      temp_v8 = temp_v8 + temp_v4 * temp_v12;
      temp_v11 = temp_v11 + temp_v7;
      temp_v4 = *(float *)(g_lmapScene + 0x4c) * temp_v2;
      FUN_00282390();
      temp_v20 = temp_v10 + temp_v4 * temp_v12;
      temp_v7 = *(float *)(g_lmapScene + 0x1c);
      temp_v12 = *(float *)(g_lmapScene + 0x20);
      temp_v10 = *(float *)(g_lmapScene + 0x24);
      temp_v4 = (*(float *)(g_lmapScene + 0x4c) - temp_v3) * temp_v2;
      temp_v18 = temp_v8;
      temp_v19 = temp_v11;
      FUN_0028250c();
      temp_v8 = 200.0f;
      temp_v12 = temp_v12 + temp_v9;
      temp_v7 = temp_v7 + temp_v4 * 200.0f;
      temp_v2 = (*(float *)(g_lmapScene + 0x4c) - temp_v3) * temp_v2;
      FUN_00282390();
      temp_v23 = temp_v10 + temp_v2 * temp_v8;
      temp_v25 = 0x5a;
      temp_v24 = 0;
      temp_v21 = temp_v7;
      temp_v22 = temp_v12;
      temp_v26 = temp_v6;
      FUN_00282228(&temp_v14);
      temp_v1 = DAT_004474f4;
      *(int *)(DAT_004474f4 + 4) = *(int *)(DAT_004474f4 + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    break;
  case 2:
    temp_v0 = FUN_002820a4();
    if (temp_v0 != 0) {
      temp_v14 = *(unsigned int *)(temp_v1 + 0x30);
      uStack_b4 = *(unsigned int *)(temp_v1 + 0x34);
      uStack_b0 = *(unsigned int *)(temp_v1 + 0x38);
      temp_v15 = *(unsigned int *)(temp_v1 + 0x3c);
      temp_v16 = *(unsigned int *)(temp_v1 + 0x40);
      temp_v17 = *(unsigned int *)(temp_v1 + 0x44);
      temp_v8 = *(float *)(g_lmapScene + 0x1c);
      temp_v10 = *(float *)(g_lmapScene + 0x20);
      temp_v4 = *(float *)(g_lmapScene + 0x4c) * temp_v2;
      temp_v7 = *(float *)(g_lmapScene + 0x24);
      FUN_0028250c();
      temp_v8 = temp_v8 + temp_v4 * temp_v12;
      temp_v10 = temp_v10 + temp_v13;
      temp_v4 = *(float *)(g_lmapScene + 0x4c) * temp_v2;
      FUN_00282390();
      temp_v20 = temp_v7 + temp_v4 * temp_v12;
      temp_v7 = *(float *)(g_lmapScene + 0x1c);
      temp_v12 = *(float *)(g_lmapScene + 0x20);
      temp_v9 = *(float *)(g_lmapScene + 0x24);
      temp_v4 = (*(float *)(g_lmapScene + 0x4c) - temp_v3) * temp_v2;
      temp_v18 = temp_v8;
      temp_v19 = temp_v10;
      FUN_0028250c();
      temp_v7 = temp_v7 + temp_v4 * temp_v11;
      temp_v12 = temp_v12 + temp_v11;
      temp_v2 = (*(float *)(g_lmapScene + 0x4c) - temp_v3) * temp_v2;
      FUN_00282390();
      temp_v23 = temp_v9 + temp_v2 * temp_v11;
      temp_v25 = 10;
      temp_v24 = 0;
      temp_v21 = temp_v7;
      temp_v22 = temp_v12;
      temp_v26 = temp_v6;
      FUN_00282228(&temp_v14);
      temp_v1 = DAT_004474f4;
      *(int *)(DAT_004474f4 + 4) = *(int *)(DAT_004474f4 + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    break;
  case 3:
    temp_v0 = FUN_002820a4();
    if (temp_v0 != 0) {
      temp_v14 = *(unsigned int *)(temp_v1 + 0x30);
      uStack_b4 = *(unsigned int *)(temp_v1 + 0x34);
      uStack_b0 = *(unsigned int *)(temp_v1 + 0x38);
      temp_v15 = *(unsigned int *)(temp_v1 + 0x3c);
      temp_v16 = *(unsigned int *)(temp_v1 + 0x40);
      temp_v17 = *(unsigned int *)(temp_v1 + 0x44);
      temp_v8 = *(float *)(g_lmapScene + 0x1c);
      temp_v10 = *(float *)(g_lmapScene + 0x20);
      temp_v4 = *(float *)(g_lmapScene + 0x4c) * temp_v2;
      temp_v7 = *(float *)(g_lmapScene + 0x24);
      FUN_0028250c();
      temp_v8 = temp_v8 + temp_v4 * temp_v12;
      temp_v10 = temp_v10 + temp_v13;
      temp_v4 = *(float *)(g_lmapScene + 0x4c) * temp_v2;
      FUN_00282390();
      temp_v20 = temp_v7 + temp_v4 * temp_v12;
      temp_v9 = *(float *)(g_lmapScene + 0x1c);
      temp_v12 = *(float *)(g_lmapScene + 0x20);
      temp_v7 = *(float *)(g_lmapScene + 0x24);
      temp_v4 = (*(float *)(g_lmapScene + 0x4c) - temp_v3) * temp_v2;
      temp_v18 = temp_v8;
      temp_v19 = temp_v10;
      FUN_0028250c();
      temp_v9 = temp_v9 + temp_v4 * temp_v11;
      temp_v12 = temp_v12 + 280.0f;
      temp_v2 = (*(float *)(g_lmapScene + 0x4c) - temp_v3) * temp_v2;
      FUN_00282390();
      temp_v23 = temp_v7 + temp_v2 * temp_v11;
      temp_v25 = 0x50;
      temp_v24 = 0;
      temp_v21 = temp_v9;
      temp_v22 = temp_v12;
      temp_v26 = temp_v6;
      FUN_00282228(&temp_v14);
      temp_v1 = DAT_004474f4;
      *(int *)(DAT_004474f4 + 4) = *(int *)(DAT_004474f4 + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    break;
  case 4:
    temp_v0 = FUN_002820a4();
    if (temp_v0 != 0) {
      temp_v14 = *(unsigned int *)(temp_v1 + 0x30);
      uStack_b4 = *(unsigned int *)(temp_v1 + 0x34);
      uStack_b0 = *(unsigned int *)(temp_v1 + 0x38);
      temp_v13 = 15.0f;
      temp_v15 = *(unsigned int *)(temp_v1 + 0x3c);
      temp_v16 = *(unsigned int *)(temp_v1 + 0x40);
      temp_v17 = *(unsigned int *)(temp_v1 + 0x44);
      temp_v7 = *(float *)(g_lmapScene + 0x1c);
      temp_v12 = *(float *)(g_lmapScene + 0x20);
      temp_v11 = *(float *)(g_lmapScene + 0x24);
      temp_v3 = (*(float *)(g_lmapScene + 0x4c) - 15.0f) * temp_v2;
      FUN_0028250c();
      temp_v7 = temp_v7 + temp_v3 * temp_v4;
      temp_v19 = temp_v12 + temp_v10;
      temp_v3 = (*(float *)(g_lmapScene + 0x4c) - temp_v13) * temp_v2;
      FUN_00282390();
      temp_v20 = temp_v11 + temp_v3 * temp_v4;
      temp_v4 = *(float *)(g_lmapScene + 0x1c);
      temp_v11 = *(float *)(g_lmapScene + 0x20);
      temp_v10 = *(float *)(g_lmapScene + 0x24);
      temp_v3 = (*(float *)(g_lmapScene + 0x4c) - temp_v9) * temp_v2;
      temp_v18 = temp_v7;
      FUN_0028250c();
      temp_v4 = temp_v4 + temp_v3 * temp_v8;
      temp_v11 = temp_v11 + temp_v8;
      temp_v2 = (*(float *)(g_lmapScene + 0x4c) - temp_v9) * temp_v2;
      FUN_00282390();
      temp_v23 = temp_v10 + temp_v2 * temp_v8;
      temp_v25 = 0xf;
      temp_v24 = 1;
      temp_v26 = 0x40000000;
      temp_v21 = temp_v4;
      temp_v22 = temp_v11;
      FUN_00282228(&temp_v14);
      temp_v1 = DAT_004474f4;
      *(int *)(DAT_004474f4 + 4) = *(int *)(DAT_004474f4 + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    break;
  case 5:
    temp_v0 = FUN_002820a4();
    if (temp_v0 != 0) {
      temp_v14 = *(unsigned int *)(temp_v1 + 0x30);
      uStack_b4 = *(unsigned int *)(temp_v1 + 0x34);
      uStack_b0 = *(unsigned int *)(temp_v1 + 0x38);
      temp_v13 = 18.0f;
      temp_v15 = *(unsigned int *)(temp_v1 + 0x3c);
      temp_v16 = *(unsigned int *)(temp_v1 + 0x40);
      temp_v17 = *(unsigned int *)(temp_v1 + 0x44);
      temp_v9 = *(float *)(g_lmapScene + 0x1c);
      temp_v12 = *(float *)(g_lmapScene + 0x20);
      temp_v11 = *(float *)(g_lmapScene + 0x24);
      temp_v3 = (*(float *)(g_lmapScene + 0x4c) - 18.0f) * temp_v2;
      FUN_0028250c();
      temp_v9 = temp_v9 + temp_v3 * temp_v4;
      temp_v12 = temp_v12 + temp_v10;
      temp_v3 = (*(float *)(g_lmapScene + 0x4c) - temp_v13) * temp_v2;
      FUN_00282390();
      temp_v20 = temp_v11 + temp_v3 * temp_v4;
      temp_v10 = 165.0f;
      temp_v4 = *(float *)(g_lmapScene + 0x24);
      temp_v5 = *(unsigned long long *)(g_lmapScene + 0x1c);
      temp_v3 = (*(float *)(g_lmapScene + 0x4c) - 165.0f) * temp_v2;
      temp_v18 = temp_v9;
      temp_v19 = temp_v12;
      FUN_0028250c();
      temp_v3 = (float)temp_v5 + temp_v3 * temp_v7;
      temp_v8 = (float)((unsigned long long)temp_v5 >> 0x20) + temp_v8;
      temp_v2 = (*(float *)(g_lmapScene + 0x4c) - temp_v10) * temp_v2;
      FUN_00282390();
      temp_v23 = temp_v4 + temp_v2 * temp_v7;
      temp_v25 = 0x69;
      temp_v24 = 0;
      temp_v21 = temp_v3;
      temp_v22 = temp_v8;
      temp_v26 = temp_v6;
      FUN_00282228(&temp_v14);
      temp_v1 = DAT_004474f4;
      *(int *)(DAT_004474f4 + 4) = *(int *)(DAT_004474f4 + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    break;
  case 6:
    temp_v1 = FUN_002820a4();
    if (temp_v1 != 0) {
      temp_v1 = DAT_004474f4;
      *(int *)(DAT_004474f4 + 4) = *(int *)(DAT_004474f4 + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
  }
  return;
}

} /* extern "C" */
