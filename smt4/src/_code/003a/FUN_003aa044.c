/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aa044` (_code @ 0x3aa044, 0x4b8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_4_stack;

extern unsigned char LAB_003aa478; /* 0x3aa478 */
extern unsigned char LAB_003aa480; /* 0x3aa480 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00230aec. */
/* Supplied declaration required: FUN_00230d84. */
/* Supplied declaration required: FUN_00231258. */
/* Supplied declaration required: FUN_00231bcc. */
extern int FUN_0023342c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b06c4. */
extern unsigned int FUN_002bce30(unsigned int, unsigned int);
extern unsigned int FUN_002bd06c(unsigned int);
/* Supplied declaration required: FUN_002be56c. */
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002bed98(int);
extern int FUN_002beda4(void);
/* Supplied declaration required: FUN_002bf4f0. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_0039fbc8. */


void FUN_003aa044(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned short temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  int *piVar13;
  unsigned int temp_v12;
  unsigned char temp_v13;
  unsigned int temp_v14;
  unsigned int in_fpscr;
  unsigned char temp_v15 [32];
  int temp_v16;
  
  temp_v10 = *(int *)(param_1 + 0x594);
  if (param_3 != 0) {
    temp_v10 = temp_v10 + 1;
  }
  VectorSignedToFloat(0x100 - temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (param_3 == 0) {
    temp_v3 = FUN_002bf4f0(param_1 + 200,param_2 + 0x102f);
  }
  else {
    temp_v3 = FUN_002bf4f0(param_1 + 200,param_2 + 0x1042);
  }
  temp_v11 = (int)*(short *)(temp_v3 + 8);
  temp_v3 = (int)*(short *)(temp_v3 + 10);
  if (param_3 != 0) {
    FUN_002bf538();
    FUN_00230d84(param_1 + 200,0x103a,temp_v11,temp_v3,temp_v10);
    FUN_00230d84(param_1 + 200,0x103b,temp_v11,temp_v3,temp_v10);
    FUN_00230d84(param_1 + 200,0x103c,temp_v11,temp_v3,temp_v10);
    FUN_002bf538();
    FUN_00231bcc(param_1 + 200,0x103d,temp_v11,temp_v3,temp_v10,1);
    FUN_00231bcc(param_1 + 200,0x103e,temp_v11,temp_v3,temp_v10,1);
    temp_v4 = FUN_002bf4f0(param_1 + 200,0x1041);
    FUN_00231258(*(short *)(temp_v4 + 8) + temp_v11,*(short *)(temp_v4 + 10) + temp_v3,
                 (int)**(short **)(temp_v4 + 0xc),(int)(*(short **)(temp_v4 + 0xc))[1]);
    temp_v4 = FUN_002bf4f0(param_1 + 200,0x1040);
    temp_v5 = param_1 + 0x2a0;
    temp_v6 = FUN_002beda4();
    temp_v0 = *(unsigned short *)(temp_v4 + 4);
    temp_v4 = FUN_002bed98(temp_v5);
    FUN_00231bcc(param_1 + 200,0x1040,(temp_v6 + temp_v11) - (temp_v0 & 0xffff7fff),temp_v4 + temp_v3,temp_v10,1
                );
    temp_v4 = DAT_0044ea00;
    piVar13 = (int *)(DAT_0044ea00 + 0x130c);
    temp_v5 = piVar13[*piVar13 + 2];
    piVar13[*piVar13 + 2] = 0;
    if (*(char *)(temp_v4 + 0x1324) != '\0' || temp_v5 != 0) {
      (**(romwright_code **)(temp_v4 + 0x1328))();
      *(unsigned char *)(temp_v4 + 0x1324) = 0;
    }
  }
  if (param_4 != 0) {
    if (param_3 != 0) {
      temp_v4 = FUN_002bf4f0(param_1 + 200,0x1068);
    }
    else {
      temp_v4 = FUN_002bf4f0(param_1 + 200,0x1058);
    }
    FUN_0039fbc8(param_1 + 200,(int)(short)param_4,*(short *)(temp_v4 + 8) + temp_v11,
                 *(short *)(temp_v4 + 10) + temp_v3,temp_v10);
    if (param_3 == 0) {
      temp_v14 = 2;
    }
    else {
      temp_v14 = 3;
    }
    temp_v7 = FUN_002bce30(param_4 & 0xffff,0);
    temp_v4 = FUN_0023342c(temp_v7,2);
    if (param_3 == 0) {
      temp_v9 = 0x105b;
      temp_v12 = 0xff;
    }
    else {
      temp_v9 = 0x106b;
      temp_v12 = 0xffffffff;
    }
    temp_v5 = FUN_002bf4f0(param_1 + 200,temp_v9);
    VectorSignedToFloat(*(short *)(temp_v5 + 10) + temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((temp_v11 + (int)**(short **)(temp_v5 + 0xc) / 2 + (int)*(short *)(temp_v5 + 8)) -
                        temp_v4 / 2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be56c(param_1 + 200,temp_v14,temp_v12,temp_v7,temp_v7,temp_v4);
    temp_v7 = FUN_002bd06c(param_4 & 0xffff);
    if (param_3 == 0) {
      temp_v9 = 0x105c;
      temp_v12 = 0xff;
    }
    else {
      temp_v9 = 0x106c;
      temp_v12 = 0xffffffff;
    }
    temp_v5 = FUN_002bf4f0(param_1 + 200,temp_v9);
    VectorSignedToFloat(*(short *)(temp_v5 + 10) + temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v5 + 8) + temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be56c(param_1 + 200,temp_v14,temp_v12,temp_v7,temp_v7,temp_v4);
    temp_v8 = param_4;
    temp_v13 = 0;
    FUN_002b06c4();
    if (temp_v8 != 0) {
      temp_v13 = *(unsigned char *)(temp_v8 + 2);
    }
    if (param_3 != 0) {
      temp_v4 = FUN_002bf4f0(param_1 + 200,0x106a);
    }
    else {
      temp_v4 = FUN_002bf4f0(param_1 + 200,0x105a);
    }
    temp_v1 = *(short *)(temp_v4 + 8);
    temp_v14 = 0xffffffff;
    temp_v16 = *(short *)(temp_v4 + 10) + temp_v3;
    FUN_002be624(temp_v15,&LAB_003aa478,temp_v13);
    FUN_00230aec(param_1 + 200,0,temp_v1 + temp_v11,temp_v16,0,7,0xffffffff,temp_v10,temp_v15);
    param_4 = param_4 & 0xffff;
    temp_v7 = 0;
    FUN_002b06c4();
    if (param_4 != 0) {
      temp_v7 = *(unsigned int *)(param_4 + 0x78);
    }
    if (param_3 != 0) {
      temp_v4 = FUN_002bf4f0(param_1 + 200,0x1074);
    }
    else {
      temp_v4 = FUN_002bf4f0(param_1 + 200,0x1064);
      temp_v14 = 0x323232ff;
    }
    temp_v1 = *(short *)(temp_v4 + 8);
    temp_v2 = *(short *)(temp_v4 + 10);
    FUN_002be624(temp_v15,&LAB_003aa480,temp_v7);
    FUN_00230aec(param_1 + 200,0,temp_v11 + temp_v1,temp_v2 + temp_v3,0,7,temp_v14,temp_v10,temp_v15);
  }
  return;
}
