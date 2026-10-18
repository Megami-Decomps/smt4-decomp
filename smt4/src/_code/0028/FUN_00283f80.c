/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00283f80` (_code @ 0x283f80, 0x868 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_5_stack;

extern unsigned char LAB_002843d8; /* 0x2843d8 */
extern unsigned char LAB_002843ec; /* 0x2843ec */
extern unsigned char LAB_002843f8; /* 0x2843f8 */
extern unsigned char LAB_00284408; /* 0x284408 */
extern unsigned char LAB_00284414; /* 0x284414 */
extern unsigned char LAB_0028441c; /* 0x28441c */
extern unsigned char LAB_00284428; /* 0x284428 */
extern unsigned char LAB_00284434; /* 0x284434 */
extern unsigned char LAB_00284440; /* 0x284440 */
extern unsigned char LAB_0028444c; /* 0x28444c */
extern unsigned char LAB_002847ec; /* 0x2847ec */
extern unsigned char LAB_002847fc; /* 0x2847fc */
extern unsigned char LAB_00284804; /* 0x284804 */
extern unsigned char LAB_00284814; /* 0x284814 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00288790. */
extern unsigned int FUN_0028fb40(int);
extern int FUN_002995d8(int);
/* Supplied declaration required: FUN_002b45e8. */
extern short *FUN_002b63ac(void);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be304. */
/* Supplied declaration required: FUN_002be370. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002be650(int, unsigned int);
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf4f8. */


void FUN_00283f80(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  short *psVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  short temp_v10;
  unsigned int in_fpscr;
  unsigned int temp_v11;
  unsigned char temp_v12 [52];
  int iStack_34;
  int iStack_30;
  int temp_v13;
  int iStack_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  temp_v13 = param_3;
  iStack_28 = param_4;
  psVar3 = (short *)FUN_002b63ac();
  if (temp_v13 == 0) {
    return;
  }
  temp_v2 = FUN_002b45e8();
  temp_v10 = 0;
  temp_v3 = FUN_002bf4f8(0x1d,param_2 + 0x40d);
  temp_v4 = FUN_002bf4f8(0x1d,0x514);
  temp_v5 = FUN_002be650(temp_v13,0);
  if (temp_v5 != 0) {
    temp_v11 = 0xff;
    temp_v6 = FUN_002995d8(temp_v13);
    if (temp_v6 == 0) {
      temp_v11 = 0x5a5a5aff;
    }
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_5,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_4,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,temp_v11,temp_v5,(int)*(short *)(temp_v4 + 8));
  }
  temp_v4 = FUN_002bf4f8(0x1d,0x520);
  temp_v11 = FUN_0028fb40(temp_v13);
  FUN_002be624(temp_v12,&LAB_002843d8,temp_v11);
  FUN_002be304(0xff);
  FUN_002bdf94(0,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + param_4,
               (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v3 + 10) + param_5,1,2,0x6f,
               temp_v12);
  FUN_002bed3c();
  temp_v4 = FUN_002bf4f8(0x1d,0x513);
  FUN_002be370((int)(short)temp_v13,
               (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + param_4,
               (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_5,0x6f,1);
  switch(param_1) {
  case 0x11:
  case 0x13:
    if (param_1 == 0x11) {
      temp_v10 = *psVar3;
      if (temp_v10 != 0) {
        temp_v4 = FUN_002b45e8();
        temp_v9 = *(unsigned int *)(temp_v4 + 0x54) & 0x3ff;
      }
      else {
        temp_v9 = 0;
      }
    }
    else if (param_1 == 0x13) {
      temp_v10 = psVar3[2];
      if (temp_v10 != 0) {
        temp_v4 = FUN_002b45e8();
        temp_v9 = *(unsigned int *)(temp_v4 + 0x54) & 0x3ff;
      }
      else {
        temp_v9 = 0;
      }
    }
    else {
      temp_v9 = 0;
    }
    FUN_002be304(0xff);
    temp_v0 = *(unsigned int *)(temp_v2 + 0x54) & 0x3ff;
    temp_v7 = temp_v0;
    if (temp_v0 < temp_v9) {
      temp_v7 = 0xdc0f14ff;
    }
    if (temp_v9 < temp_v0) {
      temp_v7 = 0x8400ff;
    }
    if (temp_v0 != temp_v9) {
      FUN_002be304(temp_v7);
    }
    temp_v4 = FUN_002bf4f8(0x1d,0x518);
    FUN_002be624(temp_v12,&LAB_002843d8,*(unsigned int *)(temp_v2 + 0x54) & 0x3ff);
    FUN_002bdf94(0,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + param_4,
                 (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_5,1,4,0x6f,
                 temp_v12);
    FUN_002bed3c();
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 0) {
      FUN_002be624(temp_v12,&LAB_002843ec);
    }
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 1) {
      FUN_002be624(temp_v12,&LAB_002843f8);
    }
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 2) {
      FUN_002be624(temp_v12,&LAB_00284408);
    }
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 3) {
      FUN_002be624(temp_v12,&LAB_00284414);
    }
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 4) {
      FUN_002be624(temp_v12,&LAB_0028441c);
    }
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 5) {
      FUN_002be624(temp_v12,&LAB_00284428);
    }
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 6) {
      FUN_002be624(temp_v12,&LAB_00284434);
    }
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 7) {
      FUN_002be624(temp_v12,&LAB_00284440);
    }
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 0x11) {
      FUN_002be624(temp_v12,&LAB_0028444c);
    }
    temp_v4 = FUN_002bf4f8(0x1d,0x519);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_5,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_4,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,0xff,temp_v12,(int)*(short *)(temp_v4 + 10));
    if (*(char *)(temp_v2 + 0x5b) != '\0') {
      temp_v4 = FUN_002bf4f8(0x1d,0x51a);
      FUN_00288790(*(unsigned char *)(temp_v2 + 0x5b),
                   (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_4 + 0x18,
                   (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v3 + 10) + param_5,0x6f);
    }
    break;
  case 0x12:
    if (psVar3[1] == 0) {
      temp_v9 = 0;
    }
    else {
      temp_v4 = FUN_002b45e8();
      temp_v9 = *(unsigned int *)(temp_v4 + 0x54) & 0x3ff;
    }
    FUN_002be304(0xff);
    temp_v0 = *(unsigned int *)(temp_v2 + 0x54) & 0x3ff;
    temp_v7 = temp_v0;
    if (temp_v0 < temp_v9) {
      temp_v7 = 0xdc0f14ff;
    }
    if (temp_v9 < temp_v0) {
      temp_v7 = 0x8400ff;
    }
    if (temp_v0 != temp_v9) {
      FUN_002be304(temp_v7);
    }
    temp_v4 = FUN_002bf4f8(0x1d,0x535);
    FUN_002be624(temp_v12,&LAB_002843d8,*(unsigned int *)(temp_v2 + 0x54) & 0x3ff);
    FUN_002bdf94(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_4,
                 (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_5,1,4,0x6f,
                 temp_v12);
    FUN_002bed3c();
    if (*(char *)(temp_v2 + 0x59) == '\0') {
      FUN_002be624(temp_v12,&LAB_002847ec);
    }
    if (*(char *)(temp_v2 + 0x59) == '\x01') {
      FUN_002be624(temp_v12,&LAB_002847fc);
    }
    if (*(char *)(temp_v2 + 0x59) == '\x06') {
      FUN_002be624(temp_v12,&LAB_00284804);
    }
    temp_v4 = FUN_002bf4f8(0x1d,0x536);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_5,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_4,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,0xff,temp_v12,(int)*(short *)(temp_v4 + 10));
    temp_v1 = *(unsigned char *)(temp_v2 + 0x58);
    if ((temp_v1 & 0xf) == temp_v1 >> 4) {
      FUN_002be624(temp_v12,&LAB_002843d8,temp_v1 & 0xf);
    }
    else {
      FUN_002be624(temp_v12,&LAB_00284814,temp_v1 & 0xf,temp_v1 >> 4);
    }
    FUN_002be304(0xff);
    temp_v2 = FUN_002bf4f8(0x1d,0x539);
    FUN_002bdf94(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v3 + 8) + param_4,
                 (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v2 + 10) + param_5,1,3,0x6f,
                 temp_v12);
    FUN_002bed3c();
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    if (param_1 == 0x14) {
      temp_v10 = psVar3[3];
    }
    else if (param_1 == 0x15) {
      temp_v10 = psVar3[4];
    }
    else if (param_1 == 0x16) {
      temp_v10 = psVar3[5];
    }
    else if (param_1 == 0x17) {
      temp_v10 = psVar3[6];
    }
    if (temp_v10 == 0) {
      temp_v5 = 0;
      temp_v4 = temp_v5;
    }
    else {
      temp_v4 = FUN_002b45e8(temp_v10);
      temp_v4 = (int)*(short *)(temp_v4 + 0x66);
      temp_v5 = FUN_002b45e8(temp_v10);
      temp_v5 = (int)*(short *)(temp_v5 + 0x68);
    }
    FUN_002be304(0xff);
    temp_v8 = (int)*(short *)(temp_v2 + 0x66);
    temp_v6 = temp_v8;
    if (temp_v8 < temp_v4) {
      temp_v6 = -0x23f0eb01;
    }
    if (temp_v4 < temp_v8) {
      temp_v6 = 0x8400ff;
    }
    if (temp_v8 != temp_v4) {
      FUN_002be304(temp_v6);
    }
    temp_v4 = FUN_002bf4f8(0x1d,0x54f);
    FUN_002be624(temp_v12,&LAB_002843d8,(int)*(short *)(temp_v2 + 0x66));
    FUN_002bdf94(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_4,
                 (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v3 + 10) + param_5,1,5,0x6f,
                 temp_v12);
    FUN_002bed3c();
    FUN_002be304(0xff);
    temp_v6 = (int)*(short *)(temp_v2 + 0x68);
    temp_v4 = temp_v6;
    if (temp_v6 < temp_v5) {
      temp_v4 = -0x23f0eb01;
    }
    if (temp_v5 < temp_v6) {
      temp_v4 = 0x8400ff;
    }
    if (temp_v6 != temp_v5) {
      FUN_002be304(temp_v4);
    }
    temp_v4 = FUN_002bf4f8(0x1d,0x554);
    FUN_002be624(temp_v12,&LAB_002843d8,(int)*(short *)(temp_v2 + 0x68));
    FUN_002bdf94(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_4,
                 (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v3 + 10) + param_5,1,5,0x6f,
                 temp_v12);
    FUN_002bed3c();
  }
  return;
}
