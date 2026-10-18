/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00350a8c` (_code @ 0x350a8c, 0x1c8 bytes) from smt4a.cxi.
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

extern unsigned int *DAT_0059dbf4; /* 0x59dbf4 */
extern unsigned int DAT_00634c90; /* 0x634c90 */
extern unsigned int DAT_00634c94; /* 0x634c94 */
extern unsigned int DAT_00634c98; /* 0x634c98 */
extern unsigned int DAT_00634c9c; /* 0x634c9c */
extern unsigned char DAT_00634d20; /* 0x634d20 */
extern float DAT_00634d40; /* 0x634d40 */
extern float DAT_00634d44; /* 0x634d44 */
extern float DAT_00634d48; /* 0x634d48 */
extern float DAT_00634d4c; /* 0x634d4c */
extern unsigned int DAT_00634d70; /* 0x634d70 */
extern unsigned int DAT_00634d74; /* 0x634d74 */
extern unsigned int DAT_00634d78; /* 0x634d78 */
extern unsigned int DAT_00634d7c; /* 0x634d7c */
extern float DAT_00634d80; /* 0x634d80 */
extern unsigned int DAT_00634d84; /* 0x634d84 */
extern unsigned int DAT_00634d88; /* 0x634d88 */
extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern unsigned int DAT_006472ec; /* 0x6472ec */
extern unsigned int DAT_006472f0; /* 0x6472f0 */
extern unsigned int DAT_006472f4; /* 0x6472f4 */
extern unsigned int DAT_006472f8; /* 0x6472f8 */

/* Supplied declaration required: FUN_001ad5ec. */
/* Supplied declaration required: FUN_001bc3e4. */
/* Supplied declaration required: FUN_00290e6c. */
/* Supplied declaration required: FUN_002914bc. */
/* Supplied declaration required: FUN_002b4288. */
/* Supplied declaration required: FUN_002f8794. */
/* Supplied declaration required: FUN_003008c4. */
/* Supplied declaration required: FUN_00300908. */
/* Supplied declaration required: FUN_00390038. */


void FUN_00350a8c(unsigned int param_1)

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
  
  FUN_00390038(&DAT_00634d20);
  temp_v4 = DAT_006472dc;
  uStack_44 = DAT_006472e0;
  uStack_40 = DAT_006472e4;
  temp_v5 = DAT_006472e8;
  FUN_003008c4(param_1,&temp_v4);
  if ((DAT_00634d88 & 0x60) != 0) {
    DAT_006472dc = (float)DAT_00634c90;
    DAT_006472e0 = (float)DAT_00634c94;
    DAT_006472e4 = (float)DAT_00634c98;
    DAT_006472e8 = (float)DAT_00634c9c;
    DAT_006472ec = *DAT_0059dbf4;
    DAT_006472f0 = DAT_0059dbf4[1];
    DAT_006472f4 = DAT_0059dbf4[2];
    DAT_006472f8 = DAT_0059dbf4[3];
    FUN_002f8794();
    temp_v2 = DAT_006472e4;
    temp_v1 = DAT_006472dc;
    uStack_54 = DAT_006472e0;
    temp_v3 = DAT_006472e8;
    FUN_001ad5ec(&DAT_00634d20,&temp_v1,&temp_v0);
    DAT_006472dc = (float)DAT_0059dbf4[0x14];
    DAT_006472e0 = (float)DAT_0059dbf4[0x15];
    DAT_006472e4 = (float)DAT_0059dbf4[0x16];
    DAT_006472e8 = (float)DAT_0059dbf4[0x17];
    DAT_006472ec = temp_v0;
    DAT_006472f0 = uStack_64;
    DAT_006472f4 = uStack_60;
    DAT_006472f8 = uStack_5c;
    FUN_001bc3e4();
  }
  else {
    DAT_006472dc = (float)DAT_0059dbf4[0x14];
    DAT_006472e0 = (float)DAT_0059dbf4[0x15];
    DAT_006472e4 = (float)DAT_0059dbf4[0x16];
    DAT_006472e8 = (float)DAT_0059dbf4[0x17];
    DAT_006472ec = DAT_00634d70;
    DAT_006472f0 = DAT_00634d74;
    DAT_006472f4 = DAT_00634d78;
    DAT_006472f8 = DAT_00634d7c;
    FUN_001bc3e4();
  }
  temp_v6 = DAT_006472dc;
  fStack_34 = DAT_006472e0;
  fStack_30 = DAT_006472e4;
  temp_v7 = DAT_006472e8;
  FUN_002b4288(param_1,&temp_v6);
  FUN_002914bc(param_1);
  if ((DAT_00634d88 & 0x100) != 0) {
    temp_v9 = DAT_00634d80 * (float)DAT_0059dbf4[0x1d];
    temp_v8 = DAT_00634d40 * temp_v9;
    fStack_24 = DAT_00634d44 * temp_v9;
    fStack_20 = DAT_00634d48 * temp_v9;
    temp_v9 = DAT_00634d4c * temp_v9;
    DAT_006472dc = temp_v8;
    DAT_006472e0 = fStack_24;
    DAT_006472e4 = fStack_20;
    DAT_006472e8 = temp_v9;
    FUN_00300908(param_1,&temp_v8);
  }
  FUN_00290e6c(param_1,DAT_00634d84);
  return;
}
