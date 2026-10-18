/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00250200` (_code @ 0x250200, 0x1c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern unsigned int *DAT_0044ea94; /* 0x44ea94 */
extern unsigned int DAT_004d8c10; /* 0x4d8c10 */
extern unsigned int DAT_004d8c14; /* 0x4d8c14 */
extern unsigned int DAT_004d8c18; /* 0x4d8c18 */
extern unsigned int DAT_004d8c1c; /* 0x4d8c1c */
extern unsigned char DAT_004d8ca0; /* 0x4d8ca0 */
extern float DAT_004d8cc0; /* 0x4d8cc0 */
extern float DAT_004d8cc4; /* 0x4d8cc4 */
extern float DAT_004d8cc8; /* 0x4d8cc8 */
extern float DAT_004d8ccc; /* 0x4d8ccc */
extern unsigned int DAT_004d8cf0; /* 0x4d8cf0 */
extern unsigned int DAT_004d8cf4; /* 0x4d8cf4 */
extern unsigned int DAT_004d8cf8; /* 0x4d8cf8 */
extern unsigned int DAT_004d8cfc; /* 0x4d8cfc */
extern float DAT_004d8d00; /* 0x4d8d00 */
extern unsigned int DAT_004d8d04; /* 0x4d8d04 */
extern unsigned int DAT_004d8d08; /* 0x4d8d08 */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern unsigned int DAT_004ea92c; /* 0x4ea92c */
extern unsigned int DAT_004ea930; /* 0x4ea930 */
extern unsigned int DAT_004ea934; /* 0x4ea934 */
extern unsigned int DAT_004ea938; /* 0x4ea938 */

/* Supplied declaration required: FUN_001e1a00. */
/* Supplied declaration required: FUN_001f728c. */
/* Supplied declaration required: FUN_0021a4dc. */
/* Supplied declaration required: FUN_00249678. */
/* Supplied declaration required: FUN_002496cc. */
/* Supplied declaration required: FUN_0024c370. */
/* Supplied declaration required: FUN_0024c39c. */
/* Supplied declaration required: FUN_0025c8f0. */
/* Supplied declaration required: FUN_002a2c00. */


void FUN_00250200(unsigned int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int temp_v1;
  float uStack_54;
  float temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  float uStack_44;
  float uStack_40;
  float temp_v5;
  float temp_v6;
  float fStack_34;
  float fStack_30;
  float temp_v7;
  float temp_v8;
  float fStack_24;
  float fStack_20;
  float temp_v9;
  
  FUN_002496cc(&DAT_004d8ca0);
  temp_v4 = DAT_004ea91c;
  uStack_44 = DAT_004ea920;
  uStack_40 = DAT_004ea924;
  temp_v5 = DAT_004ea928;
  FUN_0024c370(param_1,&temp_v4);
  if ((DAT_004d8d08 & 0x60) != 0) {
    DAT_004ea91c = (float)DAT_004d8c10;
    DAT_004ea920 = (float)DAT_004d8c14;
    DAT_004ea924 = (float)DAT_004d8c18;
    DAT_004ea928 = (float)DAT_004d8c1c;
    DAT_004ea92c = *DAT_0044ea94;
    DAT_004ea930 = DAT_0044ea94[1];
    DAT_004ea934 = DAT_0044ea94[2];
    DAT_004ea938 = DAT_0044ea94[3];
    FUN_00249678();
    temp_v2 = DAT_004ea924;
    temp_v1 = DAT_004ea91c;
    uStack_54 = DAT_004ea920;
    temp_v3 = DAT_004ea928;
    FUN_0025c8f0(&DAT_004d8ca0,&temp_v1,&temp_v0);
    DAT_004ea91c = (float)DAT_0044ea94[0x14];
    DAT_004ea920 = (float)DAT_0044ea94[0x15];
    DAT_004ea924 = (float)DAT_0044ea94[0x16];
    DAT_004ea928 = (float)DAT_0044ea94[0x17];
    DAT_004ea92c = temp_v0;
    DAT_004ea930 = uStack_64;
    DAT_004ea934 = uStack_60;
    DAT_004ea938 = uStack_5c;
    FUN_002a2c00();
  }
  else {
    DAT_004ea91c = (float)DAT_0044ea94[0x14];
    DAT_004ea920 = (float)DAT_0044ea94[0x15];
    DAT_004ea924 = (float)DAT_0044ea94[0x16];
    DAT_004ea928 = (float)DAT_0044ea94[0x17];
    DAT_004ea92c = DAT_004d8cf0;
    DAT_004ea930 = DAT_004d8cf4;
    DAT_004ea934 = DAT_004d8cf8;
    DAT_004ea938 = DAT_004d8cfc;
    FUN_002a2c00();
  }
  temp_v6 = DAT_004ea91c;
  fStack_34 = DAT_004ea920;
  fStack_30 = DAT_004ea924;
  temp_v7 = DAT_004ea928;
  FUN_001f728c(param_1,&temp_v6);
  FUN_0024c39c(param_1);
  if ((DAT_004d8d08 & 0x100) != 0) {
    temp_v9 = DAT_004d8d00 * (float)DAT_0044ea94[0x1d];
    temp_v8 = DAT_004d8cc0 * temp_v9;
    fStack_24 = DAT_004d8cc4 * temp_v9;
    fStack_20 = DAT_004d8cc8 * temp_v9;
    temp_v9 = DAT_004d8ccc * temp_v9;
    DAT_004ea91c = temp_v8;
    DAT_004ea920 = fStack_24;
    DAT_004ea924 = fStack_20;
    DAT_004ea928 = temp_v9;
    FUN_0021a4dc(param_1,&temp_v8);
  }
  FUN_001e1a00(param_1,DAT_004d8d04);
  return;
}
