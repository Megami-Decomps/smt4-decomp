/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ef14` (_code @ 0x20ef14, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00289880(...);
int FUN_002898e4(...);
int buttonHelpCreate(...);
int scrScriptProcessStartEntry(...);
int FUN_00297060(...);
int buttonHelpSetPreset(...);

int FUN_001e1874(...);
int jobStopIfValidA(...);
int jobStopIfValidB(...);
int FUN_00227218(...);
int FUN_0023f27c(...);
int FUN_00246f18(...);
int btlTalkBustUpDestroy(...);
int FUN_00267d3c(...);
int FUN_00282820(...);
int gameFlagSetValue(...);
int buttonHelpRelease(...);
int uiFadeRelease(...);
int btlGetMainState(...);
int FUN_00297468(...);
int soundChannelStopAll(...);
int FUN_0029c3c0(...);
int FUN_0029e054(...);
int soundChannelRequestIfEnabled(...);
int FUN_002a03d8(...);
int asdTMTexTableLoadEntryAsync(...);
int asdTMTexTableFreeEntry(...);
int asdTMTexTableReleaseNode(...);
int ifTouchRegionRemove(...);
int asdTMTexTableLoadTmx(...);
int FUN_002ef6b8(...);
int FUN_0033a780(...);
int FUN_003db258(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_btlMain; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int *g_btlGameOver; /* 0x435d60 */
extern int DAT_00439a70; /* 0x439a70 */
extern int DAT_00439a74; /* 0x439a74 */
extern unsigned int DAT_00439a78; /* 0x439a78 */
extern int DAT_00439a7c; /* 0x439a7c */
extern unsigned int DAT_00439a80; /* 0x439a80 */
extern int DAT_00439a84; /* 0x439a84 */
extern unsigned int DAT_00439a88; /* 0x439a88 */
extern unsigned int DAT_00439a8c; /* 0x439a8c */
extern unsigned int DAT_00439a90; /* 0x439a90 */
extern unsigned int g_btlUiBlock; /* 0x439ca8 */

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_001e1874. */
/* Supplied declaration required: jobStopIfValidA. */
/* Supplied declaration required: jobStopIfValidB. */
extern int FUN_00220238(unsigned int);
/* Supplied declaration required: FUN_00227218. */
extern int FUN_0023ed64(unsigned int *);
/* Supplied declaration required: FUN_0023f27c. */
/* Supplied declaration required: FUN_00246f18. */
/* Supplied declaration required: btlTalkBustUpDestroy. */
/* Supplied declaration required: FUN_00267d3c. */
/* Supplied declaration required: FUN_00282820. */
extern int bgmGetStateById(unsigned int);
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_00289880. */
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: buttonHelpCreate. */
/* Supplied declaration required: buttonHelpRelease. */
/* Supplied declaration required: uiFadeRelease. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_0029c3c0. */
/* Supplied declaration required: FUN_0029e054. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: asdTMTexTableLoadEntryAsync. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: ifTouchRegionRemove. */
extern int FUN_002b8d54(void);
extern int jobIsValid(unsigned int);
extern int padIsButtonPressed(unsigned int);
extern int jobGetWork(void);
extern int gameDataBlocksGetSaveData(void);
extern unsigned int gameFlagIsSet(void);
extern int FUN_002c2a04(unsigned int);
/* Supplied declaration required: asdTMTexTableLoadTmx. */
/* Supplied declaration required: FUN_002ef6b8. */
/* Supplied declaration required: FUN_0033a780. */
/* Supplied declaration required: FUN_003db258. */


int FUN_0020ef14(void)

{
/* irregular: 4 goto(s); irregular input(s): in_d8, in_d9; 34 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  char *pcVar5;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int unaff_r4;
  float temp_v5;
  float temp_v6;
  unsigned long long in_d8;
  unsigned long long temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  unsigned long long in_d9;
  unsigned long long temp_v10;
  
  temp_v1 = jobGetWork();
  puVar2 = g_btlGameOver;
  if (g_btlGameOver == (unsigned int *)0x0) {
    return 0;
  }
  temp_v3 = g_btlGameOver[2];
  g_btlGameOver[2] = temp_v3 + 1U;
  if (temp_v3 + 1U >= 0x10000) {
    puVar2[2] = 0xffff;
  }
  if ((*(int *)(temp_v1 + 0x88) != 2) ||
     (temp_v4 = *(unsigned int *)(temp_v1 + 0x44a4) & 4,
     (*(unsigned int *)(temp_v1 + 0x44a0) & 0x40000) != 0 || temp_v4 != 0)) {
    temp_v1 = FUN_00220238(*(unsigned int *)(temp_v1 + 0x2c));
    if (temp_v1 != 0) {
      return -1;
    }
    return 0;
  }
  switch(*puVar2) {
  case 0:
    FUN_003db258(DAT_00435d18,"Dead_eyes");
    *puVar2 = 1;
    temp_v1 = DAT_00435d18;
    FUN_00246f18();
    goto joined_r0x003359d4;
  case 1:
    temp_v1 = DAT_00435d18;
    FUN_00246f18();
joined_r0x003359d4:
    if (temp_v1 == 0) {
      return 0;
    }
    puVar2[2] = 0;
    *puVar2 = 2;
FUN_003357c0:
    if (puVar2[2] == DAT_00439a70) {
      FUN_00282820(0,0,0,0,8,0,0xb,0);
      FUN_00267d3c(g_btlUiBlock);
    }
    if (puVar2[2] == DAT_00439a84) {
      FUN_0023f27c(0,0,DAT_00439a88,0x10,0,DAT_00439a8c,0,2,0xffffffff);
    }
    if (puVar2[2] == DAT_00439a74) {
      FUN_0029c3c0(0,DAT_00439a78,0xff);
    }
    if (puVar2[2] == DAT_00439a7c) {
      FUN_0029c3c0(1,DAT_00439a80,0xff);
    }
    if ((unsigned int)puVar2[2] <= DAT_00439a90) {
      return 0;
    }
    *puVar2 = 3;
    if ((puVar2[1] & 1) == 0) {
      pcVar5 = "battle/gameover/gameover.bf";
    }
    else {
      pcVar5 = "battle/gameover/level_event.bf";
    }
    FUN_00297468(pcVar5,puVar2 + 3,0);
    if ((puVar2[1] & 1) == 0) {
      pcVar5 = "battle/gameover/gameover.mbm";
    }
    else {
      pcVar5 = "battle/gameover/level_event.mbm";
    }
    FUN_00297468(pcVar5,puVar2 + 5,0);
    temp_v1 = gameDataBlocksGetSaveData();
    temp_v0 = *(char *)(temp_v1 + 0x24b29);
    if (temp_v0 != -1) {
      *(char *)(temp_v1 + 0x24b29) = temp_v0 + '\x01';
    }
    *puVar2 = 4;
    break;
  case 2:
    goto FUN_003357c0;
  case 3:
    if ((puVar2[1] & 1) == 0) {
      pcVar5 = "battle/gameover/gameover.bf";
    }
    else {
      pcVar5 = "battle/gameover/level_event.bf";
    }
    FUN_00297468(pcVar5,puVar2 + 3,0);
    if ((puVar2[1] & 1) == 0) {
      pcVar5 = "battle/gameover/gameover.mbm";
    }
    else {
      pcVar5 = "battle/gameover/level_event.mbm";
    }
    FUN_00297468(pcVar5,puVar2 + 5,0);
    temp_v1 = gameDataBlocksGetSaveData();
    temp_v0 = *(char *)(temp_v1 + 0x24b29);
    if (temp_v0 != -1) {
      *(char *)(temp_v1 + 0x24b29) = temp_v0 + '\x01';
    }
    *puVar2 = 4;
    break;
  case 4:
    break;
  case 5:
    temp_v1 = jobIsValid(puVar2[6]);
    if (temp_v1 != 0) {
      return 0;
    }
    *puVar2 = 6;
    goto FUN_0023f074;
  case 6:
    goto FUN_0023f074;
  case 7:
    temp_v1 = FUN_0019e0c0(puVar2[4]);
    if (temp_v1 != 2) {
      temp_v1 = 0;
    }
    else {
      uiFadeRelease();
      buttonHelpRelease();
      temp_v1 = btlGetMainState();
      if (((puVar2[1] & 1) == 0) && (*(int *)(temp_v1 + 0x4978) != 1)) {
        *puVar2 = 8;
        temp_v1 = FUN_0023ed64(puVar2);
      }
      else {
        *(unsigned int *)(temp_v1 + 0x4978) = 1;
        temp_v1 = -1;
        *puVar2 = 9;
      }
    }
    return temp_v1;
  case 8:
    temp_v9 = 0x42700000;
    temp_v10 = 0x42700000;
    temp_v7 = 0x3f80000000000000;
    if (puVar2[7] == 0) {
      puVar2[10] = 0;
      puVar2[0xd] = 0x3fc00000;
      puVar2[0xe] = 300;
      puVar2[9] = 0x42700000;
      puVar2[0xb] = 0x3f800000;
      puVar2[0xc] = 0x3f800000;
      asdTMTexTableLoadTmx(0x2d,0,0,temp_v4,in_d8,in_d9,unaff_r4);
      temp_v1 = 1;
      do {
        asdTMTexTableLoadEntryAsync(0x2d,temp_v1);
        temp_v9 = (unsigned int)temp_v10;
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 7);
      temp_v2 = 0;
      puVar2[0xf] = 0;
      FUN_0029e054();
      puVar2[0xf] = temp_v2;
      temp_v1 = bgmGetStateById(0x1000051);
      if (temp_v1 != 1) {
        soundChannelRequestIfEnabled(0x1000051,0);
      }
      puVar2[7] = puVar2[7] + 1;
    }
    temp_v1 = FUN_002c2a04(0);
    if ((temp_v1 == 0) &&
       ((temp_v1 = FUN_002b8d54(), temp_v1 == 6 || (temp_v1 = padIsButtonPressed(0), temp_v1 != 0)))) {
      puVar2[7] = 2;
      puVar2[0xe] = 0;
    }
    else if (puVar2[7] == 0) {
      return 0;
    }
    temp_v5 = (float)puVar2[9];
    temp_v8 = (float)((unsigned long long)temp_v7 >> 0x20);
    puVar2[9] = temp_v5 - temp_v8;
    temp_v6 = (float)temp_v7;
    if (temp_v5 - temp_v8 <= temp_v6) {
      puVar2[9] = temp_v9;
      *(float *)&puVar2[10] = temp_v6;
      *(float *)&puVar2[0xb] = temp_v8;
    }
    temp_v1 = puVar2[9];
    if ((temp_v1 < 0x41f00001) && ((float)puVar2[0xc] <= temp_v6)) {
      *(float *)&puVar2[0xc] = temp_v6;
      *(float *)&puVar2[0xd] = temp_v8;
    }
    temp_v5 = 0.033333335f;
    if (temp_v1 >= 0x41f00001) {
      puVar2[10] = (float)puVar2[10] + 0.033333335f;
      puVar2[0xb] = (float)puVar2[0xb] + 0.016666668f;
      puVar2[0xc] = (float)puVar2[0xc] - 0.033333335f;
      puVar2[0xd] = (float)puVar2[0xd] + 0.016666668f;
    }
    if (temp_v1 < 0x41f00000) {
      puVar2[10] = (float)puVar2[10] - 0.033333335f;
      puVar2[0xb] = (float)puVar2[0xb] + 0.016666668f;
      puVar2[0xc] = (float)puVar2[0xc] + 0.033333335f;
      puVar2[0xd] = (float)puVar2[0xd] + 0.016666668f;
    }
    if (puVar2[7] == 1) {
      temp_v1 = asdTMTexTableNodeIsLoaded(0x2d,6);
      if (temp_v1 == 0) {
        return 0;
      }
      temp_v1 = FUN_002c2a04(0);
      if (temp_v1 == 3) {
        FUN_002a03d8(0,0x1e);
      }
      temp_v1 = FUN_002c2a04(0);
      if (temp_v1 == 2) {
        return 0;
      }
      if ((int)puVar2[8] < 0x3f800000) {
        puVar2[8] = (float)puVar2[8] + temp_v5;
      }
      else {
        puVar2[0xe] = 300;
      }
    }
    if (puVar2[7] == 2) {
      temp_v1 = puVar2[0xe];
      puVar2[0xe] = temp_v1 - 1;
      if (-1 < temp_v1 - 1) {
        return 0;
      }
      puVar2[7] = 3;
      puVar2[0xe] = 300;
      FUN_0029c3c0(0,0x2d,0xff);
    }
    if ((puVar2[7] == 3) && (temp_v1 = FUN_002c2a04(0), temp_v1 == 3)) {
      temp_v1 = 1;
      do {
        asdTMTexTableReleaseNode(0x2d,temp_v1);
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 7);
      asdTMTexTableFreeEntry(0x2d);
      ifTouchRegionRemove();
      soundChannelStopAll(0xf);
      *puVar2 = 9;
    }
    return 0;
  case 9:
    return -1;
  default:
    return 0;
  }
  temp_v1 = 0;
  if (puVar2[3] != 0) {
    temp_v1 = puVar2[5];
  }
  if (puVar2[3] == 0 || temp_v1 == 0) {
    return temp_v1;
  }
  temp_v1 = FUN_002c2a04(0);
  if ((temp_v1 != 3) || (temp_v1 = FUN_002c2a04(1), temp_v1 != 3)) {
    return 0;
  }
  temp_v9 = btlGetMainState();
  FUN_0033a780();
  btlTalkBustUpDestroy();
  jobStopIfValidB(temp_v9);
  jobStopIfValidA(temp_v9);
  FUN_001e1874(temp_v9);
  if (g_btlMain != 0) {
    FUN_00227218();
  }
  if ((puVar2[1] & 1) == 0) {
    temp_v9 = gameFlagIsSet();
    temp_v2 = 0x17;
    FUN_002ef6b8(0x17,temp_v9);
    puVar2[6] = temp_v2;
    gameFlagSetValue(0x817,1);
    *puVar2 = 5;
    temp_v1 = jobIsValid(puVar2[6]);
    if (temp_v1 != 0) {
      return 0;
    }
  }
  *puVar2 = 6;
FUN_0023f074:
  temp_v1 = FUN_002c2a04(0);
  if ((temp_v1 == 3) && (temp_v1 = FUN_002c2a04(1), temp_v1 == 3)) {
    FUN_002898e4();
    buttonHelpCreate();
    FUN_00289880();
    buttonHelpSetPreset(0xa9);
    temp_v1 = puVar2[3];
    FUN_00297060(temp_v1,puVar2[5]);
    puVar2[4] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 1;
    scrScriptProcessStartEntry(puVar2[4],0);
    *puVar2 = 7;
    temp_v1 = FUN_0019e0c0(puVar2[4]);
    if (temp_v1 != 2) {
      temp_v1 = 0;
    }
    else {
      uiFadeRelease();
      buttonHelpRelease();
      temp_v1 = btlGetMainState();
      if (((puVar2[1] & 1) == 0) && (*(int *)(temp_v1 + 0x4978) != 1)) {
        *puVar2 = 8;
        temp_v1 = FUN_0023ed64(puVar2);
      }
      else {
        *(unsigned int *)(temp_v1 + 0x4978) = 1;
        temp_v1 = -1;
        *puVar2 = 9;
      }
    }
    return temp_v1;
  }
  return 0;
}

} /* extern "C" */
