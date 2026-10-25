/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00323a08` (_code @ 0x323a08, 0x3a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_0021a250(float *, unsigned int, int);
int FUN_00243224(...);
int FUN_00249678(void);
int FUN_002496cc(int);
int effEditorNodeChainApply(unsigned char *);
int padAlternateButtonIndex(int);
int FUN_0024dd90(unsigned char *);
int effMenuListAppend(void);
int padIsButtonPressed(...);
int memAlloc(int, int, int, int, int, int);

/* stack frame of param_2: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_2_stack;

extern signed char DAT_0044ea89; /* 0x44ea89 */
extern unsigned char DAT_0044f900; /* 0x44f900 */
extern unsigned int DAT_0044f910; /* 0x44f910 */
extern float DAT_004d8c10; /* 0x4d8c10 */
extern float DAT_004d8c14; /* 0x4d8c14 */
extern float DAT_004d8c18; /* 0x4d8c18 */
extern float DAT_004d8c1c; /* 0x4d8c1c */
extern float DAT_004d8c20; /* 0x4d8c20 */
extern float DAT_004d8c24; /* 0x4d8c24 */
extern float DAT_004d8c28; /* 0x4d8c28 */
extern float DAT_004d8c2c; /* 0x4d8c2c */
extern unsigned int DAT_004d9270; /* 0x4d9270 */
extern unsigned int DAT_004d9274; /* 0x4d9274 */
extern unsigned int DAT_004d9278; /* 0x4d9278 */
extern unsigned int DAT_004d927c; /* 0x4d927c */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_0021a250. */
/* Supplied declaration required: FUN_00243224. */
/* Supplied declaration required: FUN_00249678. */
/* Supplied declaration required: FUN_002496cc. */
/* Supplied declaration required: effEditorNodeChainApply. */
/* Supplied declaration required: padAlternateButtonIndex. */
/* Supplied declaration required: FUN_0024dd90. */
/* Supplied declaration required: effMenuListAppend. */
/* Supplied declaration required: padIsButtonPressed. */
/* Supplied declaration required: memAlloc. */


unsigned int FUN_00323a08(int param_1,int param_2)

{
/* irregular: 11 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  unsigned int temp_v11;
  unsigned long long temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float fStack_84;
  float temp_v17;
  float temp_v18;
  float fStack_70;
  float fStack_6c;
  unsigned int temp_v19;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int temp_v20;
  float fStack_54;
  float uStack_50;
  float temp_v21;
  
  temp_v6 = 1;
  if ((DAT_0044f910 & 2) == 0) {
    temp_v5 = padIsButtonPressed(1);
    if (temp_v5 == 0) {
      padAlternateButtonIndex(1);
      temp_v5 = padIsButtonPressed();
      if (temp_v5 != 0) {
        temp_v6 = 0;
      }
    }
    else {
      temp_v6 = 0;
    }
  }
  DAT_004d9270 = *(unsigned int *)(param_1 + 0x40);
  DAT_004d9274 = *(unsigned int *)(param_1 + 0x44);
  DAT_004d9278 = *(unsigned int *)(param_1 + 0x48);
  DAT_004d927c = *(unsigned int *)(param_1 + 0x4c);
  if (DAT_0044ea89 == '\0') {
    FUN_0024dd90(&DAT_0044f900);
  }
  effEditorNodeChainApply(&DAT_0044f900);
  temp_v1 = DAT_004d927c;
  temp_v0 = DAT_004d9278;
  temp_v11 = DAT_004d9274;
  *(unsigned int *)(param_1 + 0x40) = DAT_004d9270;
  *(unsigned int *)(param_1 + 0x44) = temp_v11;
  *(unsigned int *)(param_1 + 0x48) = temp_v0;
  *(unsigned int *)(param_1 + 0x4c) = temp_v1;
  if ((DAT_0044f910 & 8) != 0) {
    temp_v6 = temp_v6 | 2;
  }
  if (((temp_v6 & 2) != 0) && ((*(unsigned int *)(param_1 + 0x68) & 0x18) != 0)) {
    DAT_004ea91c = DAT_004d8c10;
    DAT_004ea920 = DAT_004d8c14;
    DAT_004ea924 = DAT_004d8c18;
    DAT_004ea928 = DAT_004d8c1c;
    if (param_2 != 0) {
      DAT_004ea92c = DAT_004d8c20;
      DAT_004ea930 = DAT_004d8c24;
      DAT_004ea934 = DAT_004d8c28;
      DAT_004ea938 = DAT_004d8c2c;
      FUN_00249678();
    }
    *(unsigned int *)(param_1 + 0x40) = temp_v19;
    *(unsigned int *)(param_1 + 0x44) = uStack_64;
    *(unsigned int *)(param_1 + 0x48) = uStack_60;
    *(unsigned int *)(param_1 + 0x4c) = uStack_5c;
  }
  if (param_2 != 0) {
    FUN_002496cc(param_1);
    DAT_004ea92c = DAT_004d8c20;
    DAT_004ea930 = DAT_004d8c24;
    DAT_004ea934 = DAT_004d8c28;
    DAT_004ea938 = DAT_004d8c2c;
    DAT_004ea91c = DAT_004ea91c - DAT_004d8c20;
    DAT_004ea920 = DAT_004ea920 - DAT_004d8c24;
    DAT_004ea924 = DAT_004ea924 - DAT_004d8c28;
    DAT_004ea928 = DAT_004ea928 - DAT_004d8c2c;
  }
  else {
    DAT_004ea91c = *(float *)(param_1 + 0x40);
    DAT_004ea920 = *(float *)(param_1 + 0x44);
    DAT_004ea924 = *(float *)(param_1 + 0x48);
    DAT_004ea928 = *(float *)(param_1 + 0x4c);
  }
  temp_v3 = DAT_004ea924;
  temp_v9 = DAT_004ea920;
  temp_v2 = DAT_004ea91c;
  temp_v8 = 0.0f;
  temp_v12 = CONCAT44(DAT_004ea928,DAT_004ea924);
  temp_v7 = DAT_004ea91c * DAT_004ea91c;
  DAT_004ea91c = DAT_004d8c10;
  DAT_004ea920 = DAT_004d8c14;
  DAT_004ea924 = DAT_004d8c18;
  DAT_004ea928 = DAT_004d8c1c;
  temp_v10 = CONCAT44(temp_v2,romwright_sqrt_4(temp_v7 + 0.0f + temp_v3 * temp_v3));
  if (param_2 != 0) {
    DAT_004ea92c = DAT_004d8c20;
    DAT_004ea930 = DAT_004d8c24;
    DAT_004ea934 = DAT_004d8c28;
    DAT_004ea938 = DAT_004d8c2c;
    FUN_00249678();
  }
  temp_v4 = DAT_004ea928;
  temp_v7 = DAT_004ea924;
  temp_v3 = DAT_004ea920;
  temp_v2 = DAT_004ea91c;
  temp_v14 = DAT_004ea91c;
  temp_v13 = -2.0f;
  temp_v16 = DAT_004ea924;
  fStack_84 = DAT_004ea928;
  temp_v15 = DAT_004ea920 + temp_v9;
  if (temp_v15 == temp_v8) {
    temp_v15 = DAT_004ea920 + -2.0f;
  }
  if (temp_v8 < (float)temp_v10) {
    FUN_0021a250(&temp_v14,0xff00c0c0,0);
  }
  temp_v11 = (unsigned int)((unsigned long long)temp_v10 >> 0x20);
  temp_v17 = temp_v14;
  fStack_70 = temp_v16;
  fStack_6c = fStack_84;
  temp_v18 = temp_v3 + temp_v13;
  if (temp_v9 != temp_v3) {
    FUN_0021a250(&temp_v17,0xff808080,0);
    FUN_00243224(&temp_v17,&temp_v14,0xff00c0c0,0);
  }
  DAT_004ea924 = (float)temp_v12;
  DAT_004ea928 = (float)((unsigned long long)temp_v12 >> 0x20);
  DAT_004ea92c = temp_v2;
  DAT_004ea930 = temp_v3;
  DAT_004ea934 = temp_v7;
  DAT_004ea938 = temp_v4;
  DAT_004ea91c = (float)temp_v11;
  DAT_004ea920 = temp_v9;
  FUN_00249678();
  temp_v20 = DAT_004ea91c;
  fStack_54 = DAT_004ea920;
  uStack_50 = DAT_004ea924;
  temp_v21 = DAT_004ea928;
  FUN_00243224(&temp_v14,&temp_v20,0xff00c0c0,0);
  FUN_00243224(&temp_v17,&temp_v20,0xff00c0c0,0);
  temp_v5 = 0x10000;
  memAlloc(0x10000,0x100,0,0x68,0x10,1);
  *(unsigned int *)(temp_v5 + 0x18) = 0;
  *(unsigned int *)(temp_v5 + 4) = 9;
  *(unsigned int *)(temp_v5 + 8) = temp_v20;
  *(float *)(temp_v5 + 0xc) = fStack_54;
  *(float *)&*(unsigned int *)(temp_v5 + 0x10) = uStack_50;
  *(float *)&*(unsigned int *)(temp_v5 + 0x14) = temp_v21;
  effMenuListAppend();
  return temp_v6;
}

} /* extern "C" */
