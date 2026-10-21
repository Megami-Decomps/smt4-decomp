/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001edcf0` (_code @ 0x1edcf0, 0x3a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrRunOpcodesStub(...);
int FUN_00223898(int, int);
int gameDataFlagsSet(int);
int gameDataFlagsSetBits(int);
int gameDataBlocksAddFlags(int);
int FUN_00289880(void);
int FUN_002898e4(void);
int FUN_00296e90(void);
int scrScriptProcessStartEntry(...);
int FUN_00297060(void);
int buttonHelpSetPreset(int);
int FUN_002c40f8(unsigned char *, int *, int, int, int, int);
int FUN_002c526c(void);
int gameDataFlagsClear(...);
int gameDataFlagsClearAndRefresh(...);
int FUN_002c5758(...);
int FUN_002e2f14(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char g_saveLoadThread; /* 0x43e310 */
extern signed char DAT_0043e311; /* 0x43e311 */
extern unsigned char DAT_0043e312; /* 0x43e312 */
extern signed char DAT_0043e313; /* 0x43e313 */
extern int DAT_0043e314; /* 0x43e314 */

/* Supplied declaration required: scrRunOpcodesStub. */
extern int FUN_002103dc(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00223898. */
/* Supplied declaration required: gameDataFlagsSet. */
/* Supplied declaration required: gameDataFlagsSetBits. */
/* Supplied declaration required: gameDataBlocksAddFlags. */
/* Supplied declaration required: FUN_00289880. */
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: FUN_00296e90. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
extern int FUN_0029ee2c(void);
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: gameDataFlagsClear. */
/* Supplied declaration required: gameDataFlagsClearAndRefresh. */
/* Supplied declaration required: FUN_002c5758. */
/* Supplied declaration required: FUN_002e2f14. */


unsigned int FUN_001edcf0(unsigned int param_1,int param_2)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  int iStack_18;
  unsigned char temp_v3 [8];
  
  temp_v2 = DAT_0043e314;
  temp_v0 = *(int *)(DAT_0043e314 + 0x50);
  if (temp_v0 != 0) {
    param_2 = *(int *)(DAT_0043e314 + 0x54);
  }
  if (temp_v0 == 0 || param_2 == 0) {
    return 0;
  }
  if (*(int *)(DAT_0043e314 + 0x58) == 0) {
    FUN_00297060();
    *(int *)(temp_v2 + 0x58) = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 2;
  }
  switch(*(unsigned int *)(temp_v2 + 0xc)) {
  case 0:
    temp_v0 = FUN_002103dc(6,0);
    if (temp_v0 != 0) {
      if (temp_v0 != 3) {
        if (temp_v0 != 4) {
          temp_v1 = 8;
          g_saveLoadThread = 1;
        }
        else {
          g_saveLoadThread = 1;
          scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x58),3);
          temp_v1 = 4;
        }
      }
      else {
        g_saveLoadThread = 1;
        scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x58),0);
        temp_v1 = 4;
      }
    }
    else {
      g_saveLoadThread = 0;
      scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x58),4);
      temp_v1 = 9;
    }
    break;
  default:
    return 0;
  case 4:
    FUN_002c5758(1);
    gameDataFlagsClearAndRefresh(1);
    gameDataFlagsClear(1);
    buttonHelpSetPreset(0xe6);
    if (DAT_0043e313 == '\0') {
      FUN_002898e4();
      FUN_00289880();
      DAT_0043e313 = '\x01';
    }
    temp_v0 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x58));
    if (temp_v0 != 2) {
      return 0;
    }
    gameDataBlocksAddFlags(1);
    gameDataFlagsSetBits(1);
    gameDataFlagsSet(1);
    scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x58),1);
    temp_v1 = 5;
    break;
  case 5:
    buttonHelpSetPreset(0xe7);
    scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x58));
    FUN_00223898(temp_v2,1);
    temp_v1 = 6;
    break;
  case 6:
    scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x58));
    temp_v0 = FUN_0029ee2c();
    if (temp_v0 != 0) {
      DAT_0043e312 = 1;
    }
    if (*(int *)(temp_v2 + 0x44) != 0) {
      puVar2 = temp_v3;
      iStack_18 = *(int *)(temp_v2 + 0x44);
      FUN_002c40f8(puVar2,&iStack_18,1,0,0,0);
      if ((int)puVar2 < 0) {
        FUN_002c526c();
      }
      if (((unsigned int)puVar2 & 0x3ff) == 0x3fe) {
        return 0;
      }
    }
    FUN_002e2f14(temp_v2);
    buttonHelpSetPreset(0xe6);
    if (DAT_0043e311 != '\0') {
      FUN_002c5758(1);
      gameDataFlagsClearAndRefresh(1);
      gameDataFlagsClear(1);
      FUN_00296e90();
      DAT_0043e312 = 0;
      scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x58),2);
      temp_v1 = 7;
    }
    else {
      FUN_002c5758(1);
      gameDataFlagsClearAndRefresh(1);
      gameDataFlagsClear(1);
      FUN_00296e90();
      DAT_0043e312 = 0;
      scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x58),5);
      temp_v1 = 9;
    }
    break;
  case 7:
    temp_v2 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x58));
    if (temp_v2 != 2) {
      return 0;
    }
  case 8:
    return 1;
  case 9:
    FUN_002c5758(1);
    gameDataFlagsClearAndRefresh(1);
    gameDataFlagsClear(1);
    temp_v2 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x58));
    if (temp_v2 != 2) {
      return 0;
    }
    return 1;
  case 0xc:
    *(unsigned int *)(temp_v2 + 0xc) = 6;
    return 0;
  }
  *(unsigned int *)(temp_v2 + 0xc) = temp_v1;
  return 0;
}

} /* extern "C" */
