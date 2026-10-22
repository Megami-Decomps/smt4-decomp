/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00215cb8` (_code @ 0x215cb8, 0x168c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventQueueAddUniqueIfValid(...);
int useCounterRelease(void);
int uiQuestSortListByEntryKind(...);

int FUN_001517b4(...);
int uiSpriteSelectAnim(...);
int FUN_001ad9b4(void);
int FUN_0021a4b0(void);
int uiFadeRequestHalf(void);
int resourceRunOperationIfUnblocked(...);
int FUN_002a4894(...);
int rt_aeabi_memclr(...);
int FUN_002f15f8(...);
int sysPlayVoice(...);
int FUN_003d498c(...);
void uiQuestRefreshDetailPages(int);
int gameFlagSetValue(...);
int FUN_00417a60(...);
int FUN_00418070(...);
int FUN_004186e0(void);
int FUN_0047dd18(...);
int flagValueAdd(int, unsigned int);
int FUN_004d9de0(void);
int optionsClearFlag1(void);
int SBORROW4(...);

int FUN_00163aa4(...);
int FUN_001643b4(int, int);
int sysPlaySe(...);
int uiSpriteSetKeyframe(...);
int uiSpriteSetImageKeyframe(...);
int asdMemFree(...);
int asdMemFreeSlot(unsigned int);
int FUN_0023eaf8(void);
int FUN_0023ff10(void);
int FUN_002ae320(void);
int FUN_00320834(void);
int buttonHelpGetValue(void);
int FUN_003d474c(void);

extern int g_aocMain; /* 0x570260 */
extern int g_uiQuest; /* 0x57f28c */
extern signed char DAT_005f1a5c; /* 0x5f1a5c */
extern signed char DAT_005f1a5f; /* 0x5f1a5f */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: FUN_001643b4. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: FUN_0021a4b0. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: asdMemFreeSlot. */
extern int useCounterIsFinished(void);
/* Supplied declaration required: FUN_0023eaf8. */
/* Supplied declaration required: FUN_0023ff10. */
extern int scrScriptProcessStartEntry(unsigned int, unsigned int);
/* Supplied declaration required: uiFadeRequestHalf. */
/* Supplied declaration required: resourceRunOperationIfUnblocked. */
/* Supplied declaration required: FUN_002a4894. */
extern int messageGetChoiceResult(void);
/* Supplied declaration required: FUN_002ae320. */
extern int objectApplyIfUnblocked(int);
extern int FUN_002c7c54(void);
/* Supplied declaration required: rt_aeabi_memclr. */
/* Supplied declaration required: FUN_002f15f8. */
/* Supplied declaration required: FUN_00320834. */
extern int FUN_00335384(int);
/* Supplied declaration required: buttonHelpGetValue. */
/* Supplied declaration required: useCounterRelease. */
/* Supplied declaration required: uiQuestSortListByEntryKind. */
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: FUN_003d474c. */
/* Supplied declaration required: FUN_003d498c. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_00417a60. */
/* Supplied declaration required: FUN_00418070. */
extern int FUN_004186a4(void);
/* Supplied declaration required: FUN_004186e0. */
extern unsigned char partyEntryIsAvailable(unsigned short);
extern int gameBlockByte27E98Is1To3(void);
/* Supplied declaration required: FUN_0047dd18. */
/* Supplied declaration required: flagValueAdd. */
/* Supplied declaration required: FUN_004d9de0. */
/* Supplied declaration required: optionsClearFlag1. */


unsigned int FUN_00215cb8(void)

{
/* irregular: 2 goto(s); 37 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned short temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  float temp_v11;
  
  temp_v1 = g_uiQuest;
  if (*(char *)(g_uiQuest + 0x90c) != '\0') {
    temp_v9 = g_uiQuest + 0x948;
  }
  else {
    temp_v9 = g_uiQuest + 0x9ac;
  }
  FUN_00163aa4(g_uiQuest + 0xc0);
  FUN_00163aa4(temp_v1 + 0x14c);
  switch(*(unsigned int *)(temp_v1 + 4)) {
  default:
    *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
    return 0;
  case 1:
    temp_v6 = FUN_00163aa4(temp_v1 + 0x34);
    temp_v5 = g_uiQuest;
    if (temp_v6 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v6 = *(int *)(temp_v1 + 0xc);
    if (temp_v6 == 0) {
      temp_v5 = 0;
      do {
        temp_v6 = objectApplyIfUnblocked(temp_v9);
        if (temp_v6 <= temp_v5) break;
        temp_v3 = FUN_001643b4(0x1e,temp_v5 + 0x9e);
        temp_v6 = temp_v5 * 2;
        temp_v5 = temp_v5 + 1;
        *(unsigned short *)(temp_v1 + temp_v6 + 0xd28) = temp_v3;
        *(short *)(temp_v1 + 0xd44) = *(short *)(temp_v1 + 0xd44) + 1;
      } while (temp_v5 < 10);
      temp_v3 = FUN_001643b4(0x1e,0xbf);
      *(unsigned short *)(temp_v1 + 0xd3e) = temp_v3;
      temp_v3 = FUN_001643b4(0x1e,0xc0);
      *(unsigned short *)(temp_v1 + 0xd40) = temp_v3;
      temp_v3 = FUN_001643b4(0x1e,0xc1);
      *(unsigned short *)(temp_v1 + 0xd42) = temp_v3;
      *(short *)(temp_v1 + 0xd44) = *(short *)(temp_v1 + 0xd44) + 3;
      FUN_0023ff10();
      FUN_003d474c();
      temp_v7 = 2;
      break;
    }
    if (temp_v6 != 0x1d) {
      if (temp_v6 != 0x1c) {
        temp_v7 = 0x1a;
        sysPlaySe(temp_v7);
      }
      else {
        temp_v9 = *(int *)(g_uiQuest + 0x918);
        if (temp_v9 == 1) {
          temp_v7 = 0xec;
          sysPlaySe(temp_v7);
          temp_v7 = *(unsigned int *)(temp_v1 + 0xc);
          break;
        }
        if (temp_v9 != 2) {
          if (temp_v9 == 3) {
            if (*(int *)(g_uiQuest + 0x910) == 0) {
              sysPlaySe(0xd8);
            }
            if (*(int *)(temp_v5 + 0x910) == 1) {
              sysPlaySe(0xd9);
            }
            if (*(int *)(temp_v5 + 0x910) == 2) {
              temp_v7 = 0xda;
              sysPlaySe(temp_v7);
            }
          }
        }
        else {
          if (*(int *)(g_uiQuest + 0x910) == 0) {
            sysPlaySe(0xed);
          }
          if (*(int *)(temp_v5 + 0x910) == 1) {
            temp_v7 = 0xee;
            sysPlaySe(temp_v7);
          }
        }
      }
    }
    else {
      FUN_00320834();
    }
    temp_v7 = *(unsigned int *)(temp_v1 + 0xc);
    break;
  case 2:
    FUN_0023eaf8();
    *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
    return 0;
  case 3:
    temp_v5 = FUN_00163aa4(temp_v1 + 0x34);
    temp_v9 = g_uiQuest;
    if (temp_v5 != 0) {
      if (*(int *)(g_uiQuest + 0x92c) != 0) {
        if (*(char *)(g_uiQuest + 0x943) == '\0') {
          asdMemFree();
        }
        *(unsigned int *)(temp_v9 + 0x92c) = 0;
      }
      asdMemFree(*(unsigned int *)(temp_v9 + 0x930));
      *(unsigned int *)(temp_v9 + 0x930) = 0;
      asdMemFreeSlot(*(unsigned int *)(temp_v9 + 0x91c));
      *(unsigned int *)(temp_v9 + 0x91c) = 0;
      asdMemFreeSlot(*(unsigned int *)(temp_v9 + 0x920));
      *(unsigned int *)(temp_v9 + 0x920) = 0;
      asdMemFreeSlot(*(unsigned int *)(temp_v9 + 0x924));
      *(unsigned int *)(temp_v9 + 0x924) = 0;
      asdMemFreeSlot(*(unsigned int *)(temp_v9 + 0x928));
      *(unsigned int *)(temp_v9 + 0x928) = 0;
      temp_v9 = g_uiQuest;
      temp_v7 = *(unsigned int *)(g_uiQuest + 4);
      *(unsigned int *)(g_uiQuest + 4) = 0;
      *(unsigned int *)(temp_v9 + 8) = temp_v7;
      *(unsigned int *)(temp_v9 + 0x10) = 0;
      if (*(char *)(temp_v1 + 0x93e) != '\0') {
        buttonHelpGetValue();
        sysPlaySe();
      }
    }
    *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
    return 0;
  case 4:
    if (*(short *)(temp_v1 + 0x228) != 0) {
      temp_v5 = FUN_00163aa4(temp_v1 + 0x1d8);
      temp_v9 = g_uiQuest;
    }
    else {
      temp_v5 = FUN_00163aa4(temp_v1 + 0x1d8);
      temp_v9 = g_uiQuest;
    }
    g_uiQuest = temp_v9;
    if (temp_v5 != 0) {
      temp_v7 = *(unsigned int *)(temp_v1 + 8);
      *(unsigned int *)(temp_v9 + 8) = *(unsigned int *)(temp_v9 + 4);
      *(unsigned int *)(temp_v9 + 4) = temp_v7;
      *(unsigned int *)(temp_v9 + 0x10) = 0;
      FUN_002ae320();
    }
    *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
    return 0;
  case 5:
    temp_v9 = FUN_00163aa4(temp_v1 + 0x1d8);
    if (temp_v9 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    if (*(short *)(temp_v1 + 0x228) != 2) {
      uiSpriteSetKeyframe(temp_v1 + 0x1d8,1,0);
    }
    else {
      uiSpriteSetKeyframe(temp_v1 + 0x1d8,0,0);
    }
    uiSpriteSetImageKeyframe(temp_v1 + 0x1d8,8,0);
    *(unsigned int *)(temp_v1 + 0x910) = *(unsigned int *)(temp_v1 + 0x914);
    temp_v9 = g_uiQuest;
    if (*(int *)(temp_v1 + 8) != 2) {
      if (*(int *)(temp_v1 + 8) != 0x1d) {
        if (*(int *)(temp_v1 + 0xc) == 0x1c) {
          temp_v5 = *(int *)(g_uiQuest + 0x918);
          if (temp_v5 == 1) {
            temp_v7 = 0xec;
            sysPlaySe(temp_v7);
          }
          else if (temp_v5 != 2) {
            if (temp_v5 == 3) {
              if (*(int *)(g_uiQuest + 0x910) == 0) {
                sysPlaySe(0xd8);
              }
              if (*(int *)(temp_v9 + 0x910) == 1) {
                sysPlaySe(0xd9);
              }
              if (*(int *)(temp_v9 + 0x910) == 2) {
                sysPlaySe(0xda);
              }
            }
          }
          else {
            if (*(int *)(g_uiQuest + 0x910) == 0) {
              sysPlaySe(0xed);
            }
            if (*(int *)(temp_v9 + 0x910) == 1) {
              temp_v7 = 0xee;
              sysPlaySe(temp_v7);
            }
          }
        }
      }
      else {
        FUN_00320834();
      }
    }
    else {
      FUN_0023ff10();
    }
    temp_v7 = 4;
    temp_v9 = g_uiQuest;
    *(unsigned int *)(temp_v9 + 4) = temp_v7;
    *(unsigned int *)(temp_v9 + 0x10) = 0;
    *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
    return 0;
  case 6:
    temp_v9 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x8fc));
    if (temp_v9 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v9 = resourceRunOperationIfUnblocked();
    temp_v5 = FUN_002a4894(temp_v1 + 0x9ac);
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + (temp_v5 + temp_v9) * 2 + 0xad6);
    temp_v9 = messageGetChoiceResult();
    if (temp_v9 == 0) {
      sysPlayVoice(0x1000308);
      FUN_001ad9b4();
      if (*(char *)(temp_v4 + 6) == '\t') {
        temp_v7 = 10;
        if (*(short *)(temp_v4 + 0xd8) != 0) {
          temp_v7 = 0xf;
        }
        temp_v9 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x8fc),temp_v7);
        if (temp_v9 == 0) {
          *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
          return 0;
        }
      }
      FUN_0021a4b0();
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    FUN_003d474c();
    FUN_0023ff10();
    temp_v7 = 2;
    break;
  case 7:
    temp_v9 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x8fc));
    if (temp_v9 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    resourceRunOperationIfUnblocked();
    FUN_002a4894(temp_v1 + 0x9ac);
    temp_v9 = messageGetChoiceResult();
    if (temp_v9 != 0) {
      FUN_003d474c();
      FUN_0023ff10();
      temp_v7 = 2;
      break;
    }
    temp_v9 = FUN_004186e0();
    FUN_001ad9b4();
    if ((*(char *)(temp_v9 + 6) != '\t') || (temp_v9 = gameBlockByte27E98Is1To3(), temp_v9 == 0)) {
      temp_v3 = FUN_004186e0();
      *(unsigned short *)(temp_v1 + 0xccc) = temp_v3;
      temp_v7 = FUN_004186e0();
      FUN_002f15f8(temp_v7,0);
      *(unsigned char *)(temp_v1 + 0x93f) = 1;
      temp_v2 = partyEntryIsAvailable(*(unsigned short *)(temp_v1 + 0xccc));
      *(unsigned char *)(temp_v1 + 0x940) = temp_v2;
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v9 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x8fc),0xb);
    if (temp_v9 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v7 = 0x10;
    break;
  case 8:
    temp_v9 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x8fc));
    if (temp_v9 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    resourceRunOperationIfUnblocked();
    FUN_002a4894(temp_v1 + 0x9ac);
    temp_v9 = messageGetChoiceResult();
    if (temp_v9 != 0) {
      FUN_003d474c();
      FUN_0023ff10();
      temp_v7 = 2;
      break;
    }
    temp_v9 = FUN_004186e0();
    FUN_001ad9b4();
    if ((*(char *)(temp_v9 + 6) != '\t') || (temp_v9 = gameBlockByte27E98Is1To3(), temp_v9 == 0)) {
      temp_v3 = FUN_004186e0();
      *(unsigned short *)(temp_v1 + 0xccc) = temp_v3;
      temp_v7 = FUN_004186e0();
      FUN_002f15f8(temp_v7,0);
      *(unsigned char *)(temp_v1 + 0x93f) = 1;
      temp_v2 = partyEntryIsAvailable(*(unsigned short *)(temp_v1 + 0xccc));
      *(unsigned char *)(temp_v1 + 0x940) = temp_v2;
      *(unsigned char *)(temp_v1 + 0x942) = 1;
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v9 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x8fc),0xb);
    if (temp_v9 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v7 = 9;
    break;
  case 9:
    temp_v9 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x8fc));
    if (temp_v9 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    resourceRunOperationIfUnblocked();
    FUN_002a4894(temp_v1 + 0x9ac);
    temp_v9 = messageGetChoiceResult();
    if (temp_v9 != 0) {
      FUN_003d474c();
      FUN_0023ff10();
      temp_v7 = 2;
      break;
    }
    temp_v3 = FUN_004186e0();
    *(unsigned short *)(temp_v1 + 0xccc) = temp_v3;
    temp_v7 = FUN_004186e0();
    FUN_002f15f8(temp_v7,0);
    temp_v2 = 1;
    *(unsigned char *)(temp_v1 + 0x93f) = 1;
    *(unsigned char *)(temp_v1 + 0x941) = 1;
    *(unsigned char *)(temp_v1 + 0x942) = temp_v2;
    *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
    return 0;
  case 10:
    temp_v9 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x8fc));
    if (temp_v9 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    FUN_0023ff10();
    temp_v7 = 2;
    break;
  case 0xb:
    temp_v9 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x8fc));
    if (temp_v9 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v9 = messageGetChoiceResult();
    if (temp_v9 != 0) {
      FUN_003d474c();
      FUN_0023ff10();
      temp_v7 = 2;
      break;
    }
    temp_v9 = resourceRunOperationIfUnblocked();
    temp_v5 = FUN_002a4894(temp_v1 + 0x9ac);
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + (temp_v5 + temp_v9) * 2 + 0xad6);
    FUN_001ad9b4();
    sysPlaySe(0xe4);
    temp_v9 = FUN_004186a4();
    if (temp_v9 != 0) {
      temp_v9 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x8fc),2);
      if (temp_v9 == 0) {
        *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
        return 0;
      }
      temp_v7 = 8;
    }
    else {
      if (*(char *)(temp_v4 + 6) != '\x06') {
        if (*(char *)(temp_v4 + 6) != '\v') {
          temp_v9 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x8fc),0);
        }
        else {
          temp_v9 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x8fc),0x12);
        }
      }
      else {
        temp_v9 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x8fc),0x11);
      }
      if (temp_v9 == 0) {
        *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
        return 0;
      }
      temp_v7 = 6;
    }
    break;
  case 0xc:
    FUN_00163aa4(temp_v1 + 0x264);
    if ((*(char *)(temp_v1 + 0x2ee) == '\0') ||
       (temp_v9 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x8fc)), temp_v9 != 2)) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v9 = resourceRunOperationIfUnblocked();
    temp_v5 = FUN_002a4894(temp_v1 + 0x9ac);
    temp_v8 = (unsigned int)*(unsigned short *)(temp_v1 + (temp_v5 + temp_v9) * 2 + 0xad6);
    temp_v4 = temp_v8;
    FUN_001ad9b4();
    if (*(char *)(temp_v4 + 6) == '\v') {
      flagValueAdd(*(unsigned short *)(temp_v4 + 0xf2),*(unsigned int *)(temp_v4 + 0xf4));
      if (*(short *)(temp_v4 + 0xf2) == 0x39b) {
        gameFlagSetValue(0x4d1,1);
      }
      FUN_00417a60(temp_v8);
    }
    if (*(char *)(temp_v4 + 6) != '\x06') {
      if (*(char *)(temp_v4 + 6) != '\t') {
        FUN_003d474c();
        FUN_0023ff10();
        temp_v0 = *(char *)(temp_v4 + 6);
        if (temp_v0 == '\x06') {
          *(unsigned char *)(temp_v1 + 0x90d) = 1;
          uiSpriteSetKeyframe(temp_v1 + 0x34,2,0);
          uiSpriteSetImageKeyframe(temp_v1 + 0x34,9,0);
          temp_v7 = 3;
          break;
        }
        if (temp_v0 != '\t') {
          if ((temp_v0 != '\v') &&
             ((*(char *)(temp_v1 + 0x940) != '\0' || (*(char *)(temp_v1 + 0x941) != '\0')))) {
            uiSpriteSetKeyframe(temp_v1 + 0x34,2,0);
            uiSpriteSetImageKeyframe(temp_v1 + 0x34,9,0);
            temp_v7 = 3;
            break;
          }
          temp_v7 = 2;
          break;
        }
      }
      temp_v9 = gameDataBlocksGetSaveData();
      rt_aeabi_memclr(temp_v9 + 0x29814,0x18);
      *(unsigned char *)(temp_v1 + 0x90e) = 1;
      FUN_0047dd18(g_aocMain + 0xa8);
    }
    else {
      *(unsigned char *)(temp_v1 + 0x90d) = 1;
    }
    uiSpriteSetKeyframe(temp_v1 + 0x34,2,0);
    uiSpriteSetImageKeyframe(temp_v1 + 0x34,9,0);
    temp_v7 = 3;
    break;
  case 0xe:
    temp_v9 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x8fc));
    if (temp_v9 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    resourceRunOperationIfUnblocked();
    FUN_002a4894(temp_v1 + 0x9ac);
    temp_v9 = messageGetChoiceResult();
    if (temp_v9 == 0) {
      FUN_0021a4b0();
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    if (*(char *)(temp_v1 + 0x940) == '\0') {
      temp_v0 = *(char *)(temp_v1 + 0x941);
joined_r0x002167bc:
      if (temp_v0 == '\0') {
        FUN_003d474c();
        FUN_0023ff10();
        temp_v7 = 2;
        break;
      }
    }
    uiSpriteSetKeyframe(temp_v1 + 0x34,2,0);
    uiSpriteSetImageKeyframe(temp_v1 + 0x34,9,0);
    temp_v7 = 3;
    break;
  case 0xf:
    temp_v9 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x8fc));
    if (temp_v9 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    resourceRunOperationIfUnblocked();
    FUN_002a4894(temp_v1 + 0x9ac);
    temp_v9 = messageGetChoiceResult();
    if (temp_v9 == 0) {
      FUN_0021a4b0();
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    if (*(char *)(temp_v1 + 0x940) == '\0') {
      temp_v0 = *(char *)(temp_v1 + 0x941);
      goto joined_r0x002167bc;
    }
    uiSpriteSetKeyframe(temp_v1 + 0x34,2,0);
    uiSpriteSetImageKeyframe(temp_v1 + 0x34,9,0);
    temp_v7 = 3;
    break;
  case 0x10:
    temp_v9 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x8fc));
    if (temp_v9 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    resourceRunOperationIfUnblocked();
    FUN_002a4894(temp_v1 + 0x9ac);
    temp_v9 = messageGetChoiceResult();
    if (temp_v9 == 0) {
      temp_v3 = FUN_004186e0();
      *(unsigned short *)(temp_v1 + 0xccc) = temp_v3;
      temp_v7 = FUN_004186e0();
      FUN_002f15f8(temp_v7,0);
      *(unsigned char *)(temp_v1 + 0x93f) = 1;
      *(unsigned char *)(temp_v1 + 0x941) = 1;
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    FUN_003d474c();
    FUN_0023ff10();
    temp_v7 = 2;
    break;
  case 0x11:
    FUN_00163aa4(temp_v1 + 0x34);
    temp_v9 = FUN_00335384(temp_v1);
    if (temp_v9 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v7 = 0x12;
    break;
  case 0x12:
    FUN_00163aa4(temp_v1 + 0x7dc);
    temp_v9 = 0;
    FUN_001517b4(0,1);
    if (temp_v9 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    uiSpriteSetKeyframe(temp_v1 + 0x34,2,0);
    uiSpriteSetImageKeyframe(temp_v1 + 0x34,9,0);
    uiSpriteSetImageKeyframe(temp_v1 + 0x5ac,0x18,0);
    uiSpriteSetKeyframe(temp_v1 + 0x638,0xb,0);
    uiSpriteSetImageKeyframe(temp_v1 + 0x638,0x18,0);
    uiSpriteSetKeyframe(temp_v1 + 0x6c4,0xb,0);
    uiSpriteSetImageKeyframe(temp_v1 + 0x6c4,0x18,0);
    temp_v7 = 0x13;
    break;
  case 0x13:
    FUN_00163aa4(temp_v1 + 0x34);
    FUN_00163aa4();
    FUN_00163aa4();
    FUN_00163aa4();
    FUN_00163aa4(temp_v1 + 0x7dc);
    if (((*(char *)(temp_v1 + 0x6c2) == '\0') || (*(char *)(temp_v1 + 0x74e) == '\0')) ||
       (*(char *)(temp_v1 + 0x636) == '\0')) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    buttonHelpGetValue();
    sysPlaySe();
    temp_v7 = 0;
    break;
  case 0x14:
    if (*(char *)(temp_v1 + 0x93c) != '\0') {
      FUN_00163aa4(temp_v1 + 0x34);
    }
    FUN_00163aa4();
    temp_v10 = *(char *)(temp_v1 + 0x492) != '\0';
    temp_v9 = 0;
    temp_v5 = 0;
    if (temp_v10) {
      temp_v5 = *(int *)(temp_v1 + 0x10);
      temp_v9 = temp_v5 - 0x1e;
    }
    if ((temp_v10 && temp_v5 != 0x1e) && temp_v9 < 0 == (temp_v10 && SBORROW4(temp_v5,0x1e))) {
      if (temp_v5 < 0x22) {
        *(float *)(temp_v1 + 0x938) = *(float *)(temp_v1 + 0x938) - 0.0696f;
      }
      else if (temp_v5 < 0x25) {
        temp_v11 = *(float *)(temp_v1 + 0x938) + 0.0348f;
        *(float *)(temp_v1 + 0x938) = temp_v11;
      }
      else if (0x27 >= temp_v5) {
        temp_v11 = *(float *)(temp_v1 + 0x938) - 0.0348f;
        *(float *)(temp_v1 + 0x938) = temp_v11;
      }
      if (temp_v5 == 0x2b) {
        FUN_00418070(*(unsigned short *)(temp_v1 + 0xcca),0);
        FUN_004d9de0();
        optionsClearFlag1();
        if (*(char *)(temp_v1 + 0x90c) != '\0') {
          temp_v9 = temp_v1 + 0x948;
          temp_v5 = temp_v1 + 0xa10;
        }
        else {
          temp_v9 = temp_v1 + 0x9ac;
          temp_v5 = temp_v1 + 0xad6;
        }
        temp_v6 = resourceRunOperationIfUnblocked(temp_v9);
        temp_v9 = FUN_002a4894(temp_v9);
        temp_v3 = *(unsigned short *)(temp_v5 + (temp_v9 + temp_v6) * 2);
        if (*(char *)(temp_v1 + 0x93e) != '\0') {
          temp_v3 = *(unsigned short *)(temp_v1 + 0xcca);
        }
        uiQuestRefreshDetailPages(temp_v3);
        temp_v9 = g_uiQuest;
        *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
        *(unsigned int *)(temp_v9 + 4) = 0x15;
        *(unsigned int *)(temp_v9 + 0x10) = 0;
      }
      temp_v11 = *(float *)(temp_v1 + 0x938);
      if (temp_v11 < 0.0f) {
        temp_v11 = temp_v11 + 6.28f;
        *(float *)(temp_v1 + 0x938) = temp_v11;
      }
      if ((int)temp_v11 >= 0x40c8f5c4) {
        *(float *)(temp_v1 + 0x938) = temp_v11 - 6.28f;
      }
    }
    *(unsigned int *)(temp_v1 + 0x438) = *(unsigned int *)(temp_v1 + 0x938);
    *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
    return 0;
  case 0x15:
    temp_v9 = 0;
    FUN_001517b4(0,1);
    if (temp_v9 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    if (*(char *)(temp_v1 + 0x93c) != '\0') {
      uiSpriteSetKeyframe(temp_v1 + 0x34,2,0);
      uiSpriteSetImageKeyframe(temp_v1 + 0x34,9,0);
    }
    uiSpriteSetKeyframe(temp_v1 + 0x408,4,0);
    uiSpriteSetImageKeyframe(temp_v1 + 0x408,10,0);
    uiFadeRequestHalf();
    temp_v7 = 0x16;
    break;
  case 0x16:
    if (*(char *)(temp_v1 + 0x93c) != '\0') {
      FUN_00163aa4(temp_v1 + 0x34);
    }
    FUN_00163aa4();
    if (*(char *)(temp_v1 + 0x492) == '\0') {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    if (*(char *)(temp_v1 + 0x93c) == '\0') {
      FUN_0023ff10();
      FUN_003d474c();
      if (*(char *)(temp_v1 + 0x942) == '\0') {
        temp_v0 = *(char *)(temp_v1 + 0x940);
        temp_v10 = temp_v0 != '\0';
        if (!temp_v10) {
          temp_v0 = *(char *)(temp_v1 + 0x941);
        }
        if (temp_v10 || temp_v0 != '\0') {
          uiSpriteSetKeyframe(temp_v1 + 0x34,2,0);
          uiSpriteSetImageKeyframe(temp_v1 + 0x34,9,0);
          temp_v7 = 3;
          break;
        }
        temp_v7 = 2;
        break;
      }
      temp_v9 = resourceRunOperationIfUnblocked();
      temp_v5 = FUN_002a4894(temp_v1 + 0x9ac);
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + (temp_v5 + temp_v9) * 2 + 0xad6);
      FUN_001ad9b4();
      if (*(char *)(temp_v4 + 6) == '\t') {
        temp_v7 = 10;
        if (*(short *)(temp_v4 + 0xd8) != 0) {
          temp_v7 = 0xf;
        }
        temp_v9 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x8fc),temp_v7);
        if (temp_v9 != 0) {
          sysPlayVoice(0x1000308);
          FUN_0021a4b0();
        }
      }
      else {
        sysPlayVoice(0x1000308);
        FUN_0021a4b0();
      }
      temp_v2 = 0;
      *(unsigned char *)(temp_v1 + 0x942) = temp_v2;
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v7 = 0;
    break;
  case 0x17:
    temp_v9 = FUN_00163aa4(temp_v1 + 0x34);
    temp_v10 = temp_v9 == 0;
    temp_v9 = 0;
    temp_v5 = 0;
    if (!temp_v10) {
      temp_v5 = *(int *)(temp_v1 + 0x10);
      temp_v9 = temp_v5 - 0x1e;
    }
    if ((temp_v10 || temp_v5 == 0x1e) || temp_v9 < 0 != (!temp_v10 && SBORROW4(temp_v5,0x1e))) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v9 = FUN_00163aa4();
    if (temp_v9 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    if (*(int *)(temp_v1 + 0x92c) != 0) {
      if (*(char *)(temp_v1 + 0x943) == '\0') {
        asdMemFree();
      }
      *(unsigned int *)(temp_v1 + 0x92c) = 0;
    }
    FUN_003d498c(*(unsigned short *)(temp_v1 + 0xcca),1);
    uiSpriteSetKeyframe(temp_v1 + 0x494,0);
    uiSpriteSetImageKeyframe(temp_v1 + 0x494,8,0);
    uiSpriteSelectAnim(temp_v1 + 0x520,5);
    temp_v7 = 0x18;
    break;
  case 0x18:
    temp_v9 = FUN_00163aa4(temp_v1 + 0x494);
    if ((temp_v9 == 0) || (temp_v9 = FUN_00163aa4(temp_v1 + 0x520), temp_v9 == 0)) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v9 = 8;
    FUN_001517b4(8,0);
    if (temp_v9 != 0) {
      temp_v9 = *(int *)(temp_v1 + 0x910) - 1;
      *(int *)(temp_v1 + 0x914) = temp_v9;
      if (temp_v9 < 0) {
        temp_v9 = *(int *)(temp_v1 + 0x918) - 1;
        *(int *)(temp_v1 + 0x914) = temp_v9;
      }
      else {
        temp_v9 = *(int *)(temp_v1 + 0x914);
      }
      if (temp_v9 == *(int *)(temp_v1 + 0x910)) {
        *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
        return 0;
      }
      uiSpriteSetKeyframe(temp_v1 + 0x1d8,3,0);
      uiSpriteSetImageKeyframe(temp_v1 + 0x1d8,9,0);
      temp_v7 = 5;
    }
    else {
      temp_v9 = 7;
      FUN_001517b4(7,0);
      if (temp_v9 != 0) {
        temp_v9 = *(int *)(temp_v1 + 0x910) + 1;
        *(int *)(temp_v1 + 0x914) = temp_v9;
        if (temp_v9 >= *(int *)(temp_v1 + 0x918)) {
          temp_v9 = 0;
          *(unsigned int *)(temp_v1 + 0x914) = 0;
        }
        else {
          temp_v9 = *(int *)(temp_v1 + 0x914);
        }
        if (temp_v9 == *(int *)(temp_v1 + 0x910)) {
          *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
          return 0;
        }
        uiSpriteSetKeyframe(temp_v1 + 0x1d8,2,0);
        uiSpriteSetImageKeyframe(temp_v1 + 0x1d8,9,0);
        temp_v7 = 5;
      }
      else {
        temp_v9 = 0;
        FUN_001517b4(0,1);
        if (temp_v9 == 0) {
          temp_v9 = 1;
          FUN_001517b4();
          if (temp_v9 == 0) {
            *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
            return 0;
          }
        }
        uiSpriteSetKeyframe(temp_v1 + 0x34,2,0);
        uiSpriteSetImageKeyframe(temp_v1 + 0x34,9,0);
        temp_v7 = 0x19;
      }
    }
    break;
  case 0x19:
    temp_v9 = FUN_00163aa4(temp_v1 + 0x34);
    if (temp_v9 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    buttonHelpGetValue();
    sysPlaySe();
    temp_v7 = 0;
    break;
  case 0x1a:
    temp_v9 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x908));
    if (temp_v9 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v7 = 2;
    break;
  case 0x1b:
    temp_v9 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x908));
    if (temp_v9 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    *(unsigned char *)(temp_v1 + 0x90f) = 1;
    uiSpriteSetKeyframe(temp_v1 + 0x34,2,0);
    uiSpriteSetImageKeyframe(temp_v1 + 0x34,9,0);
    temp_v7 = 3;
    break;
  case 0x1c:
  case 0x1d:
    temp_v9 = 8;
    FUN_001517b4(8,0);
    if (temp_v9 != 0) {
      temp_v9 = *(int *)(temp_v1 + 0x910) - 1;
      *(int *)(temp_v1 + 0x914) = temp_v9;
      if (temp_v9 < 0) {
        temp_v9 = *(int *)(temp_v1 + 0x918) - 1;
        *(int *)(temp_v1 + 0x914) = temp_v9;
      }
      else {
        temp_v9 = *(int *)(temp_v1 + 0x914);
      }
      if (temp_v9 == *(int *)(temp_v1 + 0x910)) {
        *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
        return 0;
      }
      uiSpriteSetKeyframe(temp_v1 + 0x1d8,3,0);
      uiSpriteSetImageKeyframe(temp_v1 + 0x1d8,9,0);
      temp_v9 = g_uiQuest;
      *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
      *(unsigned int *)(temp_v9 + 4) = 5;
      *(unsigned int *)(temp_v9 + 0x10) = 0;
      temp_v7 = 0x1000210;
    }
    else {
      temp_v9 = 7;
      FUN_001517b4(7,0);
      if (temp_v9 != 0) {
        temp_v9 = *(int *)(temp_v1 + 0x910) + 1;
        *(int *)(temp_v1 + 0x914) = temp_v9;
        if (temp_v9 >= *(int *)(temp_v1 + 0x918)) {
          temp_v9 = 0;
          *(unsigned int *)(temp_v1 + 0x914) = 0;
        }
        else {
          temp_v9 = *(int *)(temp_v1 + 0x914);
        }
        if (temp_v9 == *(int *)(temp_v1 + 0x910)) {
          *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
          return 0;
        }
        uiSpriteSetKeyframe(temp_v1 + 0x1d8,2,0);
        uiSpriteSetImageKeyframe(temp_v1 + 0x1d8,9,0);
        temp_v9 = g_uiQuest;
        *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
        *(unsigned int *)(temp_v9 + 4) = 5;
        *(unsigned int *)(temp_v9 + 0x10) = 0;
        temp_v7 = 0x1000210;
      }
      else {
        temp_v9 = 0;
        FUN_001517b4(0,1);
        if (temp_v9 == 0) {
          temp_v9 = 1;
          FUN_001517b4();
          if (temp_v9 != 0) goto LAB_00217264;
          if (DAT_005f1a5c == '\0') {
            *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
            return 0;
          }
        }
        else {
LAB_00217264:
          if (DAT_005f1a5c == '\0') {
            uiSpriteSetKeyframe(temp_v1 + 0x34,2,0);
            uiSpriteSetImageKeyframe(temp_v1 + 0x34,9,0);
            temp_v9 = g_uiQuest;
            *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
            *(unsigned int *)(temp_v9 + 4) = 3;
            *(unsigned int *)(temp_v9 + 0x10) = 0;
            eventQueueAddUniqueIfValid(0x100020e);
            *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
            return 0;
          }
        }
        if (DAT_005f1a5f == '\0') {
          *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
          return 0;
        }
        uiSpriteSetKeyframe(temp_v1 + 0x34,2,0);
        uiSpriteSetImageKeyframe(temp_v1 + 0x34,9,0);
        temp_v9 = g_uiQuest;
        *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
        *(unsigned int *)(temp_v9 + 4) = 3;
        *(unsigned int *)(temp_v9 + 0x10) = 0;
        temp_v7 = 0x100020e;
      }
    }
    eventQueueAddUniqueIfValid(temp_v7);
    *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
    return 0;
  case 0x1e:
    temp_v5 = useCounterIsFinished();
    if (temp_v5 == 0) {
      temp_v5 = FUN_002c7c54();
      if (temp_v5 != 0x69) {
        uiQuestSortListByEntryKind((int)*(char *)(temp_v1 + 0x90c));
        if (*(char *)(temp_v1 + 0x90c) != '\0') {
          temp_v5 = temp_v1 + 0xa10;
        }
        else {
          temp_v5 = temp_v1 + 0xad6;
        }
        temp_v6 = resourceRunOperationIfUnblocked(temp_v9);
        temp_v9 = FUN_002a4894(temp_v9);
        temp_v3 = *(unsigned short *)(temp_v5 + (temp_v9 + temp_v6) * 2);
        if (*(int *)(temp_v1 + 0x92c) != 0) {
          if (*(char *)(temp_v1 + 0x943) == '\0') {
            asdMemFree();
          }
          *(unsigned int *)(temp_v1 + 0x92c) = 0;
        }
        FUN_003d498c(temp_v3,1);
      }
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    useCounterRelease();
    FUN_0023ff10();
    FUN_003d474c();
    temp_v7 = 2;
  }
  temp_v9 = g_uiQuest;
  *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
  *(unsigned int *)(temp_v9 + 4) = temp_v7;
  *(unsigned int *)(temp_v9 + 0x10) = 0;
  *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
  return 0;
}

} /* extern "C" */
