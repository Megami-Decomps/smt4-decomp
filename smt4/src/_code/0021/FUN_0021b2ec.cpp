/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021b2ec` (_code @ 0x21b2ec, 0x7f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int vectorPairTransitionStep(void);
int FUN_00282228(float *);
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

extern unsigned char DAT_004474f0; /* 0x4474f0 */
extern int g_lmapScene; /* 0x447e88 */

/* Supplied declaration required: vectorPairTransitionStep. */
/* Supplied declaration required: FUN_00282228. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */


void FUN_0021b2ec(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float *pfVar4;
  int *piVar5;
  int temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  unsigned int temp_v15;
  float temp_v16;
  float uStack_b4;
  float fStack_b0;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  
  temp_v0 = g_lmapScene;
  temp_v1 = (*(int *)((unsigned char *)&DAT_004474f0 + 0x4));
  temp_v5 = 0.017453292f;
  temp_v13 = 0;
  temp_v2 = *(int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4);
  temp_v11 = 180.0f;
  temp_v6 = 50.0f;
  temp_v3 = (*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x220;
  if (temp_v2 == 0x32) {
    temp_v16 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x58);
    uStack_b4 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x5c);
    fStack_b0 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x60);
    temp_v17 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x4c);
    temp_v18 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x50);
    temp_v19 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x54);
    temp_v15 = *(unsigned int *)(g_lmapScene + 0x2c);
    temp_v14 = *(float *)(g_lmapScene + 0x28);
    temp_v11 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
    temp_v12 = *(float *)(g_lmapScene + 0x30);
    FUN_0028250c();
    temp_v4 = 250.0f;
    temp_v14 = temp_v14 + temp_v11 * 250.0f;
    temp_v11 = *(float *)(g_lmapScene + 0x50) * temp_v5;
    FUN_00282390();
    temp_v22 = temp_v12 + temp_v11 * temp_v4;
    temp_v12 = *(float *)(g_lmapScene + 0x30);
    temp_v11 = *(float *)(g_lmapScene + 0x50) * temp_v5;
    temp_v4 = *(float *)(g_lmapScene + 0x28);
    temp_v7 = *(float *)(g_lmapScene + 0x2c);
    temp_v20 = temp_v14;
    temp_v21 = (float)temp_v15;
    FUN_0028250c();
    temp_v4 = temp_v4 + temp_v11 * temp_v6;
    temp_v7 = temp_v7 + 300.0f;
    temp_v5 = *(float *)(g_lmapScene + 0x50) * temp_v5;
    FUN_00282390();
    temp_v25 = temp_v12 + temp_v5 * temp_v6;
    temp_v27 = 0x3c;
    temp_v26 = 0;
    temp_v23 = temp_v4;
    temp_v24 = temp_v7;
    temp_v28 = temp_v13;
    FUN_00282228(&temp_v16);
    temp_v1 = (*(int *)((unsigned char *)&DAT_004474f0 + 0x4));
    *(int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) = *(int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) + 1;
    *(unsigned int *)(temp_v1 + 8) = 0;
    return;
  }
  if (temp_v2 >= 0x33) {
    temp_v12 = 51.0f;
    temp_v14 = 350.0f;
    temp_v13 = 0x3f800000;
    if (temp_v2 == 0x65) {
      temp_v16 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x58);
      uStack_b4 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x5c);
      fStack_b0 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x60);
      temp_v17 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x4c);
      temp_v18 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x50);
      temp_v19 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x54);
      temp_v13 = *(unsigned int *)(g_lmapScene + 0x2c);
      temp_v7 = *(float *)(g_lmapScene + 0x28);
      temp_v8 = *(float *)(g_lmapScene + 0x30);
      temp_v4 = (*(float *)(g_lmapScene + 0x50) + 180.0f) * 0.017453292f;
      FUN_0028250c();
      temp_v7 = temp_v7 + temp_v4 * temp_v12;
      temp_v4 = (*(float *)(g_lmapScene + 0x50) + temp_v11) * temp_v5;
      FUN_00282390();
      temp_v22 = temp_v8 + temp_v4 * temp_v12;
      temp_v4 = *(float *)(g_lmapScene + 0x30);
      temp_v8 = *(float *)(g_lmapScene + 0x28);
      temp_v10 = *(float *)(g_lmapScene + 0x2c);
      temp_v12 = (*(float *)(g_lmapScene + 0x50) + temp_v11) * temp_v5;
      temp_v20 = temp_v7;
      temp_v21 = (float)temp_v13;
      FUN_0028250c();
      temp_v8 = temp_v8 + temp_v12 * temp_v6;
      temp_v24 = temp_v10 + temp_v14;
      temp_v5 = (*(float *)(g_lmapScene + 0x50) + temp_v11) * temp_v5;
      FUN_00282390();
      temp_v25 = temp_v4 + temp_v5 * temp_v6;
      temp_v26 = 1;
      temp_v27 = 600;
      temp_v28 = 0x40000000;
      temp_v23 = temp_v8;
      FUN_00282228(&temp_v16);
      vectorPairTransitionStep();
      return;
    }
    if (temp_v2 < 0x66) {
      if (temp_v2 == 0x33) {
        temp_v1 = vectorPairTransitionStep();
        if (temp_v1 == 0) {
          return;
        }
        temp_v1 = (*(int *)((unsigned char *)&DAT_004474f0 + 0x4));
        *(int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) = *(int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) + 1;
        *(unsigned int *)(temp_v1 + 8) = 0;
        return;
      }
      if (temp_v2 != 100) {
        return;
      }
    }
    else if (temp_v2 != 0x96) {
      if (temp_v2 != 0x97) {
        return;
      }
      vectorPairTransitionStep();
      return;
    }
    temp_v7 = *(float *)(g_lmapScene + 0x28);
    temp_v15 = *(unsigned int *)(g_lmapScene + 0x2c);
    temp_v8 = *(float *)(g_lmapScene + 0x30);
    temp_v4 = (*(float *)(g_lmapScene + 0x50) + 180.0f) * 0.017453292f;
    FUN_0028250c();
    temp_v7 = temp_v7 + temp_v4 * temp_v12;
    temp_v4 = (*(float *)(g_lmapScene + 0x50) + temp_v11) * temp_v5;
    FUN_00282390();
    temp_v22 = temp_v8 + temp_v4 * temp_v12;
    temp_v4 = *(float *)(g_lmapScene + 0x28);
    temp_v10 = *(float *)(g_lmapScene + 0x2c);
    temp_v8 = *(float *)(g_lmapScene + 0x30);
    temp_v12 = (*(float *)(g_lmapScene + 0x50) + temp_v11) * temp_v5;
    temp_v20 = temp_v7;
    temp_v21 = (float)temp_v15;
    FUN_0028250c();
    temp_v4 = temp_v4 + temp_v12 * temp_v6;
    temp_v18 = temp_v10 + temp_v14;
    temp_v5 = (*(float *)(g_lmapScene + 0x50) + temp_v11) * temp_v5;
    FUN_00282390();
    temp_v19 = temp_v8 + temp_v5 * temp_v6;
    temp_v16 = temp_v20;
    uStack_b4 = temp_v21;
    fStack_b0 = temp_v22;
    temp_v26 = 1;
    temp_v27 = 600;
    temp_v17 = temp_v4;
    temp_v23 = temp_v4;
    temp_v24 = temp_v18;
    temp_v25 = temp_v19;
    temp_v28 = temp_v13;
    FUN_00282228(&temp_v16);
    vectorPairTransitionStep();
    temp_v1 = (*(int *)((unsigned char *)&DAT_004474f0 + 0x4));
    *(int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) = *(int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) + 1;
    *(unsigned int *)(temp_v1 + 8) = 0;
    return;
  }
  if (temp_v2 == 10) {
    temp_v16 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x58);
    uStack_b4 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x5c);
    fStack_b0 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x60);
    temp_v17 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x4c);
    temp_v18 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x50);
    temp_v19 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x54);
    temp_v14 = *(float *)(g_lmapScene + 0x28);
    temp_v8 = *(float *)(g_lmapScene + 0x2c);
    temp_v12 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
    temp_v4 = *(float *)(g_lmapScene + 0x30);
    FUN_0028250c();
    temp_v7 = 200.0f;
    temp_v14 = temp_v14 + temp_v12 * 200.0f;
    temp_v8 = temp_v8 + 10.0f;
    temp_v12 = *(float *)(g_lmapScene + 0x50) * temp_v5;
    FUN_00282390();
    temp_v22 = temp_v4 + temp_v12 * temp_v7;
    temp_v4 = *(float *)(g_lmapScene + 0x28);
    temp_v10 = *(float *)(g_lmapScene + 0x2c);
    temp_v7 = *(float *)(g_lmapScene + 0x30);
    temp_v12 = (*(float *)(g_lmapScene + 0x50) - temp_v11) * temp_v5;
    temp_v20 = temp_v14;
    temp_v21 = temp_v8;
    FUN_0028250c();
    temp_v4 = temp_v4 + temp_v12 * temp_v6;
    temp_v24 = temp_v10 + 330.0f;
    temp_v5 = (*(float *)(g_lmapScene + 0x50) - temp_v11) * temp_v5;
    FUN_00282390();
    temp_v25 = temp_v7 + temp_v5 * temp_v6;
    temp_v27 = 0x14;
    temp_v26 = 0;
    temp_v23 = temp_v4;
    temp_v28 = temp_v13;
    FUN_00282228(&temp_v16);
    temp_v1 = (*(int *)((unsigned char *)&DAT_004474f0 + 0x4));
    *(int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) = *(int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) + 1;
    *(unsigned int *)(temp_v1 + 8) = 0;
    return;
  }
  if (temp_v2 >= 11) {
    if (temp_v2 != 0xb) {
      if (temp_v2 == 0xc) {
        temp_v16 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x58);
        uStack_b4 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x5c);
        fStack_b0 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x60);
        temp_v17 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x4c);
        temp_v18 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x50);
        temp_v19 = *(float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x54);
        temp_v12 = *(float *)(g_lmapScene + 0x24);
        temp_v11 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
        temp_v14 = *(float *)(g_lmapScene + 0x1c);
        temp_v7 = *(float *)(g_lmapScene + 0x20);
        FUN_0028250c();
        temp_v4 = 160.0f;
        temp_v7 = temp_v7 + temp_v6;
        temp_v14 = temp_v14 + temp_v11 * 160.0f;
        temp_v11 = *(float *)(g_lmapScene + 0x50) * temp_v5;
        FUN_00282390();
        temp_v22 = temp_v12 + temp_v11 * temp_v4;
        temp_v12 = *(float *)(g_lmapScene + 0x1c);
        temp_v8 = *(float *)(g_lmapScene + 0x20);
        temp_v11 = *(float *)(g_lmapScene + 0x50) * temp_v5;
        temp_v4 = *(float *)(g_lmapScene + 0x24);
        temp_v20 = temp_v14;
        temp_v21 = temp_v7;
        FUN_0028250c();
        temp_v12 = temp_v12 + temp_v11 * temp_v6;
        temp_v8 = temp_v8 + 280.0f;
        temp_v5 = *(float *)(g_lmapScene + 0x50) * temp_v5;
        FUN_00282390();
        temp_v25 = temp_v4 + temp_v5 * temp_v6;
        temp_v26 = 1;
        temp_v27 = 600;
        temp_v28 = 0x40400000;
        temp_v23 = temp_v12;
        temp_v24 = temp_v8;
        FUN_00282228(&temp_v16);
        vectorPairTransitionStep();
      }
    }
    else {
      temp_v1 = vectorPairTransitionStep();
      if (temp_v1 != 0) {
        temp_v1 = (*(int *)((unsigned char *)&DAT_004474f0 + 0x4));
        *(int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) = *(int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) + 1;
        *(unsigned int *)(temp_v1 + 8) = 0;
        return;
      }
    }
    return;
  }
  temp_v12 = 100.0f;
  temp_v6 = 90.0f;
  temp_v11 = 110.0f;
  temp_v14 = 210.0f;
  if (temp_v2 == 0) {
    pfVar4 = (float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x58);
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0xc) = 0;
    temp_v16 = *pfVar4;
    uStack_b4 = *(unsigned int *)(temp_v1 + 0x5c);
    fStack_b0 = *(float *)(temp_v1 + 0x60);
    temp_v17 = *(float *)(temp_v1 + 0x4c);
    temp_v18 = *(float *)(temp_v1 + 0x50);
    temp_v19 = *(float *)(temp_v1 + 0x54);
    temp_v7 = *(float *)(temp_v0 + 0x28);
    temp_v10 = *(float *)(temp_v0 + 0x2c);
    temp_v4 = *(float *)(temp_v0 + 0x50) * 0.017453292f;
    temp_v8 = *(float *)(temp_v0 + 0x30);
    FUN_0028250c();
    temp_v7 = temp_v7 + temp_v4 * temp_v12;
    temp_v10 = temp_v10 + temp_v6;
    temp_v6 = *(float *)(g_lmapScene + 0x50) * temp_v5;
    FUN_00282390();
    temp_v22 = temp_v8 + temp_v6 * temp_v12;
    temp_v12 = *(float *)(g_lmapScene + 0x28);
    temp_v8 = *(float *)(g_lmapScene + 0x2c);
    temp_v4 = *(float *)(g_lmapScene + 0x30);
    temp_v6 = (*(float *)(g_lmapScene + 0x50) - temp_v11) * temp_v5;
    temp_v20 = temp_v7;
    temp_v21 = temp_v10;
    FUN_0028250c();
    temp_v12 = temp_v12 + temp_v6 * temp_v11;
    temp_v8 = temp_v8 + temp_v14;
    temp_v5 = (*(float *)(g_lmapScene + 0x50) - temp_v11) * temp_v5;
    FUN_00282390();
    temp_v25 = temp_v4 + temp_v5 * temp_v11;
    temp_v27 = 8;
    temp_v26 = 0;
    temp_v23 = temp_v12;
    temp_v24 = temp_v8;
    temp_v28 = temp_v13;
    FUN_00282228(&temp_v16);
    temp_v1 = (*(int *)((unsigned char *)&DAT_004474f0 + 0x4));
    piVar5 = (int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4);
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x21c) = 1;
    *piVar5 = *(int *)(temp_v1 + 4) + 1;
    *(unsigned int *)(temp_v1 + 8) = 0;
    *(unsigned int *)(temp_v1 + 0xc) = 0;
    return;
  }
  if (temp_v2 != 1) {
    if (temp_v2 != 2) {
      return;
    }
    temp_v0 = *(int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0xc);
    if (temp_v0 == 1) {
      *(unsigned int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) = 10;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    if (temp_v0 == 2) {
      *(unsigned int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) = 0x32;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    if (temp_v0 == 3) {
      *(unsigned int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) = 100;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    if (temp_v0 != 4) {
      vectorPairTransitionStep();
      return;
    }
  }
  else {
    temp_v0 = *(int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0xc);
    if (temp_v0 == 1) {
      *(unsigned int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) = 10;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    if (temp_v0 == 2) {
      *(unsigned int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) = 0x32;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    if (temp_v0 == 3) {
      *(unsigned int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) = 100;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    if (temp_v0 != 4) {
      temp_v1 = vectorPairTransitionStep();
      if (temp_v1 == 0) {
        return;
      }
      temp_v16 = *(float *)(temp_v3 + 0x30);
      uStack_b4 = *(unsigned int *)(temp_v3 + 0x34);
      fStack_b0 = *(float *)(temp_v3 + 0x38);
      temp_v17 = *(float *)(temp_v3 + 0x3c);
      temp_v18 = *(float *)(temp_v3 + 0x40);
      temp_v19 = *(float *)(temp_v3 + 0x44);
      temp_v7 = *(float *)(g_lmapScene + 0x30);
      temp_v4 = *(float *)(g_lmapScene + 0x50) * temp_v5;
      temp_v9 = *(unsigned long long *)(g_lmapScene + 0x28);
      FUN_0028250c();
      temp_v8 = (float)temp_v9 + temp_v4 * temp_v12;
      temp_v6 = (float)((unsigned long long)temp_v9 >> 0x20) + temp_v6;
      temp_v4 = *(float *)(g_lmapScene + 0x50) * temp_v5;
      FUN_00282390();
      temp_v22 = temp_v7 + temp_v4 * temp_v12;
      temp_v4 = *(float *)(g_lmapScene + 0x28);
      temp_v10 = *(float *)(g_lmapScene + 0x2c);
      temp_v7 = *(float *)(g_lmapScene + 0x30);
      temp_v12 = (*(float *)(g_lmapScene + 0x50) - temp_v11) * temp_v5;
      temp_v20 = temp_v8;
      temp_v21 = temp_v6;
      FUN_0028250c();
      temp_v4 = temp_v4 + temp_v12 * temp_v11;
      temp_v10 = temp_v10 + temp_v14;
      temp_v5 = (*(float *)(g_lmapScene + 0x50) - temp_v11) * temp_v5;
      FUN_00282390();
      temp_v25 = temp_v7 + temp_v5 * temp_v11;
      temp_v27 = 300;
      temp_v26 = 0;
      temp_v23 = temp_v4;
      temp_v24 = temp_v10;
      temp_v28 = temp_v13;
      FUN_00282228(&temp_v16);
      temp_v1 = (*(int *)((unsigned char *)&DAT_004474f0 + 0x4));
      *(int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) = *(int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
  }
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 4) = 0x96;
  *(unsigned int *)(temp_v1 + 8) = 0;
  return;
}

} /* extern "C" */
