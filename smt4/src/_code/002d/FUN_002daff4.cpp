/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002daff4` (_code @ 0x2daff4, 0x8cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int messageKindForward(...);
int FUN_0028f694(int, int, int);
int dataTable08Sub2GetRecord(void);
int FUN_002bdf94(...);
int drawSetColorFromRGBA8(...);
int FUN_002be370(...);
int FUN_002be5a4(...);
int textFormatBuffer(...);
int FUN_002be650(int, int);
int FUN_002bed3c(void);
int FUN_002bf288(...);
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

extern unsigned char LAB_002db488; /* 0x2db488 */
extern unsigned char LAB_002db4a0; /* 0x2db4a0 */
extern unsigned char LAB_002db4ac; /* 0x2db4ac */
extern unsigned char LAB_002db4bc; /* 0x2db4bc */
extern unsigned char LAB_002db4c8; /* 0x2db4c8 */
extern unsigned char LAB_002db4d0; /* 0x2db4d0 */
extern unsigned char LAB_002db4dc; /* 0x2db4dc */
extern unsigned char LAB_002db4e8; /* 0x2db4e8 */
extern unsigned char LAB_002db4f4; /* 0x2db4f4 */
extern unsigned char LAB_002db500; /* 0x2db500 */
extern unsigned char LAB_002db8c4; /* 0x2db8c4 */
extern unsigned char LAB_002db8d4; /* 0x2db8d4 */
extern unsigned char LAB_002db8dc; /* 0x2db8dc */
extern unsigned char LAB_002db8ec; /* 0x2db8ec */
extern int g_camp; /* 0x43da90 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: messageKindForward. */
/* Supplied declaration required: FUN_0028f694. */
extern unsigned int FUN_0028fb40(int);
extern int recordAcceptsStickDirection(int);
/* Supplied declaration required: dataTable08Sub2GetRecord. */
extern unsigned short *gameGetPlayerData(void);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_002be370. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002be650. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf4f8. */


void FUN_002daff4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 13 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
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
  
  temp_v6 = g_camp;
  iStack_34 = param_1;
  iStack_30 = param_2;
  temp_v13 = param_3;
  iStack_28 = param_4;
  puVar3 = (unsigned short *)gameGetPlayerData();
  if (temp_v13 == 0) {
    return;
  }
  temp_v2 = temp_v13;
  dataTable08Sub2GetRecord();
  temp_v10 = 0;
  temp_v3 = FUN_002bf4f8(0x1d,param_2 + 0x42e);
  FUN_0028f694(*(short *)(temp_v3 + 8) + param_4,*(short *)(temp_v3 + 10) + param_5,
               (int)*(short *)(temp_v6 + param_2 * 2 + 0xe08));
  temp_v4 = FUN_002bf4f8(0x1d,0x523);
  temp_v6 = temp_v13;
  FUN_002be650(temp_v13,0);
  if (temp_v6 != 0) {
    temp_v11 = 0xffffffff;
    temp_v5 = recordAcceptsStickDirection(temp_v13);
    if (temp_v5 == 0) {
      temp_v11 = 0x5a5a5aff;
    }
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_5,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_4,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,temp_v11,temp_v6,(int)*(short *)(temp_v4 + 8));
  }
  temp_v6 = FUN_002bf4f8(0x1d,0x52f);
  temp_v11 = FUN_0028fb40(temp_v13);
  textFormatBuffer(temp_v12,&LAB_002db488,temp_v11);
  drawSetColorFromRGBA8(0xffffffff);
  FUN_002bdf94(0,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v3 + 8) + param_4,
               (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v6 + 10) + param_5,1,2,0x83,
               temp_v12);
  FUN_002bed3c();
  FUN_002bf288(2,0x1d,0x521,*(short *)(temp_v3 + 8) + param_4,*(short *)(temp_v3 + 10) + param_5,0x83);
  temp_v6 = FUN_002bf4f8(0x1d,0x522);
  FUN_002be370((int)(short)temp_v13,
               (int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v3 + 8) + param_4,
               (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v6 + 10) + param_5,0x88,1);
  switch(param_1) {
  case 0x11:
  case 0x13:
    if (param_1 == 0x11) {
      temp_v1 = *puVar3;
LAB_002db240:
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
        goto LAB_002db240;
      }
      temp_v10 = 0;
    }
    drawSetColorFromRGBA8(0xffffffff);
    temp_v8 = *(unsigned int *)(temp_v2 + 0x54) & 0x3ff;
    temp_v7 = temp_v8;
    if (temp_v8 < temp_v10) {
      temp_v7 = 0xdc0f14ff;
    }
    if (temp_v10 < temp_v8) {
      temp_v7 = 0x72e027ff;
    }
    if (temp_v8 != temp_v10) {
      drawSetColorFromRGBA8(temp_v7);
    }
    temp_v6 = FUN_002bf4f8(0x1d,0x527);
    textFormatBuffer(temp_v12,&LAB_002db488,*(unsigned int *)(temp_v2 + 0x54) & 0x3ff);
    FUN_002bdf94(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v6 + 8) + param_4,
                 (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v3 + 10) + param_5,1,4,0x83,
                 temp_v12);
    FUN_002bed3c();
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 0) {
      textFormatBuffer(temp_v12,&LAB_002db4a0);
    }
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 1) {
      textFormatBuffer(temp_v12,&LAB_002db4ac);
    }
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 2) {
      textFormatBuffer(temp_v12,&LAB_002db4bc);
    }
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 3) {
      textFormatBuffer(temp_v12,&LAB_002db4c8);
    }
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 4) {
      textFormatBuffer(temp_v12,&LAB_002db4d0);
    }
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 5) {
      textFormatBuffer(temp_v12,&LAB_002db4dc);
    }
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 6) {
      textFormatBuffer(temp_v12,&LAB_002db4e8);
    }
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 7) {
      textFormatBuffer(temp_v12,&LAB_002db4f4);
    }
    if (*(unsigned int *)(temp_v2 + 0x54) >> 0x14 == 0x11) {
      textFormatBuffer(temp_v12,&LAB_002db500);
    }
    temp_v6 = FUN_002bf4f8(0x1d,0x528);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v6 + 10) + param_5,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v6 + 8) + param_4,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,0xffffffff,temp_v12,(int)*(short *)(temp_v6 + 10));
    if (*(char *)(temp_v2 + 0x5b) != '\0') {
      temp_v6 = FUN_002bf4f8(0x1d,0x529);
      messageKindForward(*(unsigned char *)(temp_v2 + 0x5b),
                   (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v6 + 8) + param_4 + 0x18,
                   (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v3 + 10) + param_5,0x83);
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
    drawSetColorFromRGBA8(0xffffffff);
    temp_v8 = *(unsigned int *)(temp_v2 + 0x54) & 0x3ff;
    temp_v7 = temp_v8;
    if (temp_v8 < temp_v10) {
      temp_v7 = 0xdc0f14ff;
    }
    if (temp_v10 < temp_v8) {
      temp_v7 = 0x72e027ff;
    }
    if (temp_v8 != temp_v10) {
      drawSetColorFromRGBA8(temp_v7);
    }
    temp_v6 = FUN_002bf4f8(0x1d,0x542);
    textFormatBuffer(temp_v12,&LAB_002db488,*(unsigned int *)(temp_v2 + 0x54) & 0x3ff);
    FUN_002bdf94(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v6 + 8) + param_4,
                 (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v3 + 10) + param_5,1,4,0x83,
                 temp_v12);
    FUN_002bed3c();
    if (*(char *)(temp_v2 + 0x59) == '\0') {
      textFormatBuffer(temp_v12,&LAB_002db8c4);
    }
    if (*(char *)(temp_v2 + 0x59) == '\x01') {
      textFormatBuffer(temp_v12,&LAB_002db8d4);
    }
    if (*(char *)(temp_v2 + 0x59) == '\x06') {
      textFormatBuffer(temp_v12,&LAB_002db8dc);
    }
    temp_v6 = FUN_002bf4f8(0x1d,0x543);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v6 + 10) + param_5,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v6 + 8) + param_4,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,0xffffffff,temp_v12,(int)*(short *)(temp_v6 + 10));
    temp_v0 = *(unsigned char *)(temp_v2 + 0x58);
    if ((temp_v0 & 0xf) == temp_v0 >> 4) {
      textFormatBuffer(temp_v12,&LAB_002db488,temp_v0 & 0xf);
    }
    else {
      textFormatBuffer(temp_v12,&LAB_002db8ec,temp_v0 & 0xf,temp_v0 >> 4);
    }
    drawSetColorFromRGBA8(0xffffffff);
    temp_v6 = FUN_002bf4f8(0x1d,0x546);
    FUN_002bdf94(0,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v3 + 8) + param_4,
                 (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v6 + 10) + param_5,1,3,0x83,
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
      temp_v4 = 0;
      temp_v6 = temp_v4;
    }
    else {
      temp_v8 = temp_v10;
      dataTable08Sub2GetRecord();
      temp_v6 = (int)*(short *)(temp_v8 + 0x66);
      dataTable08Sub2GetRecord();
      temp_v4 = (int)*(short *)(temp_v10 + 0x68);
    }
    drawSetColorFromRGBA8(0xffffffff);
    temp_v9 = (int)*(short *)(temp_v2 + 0x66);
    temp_v5 = temp_v9;
    if (temp_v9 < temp_v6) {
      temp_v5 = -0x23f0eb01;
    }
    if (temp_v6 < temp_v9) {
      temp_v5 = 0x72e027ff;
    }
    if (temp_v9 != temp_v6) {
      drawSetColorFromRGBA8(temp_v5);
    }
    temp_v6 = FUN_002bf4f8(0x1d,0x55e);
    textFormatBuffer(temp_v12,&LAB_002db488,(int)*(short *)(temp_v2 + 0x66));
    FUN_002bdf94(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v6 + 8) + param_4,
                 (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v3 + 10) + param_5,1,5,0x83,
                 temp_v12);
    FUN_002bed3c();
    drawSetColorFromRGBA8(0xffffffff);
    temp_v5 = (int)*(short *)(temp_v2 + 0x68);
    temp_v6 = temp_v5;
    if (temp_v5 < temp_v4) {
      temp_v6 = -0x23f0eb01;
    }
    if (temp_v4 < temp_v5) {
      temp_v6 = 0x72e027ff;
    }
    if (temp_v5 != temp_v4) {
      drawSetColorFromRGBA8(temp_v6);
    }
    temp_v6 = FUN_002bf4f8(0x1d,0x563);
    textFormatBuffer(temp_v12,&LAB_002db488,(int)*(short *)(temp_v2 + 0x68));
    FUN_002bdf94(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v6 + 8) + param_4,
                 (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v3 + 10) + param_5,1,5,0x83,
                 temp_v12);
    FUN_002bed3c();
  }
  return;
}

} /* extern "C" */
