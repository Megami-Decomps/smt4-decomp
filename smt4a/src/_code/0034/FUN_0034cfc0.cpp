/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034cfc0` (_code @ 0x34cfc0, 0xa44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {

int textFormatBuffer(...);
int FUN_0015f858(int, int);
int FUN_00162790(...);
int effectDispatchSelector(...);
int FUN_00180310(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int drawSetColorFromRGBA8(...);
int FUN_00192608(void);
int FUN_0026ec00(int, int, unsigned int);
int FUN_0047fc38(void);
int equipmentGetCappedUpgradeBonuses(...);
int VectorSignedToFloat(...);

/* stack frame of param_5: 13 slot(s), 52 byte(s) */
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
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC8; /* 0xc8: local_c8 */
} param_5_stack;

extern unsigned char LAB_0034d46c; /* 0x34d46c */
extern unsigned char LAB_0034d488; /* 0x34d488 */
extern unsigned char LAB_0034d494; /* 0x34d494 */
extern unsigned char LAB_0034d49c; /* 0x34d49c */
extern unsigned char LAB_0034d4a8; /* 0x34d4a8 */
extern unsigned char LAB_0034d4b0; /* 0x34d4b0 */
extern unsigned char LAB_0034d4bc; /* 0x34d4bc */
extern unsigned char LAB_0034d4c8; /* 0x34d4c8 */
extern unsigned char LAB_0034d7fc; /* 0x34d7fc */
extern unsigned char LAB_0034d808; /* 0x34d808 */
extern unsigned char LAB_0034d828; /* 0x34d828 */
extern unsigned char LAB_0034d838; /* 0x34d838 */
extern unsigned char LAB_0034d840; /* 0x34d840 */
extern unsigned char LAB_0034d850; /* 0x34d850 */
extern int g_camp; /* 0x57f108 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: effectDispatchSelector. */
extern unsigned short *gameGetPlayerData(void);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_00192608. */
extern unsigned int FUN_001ba3d4(int);
/* Supplied declaration required: FUN_0026ec00. */
extern int FUN_00284140(int);
extern int unitMatchesAlignment(int);
/* Supplied declaration required: FUN_0047fc38. */
/* Supplied declaration required: equipmentGetCappedUpgradeBonuses. */
extern int equipmentHasPositiveUpgrade(int);


void FUN_0034cfc0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 7 goto(s); irregular input(s): in_fpscr; 15 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int in_fpscr;
  unsigned int temp_v11;
  unsigned char temp_v12 [64];
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  int temp_v21;
  int iStack_34;
  int iStack_30;
  int temp_v22;
  int iStack_28;
  
  temp_v2 = g_camp;
  iStack_34 = param_1;
  iStack_30 = param_2;
  temp_v22 = param_3;
  iStack_28 = param_4;
  puVar3 = (unsigned short *)gameGetPlayerData();
  if (temp_v22 == 0) {
    return;
  }
  temp_v9 = temp_v22;
  FUN_00192608();
  temp_v11 = 0;
  temp_v18 = 0;
  temp_v19 = 0;
  temp_v20 = 0;
  temp_v8 = 0;
  temp_v17 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  equipmentGetCappedUpgradeBonuses(temp_v22,&temp_v13);
  temp_v2 = FUN_00284140((int)*(short *)(temp_v2 + param_2 * 2 + 0x1b3a));
  temp_v10 = 0x9fe7ffff;
  if ((temp_v2 == 1 || temp_v2 == 2) || temp_v2 == 6) {
    temp_v10 = 0xf5ff9fff;
    temp_v11 = 1;
  }
  temp_v3 = FUN_001834a4(0x14,param_2 + 0x42e);
  FUN_0026ec00(*(short *)(temp_v3 + 8) + param_4,*(short *)(temp_v3 + 10) + param_5,temp_v11);
  temp_v21 = FUN_001834a4(0x14,0x523);
  temp_v2 = temp_v22;
  FUN_0015f858(temp_v22,0);
  if (temp_v2 != 0) {
    temp_v4 = unitMatchesAlignment(temp_v22);
    if (temp_v4 == 0) {
      temp_v10 = 0x9b9b9bff;
    }
    temp_v4 = equipmentHasPositiveUpgrade(temp_v22);
    if (temp_v4 != 0) {
      temp_v10 = 0x8400ff;
      temp_v4 = temp_v22;
      FUN_0047fc38();
      if (temp_v4 != 0) {
        temp_v10 = 0xfbeb39ff;
      }
    }
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v21 + 10) + param_5,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v21 + 8) + param_4,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,temp_v10,temp_v2,(int)*(short *)(temp_v21 + 8));
  }
  temp_v21 = FUN_001834a4(0x14,0x52f);
  temp_v10 = FUN_001ba3d4(temp_v22);
  textFormatBuffer(temp_v12,&LAB_0034d46c,temp_v10);
  drawSetColorFromRGBA8(0xffffffff);
  FUN_00180310(0,(int)*(short *)(temp_v21 + 8) + (int)*(short *)(temp_v3 + 8) + param_4,
               (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v21 + 10) + param_5,1,2,0x83,
               temp_v12);
  FUN_00183bb0();
  FUN_001835b4(2,0x14,0x521,*(short *)(temp_v3 + 8) + param_4,*(short *)(temp_v3 + 10) + param_5,0x83);
  temp_v2 = FUN_001834a4(0x14,0x522);
  uiDrawItemCategoryIcon((int)(short)temp_v22,
               (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v3 + 8) + param_4,
               (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v2 + 10) + param_5,0x88,1);
  if (param_1 != 0x48) {
    if (param_1 >= 0x48) {
      switch(param_1) {
      case 0x49:
        goto LAB_0034d600;
      case 0x4a:
        goto LAB_0034d2a0;
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
        goto LAB_0034d85c;
      default:
        return;
      }
    }
    switch(param_1) {
    case 0x13:
    case 0x15:
      goto LAB_0034d2a0;
    case 0x14:
LAB_0034d600:
      temp_v8 = (unsigned int)puVar3[1];
      if (temp_v8 == 0) {
        temp_v8 = 0;
      }
      else {
        FUN_00192608();
        temp_v8 = *(unsigned int *)(temp_v8 + 0x24) & 0x3ff;
      }
      drawSetColorFromRGBA8(0xffffffff);
      temp_v6 = *(unsigned int *)(temp_v9 + 0x24) & 0x3ff;
      temp_v5 = temp_v6;
      if (temp_v6 < temp_v8) {
        temp_v5 = 0xff2529ff;
      }
      if (temp_v8 < temp_v6) {
        temp_v5 = 0x72e027ff;
      }
      if (temp_v6 != temp_v8) {
        drawSetColorFromRGBA8(temp_v5);
      }
      temp_v2 = FUN_001834a4(0x14,0x542);
      textFormatBuffer(temp_v12,&LAB_0034d46c,*(unsigned int *)(temp_v9 + 0x24) & 0x3ff);
      FUN_00180310(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v2 + 8) + param_4,
                   (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + param_5,1,4,0x83,
                   temp_v12);
      FUN_00183bb0();
      if (*(char *)(temp_v9 + 0x29) == '\0') {
        textFormatBuffer(temp_v12,&LAB_0034d828);
      }
      if (*(char *)(temp_v9 + 0x29) == '\x01') {
        textFormatBuffer(temp_v12,&LAB_0034d838);
      }
      if (*(char *)(temp_v9 + 0x29) == '\x06') {
        textFormatBuffer(temp_v12,&LAB_0034d840);
      }
      temp_v2 = FUN_001834a4(0x14,0x543);
      VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v2 + 10) + param_5,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v2 + 8) + param_4,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(3,0xffffffff,temp_v12,(int)*(short *)(temp_v2 + 10));
      temp_v0 = *(unsigned char *)(temp_v9 + 0x28);
      if ((temp_v0 & 0xf) == temp_v0 >> 4) {
        textFormatBuffer(temp_v12,&LAB_0034d46c,temp_v0 & 0xf);
      }
      else {
        textFormatBuffer(temp_v12,&LAB_0034d850,temp_v0 & 0xf,temp_v0 >> 4);
      }
      drawSetColorFromRGBA8(0xffffffff);
      temp_v2 = FUN_001834a4(0x14,0x546);
      FUN_00180310(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v3 + 8) + param_4,
                   (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v2 + 10) + param_5,1,3,0x83,
                   temp_v12);
      FUN_00183bb0();
      return;
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
LAB_0034d85c:
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
      temp_v2 = (int)(*(short *)((unsigned char *)&temp_v13 + 2)) + (int)*(short *)(temp_v9 + 0x38);
      temp_v9 = (int)*(short *)(temp_v9 + 0x36) + (int)(short)temp_v13;
      equipmentGetCappedUpgradeBonuses(temp_v8,&temp_v17);
      if (temp_v8 == 0) {
        temp_v7 = 0;
        temp_v4 = temp_v7;
      }
      else {
        temp_v6 = temp_v8;
        FUN_00192608();
        temp_v4 = (int)*(short *)(temp_v6 + 0x36) + (int)(short)temp_v17;
        FUN_00192608();
        temp_v7 = (int)*(short *)(temp_v8 + 0x38) + (int)(*(short *)((unsigned char *)&temp_v17 + 2));
      }
      drawSetColorFromRGBA8(0xffffffff);
      if (temp_v9 != temp_v4) {
        drawSetColorFromRGBA8();
      }
      temp_v4 = FUN_001834a4(0x14,0x55e);
      textFormatBuffer(temp_v12,&LAB_0034d46c,temp_v9);
      FUN_00180310(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_4,
                   (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v3 + 10) + param_5,1,5,0x83,
                   temp_v12);
      FUN_00183bb0();
      drawSetColorFromRGBA8(0xffffffff);
      temp_v9 = temp_v2;
      if (temp_v2 < temp_v7) {
        temp_v9 = -0xdad601;
      }
      if (temp_v7 < temp_v2) {
        temp_v9 = 0x72e027ff;
      }
      if (temp_v2 != temp_v7) {
        drawSetColorFromRGBA8(temp_v9);
      }
      temp_v9 = FUN_001834a4(0x14,0x563);
      textFormatBuffer(temp_v12,&LAB_0034d46c,temp_v2);
      FUN_00180310(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v9 + 8) + param_4,
                   (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v9 + 10) + param_5,1,5,0x83,
                   temp_v12);
      FUN_00183bb0();
    default:
      return;
    }
  }
LAB_0034d2a8:
  if (param_1 == 0x48) goto LAB_0034d2c0;
  if (param_1 == 0x15 || param_1 == 0x4a) {
    temp_v8 = (unsigned int)puVar3[2];
  }
LAB_0034d2c4:
  if (temp_v8 == 0) {
    temp_v8 = 0;
  }
  else {
    FUN_00192608();
    temp_v8 = *(unsigned int *)(temp_v8 + 0x24) & 0x3ff;
  }
  drawSetColorFromRGBA8(0xffffffff);
  temp_v6 = *(unsigned int *)(temp_v9 + 0x24) & 0x3ff;
  temp_v5 = temp_v6;
  if (temp_v6 < temp_v8) {
    temp_v5 = 0xff2529ff;
  }
  if (temp_v8 < temp_v6) {
    temp_v5 = 0x72e027ff;
  }
  if (temp_v6 != temp_v8) {
    drawSetColorFromRGBA8(temp_v5);
  }
  temp_v2 = FUN_001834a4(0x14,0x527);
  textFormatBuffer(temp_v12,&LAB_0034d46c,*(unsigned int *)(temp_v9 + 0x24) & 0x3ff);
  FUN_00180310(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v2 + 8) + param_4,
               (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + param_5,1,4,0x83,
               temp_v12);
  FUN_00183bb0();
  if (*(unsigned int *)(temp_v9 + 0x24) >> 0x14 == 0) {
    textFormatBuffer(temp_v12,&LAB_0034d488);
  }
  if (*(unsigned int *)(temp_v9 + 0x24) >> 0x14 == 1) {
    textFormatBuffer(temp_v12,&LAB_0034d494);
  }
  if (*(unsigned int *)(temp_v9 + 0x24) >> 0x14 == 2) {
    textFormatBuffer(temp_v12,&LAB_0034d49c);
  }
  if (*(unsigned int *)(temp_v9 + 0x24) >> 0x14 == 3) {
    textFormatBuffer(temp_v12,&LAB_0034d4a8);
  }
  if (*(unsigned int *)(temp_v9 + 0x24) >> 0x14 == 4) {
    textFormatBuffer(temp_v12,&LAB_0034d4b0);
  }
  if (*(unsigned int *)(temp_v9 + 0x24) >> 0x14 == 5) {
    textFormatBuffer(temp_v12,&LAB_0034d4bc);
  }
  if (*(unsigned int *)(temp_v9 + 0x24) >> 0x14 == 6) {
    textFormatBuffer(temp_v12,&LAB_0034d4c8);
  }
  if (*(unsigned int *)(temp_v9 + 0x24) >> 0x14 == 7) {
    textFormatBuffer(temp_v12,&LAB_0034d7fc);
  }
  if (*(unsigned int *)(temp_v9 + 0x24) >> 0x14 == 0x14) {
    textFormatBuffer(temp_v12,&LAB_0034d808);
  }
  temp_v2 = FUN_001834a4(0x14,0x528);
  VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v2 + 10) + param_5,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v2 + 8) + param_4,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(3,0xffffffff,temp_v12,(int)*(short *)(temp_v2 + 10));
  if (*(char *)(temp_v9 + 0x2b) != '\0') {
    temp_v2 = FUN_001834a4(0x14,0x529);
    temp_v4 = (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10);
    temp_v2 = (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v2 + 8);
    temp_v1 = *(unsigned char *)(temp_v9 + 0x2b);
    temp_v10 = 0x83;
  }
  else {
    if (*(char *)(temp_v9 + 0x2d) == '\0') {
      return;
    }
    temp_v2 = FUN_001834a4(0x14,0x529);
    temp_v4 = (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v2 + 10);
    temp_v2 = (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v3 + 8);
    temp_v10 = 0x6f;
    temp_v1 = 0xc;
  }
  effectDispatchSelector(temp_v1,temp_v2 + param_4 + 0x1e,temp_v4 + param_5,temp_v10);
  return;
LAB_0034d2a0:
  if (param_1 != 0x13) goto LAB_0034d2a8;
LAB_0034d2c0:
  temp_v8 = (unsigned int)*puVar3;
  goto LAB_0034d2c4;
}

} /* extern "C" */
