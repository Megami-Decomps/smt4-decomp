/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a21b8` (_code @ 0x3a21b8, 0x680 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00230aec(...);
int FUN_00230d2c(...);
int FUN_00230d84(int, int, int, int, int);
int FUN_00231258(...);
int FUN_00231bcc(...);
int FUN_002be56c(...);
int FUN_002be624(...);
int FUN_002bf4f0(...);
int FUN_002bf538(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_4: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_4_stack;

extern unsigned char LAB_003a25c0; /* 0x3a25c0 */
extern unsigned char LAB_003a2838; /* 0x3a2838 */
extern unsigned char LAB_003a283c; /* 0x3a283c */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
extern int FUN_0022f1b8(short);
/* Supplied declaration required: FUN_00230aec. */
extern unsigned int FUN_00230c80(short, unsigned int);
/* Supplied declaration required: FUN_00230d2c. */
/* Supplied declaration required: FUN_00230d84. */
/* Supplied declaration required: FUN_00231258. */
/* Supplied declaration required: FUN_00231bcc. */
extern unsigned int FUN_00246570(unsigned int *);
/* Supplied declaration required: FUN_002be56c. */
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002bed98(int);
extern int FUN_002beda4(void);
/* Supplied declaration required: FUN_002bf4f0. */
/* Supplied declaration required: FUN_002bf538. */


void FUN_003a21b8(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  short temp_v10;
  int *piVar12;
  unsigned int temp_v11;
  unsigned int in_fpscr;
  unsigned int temp_v12;
  unsigned char temp_v13 [32];
  unsigned int temp_v14;
  
  temp_v2 = param_1 + param_4 * 6;
  temp_v0 = *(short *)(temp_v2 + 0x9d1c);
  temp_v1 = *(short *)(temp_v2 + 0x9d1e);
  temp_v14 = (unsigned int)*(unsigned short *)(temp_v2 + 0x9d20);
  if (temp_v0 != 0) {
    temp_v2 = *(int *)(param_1 + 0x37c);
    if (param_3 != 0) {
      temp_v2 = temp_v2 + 1;
    }
    VectorSignedToFloat(0x100 - temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    if (param_3 == 0) {
      temp_v3 = FUN_002bf4f0(param_1 + 0x380,param_2 + 0x27);
    }
    else {
      temp_v3 = FUN_002bf4f0(param_1 + 0x380,param_2 + 0x4f);
    }
    temp_v9 = (int)*(short *)(temp_v3 + 8);
    temp_v3 = (int)*(short *)(temp_v3 + 10);
    if (param_3 != 0) {
      FUN_002bf538();
      FUN_00230d84(param_1 + 0x380,0x47,temp_v9,temp_v3,temp_v2);
      FUN_00230d84(param_1 + 0x380,0x48,temp_v9,temp_v3,temp_v2);
      FUN_00230d84(param_1 + 0x380,0x49,temp_v9,temp_v3,temp_v2);
      FUN_002bf538();
      FUN_00231bcc(param_1 + 0x380,0x4a,temp_v9,temp_v3,temp_v2,1);
      if (*(char *)(param_1 + 0x839) != '\0') {
        FUN_00231bcc(param_1 + 0x380,0x4c,temp_v9,temp_v3,temp_v2,1);
      }
      else {
        FUN_00231bcc(param_1 + 0x380,0x4b,temp_v9,temp_v3,temp_v2,1);
      }
      temp_v4 = FUN_002bf4f0(param_1 + 0x380,0x4e);
      FUN_00231258(*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v3,
                   (int)**(short **)(temp_v4 + 0xc),(int)(*(short **)(temp_v4 + 0xc))[1]);
      temp_v4 = FUN_002bf4f0(param_1 + 0x380,0x4d);
      temp_v5 = param_1 + 0x56c;
      temp_v6 = FUN_002beda4();
      temp_v4 = (temp_v6 + temp_v9) - (*(unsigned short *)(temp_v4 + 4) & 0xffff7fff);
      temp_v5 = FUN_002bed98(temp_v5);
      FUN_00231bcc(param_1 + 0x380,0x4d,temp_v4,temp_v5 + temp_v3,temp_v2,1);
      temp_v4 = g_titleScene;
      piVar12 = (int *)(g_titleScene + 0x130c);
      temp_v5 = piVar12[*piVar12 + 2];
      piVar12[*piVar12 + 2] = 0;
      if (*(char *)(temp_v4 + 0x1324) != '\0' || temp_v5 != 0) {
        (**(romwright_code **)(temp_v4 + 0x1328))();
        *(unsigned char *)(temp_v4 + 0x1324) = 0;
      }
    }
    temp_v4 = FUN_0022f1b8(temp_v1);
    temp_v10 = temp_v1;
    if (temp_v4 == 0) {
      temp_v10 = temp_v0;
    }
    if (param_3 != 0) {
      temp_v4 = FUN_002bf4f0(param_1 + 0x380,0xe6);
    }
    else {
      temp_v4 = FUN_002bf4f0(param_1 + 0x380,0xd2);
    }
    temp_v5 = *(short *)(temp_v4 + 8) + temp_v9;
    temp_v4 = *(short *)(temp_v4 + 10) + temp_v3;
    if (param_3 != 0) {
      FUN_00231bcc(param_1 + 0x380,0xe4,temp_v9,temp_v3,temp_v2,1);
    }
    FUN_00230d2c(param_1 + 0x380,(int)temp_v10,temp_v5,temp_v4,temp_v2,0);
    if (param_3 == 0) {
      temp_v12 = 2;
    }
    else {
      temp_v12 = 3;
    }
    temp_v7 = FUN_00230c80(temp_v10,0);
    if (param_3 == 0) {
      temp_v8 = 0xd3;
      temp_v11 = 0xff;
    }
    else {
      temp_v8 = 0xe7;
      temp_v11 = 0xffffffff;
    }
    temp_v4 = FUN_002bf4f0(param_1 + 0x380,temp_v8);
    VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be56c(param_1 + 0x380,temp_v12,temp_v11,temp_v7);
    temp_v4 = FUN_0022f1b8(temp_v1);
    if (temp_v4 != 0) {
      temp_v12 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v12 + 2)),temp_v1) & 0xfc00ffff;
      temp_v7 = FUN_00246570(&temp_v12);
      if (param_3 == 0) {
        temp_v8 = 0xd1;
      }
      else {
        temp_v8 = 0xe3;
      }
      FUN_00231bcc(param_1 + 0x380,temp_v8,temp_v9,temp_v3,temp_v2,1);
      if (param_3 != 0) {
        temp_v4 = FUN_002bf4f0(param_1 + 0x380,0xf1);
        temp_v8 = 0xffffffff;
      }
      else {
        temp_v4 = FUN_002bf4f0(param_1 + 0x380,0xdd);
        temp_v8 = 0x5a5a5aff;
      }
      temp_v0 = *(short *)(temp_v4 + 8);
      temp_v10 = *(short *)(temp_v4 + 10);
      FUN_002be624(temp_v13,&LAB_003a25c0,temp_v7);
      FUN_00230aec(param_1 + 0x380,0,temp_v0 + temp_v9,temp_v10 + temp_v3,0,7,temp_v8,temp_v2,temp_v13);
    }
    else {
      if (param_3 != 0) {
        temp_v4 = FUN_002bf4f0(param_1 + 0x380,0xe8);
      }
      else {
        temp_v4 = FUN_002bf4f0(param_1 + 0x380,0xd4);
      }
      temp_v0 = *(short *)(temp_v4 + 10);
      temp_v4 = *(short *)(temp_v4 + 8) + temp_v9;
      if (param_3 != 0) {
        FUN_00231bcc(param_1 + 0x380,0xe5,temp_v9,temp_v3,temp_v2,1);
      }
      FUN_00230d2c(param_1 + 0x380,(int)temp_v1,temp_v4,temp_v0 + temp_v3,temp_v2,0);
      temp_v7 = FUN_00230c80(temp_v1,0);
      if (param_3 == 0) {
        temp_v8 = 0xd5;
        temp_v11 = 0xff;
      }
      else {
        temp_v8 = 0xe9;
        temp_v11 = 0xffffffff;
      }
      temp_v4 = FUN_002bf4f0(param_1 + 0x380,temp_v8);
      VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be56c(param_1 + 0x380,temp_v12,temp_v11,temp_v7);
    }
    if (param_3 != 0) {
      temp_v4 = FUN_002bf4f0(param_1 + 0x380,0xf4);
      temp_v7 = 0xffffffff;
    }
    else {
      temp_v4 = FUN_002bf4f0(param_1 + 0x380,0xe0);
      temp_v7 = 0x323232ff;
    }
    temp_v0 = *(short *)(temp_v4 + 8);
    temp_v10 = *(short *)(temp_v4 + 10);
    FUN_002be624(temp_v13,&LAB_003a2838,temp_v14);
    FUN_00230aec(param_1 + 0x380,0,temp_v0 + temp_v9,temp_v10 + temp_v3,0,7,temp_v7,temp_v2,temp_v13);
    if (param_3 == 0) {
      temp_v8 = 0x100;
    }
    else {
      temp_v8 = 0x101;
    }
    temp_v4 = FUN_002bf4f0(param_1 + 0x380,temp_v8);
    FUN_00230aec(param_1 + 0x380,0,*(short *)(temp_v4 + 8) + temp_v9,*(short *)(temp_v4 + 10) + temp_v3,0,7
                 ,temp_v7,temp_v2,&LAB_003a283c);
    if ((*(char *)(param_1 + 0x1c) != '\0') && (temp_v4 = FUN_0022f1b8(temp_v1), temp_v4 != 0)) {
      if (param_3 == 0) {
        temp_v7 = 0xd0;
      }
      else {
        temp_v7 = 0xe2;
      }
    }
    else if (param_3 == 0) {
      temp_v7 = 0xcf;
    }
    else {
      temp_v7 = 0xe1;
    }
    FUN_00231bcc(param_1 + 0x380,temp_v7,temp_v9,temp_v3,temp_v2,1);
  }
  return;
}

} /* extern "C" */
