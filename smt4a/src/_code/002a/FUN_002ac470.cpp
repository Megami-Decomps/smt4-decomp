/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac470` (_code @ 0x2ac470, 0x9d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_0015f858(int, int);
int FUN_00162790(...);
int FUN_001676b0(...);
int FUN_001689e8(...);
int FUN_00180310(...);
int FUN_001834a4(...);
int FUN_00183bb0(void);
int drawSetColorFromRGBA8(...);
int FUN_00192608(void);
int FUN_0047fc38(void);
int FUN_0048026c(...);
int VectorSignedToFloat(...);

/* stack frame of param_6: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
} param_6_stack;

extern unsigned char LAB_002ac904; /* 0x2ac904 */
extern unsigned char LAB_002ac91c; /* 0x2ac91c */
extern unsigned char LAB_002ac928; /* 0x2ac928 */
extern unsigned char LAB_002ac930; /* 0x2ac930 */
extern unsigned char LAB_002ac93c; /* 0x2ac93c */
extern unsigned char LAB_002ac944; /* 0x2ac944 */
extern unsigned char LAB_002ac950; /* 0x2ac950 */
extern unsigned char LAB_002ac95c; /* 0x2ac95c */
extern unsigned char LAB_002ac968; /* 0x2ac968 */
extern unsigned char LAB_002ac974; /* 0x2ac974 */
extern unsigned char LAB_002acd84; /* 0x2acd84 */
extern unsigned char LAB_002acd94; /* 0x2acd94 */
extern unsigned char LAB_002acd9c; /* 0x2acd9c */
extern unsigned char LAB_002acdac; /* 0x2acdac */
extern unsigned char LAB_002acdbc; /* 0x2acdbc */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001676b0. */
/* Supplied declaration required: FUN_001689e8. */
extern unsigned short *gameGetPlayerData(void);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_00192608. */
extern unsigned int FUN_001ba3d4(int);
extern int unitMatchesAlignment(int);
/* Supplied declaration required: FUN_0047fc38. */
/* Supplied declaration required: FUN_0048026c. */
extern int FUN_00480960(int);


void FUN_002ac470(int param_1,int param_2,int param_3,int param_4,int param_5,unsigned int param_6)

{
/* irregular: 7 goto(s); irregular input(s): in_fpscr; 13 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  unsigned char temp_v10 [68];
  int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  int iStack_34;
  int iStack_30;
  int temp_v21;
  int iStack_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  temp_v21 = param_3;
  iStack_28 = param_4;
  puVar3 = (unsigned short *)gameGetPlayerData();
  if (temp_v21 == 0) {
    return;
  }
  temp_v6 = temp_v21;
  FUN_00192608();
  temp_v17 = 0;
  temp_v18 = 0;
  temp_v19 = 0;
  temp_v20 = 0;
  temp_v8 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  FUN_0048026c(temp_v21,&temp_v12);
  temp_v2 = FUN_001834a4(0x14,param_2 + 0x40d);
  temp_v11 = FUN_001834a4(0x14,0x514);
  temp_v4 = temp_v21;
  FUN_0015f858(temp_v21,0);
  if (temp_v4 != 0) {
    temp_v3 = unitMatchesAlignment(temp_v21);
    temp_v9 = param_6;
    if (temp_v3 == 0) {
      temp_v9 = 0x9b9b9bff;
    }
    temp_v3 = FUN_00480960(temp_v21);
    if (temp_v3 != 0) {
      temp_v9 = 0x8400ff;
      temp_v3 = temp_v21;
      FUN_0047fc38();
      if (temp_v3 != 0) {
        temp_v9 = 0xfbeb39ff;
      }
    }
    VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v11 + 10) + param_5,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v11 + 8) + param_4,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,temp_v9,temp_v4,(int)*(short *)(temp_v11 + 8));
  }
  temp_v11 = FUN_001834a4(0x14,0x520);
  temp_v9 = FUN_001ba3d4(temp_v21);
  textFormatBuffer(temp_v10,&LAB_002ac904,temp_v9);
  drawSetColorFromRGBA8(param_6);
  FUN_00180310(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v11 + 8) + param_4,
               (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v11 + 10) + param_5,1,2,0x6f,
               temp_v10);
  FUN_00183bb0();
  temp_v4 = FUN_001834a4(0x14,0x513);
  FUN_001689e8((int)(short)temp_v21,
               (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v2 + 8) + param_4,
               (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + param_5,0x6f,1);
  if (param_1 != 0x48) {
    if (param_1 >= 0x48) {
      switch(param_1) {
      case 0x49:
        goto LAB_002aca54;
      case 0x4a:
        goto LAB_002ac6e0;
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
        goto LAB_002acc48;
      default:
        return;
      }
    }
    switch(param_1) {
    case 0x13:
    case 0x15:
      goto LAB_002ac6e0;
    case 0x14:
LAB_002aca54:
      temp_v8 = (unsigned int)puVar3[1];
      if (temp_v8 == 0) {
        temp_v8 = 0;
      }
      else {
        FUN_00192608();
        temp_v8 = *(unsigned int *)(temp_v8 + 0x24) & 0x3ff;
      }
      drawSetColorFromRGBA8(param_6);
      temp_v7 = *(unsigned int *)(temp_v6 + 0x24) & 0x3ff;
      temp_v5 = temp_v7;
      if (temp_v7 < temp_v8) {
        temp_v5 = 0xdc0f14ff;
      }
      if (temp_v8 < temp_v7) {
        temp_v5 = 0xa700ff;
      }
      if (temp_v7 != temp_v8) {
        drawSetColorFromRGBA8(temp_v5);
      }
      temp_v4 = FUN_001834a4(0x14,0x535);
      textFormatBuffer(temp_v10,&LAB_002ac904,*(unsigned int *)(temp_v6 + 0x24) & 0x3ff);
      FUN_00180310(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v4 + 8) + param_4,
                   (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v2 + 10) + param_5,1,4,0x6f,
                   temp_v10);
      FUN_00183bb0();
      if (*(char *)(temp_v6 + 0x29) == '\0') {
        textFormatBuffer(temp_v10,&LAB_002acd84);
      }
      if (*(char *)(temp_v6 + 0x29) == '\x01') {
        textFormatBuffer(temp_v10,&LAB_002acd94);
      }
      if (*(char *)(temp_v6 + 0x29) == '\x06') {
        textFormatBuffer(temp_v10,&LAB_002acd9c);
      }
      temp_v4 = FUN_001834a4(0x14,0x536);
      VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + param_5,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v4 + 8) + param_4,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,param_6,temp_v10,(int)*(short *)(temp_v4 + 10));
      temp_v0 = *(unsigned char *)(temp_v6 + 0x28);
      if ((temp_v0 & 0xf) == temp_v0 >> 4) {
        textFormatBuffer(temp_v10,&LAB_002ac904,temp_v0 & 0xf);
      }
      else {
        textFormatBuffer(temp_v10,&LAB_002acdac,temp_v0 & 0xf,temp_v0 >> 4);
      }
      drawSetColorFromRGBA8(param_6);
      temp_v6 = FUN_001834a4(0x14,0x539);
      FUN_00180310(0,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v2 + 8) + param_4,
                   (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v2 + 10) + param_5,1,3,0x6f,
                   temp_v10);
      FUN_00183bb0();
      return;
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
LAB_002acc48:
      if (param_1 == 0x16 || param_1 == 0x4b) {
        temp_v8 = (unsigned int)puVar3[3];
      }
      else if (param_1 == 0x17 || param_1 == 0x4c) {
        temp_v8 = (unsigned int)puVar3[4];
      }
      else if (param_1 == 0x18 || param_1 == 0x4d) {
        temp_v8 = (unsigned int)puVar3[5];
      }
      else if (param_1 == 0x19 || param_1 == 0x4e) {
        temp_v8 = (unsigned int)puVar3[6];
      }
      FUN_0048026c(temp_v8,&temp_v17);
      temp_v4 = (int)*(short *)(temp_v6 + 0x36) + (int)(short)temp_v12;
      temp_v16 = (int)*(short *)(temp_v6 + 0x38) + (int)(*(short *)((unsigned char *)&temp_v12 + 2));
      if (temp_v8 == 0) {
        temp_v3 = 0;
        temp_v6 = temp_v3;
      }
      else {
        temp_v7 = temp_v8;
        FUN_00192608();
        temp_v6 = (int)*(short *)(temp_v7 + 0x36) + (int)(short)temp_v17;
        FUN_00192608();
        temp_v3 = (int)*(short *)(temp_v8 + 0x38) + (int)(*(short *)((unsigned char *)&temp_v17 + 2));
      }
      drawSetColorFromRGBA8(param_6);
      if (temp_v4 != temp_v6) {
        drawSetColorFromRGBA8();
      }
      temp_v6 = FUN_001834a4(0x14,0x54f);
      textFormatBuffer(temp_v10,&LAB_002acdbc,temp_v4);
      FUN_00180310(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v6 + 8) + param_4,
                   (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v6 + 10) + param_5,1,5,0x6f,
                   temp_v10);
      FUN_00183bb0();
      drawSetColorFromRGBA8(param_6);
      temp_v6 = temp_v16;
      if (temp_v16 < temp_v3) {
        temp_v6 = -0x23f0eb01;
      }
      if (temp_v3 < temp_v16) {
        temp_v6 = 0xa700ff;
      }
      if (temp_v16 != temp_v3) {
        drawSetColorFromRGBA8(temp_v6);
      }
      temp_v6 = FUN_001834a4(0x14,0x554);
      textFormatBuffer(temp_v10,&LAB_002acdbc,temp_v16);
      FUN_00180310(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v6 + 8) + param_4,
                   (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v6 + 10) + param_5,1,5,0x6f,
                   temp_v10);
      FUN_00183bb0();
    default:
      return;
    }
  }
LAB_002ac6e8:
  if (param_1 == 0x48) goto LAB_002ac700;
  if (param_1 == 0x15 || param_1 == 0x4a) {
    temp_v8 = (unsigned int)puVar3[2];
  }
LAB_002ac704:
  if (temp_v8 == 0) {
    temp_v8 = 0;
  }
  else {
    FUN_00192608();
    temp_v8 = *(unsigned int *)(temp_v8 + 0x24) & 0x3ff;
  }
  drawSetColorFromRGBA8(param_6);
  temp_v7 = *(unsigned int *)(temp_v6 + 0x24) & 0x3ff;
  temp_v5 = temp_v7;
  if (temp_v7 < temp_v8) {
    temp_v5 = 0xdc0f14ff;
  }
  if (temp_v8 < temp_v7) {
    temp_v5 = 0xa700ff;
  }
  if (temp_v7 != temp_v8) {
    drawSetColorFromRGBA8(temp_v5);
  }
  temp_v4 = FUN_001834a4(0x14,0x518);
  textFormatBuffer(temp_v10,&LAB_002ac904,*(unsigned int *)(temp_v6 + 0x24) & 0x3ff);
  FUN_00180310(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v4 + 8) + param_4,
               (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v2 + 10) + param_5,1,4,0x6f,
               temp_v10);
  FUN_00183bb0();
  if (*(unsigned int *)(temp_v6 + 0x24) >> 0x14 == 0) {
    textFormatBuffer(temp_v10,&LAB_002ac91c);
  }
  if (*(unsigned int *)(temp_v6 + 0x24) >> 0x14 == 1) {
    textFormatBuffer(temp_v10,&LAB_002ac928);
  }
  if (*(unsigned int *)(temp_v6 + 0x24) >> 0x14 == 2) {
    textFormatBuffer(temp_v10,&LAB_002ac930);
  }
  if (*(unsigned int *)(temp_v6 + 0x24) >> 0x14 == 3) {
    textFormatBuffer(temp_v10,&LAB_002ac93c);
  }
  if (*(unsigned int *)(temp_v6 + 0x24) >> 0x14 == 4) {
    textFormatBuffer(temp_v10,&LAB_002ac944);
  }
  if (*(unsigned int *)(temp_v6 + 0x24) >> 0x14 == 5) {
    textFormatBuffer(temp_v10,&LAB_002ac950);
  }
  if (*(unsigned int *)(temp_v6 + 0x24) >> 0x14 == 6) {
    textFormatBuffer(temp_v10,&LAB_002ac95c);
  }
  if (*(unsigned int *)(temp_v6 + 0x24) >> 0x14 == 7) {
    textFormatBuffer(temp_v10,&LAB_002ac968);
  }
  if (*(unsigned int *)(temp_v6 + 0x24) >> 0x14 == 0x14) {
    textFormatBuffer(temp_v10,&LAB_002ac974);
  }
  temp_v4 = FUN_001834a4(0x14,0x519);
  VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v4 + 10) + param_5,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v4 + 8) + param_4,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,param_6,temp_v10,(int)*(short *)(temp_v4 + 10));
  if (*(char *)(temp_v6 + 0x2b) != '\0') {
    temp_v4 = FUN_001834a4(0x14,0x51a);
    temp_v3 = (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v2 + 10);
    temp_v4 = (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v4 + 8);
    temp_v1 = *(unsigned char *)(temp_v6 + 0x2b);
  }
  else {
    if (*(char *)(temp_v6 + 0x2d) == '\0') {
      return;
    }
    temp_v6 = FUN_001834a4(0x14,0x51a);
    temp_v3 = (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v6 + 10);
    temp_v4 = (int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v2 + 8);
    temp_v1 = 0xc;
  }
  FUN_001676b0(temp_v1,temp_v4 + param_4 + 0x1e,temp_v3 + param_5,0x6f);
  return;
LAB_002ac6e0:
  if (param_1 != 0x13) goto LAB_002ac6e8;
LAB_002ac700:
  temp_v8 = (unsigned int)*puVar3;
  goto LAB_002ac704;
}

} /* extern "C" */
