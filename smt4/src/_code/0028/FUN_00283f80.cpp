/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00283f80` (_code @ 0x283f80, 0x868 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int messageKindForward(...);
int dataTable08Sub2GetRecord(void);
int FUN_002bdf94(...);
int drawSetColorFromRGBA8(...);
int FUN_002be370(...);
int FUN_002be5a4(...);
int textFormatBuffer(...);
int FUN_002be650(int, int);
int FUN_002bed3c(void);
int FUN_002bf4f8(...);
int VectorSignedToFloat(...);

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
/* Supplied declaration required: messageKindForward. */
extern unsigned int FUN_0028fb40(int);
extern int FUN_002995d8(int);
/* Supplied declaration required: dataTable08Sub2GetRecord. */
extern unsigned short *gameGetPlayerData(void);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_002be370. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002be650. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf4f8. */


void FUN_00283f80(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
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
  puVar3 = (unsigned short *)gameGetPlayerData();
  if (temp_v13 == 0) {
    return;
  }
  temp_v7 = temp_v13;
  dataTable08Sub2GetRecord();
  temp_v10 = 0;
  temp_v2 = FUN_002bf4f8(0x1d,param_2 + 0x40d);
  temp_v3 = FUN_002bf4f8(0x1d,0x514);
  temp_v5 = temp_v13;
  FUN_002be650(temp_v13,0);
  if (temp_v5 != 0) {
    temp_v11 = 0xff;
    temp_v4 = FUN_002995d8(temp_v13);
    if (temp_v4 == 0) {
      temp_v11 = 0x5a5a5aff;
    }
    VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + param_5,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v3 + 8) + param_4,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,temp_v11,temp_v5,(int)*(short *)(temp_v3 + 8));
  }
  temp_v5 = FUN_002bf4f8(0x1d,0x520);
  temp_v11 = FUN_0028fb40(temp_v13);
  textFormatBuffer(temp_v12,&LAB_002843d8,temp_v11);
  drawSetColorFromRGBA8(0xff);
  FUN_002bdf94(0,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v2 + 8) + param_4,
               (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v2 + 10) + param_5,1,2,0x6f,
               temp_v12);
  FUN_002bed3c();
  temp_v5 = FUN_002bf4f8(0x1d,0x513);
  FUN_002be370((int)(short)temp_v13,
               (int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v2 + 8) + param_4,
               (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v5 + 10) + param_5,0x6f,1);
  switch(param_1) {
  case 0x11:
  case 0x13:
    if (param_1 == 0x11) {
      temp_v1 = *puVar3;
LAB_00284174:
      temp_v10 = (unsigned int)temp_v1;
      if (temp_v10 != 0) {
        dataTable08Sub2GetRecord();
        temp_v10 = *(unsigned int *)(temp_v10 + 0x54) & 0x3ff;
      }
      else {
        temp_v10 = 0;
      }
    }
    else {
      if (param_1 == 0x13) {
        temp_v1 = puVar3[2];
        goto LAB_00284174;
      }
      temp_v10 = 0;
    }
    drawSetColorFromRGBA8(0xff);
    temp_v8 = *(unsigned int *)(temp_v7 + 0x54) & 0x3ff;
    temp_v6 = temp_v8;
    if (temp_v8 < temp_v10) {
      temp_v6 = 0xdc0f14ff;
    }
    if (temp_v10 < temp_v8) {
      temp_v6 = 0x8400ff;
    }
    if (temp_v8 != temp_v10) {
      drawSetColorFromRGBA8(temp_v6);
    }
    temp_v5 = FUN_002bf4f8(0x1d,0x518);
    textFormatBuffer(temp_v12,&LAB_002843d8,*(unsigned int *)(temp_v7 + 0x54) & 0x3ff);
    FUN_002bdf94(0,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v2 + 8) + param_4,
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v5 + 10) + param_5,1,4,0x6f,
                 temp_v12);
    FUN_002bed3c();
    if (*(unsigned int *)(temp_v7 + 0x54) >> 0x14 == 0) {
      textFormatBuffer(temp_v12,&LAB_002843ec);
    }
    if (*(unsigned int *)(temp_v7 + 0x54) >> 0x14 == 1) {
      textFormatBuffer(temp_v12,&LAB_002843f8);
    }
    if (*(unsigned int *)(temp_v7 + 0x54) >> 0x14 == 2) {
      textFormatBuffer(temp_v12,&LAB_00284408);
    }
    if (*(unsigned int *)(temp_v7 + 0x54) >> 0x14 == 3) {
      textFormatBuffer(temp_v12,&LAB_00284414);
    }
    if (*(unsigned int *)(temp_v7 + 0x54) >> 0x14 == 4) {
      textFormatBuffer(temp_v12,&LAB_0028441c);
    }
    if (*(unsigned int *)(temp_v7 + 0x54) >> 0x14 == 5) {
      textFormatBuffer(temp_v12,&LAB_00284428);
    }
    if (*(unsigned int *)(temp_v7 + 0x54) >> 0x14 == 6) {
      textFormatBuffer(temp_v12,&LAB_00284434);
    }
    if (*(unsigned int *)(temp_v7 + 0x54) >> 0x14 == 7) {
      textFormatBuffer(temp_v12,&LAB_00284440);
    }
    if (*(unsigned int *)(temp_v7 + 0x54) >> 0x14 == 0x11) {
      textFormatBuffer(temp_v12,&LAB_0028444c);
    }
    temp_v5 = FUN_002bf4f8(0x1d,0x519);
    VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v5 + 10) + param_5,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v5 + 8) + param_4,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,0xff,temp_v12,(int)*(short *)(temp_v5 + 10));
    if (*(char *)(temp_v7 + 0x5b) != '\0') {
      temp_v5 = FUN_002bf4f8(0x1d,0x51a);
      messageKindForward(*(unsigned char *)(temp_v7 + 0x5b),
                   (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v5 + 8) + param_4 + 0x18,
                   (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v2 + 10) + param_5,0x6f);
    }
    break;
  case 0x12:
    temp_v10 = (unsigned int)puVar3[1];
    if (temp_v10 == 0) {
      temp_v10 = 0;
    }
    else {
      dataTable08Sub2GetRecord();
      temp_v10 = *(unsigned int *)(temp_v10 + 0x54) & 0x3ff;
    }
    drawSetColorFromRGBA8(0xff);
    temp_v8 = *(unsigned int *)(temp_v7 + 0x54) & 0x3ff;
    temp_v6 = temp_v8;
    if (temp_v8 < temp_v10) {
      temp_v6 = 0xdc0f14ff;
    }
    if (temp_v10 < temp_v8) {
      temp_v6 = 0x8400ff;
    }
    if (temp_v8 != temp_v10) {
      drawSetColorFromRGBA8(temp_v6);
    }
    temp_v5 = FUN_002bf4f8(0x1d,0x535);
    textFormatBuffer(temp_v12,&LAB_002843d8,*(unsigned int *)(temp_v7 + 0x54) & 0x3ff);
    FUN_002bdf94(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v5 + 8) + param_4,
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v5 + 10) + param_5,1,4,0x6f,
                 temp_v12);
    FUN_002bed3c();
    if (*(char *)(temp_v7 + 0x59) == '\0') {
      textFormatBuffer(temp_v12,&LAB_002847ec);
    }
    if (*(char *)(temp_v7 + 0x59) == '\x01') {
      textFormatBuffer(temp_v12,&LAB_002847fc);
    }
    if (*(char *)(temp_v7 + 0x59) == '\x06') {
      textFormatBuffer(temp_v12,&LAB_00284804);
    }
    temp_v5 = FUN_002bf4f8(0x1d,0x536);
    VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v5 + 10) + param_5,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v5 + 8) + param_4,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,0xff,temp_v12,(int)*(short *)(temp_v5 + 10));
    temp_v0 = *(unsigned char *)(temp_v7 + 0x58);
    if ((temp_v0 & 0xf) == temp_v0 >> 4) {
      textFormatBuffer(temp_v12,&LAB_002843d8,temp_v0 & 0xf);
    }
    else {
      textFormatBuffer(temp_v12,&LAB_00284814,temp_v0 & 0xf,temp_v0 >> 4);
    }
    drawSetColorFromRGBA8(0xff);
    temp_v7 = FUN_002bf4f8(0x1d,0x539);
    FUN_002bdf94(0,(int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v2 + 8) + param_4,
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v7 + 10) + param_5,1,3,0x6f,
                 temp_v12);
    FUN_002bed3c();
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    if (param_1 == 0x14) {
      temp_v10 = (unsigned int)puVar3[3];
    }
    else if (param_1 == 0x15) {
      temp_v10 = (unsigned int)puVar3[4];
    }
    else if (param_1 == 0x16) {
      temp_v10 = (unsigned int)puVar3[5];
    }
    else if (param_1 == 0x17) {
      temp_v10 = (unsigned int)puVar3[6];
    }
    if (temp_v10 == 0) {
      temp_v3 = 0;
      temp_v5 = temp_v3;
    }
    else {
      temp_v8 = temp_v10;
      dataTable08Sub2GetRecord();
      temp_v5 = (int)*(short *)(temp_v8 + 0x66);
      dataTable08Sub2GetRecord();
      temp_v3 = (int)*(short *)(temp_v10 + 0x68);
    }
    drawSetColorFromRGBA8(0xff);
    temp_v9 = (int)*(short *)(temp_v7 + 0x66);
    temp_v4 = temp_v9;
    if (temp_v9 < temp_v5) {
      temp_v4 = -0x23f0eb01;
    }
    if (temp_v5 < temp_v9) {
      temp_v4 = 0x8400ff;
    }
    if (temp_v9 != temp_v5) {
      drawSetColorFromRGBA8(temp_v4);
    }
    temp_v5 = FUN_002bf4f8(0x1d,0x54f);
    textFormatBuffer(temp_v12,&LAB_002843d8,(int)*(short *)(temp_v7 + 0x66));
    FUN_002bdf94(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v5 + 8) + param_4,
                 (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v2 + 10) + param_5,1,5,0x6f,
                 temp_v12);
    FUN_002bed3c();
    drawSetColorFromRGBA8(0xff);
    temp_v4 = (int)*(short *)(temp_v7 + 0x68);
    temp_v5 = temp_v4;
    if (temp_v4 < temp_v3) {
      temp_v5 = -0x23f0eb01;
    }
    if (temp_v3 < temp_v4) {
      temp_v5 = 0x8400ff;
    }
    if (temp_v4 != temp_v3) {
      drawSetColorFromRGBA8(temp_v5);
    }
    temp_v5 = FUN_002bf4f8(0x1d,0x554);
    textFormatBuffer(temp_v12,&LAB_002843d8,(int)*(short *)(temp_v7 + 0x68));
    FUN_002bdf94(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v5 + 8) + param_4,
                 (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v2 + 10) + param_5,1,5,0x6f,
                 temp_v12);
    FUN_002bed3c();
  }
  return;
}

} /* extern "C" */
