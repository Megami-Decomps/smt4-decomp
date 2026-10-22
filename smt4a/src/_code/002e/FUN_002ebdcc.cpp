/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebdcc` (_code @ 0x2ebdcc, 0x8a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015f858(...);
int FUN_001695a0(void);
int FUN_00180118(...);
int partyFindSlotById(...);
int FUN_002292ac(void);
int messageForwardDefaultMode(...);
int libc_strcpy(...);
int asdOperatorNewD(void);
int asdOperatorDeleteC(...);
int FUN_003180c4(...);
int FUN_00359974(...);
int FUN_003dea6c(...);
int FUN_00417c24(...);
int flagValueSub(...);
int FUN_004d0d70(void);

int sysPlaySe(int);
int FUN_001ad9b4(void);
int scrWorkGetValue(...);
int scrWorkSetValue(...);
int messageSlotSet(int);
int resultCreate(int);
int scrCommMessageSetMode(...);
int btlTalkBustUpCreate(void);
int eventTexSetFlag(int);
int scrSetResult(...);
int uniteReleaseExit(void);
int FUN_00331714(int *);
int FUN_00336de4(unsigned int, int);
int bustupCutAnimSetFlag(int);
int btlTalkBustUpSetUnk2F4(int);
int FUN_003deea4(...);
int FUN_003df168(int *, unsigned int);
int gameFlagSetValue(...);
int FUN_00417a60(...);
int gameFlagSlotSetEnableBit(unsigned int, int);
int optionsClearFlag1(void);

/* stack frame of void: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern unsigned int gameGetPlayerName(void);
/* Supplied declaration required: FUN_0015f858. */
extern int engineCleanupIsDone(void);
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_001695a0. */
extern int dataTableValueOrZero(unsigned int);
/* Supplied declaration required: FUN_00180118. */
extern int gameGetOptions(void);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001ada74(unsigned int);
/* Supplied declaration required: partyFindSlotById. */
/* Supplied declaration required: FUN_002292ac. */
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: messageForwardDefaultMode. */
/* Supplied declaration required: scrWorkGetValue. */
/* Supplied declaration required: scrWorkSetValue. */
/* Supplied declaration required: messageSlotSet. */
extern int messageGetChoiceResult(void);
/* Supplied declaration required: resultCreate. */
/* Supplied declaration required: scrCommMessageSetMode. */
/* Supplied declaration required: btlTalkBustUpCreate. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: asdOperatorNewD. */
/* Supplied declaration required: asdOperatorDeleteC. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: eventTexSetFlag. */
extern int btlTalkBustUpExists(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: uniteReleaseExit. */
/* Supplied declaration required: FUN_00331714. */
/* Supplied declaration required: FUN_00336de4. */
/* Supplied declaration required: bustupCutAnimSetFlag. */
/* Supplied declaration required: FUN_00359974. */
extern int FUN_0035fcbc(void);
/* Supplied declaration required: btlTalkBustUpSetUnk2F4. */
extern unsigned int btlTalkBustUpGetId(void);
/* Supplied declaration required: FUN_003dea6c. */
/* Supplied declaration required: FUN_003deea4. */
/* Supplied declaration required: FUN_003df168. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_00417a60. */
/* Supplied declaration required: FUN_00417c24. */
/* Supplied declaration required: gameFlagSlotSetEnableBit. */
extern int FUN_004186a4(void);
extern unsigned int FUN_004186e0(void);
/* Supplied declaration required: flagValueSub. */
/* Supplied declaration required: FUN_004d0d70. */
/* Supplied declaration required: optionsClearFlag1. */


unsigned int FUN_002ebdcc(void)

{
/* irregular: 36 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned short *puVar12;
  int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  
  temp_v1 = scrGetArg(0) & 0xffff;
  temp_v2 = scrGetCommandFrame();
  if (temp_v2 == 0) {
    scrWorkSetValue(0);
    temp_v4 = temp_v1;
    FUN_001ad9b4();
    temp_v2 = FUN_001ada74(temp_v1);
    if (temp_v2 != 0) {
      if (*(char *)(temp_v4 + 6) != '\0') {
        if (*(char *)(temp_v4 + 6) != '\x04') {
          temp_v3 = 0;
        }
        else {
          scrWorkSetValue(0,2);
          scrWorkSetValue(1,0);
          temp_v3 = 2;
        }
        scrWorkSetValue(temp_v3,0);
      }
      else {
        scrWorkSetValue(0,2);
        scrWorkSetValue(1,0);
        scrWorkSetValue(2,0);
        if (*(char *)(temp_v4 + 6) == '\0') {
          temp_v2 = gameFlagsGetBlock();
          gameFlagSlotSetEnableBit(temp_v1,0);
          *(unsigned short *)(temp_v2 + 0x1096) = 0;
          *(unsigned short *)(temp_v2 + 0x1094) = 0;
        }
      }
      temp_v2 = 0;
      do {
        temp_v10 = temp_v4 + temp_v2 * 2;
        temp_v0 = *(short *)(temp_v10 + 0xe0);
        if (temp_v0 != 0) {
          gameFlagSetValue(temp_v0,1);
        }
        temp_v0 = *(short *)(temp_v10 + 0xe6);
        if (temp_v0 != 0) {
          gameFlagSetValue(temp_v0,0,1);
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 3);
      return 0;
    }
    scrSetResult(0);
    return 1;
  }
  temp_v2 = dataTableValueOrZero(0x1e);
  temp_v4 = temp_v1;
  FUN_001ad9b4();
  temp_v3 = scrWorkGetValue(0);
  switch(temp_v3) {
  case 0:
    temp_v2 = FUN_0035fcbc();
    if (temp_v2 == 0) {
      eventTexSetFlag(0);
      bustupCutAnimSetFlag(0);
      temp_v2 = btlTalkBustUpExists();
      if (temp_v2 != 0) {
        temp_v3 = btlTalkBustUpGetId();
        scrWorkSetValue(2,temp_v3);
      }
      else {
        scrWorkSetValue(2,0xffffffff);
      }
      btlTalkBustUpSetUnk2F4(0);
      scrWorkSetValue(3,0);
      scrCommMessageSetMode(1);
      resultCreate(1);
      temp_v23 = 0;
      temp_v24 = 0;
      temp_v11 = 0;
      temp_v12 = 0;
      temp_v13 = 0;
      temp_v14 = 0;
      temp_v15 = 0;
      temp_v16 = 0;
      temp_v17 = 0;
      temp_v18 = 0;
      temp_v19 = 0;
      temp_v20 = 0;
      temp_v21 = 0;
      temp_v22 = 0;
      FUN_003df168(&temp_v11,temp_v1);
      FUN_00331714(&temp_v11);
      scrWorkSetValue(0,1);
    }
    break;
  case 1:
    temp_v2 = engineCleanupIsDone();
    if (temp_v2 != 0) {
      uniteReleaseExit();
      scrCommMessageSetMode(0xffffffff);
      messageSlotSet(0);
      sysPlaySe(0x92);
      scrWorkGetValue(3);
      eventTexSetFlag(1);
      bustupCutAnimSetFlag(1);
      temp_v4 = scrWorkGetValue(2);
      if (-1 < (int)temp_v4) {
        temp_v2 = btlTalkBustUpExists();
        if (temp_v2 == 0) {
          btlTalkBustUpCreate();
        }
        if ((temp_v4 != 0) && (temp_v5 = btlTalkBustUpGetId(), temp_v5 != temp_v4)) {
          FUN_00336de4(temp_v4 & 0xffff,0);
        }
        btlTalkBustUpSetUnk2F4(1);
      }
      temp_v2 = FUN_004186a4();
      if ((temp_v2 != 0) && (temp_v4 = FUN_004186e0(), temp_v4 == temp_v1)) {
        optionsClearFlag1();
      }
      FUN_00417a60(temp_v1);
      FUN_003deea4(0);
      scrSetResult(1);
      return 1;
    }
    break;
  case 2:
    temp_v10 = scrWorkGetValue(2);
    temp_v3 = 9;
    if (*(char *)(temp_v4 + 6) != '\x04') {
      temp_v10 = temp_v4 + temp_v10 * 8;
      if (*(short *)(temp_v10 + 0x100) != 1) {
        if (*(short *)(temp_v10 + 0x100) == 2) {
          temp_v1 = (unsigned int)*(unsigned short *)(temp_v10 + 0x102);
          temp_v3 = 10;
          FUN_00180118(temp_v1);
          libc_strcpy(&temp_v13,temp_v1);
          FUN_003180c4(8,&temp_v13);
          FUN_00359974(0x18,*(unsigned int *)(temp_v10 + 0x104),0xffffffff,0);
        }
      }
      else {
        temp_v1 = (unsigned int)*(unsigned short *)(temp_v10 + 0x102);
        if (*(int *)(temp_v10 + 0x104) == 1) {
          temp_v3 = 8;
        }
        FUN_0015f858(temp_v1,1);
        libc_strcpy(&temp_v13,temp_v1);
        FUN_003180c4(0,&temp_v13);
        FUN_00359974(0x18,*(unsigned int *)(temp_v10 + 0x104),0xffffffff,0);
      }
    }
    else {
      temp_v3 = 8;
      temp_v6 = gameGetOptions();
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v6 + 0x62);
      FUN_00180118(temp_v1);
      libc_strcpy(&temp_v13,temp_v1);
      FUN_003180c4(0,&temp_v13);
      FUN_00359974(0x18,*(unsigned int *)(temp_v4 + temp_v10 * 8 + 0x104),0xffffffff,0);
    }
    FUN_001695a0();
    temp_v11 = 1;
    messageForwardDefaultMode(temp_v2,temp_v3,0,6);
    scrWorkSetValue(1,0);
    scrWorkSetValue(0,3);
    break;
  case 3:
    FUN_001695a0();
    FUN_002292ac();
    temp_v3 = scrWorkGetValue(1);
    temp_v11 = 0;
    messageForwardDefaultMode(temp_v2,0xb,temp_v3);
    temp_v10 = scrWorkGetValue(1);
    scrWorkSetValue(1,temp_v10 + 1);
    if (temp_v2 != 1) {
      return 0;
    }
    temp_v2 = messageGetChoiceResult();
    if (temp_v2 != 0) {
      scrWorkSetValue(1,0);
      scrWorkSetValue(0,4);
      return 0;
    }
    temp_v2 = scrWorkGetValue(2);
    temp_v2 = temp_v2 + 1;
    scrWorkSetValue(2,temp_v2);
    if (*(char *)(temp_v4 + 6) != '\x04') {
      if (*(char *)(temp_v4 + 6) != '\0') {
        return 0;
      }
      if ((temp_v2 < 4) && (*(short *)(temp_v4 + temp_v2 * 8 + 0x100) != 0)) {
        scrWorkSetValue(0,2);
        return 0;
      }
      temp_v2 = 0;
      do {
        temp_v10 = temp_v4 + temp_v2 * 8;
        if (*(short *)(temp_v10 + 0x100) != 1) {
          if (*(short *)(temp_v10 + 0x100) == 2) {
            partyFindSlotById(*(unsigned short *)(temp_v10 + 0x102));
            FUN_004d0d70();
          }
        }
        else {
          flagValueSub(*(unsigned short *)(temp_v10 + 0x102),*(unsigned int *)(temp_v10 + 0x104));
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
      scrWorkSetValue(1,0);
      scrWorkSetValue(0,5);
      return 0;
    }
    scrWorkSetValue(0);
    break;
  case 4:
    FUN_001695a0();
    temp_v3 = scrWorkGetValue(1);
    temp_v11 = 0;
    messageForwardDefaultMode(temp_v2,0xc,temp_v3,6);
    temp_v10 = scrWorkGetValue(1);
    scrWorkSetValue(1,temp_v10 + 1);
    if (temp_v2 == 1) {
      scrSetResult(2);
      return 1;
    }
    break;
  case 5:
    temp_v9 = 0x3a;
    temp_v10 = scrWorkGetValue(2);
    temp_v3 = gameGetPlayerName();
    libc_strcpy(&temp_v13,temp_v3);
    FUN_003180c4(0,&temp_v13);
    if (temp_v10 >= 2) {
      temp_v9 = 0x3b;
    }
    FUN_001695a0();
    temp_v3 = scrWorkGetValue(1);
    temp_v11 = 0;
    messageForwardDefaultMode(temp_v2,temp_v9,temp_v3,6);
    temp_v10 = scrWorkGetValue(1);
    scrWorkSetValue(1,temp_v10 + 1);
    if (temp_v2 != 1) {
      return 0;
    }
    scrWorkSetValue(1,0);
    scrWorkSetValue(0);
    break;
  default:
    FUN_00417a60(temp_v1);
    FUN_003deea4(0);
    scrSetResult(1);
    return 1;
  case 7:
    temp_v6 = scrWorkGetValue(3);
    temp_v7 = scrWorkGetValue(2);
    temp_v10 = temp_v7 << 1;
    asdOperatorNewD();
    puVar12 = (unsigned short *)(temp_v10 + temp_v6 * 2);
    FUN_003dea6c(*puVar12,0,1);
    FUN_001695a0();
    temp_v3 = scrWorkGetValue(1);
    temp_v11 = 0;
    messageForwardDefaultMode(temp_v2,0x10,temp_v3,6);
    temp_v8 = scrWorkGetValue(1);
    scrWorkSetValue(1,temp_v8 + 1);
    if (temp_v2 == 1) {
      FUN_00417c24(*puVar12);
      if (temp_v7 <= temp_v6 + 1) {
        scrWorkSetValue(1,0);
        scrWorkSetValue(2,0);
        scrWorkSetValue(3,0);
        asdOperatorDeleteC(temp_v10);
        FUN_00417a60(temp_v1);
        FUN_003deea4(0);
        scrSetResult(1);
        return 1;
      }
      scrWorkSetValue(1,0);
      scrWorkSetValue(3,temp_v6 + 1);
    }
    asdOperatorDeleteC(temp_v10);
  }
  return 0;
}

} /* extern "C" */
