/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338dfc` (_code @ 0x338dfc, 0x45c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_002b5540(void);
int FUN_002c263c(void);
int gameDataResetFloat(void);
int FUN_00359974(int, int, unsigned int, int);
int VectorSignedToFloat(int, int);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern unsigned char LAB_0033915c; /* 0x33915c */
extern unsigned char LAB_00339174; /* 0x339174 */
extern unsigned char LAB_00339198; /* 0x339198 */
extern unsigned char LAB_00339258; /* 0x339258 */
extern unsigned int uRam005f0cc1; /* 0x5f0cc1 */
extern unsigned int uRam005f0cc5; /* 0x5f0cc5 */
extern unsigned int uRam005f0cc9; /* 0x5f0cc9 */
extern unsigned int uRam005f0ccd; /* 0x5f0ccd */
extern unsigned int uRam005f0cd1; /* 0x5f0cd1 */
extern unsigned short uRam005f0cd5; /* 0x5f0cd5 */
extern unsigned char uRam005f0cd7; /* 0x5f0cd7 */
extern int DAT_005f0cf4; /* 0x5f0cf4 */
extern int DAT_005f1aa8; /* 0x5f1aa8 */
extern int DAT_005f1aac; /* 0x5f1aac */
extern int DAT_005f1ab0; /* 0x5f1ab0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
extern int randRange(unsigned int);
extern int FUN_0017760c(void);
extern int gameFlagIsSet(unsigned int);
extern int gameGetSlotRecord(void);
extern int gameGetSlotTable(void);
extern int gameSlotTableFindFree(void);
extern int FUN_00272d44(void);
/* Supplied declaration required: FUN_002b5540. */
/* Supplied declaration required: FUN_002c263c. */
/* Supplied declaration required: gameDataResetFloat. */
/* Supplied declaration required: FUN_00359974. */
extern int FUN_003e0024(void);
extern int playerHasFlagBit(unsigned int);
extern int FUN_003e0154(void);


void FUN_00338dfc(void)

{
/* irregular: 5 goto(s); irregular input(s): in_fpscr, in_s0; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9 [4];
  unsigned int uStack_3c;
  unsigned long long temp_v10;
  
  temp_v0 = gameFlagIsSet(0x4d0);
  if (temp_v0 == 0) {
    return;
  }
  temp_v0 = FUN_00272d44();
  if (temp_v0 != 0) {
    textFormatBuffer(0x5f0cc1,&LAB_0033915c);
  }
  else {
    temp_v0 = playerHasFlagBit(5);
    if ((temp_v0 != 0) || (temp_v0 = playerHasFlagBit(9), temp_v0 != 0)) {
      if (DAT_005f1aa8 == 0) {
        DAT_005f1aa8 = 5;
        temp_v0 = playerHasFlagBit(5);
        if (temp_v0 != 0) {
          temp_v0 = randRange(1);
          temp_v0 = temp_v0 + 1;
        }
        else {
          temp_v0 = playerHasFlagBit(9);
          if (temp_v0 == 0) goto LAB_00338f14;
          temp_v0 = randRange(1);
          temp_v0 = temp_v0 + 3;
        }
        if (temp_v0 != 0) {
          textFormatBuffer(0x5f0cc1,&LAB_00339174);
          goto LAB_003391f8;
        }
      }
    }
    else {
      DAT_005f1aa8 = 0;
    }
LAB_00338f14:
    temp_v8 = 100.0f;
    temp_v10 = 0x42c80000;
    if (DAT_005f1aac == 0) {
      temp_v0 = FUN_003e0024();
      temp_v1 = FUN_003e0154();
      temp_v2 = gameSlotTableFindFree();
      temp_v3 = gameGetSlotTable();
      temp_v8 = (float)temp_v10;
      temp_v5 = 0;
      if (temp_v5 < temp_v2) {
        do {
          if (-1 < *(char *)(temp_v3 + 0x1c88 + temp_v5)) {
            temp_v4 = gameGetSlotRecord();
            temp_v0 = temp_v0 + *(short *)(temp_v4 + 0x2a);
            temp_v4 = FUN_0017760c();
            temp_v1 = temp_v1 + temp_v4;
          }
          temp_v8 = (float)temp_v10;
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < temp_v2);
      }
      temp_v7 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      in_s0 = (temp_v7 / temp_v6) * temp_v8;
      if ((int)in_s0 >= 0x42960000) {
        temp_v0 = playerHasFlagBit(5);
        if ((temp_v0 == 0) && (temp_v0 = playerHasFlagBit(9), temp_v0 == 0)) {
          DAT_005f1aac = 5;
          temp_v0 = randRange(1);
          temp_v0 = temp_v0 + 1;
LAB_00339020:
          if (temp_v0 != 0) {
            textFormatBuffer(0x5f0cc1,&LAB_00339198);
            goto LAB_003391f8;
          }
        }
      }
      else if ((int)in_s0 < 0x42200001) {
        DAT_005f1aac = 5;
        temp_v0 = randRange(1);
        temp_v0 = temp_v0 + 3;
        goto LAB_00339020;
      }
    }
    temp_v6 = 1.0f;
    temp_v9[0] = 0.5f;
    temp_v9[1] = 0.75f;
    temp_v9[2] = 1.0f;
    temp_v9[3] = 1.25f;
    uStack_3c = 0x3fc00000;
    temp_v0 = gameFlagIsSet(0x646);
    if (temp_v0 != 0) {
      temp_v6 = 1.25f;
    }
    FUN_002c263c();
    if (((int)in_s0 >= 0x41700000) && (DAT_005f1ab0 == 0)) {
      DAT_005f1ab0 = 5;
      FUN_002c263c();
      temp_v0 = randRange(4);
      temp_v0 = (int)(temp_v9[temp_v0] * in_s0 * temp_v6 * temp_v8);
      gameDataResetFloat();
      if (temp_v0 != 0) {
        DAT_005f0cf4 = temp_v0;
        if (temp_v0 >= 1000000000) {
          DAT_005f0cf4 = 999999999;
        }
        FUN_00359974(0x18,DAT_005f0cf4,0xffffffff,0);
        uRam005f0cc1 = 0x665f736d;
        uRam005f0cc5 = 0x6e697275;
        uRam005f0cc9 = 0x6c61745f;
        uRam005f0ccd = 0x6f6d5f6b;
        uRam005f0cd1 = 0x5f79656e;
        uRam005f0cd5 = 0x3130;
        uRam005f0cd7 = 0;
        goto LAB_003391f8;
      }
    }
    DAT_005f0cf4 = 0;
    temp_v0 = 0;
    FUN_002b5540();
    textFormatBuffer(0x5f0cc1,&LAB_00339258,temp_v0 + 1);
  }
LAB_003391f8:
  if (0 < DAT_005f1aa8) {
    DAT_005f1aa8 = DAT_005f1aa8 - 1;
  }
  if (0 < DAT_005f1aac) {
    DAT_005f1aac = DAT_005f1aac - 1;
  }
  if (0 < DAT_005f1ab0) {
    DAT_005f1ab0 = DAT_005f1ab0 - 1;
  }
  return;
}

} /* extern "C" */
