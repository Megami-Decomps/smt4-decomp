/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b56e0` (_code @ 0x2b56e0, 0x59c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_002d1e44(unsigned int *);
int FUN_0033a374(void);

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

extern int g_lmapView; /* 0x5806a4 */
extern float DAT_005806b0; /* 0x5806b0 */
extern int g_lmapScene; /* 0x581288 */

/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_002d1e44. */
/* Supplied declaration required: FUN_0033a374. */


void FUN_002b56e0(void)

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
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned int temp_v14;
  float fStack_b4;
  float uStack_b0;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  
  temp_v0 = g_lmapScene;
  temp_v1 = g_lmapView;
  temp_v5 = 40.0f;
  temp_v10 = 0;
  temp_v2 = *(int *)(g_lmapView + 4);
  temp_v4 = 0.017453292f;
  temp_v9 = 200.0f;
  if (temp_v2 == 10) {
    temp_v14 = *(unsigned int *)(g_lmapView + 0x5c);
    fStack_b4 = *(float *)(g_lmapView + 0x60);
    uStack_b0 = *(unsigned int *)(g_lmapView + 100);
    temp_v15 = *(float *)(g_lmapView + 0x50);
    temp_v16 = *(float *)(g_lmapView + 0x54);
    temp_v17 = *(float *)(g_lmapView + 0x58);
    temp_v12 = *(float *)(g_lmapScene + 0x28);
    temp_v6 = *(float *)(g_lmapScene + 0x2c);
    temp_v11 = *(float *)(g_lmapScene + 0x50) * 0.017453292f;
    temp_v13 = *(float *)(g_lmapScene + 0x30);
    FUN_001bc124();
    temp_v12 = temp_v12 + temp_v11 * temp_v5;
    temp_v6 = temp_v6 + 250.0f;
    temp_v11 = *(float *)(g_lmapScene + 0x50) * temp_v4;
    FUN_001bbf0c();
    temp_v20 = temp_v13 + temp_v11 * temp_v5;
    temp_v7 = 170.0f;
    temp_v11 = *(float *)(g_lmapScene + 0x28);
    temp_v3 = *(float *)(g_lmapScene + 0x2c);
    temp_v13 = *(float *)(g_lmapScene + 0x30);
    temp_v5 = (*(float *)(g_lmapScene + 0x50) - 170.0f) * temp_v4;
    temp_v18 = temp_v12;
    temp_v19 = temp_v6;
    FUN_001bc124();
    temp_v11 = temp_v11 + temp_v5 * temp_v9;
    temp_v3 = temp_v3 + 15.0f;
    temp_v4 = (*(float *)(g_lmapScene + 0x50) - temp_v7) * temp_v4;
    FUN_001bbf0c();
    temp_v23 = temp_v13 + temp_v4 * temp_v9;
    temp_v24 = 0;
    temp_v25 = 0x1e;
    temp_v21 = temp_v11;
    temp_v22 = temp_v3;
    temp_v26 = temp_v10;
    FUN_002d1e44(&temp_v14);
    temp_v1 = g_lmapView;
    *(int *)(g_lmapView + 4) = *(int *)(g_lmapView + 4) + 1;
    *(unsigned int *)(temp_v1 + 8) = 0;
    return;
  }
  if (temp_v2 < 0xb) {
    temp_v13 = 210.0f;
    temp_v9 = 135.0f;
    temp_v11 = 90.0f;
    temp_v12 = 100.0f;
    if (temp_v2 == 0) {
      puVar4 = (unsigned int *)(g_lmapView + 0x5c);
      *(unsigned int *)(g_lmapView + 0xc) = 0;
      temp_v14 = *puVar4;
      fStack_b4 = *(float *)(temp_v1 + 0x60);
      uStack_b0 = *(unsigned int *)(temp_v1 + 100);
      temp_v16 = *(float *)(temp_v1 + 0x54);
      temp_v15 = *(float *)(temp_v1 + 0x50);
      temp_v17 = *(float *)(temp_v1 + 0x58);
      temp_v6 = *(float *)(temp_v0 + 0x28);
      temp_v8 = *(float *)(temp_v0 + 0x2c);
      temp_v3 = *(float *)(temp_v0 + 0x50) * 0.017453292f;
      temp_v7 = *(float *)(temp_v0 + 0x30);
      FUN_001bc124();
      temp_v6 = temp_v6 + temp_v3 * temp_v5;
      temp_v8 = temp_v8 + temp_v13;
      temp_v13 = *(float *)(g_lmapScene + 0x50) * temp_v4;
      FUN_001bbf0c();
      temp_v20 = temp_v7 + temp_v13 * temp_v5;
      temp_v13 = *(float *)(g_lmapScene + 0x28);
      temp_v7 = *(float *)(g_lmapScene + 0x2c);
      temp_v3 = *(float *)(g_lmapScene + 0x30);
      temp_v5 = (*(float *)(g_lmapScene + 0x50) - temp_v9) * temp_v4;
      temp_v18 = temp_v6;
      temp_v19 = temp_v8;
      FUN_001bc124();
      temp_v13 = temp_v13 + temp_v5 * temp_v11;
      temp_v7 = temp_v7 + temp_v12;
      temp_v4 = (*(float *)(g_lmapScene + 0x50) - temp_v9) * temp_v4;
      FUN_001bbf0c();
      temp_v23 = temp_v3 + temp_v4 * temp_v11;
      temp_v25 = 8;
      temp_v24 = 0;
      temp_v21 = temp_v13;
      temp_v22 = temp_v7;
      temp_v26 = temp_v10;
      FUN_002d1e44(&temp_v14);
      temp_v1 = g_lmapView;
      *(unsigned char *)(g_lmapView + 0x220) = 1;
      piVar2 = (int *)(temp_v1 + 4);
      *piVar2 = *piVar2 + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      DAT_005806b0 = temp_v22;
      return;
    }
    if (temp_v2 != 1) {
      if (temp_v2 == 2) {
        if (*(int *)(g_lmapView + 0xc) == 1) {
          *(unsigned int *)(g_lmapView + 4) = 10;
          *(unsigned int *)(temp_v1 + 8) = 0;
          return;
        }
        if (*(int *)(g_lmapView + 0xc) == 2) {
          *(unsigned int *)(g_lmapView + 4) = 0x32;
          *(unsigned int *)(temp_v1 + 8) = 0;
          return;
        }
        FUN_0033a374();
      }
    }
    else {
      if (*(int *)(g_lmapView + 0xc) == 1) {
        *(unsigned int *)(g_lmapView + 4) = 10;
        *(unsigned int *)(temp_v1 + 8) = 0;
        return;
      }
      if (*(int *)(g_lmapView + 0xc) == 2) {
        *(unsigned int *)(g_lmapView + 4) = 0x32;
        *(unsigned int *)(temp_v1 + 8) = 0;
        return;
      }
      FUN_0033a374();
      if (temp_v1 != 0) {
        temp_v14 = *(unsigned int *)(g_lmapView + 0x5c);
        fStack_b4 = *(float *)(g_lmapView + 0x60);
        uStack_b0 = *(unsigned int *)(g_lmapView + 100);
        temp_v17 = *(float *)(g_lmapView + 0x58);
        temp_v15 = *(float *)(g_lmapView + 0x50);
        temp_v16 = *(float *)(g_lmapView + 0x54);
        temp_v6 = *(float *)(g_lmapScene + 0x28);
        temp_v8 = *(float *)(g_lmapScene + 0x2c);
        temp_v3 = *(float *)(g_lmapScene + 0x50) * temp_v4;
        temp_v7 = *(float *)(g_lmapScene + 0x30);
        FUN_001bc124();
        temp_v6 = temp_v6 + temp_v3 * temp_v5;
        temp_v8 = temp_v8 + temp_v13;
        temp_v13 = *(float *)(g_lmapScene + 0x50) * temp_v4;
        FUN_001bbf0c();
        temp_v20 = temp_v7 + temp_v13 * temp_v5;
        temp_v13 = *(float *)(g_lmapScene + 0x28);
        temp_v7 = *(float *)(g_lmapScene + 0x2c);
        temp_v3 = *(float *)(g_lmapScene + 0x30);
        temp_v5 = (*(float *)(g_lmapScene + 0x50) - temp_v9) * temp_v4;
        temp_v18 = temp_v6;
        temp_v19 = temp_v8;
        FUN_001bc124();
        temp_v13 = temp_v13 + temp_v5 * temp_v11;
        temp_v7 = temp_v7 + temp_v12;
        temp_v4 = (*(float *)(g_lmapScene + 0x50) - temp_v9) * temp_v4;
        FUN_001bbf0c();
        temp_v23 = temp_v3 + temp_v4 * temp_v11;
        temp_v25 = 300;
        temp_v24 = 0;
        temp_v21 = temp_v13;
        temp_v22 = temp_v7;
        temp_v26 = temp_v10;
        FUN_002d1e44(&temp_v14);
        temp_v1 = g_lmapView;
        *(int *)(g_lmapView + 4) = *(int *)(g_lmapView + 4) + 1;
        *(unsigned int *)(temp_v1 + 8) = 0;
        DAT_005806b0 = temp_v22;
        return;
      }
    }
  }
  else if (temp_v2 != 0xb) {
    temp_v11 = 10.0f;
    temp_v5 = 180.0f;
    if (temp_v2 == 0x32) {
      temp_v18 = *(float *)(g_lmapScene + 0x28);
      temp_v20 = *(float *)(g_lmapScene + 0x30);
      temp_v19 = *(float *)(g_lmapScene + 0x2c) + 200.0f;
      temp_v6 = *(float *)(g_lmapScene + 0x28);
      temp_v13 = *(float *)(g_lmapScene + 0x2c);
      temp_v3 = *(float *)(g_lmapScene + 0x30);
      temp_v12 = (*(float *)(g_lmapScene + 0x50) - 180.0f) * 0.017453292f;
      FUN_001bc124();
      temp_v15 = temp_v6 + temp_v12 * temp_v9;
      temp_v16 = temp_v13 + temp_v11;
      if (temp_v13 + temp_v11 <= DAT_005806b0) {
        temp_v16 = DAT_005806b0;
      }
      temp_v4 = (*(float *)(g_lmapScene + 0x50) - temp_v5) * temp_v4;
      FUN_001bbf0c();
      temp_v17 = temp_v3 + temp_v4 * temp_v9;
      temp_v14 = temp_v18;
      fStack_b4 = temp_v19;
      uStack_b0 = temp_v20;
      temp_v24 = 0;
      temp_v25 = 0x1e;
      temp_v21 = temp_v15;
      temp_v22 = temp_v16;
      temp_v23 = temp_v17;
      temp_v26 = temp_v10;
      FUN_002d1e44(&temp_v14);
      FUN_0033a374();
      temp_v1 = g_lmapView;
      *(int *)(g_lmapView + 4) = *(int *)(g_lmapView + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    if (temp_v2 == 0x33) {
      temp_v14 = *(unsigned int *)(g_lmapView + 0x5c);
      fStack_b4 = *(float *)(g_lmapView + 0x60);
      uStack_b0 = *(unsigned int *)(g_lmapView + 100);
      temp_v15 = *(float *)(g_lmapView + 0x50);
      temp_v16 = *(float *)(g_lmapView + 0x54);
      temp_v17 = *(float *)(g_lmapView + 0x58);
      temp_v18 = *(float *)(g_lmapScene + 0x28);
      temp_v20 = *(float *)(g_lmapScene + 0x30);
      temp_v19 = *(float *)(g_lmapScene + 0x2c) + 200.0f;
      temp_v6 = *(float *)(g_lmapScene + 0x28);
      temp_v13 = *(float *)(g_lmapScene + 0x2c);
      temp_v3 = *(float *)(g_lmapScene + 0x30);
      temp_v12 = (*(float *)(g_lmapScene + 0x50) - 180.0f) * 0.017453292f;
      FUN_001bc124();
      temp_v21 = temp_v6 + temp_v12 * temp_v9;
      temp_v22 = temp_v13 + temp_v11;
      if (temp_v13 + temp_v11 <= DAT_005806b0) {
        temp_v22 = DAT_005806b0;
      }
      temp_v4 = (*(float *)(g_lmapScene + 0x50) - temp_v5) * temp_v4;
      FUN_001bbf0c();
      temp_v23 = temp_v3 + temp_v4 * temp_v9;
      temp_v25 = 600;
      temp_v24 = 1;
      temp_v26 = 0x40000000;
      FUN_002d1e44(&temp_v14);
      FUN_0033a374();
      return;
    }
  }
  else {
    FUN_0033a374();
    if (temp_v1 != 0) {
      temp_v1 = g_lmapView;
      *(int *)(g_lmapView + 4) = *(int *)(g_lmapView + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
  }
  return;
}

} /* extern "C" */
