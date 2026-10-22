/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a60f8` (_code @ 0x2a60f8, 0x364 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameDataFlagsClearBits(...);
int gameDataBlocksReleaseHold(...);
int gameDataBlocksMaskClearBits(...);
int sysPlaySe(int);
int scrRunOpcodesStub(...);
int gameDataBlocksAddFlags(int);
int FUN_00275bc8(void);
int scrScriptProcessStartEntry(...);
int gameDataAddHomeButtonHold(int);
int campCommonBgAcquire(void);
int FUN_0031ed60(int, int);
int FUN_00333574(int);
int obj04Finish(void);
int FUN_0035d7bc(int);
int FUN_003b61ec(void);

extern unsigned char g_saveLoadThread; /* 0x57f6c8 */
extern signed char DAT_0057f6c9; /* 0x57f6c9 */
extern unsigned char DAT_0057f6cb; /* 0x57f6cb */
extern signed char DAT_0057f6cc; /* 0x57f6cc */
extern int DAT_0057f6d0; /* 0x57f6d0 */
extern int g_lazyScriptState; /* 0x5e2108 */
extern int DAT_005e210c; /* 0x5e210c */
extern int DAT_005e2110; /* 0x5e2110 */

/* Supplied declaration required: gameDataFlagsClearBits. */
/* Supplied declaration required: gameDataBlocksReleaseHold. */
/* Supplied declaration required: gameDataBlocksMaskClearBits. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: scrRunOpcodesStub. */
extern int messageMainIsWindowActive(void);
/* Supplied declaration required: gameDataBlocksAddFlags. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: gameDataAddHomeButtonHold. */
extern int FUN_002e0b5c(unsigned int, unsigned int);
/* Supplied declaration required: campCommonBgAcquire. */
/* Supplied declaration required: FUN_0031ed60. */
/* Supplied declaration required: FUN_00333574. */
/* Supplied declaration required: obj04Finish. */
/* Supplied declaration required: FUN_0035d7bc. */
extern int FUN_0035d83c(int);
/* Supplied declaration required: FUN_003b61ec. */


unsigned int FUN_002a60f8(unsigned int param_1,int param_2)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = DAT_0057f6d0;
  if (g_lazyScriptState != 0) {
    param_2 = DAT_005e210c;
  }
  if (g_lazyScriptState == 0 || param_2 == 0) {
    return 0;
  }
  if (DAT_005e2110 == 0) {
    temp_v0 = g_lazyScriptState;
    FUN_00275bc8();
    DAT_005e2110 = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 2;
  }
  switch(*(unsigned int *)(temp_v2 + 0xc)) {
  case 0:
    temp_v0 = FUN_002e0b5c(6,0);
    if (temp_v0 != 0) {
      if (temp_v0 != 3) {
        if (temp_v0 != 4) {
          temp_v1 = 8;
          g_saveLoadThread = 1;
        }
        else {
          g_saveLoadThread = 1;
          scrScriptProcessStartEntry(DAT_005e2110,3);
          temp_v1 = 4;
        }
      }
      else {
        g_saveLoadThread = 1;
        scrScriptProcessStartEntry(DAT_005e2110,0);
        temp_v1 = 4;
      }
    }
    else {
      g_saveLoadThread = 0;
      scrScriptProcessStartEntry(DAT_005e2110,4);
      temp_v1 = 9;
    }
    break;
  default:
    return 0;
  case 4:
    gameDataBlocksReleaseHold(1);
    gameDataFlagsClearBits(1);
    gameDataBlocksMaskClearBits(1);
    sysPlaySe(0xe8);
    if (DAT_0057f6cc == '\0') {
      campCommonBgAcquire();
      FUN_003b61ec();
      DAT_0057f6cc = '\x01';
    }
    temp_v0 = scrRunOpcodesStub(DAT_005e2110);
    if (temp_v0 != 2) {
      return 0;
    }
    gameDataAddHomeButtonHold(1);
    gameDataBlocksAddFlags(1);
    FUN_00333574(1);
    scrScriptProcessStartEntry(DAT_005e2110,1);
    temp_v1 = 5;
    break;
  case 5:
    sysPlaySe(0xe9);
    scrRunOpcodesStub(DAT_005e2110);
    FUN_0031ed60(temp_v2,1);
    temp_v1 = 6;
    break;
  case 6:
    scrRunOpcodesStub(DAT_005e2110);
    temp_v0 = messageMainIsWindowActive();
    if (temp_v0 != 0) {
      DAT_0057f6cb = 1;
    }
    temp_v0 = FUN_0035d83c(temp_v2);
    if (temp_v0 == 0) {
      return 0;
    }
    FUN_0035d7bc(temp_v2);
    sysPlaySe(0xe8);
    if (DAT_0057f6c9 != '\0') {
      gameDataBlocksReleaseHold(1);
      gameDataFlagsClearBits(1);
      gameDataBlocksMaskClearBits(1);
      obj04Finish();
      DAT_0057f6cb = 0;
      scrScriptProcessStartEntry(DAT_005e2110,2);
      temp_v1 = 7;
    }
    else {
      gameDataBlocksReleaseHold(1);
      gameDataFlagsClearBits(1);
      gameDataBlocksMaskClearBits(1);
      obj04Finish();
      DAT_0057f6cb = 0;
      scrScriptProcessStartEntry(DAT_005e2110,5);
      temp_v1 = 9;
    }
    break;
  case 7:
    temp_v2 = scrRunOpcodesStub(DAT_005e2110);
    if (temp_v2 != 2) {
      return 0;
    }
  case 8:
    return 1;
  case 9:
    gameDataBlocksReleaseHold(1);
    gameDataFlagsClearBits(1);
    gameDataBlocksMaskClearBits(1);
    temp_v2 = scrRunOpcodesStub(DAT_005e2110);
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
