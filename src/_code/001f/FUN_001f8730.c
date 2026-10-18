/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f8730` (_code @ 0x1f8730, 0x59c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spB0; /* 0xb0: local_b0 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern float DAT_00447500; /* 0x447500 */
extern int DAT_00447e88; /* 0x447e88 */

/* Supplied declaration required: FUN_00282314. */
/* Supplied declaration required: FUN_00282498. */
/* Supplied declaration required: FUN_00282600. */
/* Supplied declaration required: FUN_0028277c. */


void FUN_001f8730(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned long long temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned int temp_v15;
  float fStack_ac;
  float uStack_a8;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  
  temp_v0 = DAT_00447e88;
  temp_v1 = DAT_004474f4;
  temp_v5 = 40.0f;
  temp_v11 = 0;
  temp_v2 = *(int *)(DAT_004474f4 + 4);
  temp_v4 = 0.017453292f;
  temp_v10 = 200.0f;
  if (temp_v2 == 10) {
    temp_v15 = *(unsigned int *)(DAT_004474f4 + 0x58);
    fStack_ac = *(float *)(DAT_004474f4 + 0x5c);
    uStack_a8 = *(unsigned int *)(DAT_004474f4 + 0x60);
    temp_v16 = *(float *)(DAT_004474f4 + 0x4c);
    temp_v17 = *(float *)(DAT_004474f4 + 0x50);
    temp_v18 = *(float *)(DAT_004474f4 + 0x54);
    temp_v13 = *(float *)(DAT_00447e88 + 0x28);
    temp_v3 = *(float *)(DAT_00447e88 + 0x2c);
    temp_v12 = *(float *)(DAT_00447e88 + 0x50) * 0.017453292f;
    temp_v14 = *(float *)(DAT_00447e88 + 0x30);
    FUN_0028277c();
    temp_v13 = temp_v13 + temp_v12 * temp_v5;
    temp_v3 = temp_v3 + 250.0f;
    temp_v12 = *(float *)(DAT_00447e88 + 0x50) * temp_v4;
    FUN_00282600();
    temp_v21 = temp_v14 + temp_v12 * temp_v5;
    temp_v14 = 170.0f;
    temp_v12 = *(float *)(DAT_00447e88 + 0x30);
    temp_v8 = *(unsigned long long *)(DAT_00447e88 + 0x28);
    temp_v5 = (*(float *)(DAT_00447e88 + 0x50) - 170.0f) * temp_v4;
    temp_v19 = temp_v13;
    temp_v20 = temp_v3;
    FUN_0028277c();
    temp_v5 = (float)temp_v8 + temp_v5 * temp_v10;
    temp_v13 = (float)((unsigned long long)temp_v8 >> 0x20) + 15.0f;
    temp_v4 = (*(float *)(DAT_00447e88 + 0x50) - temp_v14) * temp_v4;
    FUN_00282600();
    temp_v24 = temp_v12 + temp_v4 * temp_v10;
    temp_v25 = 0;
    temp_v26 = 0x1e;
    temp_v22 = temp_v5;
    temp_v23 = temp_v13;
    temp_v27 = temp_v11;
    FUN_00282498(&temp_v15);
    temp_v1 = DAT_004474f4;
    *(int *)(DAT_004474f4 + 4) = *(int *)(DAT_004474f4 + 4) + 1;
    *(unsigned int *)(temp_v1 + 8) = 0;
    return;
  }
  if (temp_v2 < 0xb) {
    temp_v14 = 210.0f;
    temp_v10 = 135.0f;
    temp_v12 = 90.0f;
    temp_v13 = 100.0f;
    if (temp_v2 == 0) {
      puVar4 = (unsigned int *)(DAT_004474f4 + 0x58);
      *(unsigned int *)(DAT_004474f4 + 0xc) = 0;
      temp_v15 = *puVar4;
      fStack_ac = *(float *)(temp_v1 + 0x5c);
      uStack_a8 = *(unsigned int *)(temp_v1 + 0x60);
      temp_v17 = *(float *)(temp_v1 + 0x50);
      temp_v16 = *(float *)(temp_v1 + 0x4c);
      temp_v18 = *(float *)(temp_v1 + 0x54);
      temp_v6 = *(float *)(temp_v0 + 0x28);
      temp_v9 = *(float *)(temp_v0 + 0x2c);
      temp_v3 = *(float *)(temp_v0 + 0x50) * 0.017453292f;
      temp_v7 = *(float *)(temp_v0 + 0x30);
      FUN_0028277c();
      temp_v6 = temp_v6 + temp_v3 * temp_v5;
      temp_v9 = temp_v9 + temp_v14;
      temp_v14 = *(float *)(DAT_00447e88 + 0x50) * temp_v4;
      FUN_00282600();
      temp_v21 = temp_v7 + temp_v14 * temp_v5;
      temp_v14 = *(float *)(DAT_00447e88 + 0x28);
      temp_v7 = *(float *)(DAT_00447e88 + 0x2c);
      temp_v3 = *(float *)(DAT_00447e88 + 0x30);
      temp_v5 = (*(float *)(DAT_00447e88 + 0x50) - temp_v10) * temp_v4;
      temp_v19 = temp_v6;
      temp_v20 = temp_v9;
      FUN_0028277c();
      temp_v14 = temp_v14 + temp_v5 * temp_v12;
      temp_v7 = temp_v7 + temp_v13;
      temp_v4 = (*(float *)(DAT_00447e88 + 0x50) - temp_v10) * temp_v4;
      FUN_00282600();
      temp_v24 = temp_v3 + temp_v4 * temp_v12;
      temp_v26 = 8;
      temp_v25 = 0;
      temp_v22 = temp_v14;
      temp_v23 = temp_v7;
      temp_v27 = temp_v11;
      FUN_00282498(&temp_v15);
      temp_v1 = DAT_004474f4;
      *(unsigned char *)(DAT_004474f4 + 0x21c) = 1;
      piVar2 = (int *)(temp_v1 + 4);
      *piVar2 = *piVar2 + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      DAT_00447500 = temp_v23;
      return;
    }
    if (temp_v2 != 1) {
      if (temp_v2 == 2) {
        if (*(int *)(DAT_004474f4 + 0xc) == 1) {
          *(unsigned int *)(DAT_004474f4 + 4) = 10;
          *(unsigned int *)(temp_v1 + 8) = 0;
          return;
        }
        if (*(int *)(DAT_004474f4 + 0xc) == 2) {
          *(unsigned int *)(DAT_004474f4 + 4) = 0x32;
          *(unsigned int *)(temp_v1 + 8) = 0;
          return;
        }
        FUN_00282314();
      }
    }
    else {
      if (*(int *)(DAT_004474f4 + 0xc) == 1) {
        *(unsigned int *)(DAT_004474f4 + 4) = 10;
        *(unsigned int *)(temp_v1 + 8) = 0;
        return;
      }
      if (*(int *)(DAT_004474f4 + 0xc) == 2) {
        *(unsigned int *)(DAT_004474f4 + 4) = 0x32;
        *(unsigned int *)(temp_v1 + 8) = 0;
        return;
      }
      temp_v1 = FUN_00282314();
      if (temp_v1 != 0) {
        temp_v15 = *(unsigned int *)(DAT_004474f4 + 0x58);
        fStack_ac = *(float *)(DAT_004474f4 + 0x5c);
        uStack_a8 = *(unsigned int *)(DAT_004474f4 + 0x60);
        temp_v18 = *(float *)(DAT_004474f4 + 0x54);
        temp_v16 = *(float *)(DAT_004474f4 + 0x4c);
        temp_v17 = *(float *)(DAT_004474f4 + 0x50);
        temp_v6 = *(float *)(DAT_00447e88 + 0x28);
        temp_v9 = *(float *)(DAT_00447e88 + 0x2c);
        temp_v3 = *(float *)(DAT_00447e88 + 0x50) * temp_v4;
        temp_v7 = *(float *)(DAT_00447e88 + 0x30);
        FUN_0028277c();
        temp_v6 = temp_v6 + temp_v3 * temp_v5;
        temp_v9 = temp_v9 + temp_v14;
        temp_v14 = *(float *)(DAT_00447e88 + 0x50) * temp_v4;
        FUN_00282600();
        temp_v21 = temp_v7 + temp_v14 * temp_v5;
        temp_v14 = *(float *)(DAT_00447e88 + 0x28);
        temp_v7 = *(float *)(DAT_00447e88 + 0x2c);
        temp_v3 = *(float *)(DAT_00447e88 + 0x30);
        temp_v5 = (*(float *)(DAT_00447e88 + 0x50) - temp_v10) * temp_v4;
        temp_v19 = temp_v6;
        temp_v20 = temp_v9;
        FUN_0028277c();
        temp_v14 = temp_v14 + temp_v5 * temp_v12;
        temp_v7 = temp_v7 + temp_v13;
        temp_v4 = (*(float *)(DAT_00447e88 + 0x50) - temp_v10) * temp_v4;
        FUN_00282600();
        temp_v24 = temp_v3 + temp_v4 * temp_v12;
        temp_v26 = 300;
        temp_v25 = 0;
        temp_v22 = temp_v14;
        temp_v23 = temp_v7;
        temp_v27 = temp_v11;
        FUN_00282498(&temp_v15);
        temp_v1 = DAT_004474f4;
        *(int *)(DAT_004474f4 + 4) = *(int *)(DAT_004474f4 + 4) + 1;
        *(unsigned int *)(temp_v1 + 8) = 0;
        DAT_00447500 = temp_v23;
        return;
      }
    }
  }
  else if (temp_v2 != 0xb) {
    temp_v12 = 10.0f;
    temp_v5 = 180.0f;
    if (temp_v2 == 0x32) {
      temp_v19 = *(float *)(DAT_00447e88 + 0x28);
      temp_v21 = *(float *)(DAT_00447e88 + 0x30);
      temp_v20 = *(float *)(DAT_00447e88 + 0x2c) + 200.0f;
      temp_v6 = *(float *)(DAT_00447e88 + 0x28);
      temp_v14 = *(float *)(DAT_00447e88 + 0x2c);
      temp_v3 = *(float *)(DAT_00447e88 + 0x30);
      temp_v13 = (*(float *)(DAT_00447e88 + 0x50) - 180.0f) * 0.017453292f;
      FUN_0028277c();
      temp_v16 = temp_v6 + temp_v13 * temp_v10;
      temp_v17 = temp_v14 + temp_v12;
      if (temp_v14 + temp_v12 <= DAT_00447500) {
        temp_v17 = DAT_00447500;
      }
      temp_v4 = (*(float *)(DAT_00447e88 + 0x50) - temp_v5) * temp_v4;
      FUN_00282600();
      temp_v18 = temp_v3 + temp_v4 * temp_v10;
      temp_v15 = temp_v19;
      fStack_ac = temp_v20;
      uStack_a8 = temp_v21;
      temp_v25 = 0;
      temp_v26 = 0x1e;
      temp_v22 = temp_v16;
      temp_v23 = temp_v17;
      temp_v24 = temp_v18;
      temp_v27 = temp_v11;
      FUN_00282498(&temp_v15);
      FUN_00282314();
      temp_v1 = DAT_004474f4;
      *(int *)(DAT_004474f4 + 4) = *(int *)(DAT_004474f4 + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    if (temp_v2 == 0x33) {
      temp_v15 = *(unsigned int *)(DAT_004474f4 + 0x58);
      fStack_ac = *(float *)(DAT_004474f4 + 0x5c);
      uStack_a8 = *(unsigned int *)(DAT_004474f4 + 0x60);
      temp_v16 = *(float *)(DAT_004474f4 + 0x4c);
      temp_v17 = *(float *)(DAT_004474f4 + 0x50);
      temp_v18 = *(float *)(DAT_004474f4 + 0x54);
      temp_v19 = *(float *)(DAT_00447e88 + 0x28);
      temp_v21 = *(float *)(DAT_00447e88 + 0x30);
      temp_v20 = *(float *)(DAT_00447e88 + 0x2c) + 200.0f;
      temp_v6 = *(float *)(DAT_00447e88 + 0x28);
      temp_v14 = *(float *)(DAT_00447e88 + 0x2c);
      temp_v3 = *(float *)(DAT_00447e88 + 0x30);
      temp_v13 = (*(float *)(DAT_00447e88 + 0x50) - 180.0f) * 0.017453292f;
      FUN_0028277c();
      temp_v22 = temp_v6 + temp_v13 * temp_v10;
      temp_v23 = temp_v14 + temp_v12;
      if (temp_v14 + temp_v12 <= DAT_00447500) {
        temp_v23 = DAT_00447500;
      }
      temp_v4 = (*(float *)(DAT_00447e88 + 0x50) - temp_v5) * temp_v4;
      FUN_00282600();
      temp_v24 = temp_v3 + temp_v4 * temp_v10;
      temp_v26 = 600;
      temp_v25 = 1;
      temp_v27 = 0x40000000;
      FUN_00282498(&temp_v15);
      FUN_00282314();
      return;
    }
  }
  else {
    temp_v1 = FUN_00282314();
    if (temp_v1 != 0) {
      temp_v1 = DAT_004474f4;
      *(int *)(DAT_004474f4 + 4) = *(int *)(DAT_004474f4 + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
  }
  return;
}
