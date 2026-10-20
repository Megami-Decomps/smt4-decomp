/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022f1d0` (_code @ 0x22f1d0, 0x648 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00230aec(...);
int FUN_00230cc0(...);
int FUN_00230d2c(...);
int FUN_00230d84(int, int, int, int, int);
int FUN_00230e04(...);
int FUN_00231258(...);
int FUN_00231bcc(...);
int FUN_0028fb3c(...);
int FUN_002be56c(...);
int FUN_002be624(...);
int FUN_002bf4f0(...);
int FUN_002bf538(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_4: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_4_stack;

extern unsigned char LAB_0022f824; /* 0x22f824 */
extern unsigned char LAB_0022f82c; /* 0x22f82c */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00230aec. */
extern int FUN_00230b90(int);
extern int FUN_00230c1c(unsigned short, unsigned int);
extern unsigned int FUN_00230c80(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00230cc0. */
/* Supplied declaration required: FUN_00230d2c. */
/* Supplied declaration required: FUN_00230d84. */
/* Supplied declaration required: FUN_00230e04. */
/* Supplied declaration required: FUN_00231258. */
/* Supplied declaration required: FUN_00231bcc. */
extern unsigned int FUN_00246570(unsigned short *);
/* Supplied declaration required: FUN_0028fb3c. */
/* Supplied declaration required: FUN_002be56c. */
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002bed98(int);
extern int FUN_002beda4(void);
/* Supplied declaration required: FUN_002bf4f0. */
/* Supplied declaration required: FUN_002bf538. */


void FUN_0022f1d0(int param_1,int param_2,int param_3,unsigned short *param_4)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  int *piVar13;
  unsigned int temp_v12;
  unsigned int in_fpscr;
  unsigned int temp_v13;
  unsigned char temp_v14 [32];
  unsigned int temp_v15;
  unsigned int temp_v16;
  
  temp_v0 = *param_4;
  temp_v3 = (unsigned int)temp_v0;
  if (temp_v3 == 0) {
    return;
  }
  temp_v10 = *(int *)(param_1 + 0x37c);
  if (param_3 != 0) {
    temp_v10 = temp_v10 + 1;
  }
  VectorSignedToFloat(0x100 - temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (param_3 == 0) {
    temp_v4 = FUN_002bf4f0(param_1 + 0x380,param_2 + 0x27);
  }
  else {
    temp_v4 = FUN_002bf4f0(param_1 + 0x380,param_2 + 0x4f);
  }
  temp_v11 = (int)*(short *)(temp_v4 + 8);
  temp_v4 = (int)*(short *)(temp_v4 + 10);
  if (param_3 != 0) {
    FUN_002bf538();
    FUN_00230d84(param_1 + 0x380,0x47,temp_v11,temp_v4,temp_v10);
    FUN_00230d84(param_1 + 0x380,0x48,temp_v11,temp_v4,temp_v10);
    FUN_00230d84(param_1 + 0x380,0x49,temp_v11,temp_v4,temp_v10);
    FUN_002bf538();
    FUN_00231bcc(param_1 + 0x380,0x4a,temp_v11,temp_v4,temp_v10,1);
    if (*(char *)(param_1 + 0x839) != '\0') {
      FUN_00231bcc(param_1 + 0x380,0x4c,temp_v11,temp_v4,temp_v10,1);
    }
    else {
      FUN_00231bcc(param_1 + 0x380,0x4b,temp_v11,temp_v4,temp_v10,1);
    }
    temp_v5 = FUN_002bf4f0(param_1 + 0x380,0x4e);
    FUN_00231258(*(short *)(temp_v5 + 8) + temp_v11,*(short *)(temp_v5 + 10) + temp_v4,
                 (int)**(short **)(temp_v5 + 0xc),(int)(*(short **)(temp_v5 + 0xc))[1]);
    temp_v5 = FUN_002bf4f0(param_1 + 0x380,0x4d);
    temp_v6 = param_1 + 0x56c;
    temp_v7 = FUN_002beda4();
    temp_v5 = (temp_v7 + temp_v11) - (*(unsigned short *)(temp_v5 + 4) & 0xffff7fff);
    temp_v6 = FUN_002bed98(temp_v6);
    FUN_00231bcc(param_1 + 0x380,0x4d,temp_v5,temp_v6 + temp_v4,temp_v10,1);
    temp_v5 = g_titleScene;
    piVar13 = (int *)(g_titleScene + 0x130c);
    temp_v6 = piVar13[*piVar13 + 2];
    piVar13[*piVar13 + 2] = 0;
    if (*(char *)(temp_v5 + 0x1324) != '\0' || temp_v6 != 0) {
      (**(romwright_code **)(temp_v5 + 0x1328))();
      *(unsigned char *)(temp_v5 + 0x1324) = 0;
    }
    temp_v5 = FUN_002bf4f0(param_1 + 0x380,0xac);
  }
  else {
    temp_v5 = FUN_002bf4f0(param_1 + 0x380,0x99);
  }
  temp_v1 = *(short *)(temp_v5 + 8);
  temp_v5 = *(short *)(temp_v5 + 10) + temp_v4;
  if (param_3 != 0) {
    FUN_00231bcc(param_1 + 0x380,0xaa,temp_v11,temp_v4,temp_v10,1);
  }
  FUN_00230d2c(param_1 + 0x380,(int)(short)temp_v0,temp_v1 + temp_v11,temp_v5,temp_v10,param_2 != 0);
  if (param_2 != 0) {
    if ((param_4[1] & 1) != 0) {
      if (param_3 != 0) {
        temp_v5 = FUN_002bf4f0(param_1 + 0x380,0xab);
      }
      else {
        temp_v5 = FUN_002bf4f0(param_1 + 0x380,0x98);
      }
      FUN_00230cc0(param_1 + 0x380,5,*(short *)(temp_v5 + 8) + temp_v11,*(short *)(temp_v5 + 10) + temp_v4,
                   temp_v10);
    }
    if ((param_4[1] & 2) != 0) {
      if (param_3 != 0) {
        temp_v5 = FUN_002bf4f0(param_1 + 0x380,0xb2);
      }
      else {
        temp_v5 = FUN_002bf4f0(param_1 + 0x380,0x9f);
      }
      temp_v6 = *(short *)(temp_v5 + 8) + temp_v11;
      temp_v5 = *(short *)(temp_v5 + 10) + temp_v4;
      if (*(int *)(param_1 + 0x860) != 8) {
        FUN_00230cc0(param_1 + 0x380,6,temp_v6,temp_v5,temp_v10);
      }
      else {
        FUN_00230cc0(param_1 + 0x380,7,temp_v6,temp_v5,temp_v10);
      }
    }
  }
  if (param_3 == 0) {
    temp_v8 = 2;
  }
  else {
    temp_v8 = 3;
  }
  temp_v15 = FUN_00230c80(temp_v3,0);
  if (param_3 != 0) {
    temp_v12 = 0xffffffff;
    temp_v16 = 0xad;
    if (*(int *)(param_1 + 0x860) != 8) {
      temp_v9 = FUN_00230e04(param_4);
      temp_v5 = FUN_00230c1c(*param_4,temp_v9);
      if (temp_v5 == 0) {
        temp_v12 = 0x787878ff;
      }
    }
    else {
      temp_v13 = temp_v3;
      temp_v5 = FUN_00230b90(param_1);
      if ((temp_v5 != 0) && (temp_v5 = FUN_0028fb3c(temp_v13), 1 >= temp_v5)) {
        temp_v12 = 0x787878ff;
      }
    }
  }
  else {
    temp_v12 = 0xff;
    temp_v16 = 0x9a;
    if (*(int *)(param_1 + 0x860) != 8) {
      temp_v9 = FUN_00230e04(param_4);
      temp_v5 = FUN_00230c1c(*param_4,temp_v9);
      if (temp_v5 == 0) {
        temp_v12 = 0x5a5a5aff;
      }
    }
    else {
      temp_v13 = temp_v3;
      temp_v5 = FUN_00230b90(param_1);
      if ((temp_v5 != 0) && (temp_v5 = FUN_0028fb3c(temp_v13), 1 >= temp_v5)) {
        temp_v12 = 0x5a5a5aff;
      }
    }
  }
  temp_v5 = FUN_002bf4f0(param_1 + 0x380,temp_v16);
  VectorSignedToFloat(*(short *)(temp_v5 + 10) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v5 + 8) + temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be56c(param_1 + 0x380,temp_v8,temp_v12,temp_v15);
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x860) != 8) {
      temp_v8 = FUN_00230e04();
    }
    else {
      temp_v8 = FUN_00246570(param_4);
    }
    if (param_3 != 0) {
      temp_v5 = FUN_002bf4f0(param_1 + 0x380,0xba);
      temp_v12 = 0xffffffff;
    }
    else {
      temp_v5 = FUN_002bf4f0(param_1 + 0x380,0xa7);
      temp_v12 = 0x5a5a5aff;
    }
    temp_v1 = *(short *)(temp_v5 + 8);
    temp_v2 = *(short *)(temp_v5 + 10);
    FUN_002be624(temp_v14,&LAB_0022f824,temp_v8);
    FUN_00230aec(param_1 + 0x380,0,temp_v1 + temp_v11,temp_v2 + temp_v4,0,7,temp_v12,temp_v10,temp_v14);
  }
  temp_v8 = FUN_0028fb3c(temp_v3);
  if (param_3 != 0) {
    temp_v5 = FUN_002bf4f0(param_1 + 0x380,0xbc);
    temp_v12 = 0xf49800ff;
  }
  else {
    temp_v5 = FUN_002bf4f0(param_1 + 0x380,0xa9);
    temp_v12 = 0x7a4c00ff;
  }
  temp_v1 = *(short *)(temp_v5 + 8);
  temp_v2 = *(short *)(temp_v5 + 10);
  FUN_002be624(temp_v14,&LAB_0022f82c,temp_v8);
  FUN_00230aec(param_1 + 0x380,0,temp_v1 + temp_v11,temp_v2 + temp_v4,0,7,temp_v12,temp_v10,temp_v14);
  return;
}

} /* extern "C" */
