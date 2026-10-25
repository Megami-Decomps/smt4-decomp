/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003224c0` (_code @ 0x3224c0, 0x57c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024317c(void);
int FUN_00243224(unsigned int *, float *, unsigned int, int);
int FUN_00249678(void);
int FUN_002496cc(int);
int effEditorNodeChainApply(unsigned char *);
int padAlternateButtonIndex(int);
int FUN_0024dd90(unsigned char *);
int effMenuListAppend(void);
int gfxQuaternionWorkspaceBuildMatrix(void);
int padIsButtonPressed(...);
int memAlloc(int, int, int, int, int, int);

/* stack frame of param_2: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int sp110; /* 0x110: local_110 */
} param_2_stack;

extern signed char DAT_0044ea89; /* 0x44ea89 */
extern unsigned char DAT_0044f938; /* 0x44f938 */
extern unsigned int DAT_0044f948; /* 0x44f948 */
extern float DAT_00472530; /* 0x472530 */
extern float DAT_00472534; /* 0x472534 */
extern float DAT_00472538; /* 0x472538 */
extern float DAT_0047253c; /* 0x47253c */
extern float DAT_004d8c10; /* 0x4d8c10 */
extern float DAT_004d8c14; /* 0x4d8c14 */
extern float DAT_004d8c18; /* 0x4d8c18 */
extern float DAT_004d8c1c; /* 0x4d8c1c */
extern float DAT_004d9270; /* 0x4d9270 */
extern float DAT_004d9274; /* 0x4d9274 */
extern float DAT_004d9278; /* 0x4d9278 */
extern float DAT_004d927c; /* 0x4d927c */
extern unsigned int DAT_004d9280; /* 0x4d9280 */
extern unsigned int DAT_004d9284; /* 0x4d9284 */
extern unsigned int DAT_004d9288; /* 0x4d9288 */
extern unsigned int DAT_004d928c; /* 0x4d928c */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */
extern float DAT_004ea95c; /* 0x4ea95c */
extern float DAT_004ea960; /* 0x4ea960 */
extern float DAT_004ea964; /* 0x4ea964 */
extern float DAT_004ea968; /* 0x4ea968 */
extern float DAT_004ea96c; /* 0x4ea96c */
extern float DAT_004ea970; /* 0x4ea970 */
extern float DAT_004ea974; /* 0x4ea974 */
extern float DAT_004ea978; /* 0x4ea978 */
extern float DAT_004ea97c; /* 0x4ea97c */
extern float DAT_004ea980; /* 0x4ea980 */
extern float DAT_004ea984; /* 0x4ea984 */
extern float DAT_004ea988; /* 0x4ea988 */
extern float DAT_004ea98c; /* 0x4ea98c */
extern float DAT_004ea990; /* 0x4ea990 */
extern float DAT_004ea994; /* 0x4ea994 */
extern float DAT_004ea998; /* 0x4ea998 */

/* Supplied declaration required: FUN_0024317c. */
/* Supplied declaration required: FUN_00243224. */
/* Supplied declaration required: FUN_00249678. */
/* Supplied declaration required: FUN_002496cc. */
/* Supplied declaration required: effEditorNodeChainApply. */
/* Supplied declaration required: padAlternateButtonIndex. */
/* Supplied declaration required: FUN_0024dd90. */
/* Supplied declaration required: effMenuListAppend. */
/* Supplied declaration required: gfxQuaternionWorkspaceBuildMatrix. */
/* Supplied declaration required: padIsButtonPressed. */
/* Supplied declaration required: memAlloc. */


unsigned int FUN_003224c0(int param_1,int param_2)

{
/* irregular: 11 native warning(s); review required */
  unsigned int temp_v0;
  float temp_v1;
  float temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float fStack_bc;
  float fStack_b8;
  float temp_v26;
  unsigned int temp_v27;
  float uStack_8c;
  float uStack_88;
  float temp_v28;
  
  temp_v4 = 1;
  if ((DAT_0044f948 & 2) == 0) {
    temp_v3 = padIsButtonPressed(1);
    if (temp_v3 == 0) {
      padAlternateButtonIndex(1);
      temp_v3 = padIsButtonPressed();
      if (temp_v3 != 0) {
        temp_v4 = 0;
      }
    }
    else {
      temp_v4 = 0;
    }
  }
  DAT_004d9280 = *(unsigned int *)(param_1 + 0x50);
  DAT_004d9284 = *(unsigned int *)(param_1 + 0x54);
  DAT_004d9288 = *(unsigned int *)(param_1 + 0x58);
  DAT_004d928c = *(unsigned int *)(param_1 + 0x5c);
  if (param_2 != 0) {
    FUN_002496cc(param_1);
  }
  else {
    DAT_004ea91c = *(float *)(param_1 + 0x40);
    DAT_004ea920 = *(float *)(param_1 + 0x44);
    DAT_004ea924 = *(float *)(param_1 + 0x48);
    DAT_004ea928 = *(float *)(param_1 + 0x4c);
  }
  temp_v17 = DAT_004ea928;
  temp_v15 = DAT_004ea924;
  temp_v14 = DAT_004ea920;
  temp_v1 = DAT_004ea91c;
  DAT_004d9270 = DAT_004ea91c;
  DAT_004d9274 = DAT_004ea920;
  DAT_004d9278 = DAT_004ea924;
  DAT_004d927c = DAT_004ea928;
  if (DAT_0044ea89 == '\0') {
    FUN_0024dd90(&DAT_0044f938);
  }
  effEditorNodeChainApply(&DAT_0044f938);
  temp_v0 = DAT_004d928c;
  temp_v13 = DAT_004d9288;
  temp_v12 = DAT_004d9284;
  *(unsigned int *)(param_1 + 0x50) = DAT_004d9280;
  *(unsigned int *)(param_1 + 0x54) = temp_v12;
  *(unsigned int *)(param_1 + 0x58) = temp_v13;
  *(unsigned int *)(param_1 + 0x5c) = temp_v0;
  if ((DAT_0044f948 & 8) != 0) {
    temp_v4 = temp_v4 | 2;
  }
  DAT_004ea92c = DAT_004d8c10;
  DAT_004ea930 = DAT_004d8c14;
  DAT_004ea934 = DAT_004d8c18;
  DAT_004ea938 = DAT_004d8c1c;
  DAT_004ea91c = (float)temp_v1;
  DAT_004ea920 = (float)temp_v14;
  DAT_004ea924 = (float)temp_v15;
  DAT_004ea928 = (float)temp_v17;
  FUN_00249678();
  temp_v27 = DAT_004ea91c;
  uStack_8c = DAT_004ea920;
  uStack_88 = DAT_004ea924;
  temp_v28 = DAT_004ea928;
  DAT_004ea91c = *(float *)(param_1 + 0x50);
  DAT_004ea920 = *(float *)(param_1 + 0x54);
  DAT_004ea924 = *(float *)(param_1 + 0x58);
  DAT_004ea928 = *(float *)(param_1 + 0x5c);
  gfxQuaternionWorkspaceBuildMatrix();
  temp_v10 = DAT_004ea994;
  temp_v8 = DAT_004ea990;
  temp_v6 = DAT_004ea98c;
  temp_v2 = DAT_004ea988;
  DAT_004ea928 = (DAT_00472530 * DAT_004ea968 + DAT_00472534 * DAT_004ea978 +
                  DAT_00472538 * DAT_004ea988 + DAT_0047253c * DAT_004ea998) * 250.0f;
  DAT_004ea91c = (DAT_00472530 * DAT_004ea95c + DAT_00472534 * DAT_004ea96c +
                  DAT_00472538 * DAT_004ea97c + DAT_0047253c * DAT_004ea98c) * 250.0f;
  DAT_004ea920 = (DAT_00472530 * DAT_004ea960 + DAT_00472534 * DAT_004ea970 +
                  DAT_00472538 * DAT_004ea980 + DAT_0047253c * DAT_004ea990) * 250.0f;
  DAT_004ea924 = (DAT_00472530 * DAT_004ea964 + DAT_00472534 * DAT_004ea974 +
                  DAT_00472538 * DAT_004ea984 + DAT_0047253c * DAT_004ea994) * 250.0f;
  DAT_004ea92c = temp_v27;
  DAT_004ea930 = uStack_8c;
  DAT_004ea934 = uStack_88;
  DAT_004ea938 = temp_v28;
  temp_v16 = DAT_004ea96c;
  temp_v18 = DAT_004ea970;
  temp_v23 = DAT_004ea984;
  temp_v24 = DAT_004ea998;
  temp_v5 = DAT_004ea95c;
  temp_v7 = DAT_004ea960;
  temp_v9 = DAT_004ea964;
  temp_v11 = DAT_004ea968;
  temp_v19 = DAT_004ea974;
  temp_v20 = DAT_004ea978;
  temp_v21 = DAT_004ea97c;
  temp_v22 = DAT_004ea980;
  FUN_00249678();
  temp_v25 = DAT_004ea91c;
  fStack_bc = DAT_004ea920;
  fStack_b8 = DAT_004ea924;
  temp_v26 = DAT_004ea928;
  temp_v12 = 0x41f00000;
  temp_v13 = 0x42480000;
  temp_v3 = 0x10000;
  memAlloc(0x10000,0x100,0,0x68,0x10,1);
  *(unsigned int *)(temp_v3 + 8) = temp_v27;
  *(float *)&*(unsigned int *)(temp_v3 + 0xc) = uStack_8c;
  *(float *)&*(unsigned int *)(temp_v3 + 0x10) = uStack_88;
  *(float *)&*(unsigned int *)(temp_v3 + 0x14) = temp_v28;
  *(float *)(temp_v3 + 0x34) = temp_v16;
  *(float *)(temp_v3 + 0x24) = temp_v5;
  *(float *)(temp_v3 + 0x28) = temp_v7;
  *(float *)(temp_v3 + 0x2c) = temp_v9;
  *(float *)(temp_v3 + 0x30) = temp_v11;
  *(float *)(temp_v3 + 0x38) = temp_v18;
  *(float *)(temp_v3 + 0x3c) = temp_v19;
  *(float *)(temp_v3 + 0x40) = temp_v20;
  *(float *)(temp_v3 + 0x44) = temp_v21;
  *(float *)(temp_v3 + 0x48) = temp_v22;
  *(float *)(temp_v3 + 0x4c) = temp_v23;
  *(float *)(temp_v3 + 0x50) = temp_v2;
  *(float *)(temp_v3 + 0x54) = temp_v6;
  *(float *)(temp_v3 + 0x58) = temp_v8;
  *(float *)(temp_v3 + 0x5c) = temp_v10;
  *(float *)(temp_v3 + 0x60) = temp_v24;
  *(unsigned int *)(temp_v3 + 0x18) = temp_v12;
  *(unsigned int *)(temp_v3 + 0x1c) = temp_v13;
  *(unsigned int *)(temp_v3 + 4) = 10;
  *(unsigned int *)(temp_v3 + 0x20) = 0xff00c0c0;
  *(unsigned int *)(temp_v3 + 100) = 0;
  effMenuListAppend();
  FUN_00243224(&temp_v27,&temp_v25,0xff0000ff,0);
  temp_v3 = 0x10000;
  memAlloc(0x10000,0x100,0,0x68,0x10,1);
  *(unsigned int *)(temp_v3 + 0x18) = 0;
  *(unsigned int *)(temp_v3 + 4) = 9;
  *(unsigned int *)(temp_v3 + 8) = temp_v27;
  *(float *)&*(unsigned int *)(temp_v3 + 0xc) = uStack_8c;
  *(float *)&*(unsigned int *)(temp_v3 + 0x10) = uStack_88;
  *(float *)&*(unsigned int *)(temp_v3 + 0x14) = temp_v28;
  effMenuListAppend();
  DAT_004ea980 = temp_v22;
  DAT_004ea97c = temp_v21;
  DAT_004ea978 = temp_v20;
  DAT_004ea974 = temp_v19;
  DAT_004ea968 = temp_v11;
  DAT_004ea964 = temp_v9;
  DAT_004ea960 = temp_v7;
  DAT_004ea95c = temp_v5;
  temp_v12 = 0x3f800000;
  DAT_004ea92c = DAT_004d8c10;
  DAT_004ea930 = DAT_004d8c14;
  DAT_004ea934 = DAT_004d8c18;
  DAT_004ea938 = DAT_004d8c1c;
  DAT_004ea98c = (float)temp_v1;
  DAT_004ea998 = (float)temp_v17;
  DAT_004ea990 = (float)temp_v14;
  DAT_004ea994 = (float)temp_v15;
  DAT_004ea920 = 0.0f;
  DAT_004ea924 = 0.0f;
  DAT_004ea928 = 1.0f;
  DAT_004ea91c = -100.0f;
  DAT_004ea96c = temp_v16;
  DAT_004ea970 = temp_v18;
  DAT_004ea984 = temp_v23;
  DAT_004ea988 = temp_v2;
  temp_v6 = DAT_004ea95c;
  temp_v8 = DAT_004ea960;
  temp_v10 = DAT_004ea964;
  temp_v24 = DAT_004ea968;
  temp_v5 = DAT_004ea974;
  temp_v7 = DAT_004ea978;
  temp_v9 = DAT_004ea97c;
  temp_v11 = DAT_004ea980;
  FUN_0024317c();
  FUN_00249678();
  temp_v27 = DAT_004ea91c;
  uStack_8c = DAT_004ea920;
  uStack_88 = DAT_004ea924;
  temp_v28 = DAT_004ea928;
  DAT_004ea920 = 0.0f;
  DAT_004ea924 = 0.0f;
  DAT_004ea91c = 100.0f;
  DAT_004ea928 = (float)temp_v12;
  FUN_0024317c();
  FUN_00249678();
  temp_v25 = DAT_004ea91c;
  fStack_bc = DAT_004ea920;
  fStack_b8 = DAT_004ea924;
  temp_v26 = DAT_004ea928;
  FUN_00243224(&temp_v27,&temp_v25,0xff00c0c0,0);
  DAT_004ea980 = temp_v11;
  DAT_004ea97c = temp_v9;
  DAT_004ea978 = temp_v7;
  DAT_004ea974 = temp_v5;
  DAT_004ea968 = temp_v24;
  DAT_004ea964 = temp_v10;
  DAT_004ea960 = temp_v8;
  DAT_004ea95c = temp_v6;
  DAT_004ea92c = DAT_004d8c10;
  DAT_004ea930 = DAT_004d8c14;
  DAT_004ea934 = DAT_004d8c18;
  DAT_004ea938 = DAT_004d8c1c;
  DAT_004ea98c = (float)temp_v1;
  DAT_004ea91c = 0.0f;
  DAT_004ea920 = 0.0f;
  DAT_004ea924 = -25.0f;
  DAT_004ea928 = (float)temp_v12;
  DAT_004ea96c = temp_v16;
  DAT_004ea970 = temp_v18;
  DAT_004ea984 = temp_v23;
  DAT_004ea988 = temp_v2;
  DAT_004ea990 = (float)temp_v14;
  DAT_004ea994 = (float)temp_v15;
  DAT_004ea998 = (float)temp_v17;
  FUN_0024317c();
  FUN_00249678();
  temp_v27 = DAT_004ea91c;
  uStack_8c = DAT_004ea920;
  uStack_88 = DAT_004ea924;
  temp_v28 = DAT_004ea928;
  DAT_004ea91c = 0.0f;
  DAT_004ea920 = 0.0f;
  DAT_004ea924 = 25.0f;
  DAT_004ea928 = (float)temp_v12;
  FUN_0024317c();
  FUN_00249678();
  temp_v25 = DAT_004ea91c;
  fStack_bc = DAT_004ea920;
  fStack_b8 = DAT_004ea924;
  temp_v26 = DAT_004ea928;
  FUN_00243224(&temp_v27,&temp_v25,0xff00c0c0,0);
  return temp_v4;
}

} /* extern "C" */
