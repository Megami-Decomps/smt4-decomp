/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d1780` (_code @ 0x2d1780, 0x674 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_002d1e44(int *);
int FUN_0033a374(void);

/* stack frame of void: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spC0; /* 0xc0: local_c0 */
} void_stack;

extern int DAT_005806a4; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */

/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_002d1e44. */
/* Supplied declaration required: FUN_0033a374. */


void FUN_002d1780(void)

{
/* irregular: 4 native warning(s); review required */
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
  unsigned int uStack_bc;
  unsigned int uStack_b8;
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
  
  temp_v1 = DAT_005806a4;
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
  switch(*(unsigned int *)(DAT_005806a4 + 4)) {
  case 0:
    temp_v14 = *(unsigned int *)(DAT_005806a4 + 0x5c);
    uStack_bc = *(unsigned int *)(DAT_005806a4 + 0x60);
    uStack_b8 = *(unsigned int *)(DAT_005806a4 + 100);
    temp_v16 = *(unsigned int *)(DAT_005806a4 + 0x54);
    temp_v15 = *(unsigned int *)(DAT_005806a4 + 0x50);
    temp_v17 = *(unsigned int *)(DAT_005806a4 + 0x58);
    temp_v8 = *(float *)(g_lmapScene + 0x1c);
    temp_v12 = *(float *)(g_lmapScene + 0x20);
    temp_v4 = *(float *)(g_lmapScene + 0x4c) * 0.017453292f;
    temp_v10 = *(float *)(g_lmapScene + 0x24);
    FUN_001bc124();
    temp_v13 = 300.0f;
    temp_v12 = temp_v12 + temp_v7;
    temp_v8 = temp_v8 + temp_v4 * 300.0f;
    temp_v4 = *(float *)(g_lmapScene + 0x4c) * temp_v2;
    FUN_001bbf0c();
    temp_v20 = temp_v10 + temp_v4 * temp_v13;
    temp_v7 = *(float *)(g_lmapScene + 0x1c);
    temp_v13 = *(float *)(g_lmapScene + 0x20);
    temp_v10 = *(float *)(g_lmapScene + 0x24);
    temp_v4 = (*(float *)(g_lmapScene + 0x4c) - temp_v3) * temp_v2;
    temp_v18 = temp_v8;
    temp_v19 = temp_v12;
    FUN_001bc124();
    temp_v7 = temp_v7 + temp_v4 * temp_v11;
    temp_v13 = temp_v13 + temp_v9;
    temp_v2 = (*(float *)(g_lmapScene + 0x4c) - temp_v3) * temp_v2;
    FUN_001bbf0c();
    temp_v23 = temp_v10 + temp_v2 * temp_v11;
    temp_v25 = 0x1e;
    temp_v24 = 0;
    temp_v21 = temp_v7;
    temp_v22 = temp_v13;
    temp_v26 = temp_v6;
    FUN_002d1e44(&temp_v14);
    temp_v1 = DAT_005806a4;
    *(unsigned char *)(DAT_005806a4 + 0x220) = 1;
    piVar1 = (int *)(temp_v1 + 4);
    *piVar1 = *piVar1 + 1;
    *(unsigned int *)(temp_v1 + 8) = 0;
    break;
  case 1:
    temp_v0 = DAT_005806a4;
    FUN_0033a374();
    if (temp_v0 != 0) {
      temp_v14 = *(unsigned int *)(temp_v1 + 0x254);
      uStack_bc = *(unsigned int *)(temp_v1 + 600);
      uStack_b8 = *(unsigned int *)(temp_v1 + 0x25c);
      temp_v15 = *(unsigned int *)(temp_v1 + 0x260);
      temp_v16 = *(unsigned int *)(temp_v1 + 0x264);
      temp_v17 = *(unsigned int *)(temp_v1 + 0x268);
      temp_v8 = *(float *)(g_lmapScene + 0x1c);
      temp_v11 = *(float *)(g_lmapScene + 0x20);
      temp_v4 = *(float *)(g_lmapScene + 0x4c) * temp_v2;
      temp_v10 = *(float *)(g_lmapScene + 0x24);
      FUN_001bc124();
      temp_v8 = temp_v8 + temp_v4 * temp_v12;
      temp_v11 = temp_v11 + temp_v7;
      temp_v4 = *(float *)(g_lmapScene + 0x4c) * temp_v2;
      FUN_001bbf0c();
      temp_v20 = temp_v10 + temp_v4 * temp_v12;
      temp_v10 = *(float *)(g_lmapScene + 0x1c);
      temp_v12 = *(float *)(g_lmapScene + 0x20);
      temp_v7 = *(float *)(g_lmapScene + 0x24);
      temp_v4 = (*(float *)(g_lmapScene + 0x4c) - temp_v3) * temp_v2;
      temp_v18 = temp_v8;
      temp_v19 = temp_v11;
      FUN_001bc124();
      temp_v8 = 200.0f;
      temp_v12 = temp_v12 + temp_v9;
      temp_v10 = temp_v10 + temp_v4 * 200.0f;
      temp_v2 = (*(float *)(g_lmapScene + 0x4c) - temp_v3) * temp_v2;
      FUN_001bbf0c();
      temp_v23 = temp_v7 + temp_v2 * temp_v8;
      temp_v25 = 0x5a;
      temp_v24 = 0;
      temp_v21 = temp_v10;
      temp_v22 = temp_v12;
      temp_v26 = temp_v6;
      FUN_002d1e44(&temp_v14);
      temp_v1 = DAT_005806a4;
      *(int *)(DAT_005806a4 + 4) = *(int *)(DAT_005806a4 + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    break;
  case 2:
    temp_v0 = DAT_005806a4;
    FUN_0033a374();
    if (temp_v0 != 0) {
      temp_v14 = *(unsigned int *)(temp_v1 + 0x254);
      uStack_bc = *(unsigned int *)(temp_v1 + 600);
      uStack_b8 = *(unsigned int *)(temp_v1 + 0x25c);
      temp_v15 = *(unsigned int *)(temp_v1 + 0x260);
      temp_v16 = *(unsigned int *)(temp_v1 + 0x264);
      temp_v17 = *(unsigned int *)(temp_v1 + 0x268);
      temp_v8 = *(float *)(g_lmapScene + 0x1c);
      temp_v10 = *(float *)(g_lmapScene + 0x20);
      temp_v4 = *(float *)(g_lmapScene + 0x4c) * temp_v2;
      temp_v7 = *(float *)(g_lmapScene + 0x24);
      FUN_001bc124();
      temp_v8 = temp_v8 + temp_v4 * temp_v12;
      temp_v10 = temp_v10 + temp_v13;
      temp_v4 = *(float *)(g_lmapScene + 0x4c) * temp_v2;
      FUN_001bbf0c();
      temp_v20 = temp_v7 + temp_v4 * temp_v12;
      temp_v7 = *(float *)(g_lmapScene + 0x1c);
      temp_v12 = *(float *)(g_lmapScene + 0x20);
      temp_v9 = *(float *)(g_lmapScene + 0x24);
      temp_v4 = (*(float *)(g_lmapScene + 0x4c) - temp_v3) * temp_v2;
      temp_v18 = temp_v8;
      temp_v19 = temp_v10;
      FUN_001bc124();
      temp_v7 = temp_v7 + temp_v4 * temp_v11;
      temp_v12 = temp_v12 + temp_v11;
      temp_v2 = (*(float *)(g_lmapScene + 0x4c) - temp_v3) * temp_v2;
      FUN_001bbf0c();
      temp_v23 = temp_v9 + temp_v2 * temp_v11;
      temp_v25 = 10;
      temp_v24 = 0;
      temp_v21 = temp_v7;
      temp_v22 = temp_v12;
      temp_v26 = temp_v6;
      FUN_002d1e44(&temp_v14);
      temp_v1 = DAT_005806a4;
      *(int *)(DAT_005806a4 + 4) = *(int *)(DAT_005806a4 + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    break;
  case 3:
    temp_v0 = DAT_005806a4;
    FUN_0033a374();
    if (temp_v0 != 0) {
      temp_v14 = *(unsigned int *)(temp_v1 + 0x254);
      uStack_bc = *(unsigned int *)(temp_v1 + 600);
      uStack_b8 = *(unsigned int *)(temp_v1 + 0x25c);
      temp_v15 = *(unsigned int *)(temp_v1 + 0x260);
      temp_v16 = *(unsigned int *)(temp_v1 + 0x264);
      temp_v17 = *(unsigned int *)(temp_v1 + 0x268);
      temp_v8 = *(float *)(g_lmapScene + 0x1c);
      temp_v10 = *(float *)(g_lmapScene + 0x20);
      temp_v4 = *(float *)(g_lmapScene + 0x4c) * temp_v2;
      temp_v7 = *(float *)(g_lmapScene + 0x24);
      FUN_001bc124();
      temp_v8 = temp_v8 + temp_v4 * temp_v12;
      temp_v10 = temp_v10 + temp_v13;
      temp_v4 = *(float *)(g_lmapScene + 0x4c) * temp_v2;
      FUN_001bbf0c();
      temp_v20 = temp_v7 + temp_v4 * temp_v12;
      temp_v7 = *(float *)(g_lmapScene + 0x1c);
      temp_v12 = *(float *)(g_lmapScene + 0x20);
      temp_v9 = *(float *)(g_lmapScene + 0x24);
      temp_v4 = (*(float *)(g_lmapScene + 0x4c) - temp_v3) * temp_v2;
      temp_v18 = temp_v8;
      temp_v19 = temp_v10;
      FUN_001bc124();
      temp_v7 = temp_v7 + temp_v4 * temp_v11;
      temp_v12 = temp_v12 + 280.0f;
      temp_v2 = (*(float *)(g_lmapScene + 0x4c) - temp_v3) * temp_v2;
      FUN_001bbf0c();
      temp_v23 = temp_v9 + temp_v2 * temp_v11;
      temp_v25 = 0x50;
      temp_v24 = 0;
      temp_v21 = temp_v7;
      temp_v22 = temp_v12;
      temp_v26 = temp_v6;
      FUN_002d1e44(&temp_v14);
      temp_v1 = DAT_005806a4;
      *(int *)(DAT_005806a4 + 4) = *(int *)(DAT_005806a4 + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    break;
  case 4:
    temp_v0 = DAT_005806a4;
    FUN_0033a374();
    if (temp_v0 != 0) {
      temp_v14 = *(unsigned int *)(temp_v1 + 0x254);
      uStack_bc = *(unsigned int *)(temp_v1 + 600);
      uStack_b8 = *(unsigned int *)(temp_v1 + 0x25c);
      temp_v13 = 15.0f;
      temp_v15 = *(unsigned int *)(temp_v1 + 0x260);
      temp_v16 = *(unsigned int *)(temp_v1 + 0x264);
      temp_v17 = *(unsigned int *)(temp_v1 + 0x268);
      temp_v7 = *(float *)(g_lmapScene + 0x1c);
      temp_v12 = *(float *)(g_lmapScene + 0x20);
      temp_v11 = *(float *)(g_lmapScene + 0x24);
      temp_v3 = (*(float *)(g_lmapScene + 0x4c) - 15.0f) * temp_v2;
      FUN_001bc124();
      temp_v7 = temp_v7 + temp_v3 * temp_v4;
      temp_v19 = temp_v12 + temp_v10;
      temp_v3 = (*(float *)(g_lmapScene + 0x4c) - temp_v13) * temp_v2;
      FUN_001bbf0c();
      temp_v20 = temp_v11 + temp_v3 * temp_v4;
      temp_v4 = *(float *)(g_lmapScene + 0x24);
      temp_v5 = *(unsigned long long *)(g_lmapScene + 0x1c);
      temp_v3 = (*(float *)(g_lmapScene + 0x4c) - temp_v9) * temp_v2;
      temp_v18 = temp_v7;
      FUN_001bc124();
      temp_v3 = (float)temp_v5 + temp_v3 * temp_v8;
      temp_v7 = (float)((unsigned long long)temp_v5 >> 0x20) + temp_v8;
      temp_v2 = (*(float *)(g_lmapScene + 0x4c) - temp_v9) * temp_v2;
      FUN_001bbf0c();
      temp_v23 = temp_v4 + temp_v2 * temp_v8;
      temp_v25 = 0xf;
      temp_v24 = 1;
      temp_v26 = 0x40000000;
      temp_v21 = temp_v3;
      temp_v22 = temp_v7;
      FUN_002d1e44(&temp_v14);
      temp_v1 = DAT_005806a4;
      *(int *)(DAT_005806a4 + 4) = *(int *)(DAT_005806a4 + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    break;
  case 5:
    temp_v0 = DAT_005806a4;
    FUN_0033a374();
    if (temp_v0 != 0) {
      temp_v14 = *(unsigned int *)(temp_v1 + 0x254);
      uStack_bc = *(unsigned int *)(temp_v1 + 600);
      uStack_b8 = *(unsigned int *)(temp_v1 + 0x25c);
      temp_v13 = 18.0f;
      temp_v15 = *(unsigned int *)(temp_v1 + 0x260);
      temp_v16 = *(unsigned int *)(temp_v1 + 0x264);
      temp_v17 = *(unsigned int *)(temp_v1 + 0x268);
      temp_v9 = *(float *)(g_lmapScene + 0x1c);
      temp_v12 = *(float *)(g_lmapScene + 0x20);
      temp_v11 = *(float *)(g_lmapScene + 0x24);
      temp_v3 = (*(float *)(g_lmapScene + 0x4c) - 18.0f) * temp_v2;
      FUN_001bc124();
      temp_v9 = temp_v9 + temp_v3 * temp_v4;
      temp_v12 = temp_v12 + temp_v10;
      temp_v3 = (*(float *)(g_lmapScene + 0x4c) - temp_v13) * temp_v2;
      FUN_001bbf0c();
      temp_v20 = temp_v11 + temp_v3 * temp_v4;
      temp_v10 = 165.0f;
      temp_v4 = *(float *)(g_lmapScene + 0x24);
      temp_v5 = *(unsigned long long *)(g_lmapScene + 0x1c);
      temp_v3 = (*(float *)(g_lmapScene + 0x4c) - 165.0f) * temp_v2;
      temp_v18 = temp_v9;
      temp_v19 = temp_v12;
      FUN_001bc124();
      temp_v3 = (float)temp_v5 + temp_v3 * temp_v7;
      temp_v8 = (float)((unsigned long long)temp_v5 >> 0x20) + temp_v8;
      temp_v2 = (*(float *)(g_lmapScene + 0x4c) - temp_v10) * temp_v2;
      FUN_001bbf0c();
      temp_v23 = temp_v4 + temp_v2 * temp_v7;
      temp_v25 = 0x69;
      temp_v24 = 0;
      temp_v21 = temp_v3;
      temp_v22 = temp_v8;
      temp_v26 = temp_v6;
      FUN_002d1e44(&temp_v14);
      temp_v1 = DAT_005806a4;
      *(int *)(DAT_005806a4 + 4) = *(int *)(DAT_005806a4 + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
    break;
  case 6:
    FUN_0033a374();
    if (temp_v1 != 0) {
      temp_v1 = DAT_005806a4;
      *(int *)(DAT_005806a4 + 4) = *(int *)(DAT_005806a4 + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return;
    }
  }
  return;
}

} /* extern "C" */
