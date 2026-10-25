/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023eaf8` (_code @ 0x23eaf8, 0x81c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(...);
int FUN_0019de98(...);
int FUN_001ad9b4(void);
int FUN_00212724(void);
int useCounterStart(void);
int slotBlockSetPair(...);
int FUN_0031f208(...);
int sortMenuAcquire(...);
int FUN_003dea6c(...);

int FUN_001517b4(...);
int eventQueueAddUniqueIfValid(...);
int uiSpriteSetKeyframe(...);
int uiSpriteSetImageKeyframe(...);
int asdMemFree(void);
int FUN_00228b04(int, int);
int FUN_0023ff10(void);
int resourceRunOperationIfUnblocked(...);
int questMarkSelectedSpecialDetail(void);
int FUN_003450d4(int, unsigned int, int, int, int, int, char [8], int, int);
int FUN_003d474c(void);
int FUN_003d498c(...);
unsigned int questHasSpecialDetailPage(unsigned int);
int FUN_00417d08(...);
int SBORROW4(...);

/* stack frame of void: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int g_uiQuest; /* 0x57f28c */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001517b4. */
extern int campIsState85(void);
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: sysPlaySe. */
extern unsigned int asdTMTexTableEntryAt(unsigned int, unsigned int);
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: FUN_00212724. */
/* Supplied declaration required: FUN_00228b04. */
/* Supplied declaration required: useCounterStart. */
/* Supplied declaration required: FUN_0023ff10. */
extern int scrScriptProcessStartEntry(unsigned int, unsigned int);
/* Supplied declaration required: resourceRunOperationIfUnblocked. */
extern int FUN_002a4894(int);
/* Supplied declaration required: questMarkSelectedSpecialDetail. */
extern int objectApplyIfUnblocked(int);
/* Supplied declaration required: slotBlockSetPair. */
extern int FUN_002f7730(int, unsigned int);
extern unsigned int flaggedEntryGetValueA(int);
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: sortMenuAcquire. */
/* Supplied declaration required: FUN_003450d4. */
/* Supplied declaration required: FUN_003d474c. */
/* Supplied declaration required: FUN_003d498c. */
extern int FUN_003de75c(unsigned int);
/* Supplied declaration required: FUN_003dea6c. */
extern int recordCategoryNineIsActiveInMode24(unsigned int);
/* Supplied declaration required: FUN_00417d08. */
extern int partyEntryFlagsBit3(unsigned int);
extern int FUN_004186a4(void);
extern unsigned int FUN_004186e0(void);
extern int partyEntryBitsBit4(unsigned int);


void FUN_0023eaf8(void)

{
/* irregular: 5 goto(s); 24 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned short temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  char temp_v15 [8];
  
  temp_v2 = g_uiQuest;
  if (*(char *)(g_uiQuest + 0x90c) != '\0') {
    temp_v11 = g_uiQuest + 0x948;
    temp_v8 = g_uiQuest + 0xa10;
  }
  else {
    temp_v11 = g_uiQuest + 0x9ac;
    temp_v8 = g_uiQuest + 0xad6;
  }
  temp_v3 = objectApplyIfUnblocked(temp_v11);
  temp_v12 = 0x100020f;
  if (temp_v3 < 1) {
    temp_v11 = 1;
    FUN_001517b4();
    if (temp_v11 != 0) {
      uiSpriteSetKeyframe(temp_v2 + 0x34,2,0);
      uiSpriteSetImageKeyframe(temp_v2 + 0x34,9,0);
      temp_v11 = g_uiQuest;
      temp_v12 = *(unsigned int *)(g_uiQuest + 4);
      *(unsigned int *)(g_uiQuest + 4) = 3;
      *(unsigned int *)(temp_v11 + 8) = temp_v12;
      *(unsigned int *)(temp_v11 + 0x10) = 0;
      eventQueueAddUniqueIfValid(0x100020f);
    }
  }
  else {
    temp_v3 = resourceRunOperationIfUnblocked(temp_v11);
    temp_v4 = FUN_002a4894(temp_v11);
    temp_v1 = *(short *)(temp_v8 + (temp_v4 + temp_v3) * 2);
    temp_v15[0] = '\0';
    temp_v5 = asdTMTexTableEntryAt(0x1e,0xc1);
    temp_v3 = temp_v11;
    FUN_003450d4(temp_v11,temp_v5,temp_v2 + 0xd28,(int)*(short *)(temp_v2 + 0xd42),
                 (int)*(short *)(temp_v2 + 0xd3e),(int)*(short *)(temp_v2 + 0xd40),temp_v15,0,1);
    if (temp_v3 != 0) {
      temp_v3 = resourceRunOperationIfUnblocked(temp_v11);
      temp_v4 = FUN_002a4894(temp_v11);
      if (*(short *)(temp_v8 + (temp_v4 + temp_v3) * 2) != temp_v1) {
        temp_v3 = resourceRunOperationIfUnblocked(temp_v11);
        temp_v4 = FUN_002a4894(temp_v11);
        temp_v9 = *(unsigned short *)(temp_v8 + (temp_v4 + temp_v3) * 2);
        temp_v10 = (unsigned int)temp_v9;
        if (*(int *)(temp_v2 + 0x92c) != 0) {
          if (*(char *)(temp_v2 + 0x943) == '\0') {
            asdMemFree();
          }
          *(unsigned int *)(temp_v2 + 0x92c) = 0;
        }
        FUN_003d498c(temp_v10,1);
        FUN_003d474c();
        FUN_0023ff10();
        temp_v8 = g_uiQuest;
        temp_v3 = partyEntryBitsBit4(temp_v10);
        if ((temp_v3 == 0) && ((temp_v6 = questHasSpecialDetailPage(temp_v10)) != 0)) {
          temp_v3 = 0;
          if (temp_v3 < *(int *)(temp_v8 + 0x918)) {
            do {
              temp_v4 = FUN_002f7730(temp_v3,temp_v10);
              if (temp_v4 == 3) break;
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < *(int *)(temp_v8 + 0x918));
          }
          if (*(int *)(temp_v8 + 0x918) <= temp_v3) {
            temp_v3 = 0;
          }
          *(int *)(temp_v8 + 0x910) = temp_v3;
          *(int *)(temp_v8 + 0x914) = temp_v3;
        }
        if (*(short *)(temp_v2 + 0xcd0) >= 3) {
          questMarkSelectedSpecialDetail();
        }
        temp_v6 = (unsigned int)*(unsigned short *)(temp_v2 + 0xcce);
        temp_v14 = SBORROW4(temp_v6,temp_v10);
        temp_v8 = temp_v6 - temp_v10;
        temp_v13 = temp_v6 != temp_v10;
        if (temp_v13) {
          temp_v6 = (unsigned int)*(short *)(temp_v2 + 0xcd0);
          temp_v14 = SBORROW4(temp_v6,2);
          temp_v8 = temp_v6 - 2;
        }
        if ((temp_v13 && temp_v6 != 2) && temp_v8 < 0 == temp_v14) {
          FUN_00417d08(temp_v2);
        }
        *(unsigned short *)(temp_v2 + 0xcce) = temp_v9;
        *(unsigned short *)(temp_v2 + 0xcd0) = 0;
      }
    }
    else {
      temp_v3 = temp_v11;
      FUN_00228b04(temp_v11,1);
      if (temp_v3 != 0) {
        temp_v3 = resourceRunOperationIfUnblocked(temp_v11);
        temp_v4 = FUN_002a4894(temp_v11);
        temp_v9 = *(unsigned short *)(temp_v8 + (temp_v4 + temp_v3) * 2);
        temp_v10 = (unsigned int)temp_v9;
        if (*(int *)(temp_v2 + 0x92c) != 0) {
          if (*(char *)(temp_v2 + 0x943) == '\0') {
            asdMemFree();
          }
          *(unsigned int *)(temp_v2 + 0x92c) = 0;
        }
        FUN_003d498c(temp_v10,1);
        FUN_003d474c();
        FUN_0023ff10();
        temp_v8 = g_uiQuest;
        temp_v3 = partyEntryBitsBit4(temp_v10);
        if ((temp_v3 == 0) && ((temp_v6 = questHasSpecialDetailPage(temp_v10)) != 0)) {
          temp_v3 = 0;
          if (temp_v3 < *(int *)(temp_v8 + 0x918)) {
            do {
              temp_v4 = FUN_002f7730(temp_v3,temp_v10);
              if (temp_v4 == 3) break;
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < *(int *)(temp_v8 + 0x918));
          }
          if (*(int *)(temp_v8 + 0x918) <= temp_v3) {
            temp_v3 = 0;
          }
          *(int *)(temp_v8 + 0x910) = temp_v3;
          *(int *)(temp_v8 + 0x914) = temp_v3;
        }
        if (*(short *)(temp_v2 + 0xcd0) >= 3) {
          questMarkSelectedSpecialDetail();
        }
        temp_v6 = (unsigned int)*(unsigned short *)(temp_v2 + 0xcce);
        temp_v14 = SBORROW4(temp_v6,temp_v10);
        temp_v8 = temp_v6 - temp_v10;
        temp_v13 = temp_v6 != temp_v10;
        if (temp_v13) {
          temp_v6 = (unsigned int)*(short *)(temp_v2 + 0xcd0);
          temp_v14 = SBORROW4(temp_v6,2);
          temp_v8 = temp_v6 - 2;
        }
        if ((temp_v13 && temp_v6 != 2) && temp_v8 < 0 == temp_v14) {
          FUN_00417d08(temp_v2);
        }
        *(unsigned short *)(temp_v2 + 0xcce) = temp_v9;
        *(unsigned short *)(temp_v2 + 0xcd0) = 0;
      }
      else {
        temp_v3 = 8;
        FUN_001517b4(8,0);
        if (temp_v3 != 0) {
          temp_v8 = *(int *)(temp_v2 + 0x910) - 1;
          *(int *)(temp_v2 + 0x914) = temp_v8;
          if (temp_v8 < 0) {
            temp_v8 = *(int *)(temp_v2 + 0x918) - 1;
            *(int *)(temp_v2 + 0x914) = temp_v8;
          }
          else {
            temp_v8 = *(int *)(temp_v2 + 0x914);
          }
          if (temp_v8 != *(int *)(temp_v2 + 0x910)) {
            uiSpriteSetKeyframe(temp_v2 + 0x1d8,3,0);
            uiSpriteSetImageKeyframe(temp_v2 + 0x1d8,9,0);
            temp_v8 = g_uiQuest;
            temp_v12 = *(unsigned int *)(g_uiQuest + 4);
            *(unsigned int *)(g_uiQuest + 4) = 5;
            *(unsigned int *)(temp_v8 + 8) = temp_v12;
            *(unsigned int *)(temp_v8 + 0x10) = 0;
            temp_v12 = 0x1000210;
LAB_0023f080:
            eventQueueAddUniqueIfValid(temp_v12);
          }
        }
        else {
          temp_v3 = 7;
          FUN_001517b4(7,0);
          if (temp_v3 != 0) {
            temp_v8 = *(int *)(temp_v2 + 0x910) + 1;
            *(int *)(temp_v2 + 0x914) = temp_v8;
            if (*(int *)(temp_v2 + 0x918) <= temp_v8) {
              *(unsigned int *)(temp_v2 + 0x914) = 0;
            }
            if (*(int *)(temp_v2 + 0x914) != *(int *)(temp_v2 + 0x910)) {
              uiSpriteSetKeyframe(temp_v2 + 0x1d8,2,0);
              uiSpriteSetImageKeyframe(temp_v2 + 0x1d8,9,0);
              temp_v8 = g_uiQuest;
              temp_v12 = *(unsigned int *)(g_uiQuest + 4);
              *(unsigned int *)(g_uiQuest + 4) = 5;
              *(unsigned int *)(temp_v8 + 8) = temp_v12;
              *(unsigned int *)(temp_v8 + 0x10) = 0;
              temp_v12 = 0x1000210;
              eventQueueAddUniqueIfValid(temp_v12);
            }
          }
          else {
            if (*(char *)(temp_v2 + 0x90c) == '\0') {
              temp_v3 = 9;
              FUN_001517b4(9,1);
              if (temp_v3 != 0) {
                eventQueueAddUniqueIfValid(0x100020e);
                FUN_0019de98(0,0xf4f4f4ff);
                sortMenuAcquire(0xe,0);
                FUN_0031f208(0x22);
                FUN_0031f208(0x21);
                FUN_0031f208(0x18);
                FUN_0031f208(0x19);
                useCounterStart();
                temp_v12 = 0x1e;
                temp_v8 = g_uiQuest;
                temp_v5 = *(unsigned int *)(g_uiQuest + 4);
                *(unsigned int *)(g_uiQuest + 4) = temp_v12;
                *(unsigned int *)(temp_v8 + 8) = temp_v5;
                *(unsigned int *)(temp_v8 + 0x10) = 0;
                goto LAB_0023f2a8;
              }
              if (*(char *)(temp_v2 + 0x90c) == '\0') {
                if (*(char *)(temp_v2 + 0x93d) == '\0') {
                  temp_v3 = 10;
                  FUN_001517b4(10,1);
                  if (temp_v3 != 0) goto LAB_0023f2a8;
                  if (*(char *)(temp_v2 + 0x90c) != '\0') goto LAB_0023f21c;
                }
                temp_v3 = 0;
                FUN_001517b4(0,1);
                if (temp_v3 != 0 || temp_v15[0] != '\0') {
                  temp_v4 = resourceRunOperationIfUnblocked(temp_v11);
                  temp_v7 = FUN_002a4894(temp_v11);
                  temp_v3 = g_uiQuest;
                  temp_v10 = (unsigned int)*(unsigned short *)(temp_v8 + (temp_v7 + temp_v4) * 2);
                  if (*(char *)(temp_v2 + 0x93d) != '\0') {
                    temp_v12 = *(unsigned int *)(g_uiQuest + 4);
                    *(unsigned int *)(g_uiQuest + 4) = 0xd;
                    *(unsigned int *)(temp_v3 + 8) = temp_v12;
                    *(unsigned int *)(temp_v3 + 0x10) = 0;
                    temp_v12 = 0x100020e;
                    goto LAB_0023f080;
                  }
                  temp_v6 = temp_v10;
                  FUN_001ad9b4();
                  FUN_003dea6c(temp_v10,0,1);
                  temp_v0 = *(char *)(temp_v6 + 6);
                  if ((temp_v0 == '\x06' || temp_v0 == '\t') || temp_v0 == '\v') {
                    temp_v8 = FUN_003de75c(temp_v10);
                    if (temp_v8 != 0) {
                      temp_v8 = partyEntryFlagsBit3(temp_v10);
                      temp_v0 = '\0';
                      if (temp_v8 != 0) {
                        temp_v0 = *(char *)(temp_v6 + 6);
                      }
                      if (temp_v8 == 0 || temp_v0 == '\t') {
                        temp_v8 = FUN_004186a4();
                        if (temp_v8 != 0) {
                          temp_v6 = FUN_004186e0();
                          if ((temp_v6 != temp_v10) &&
                             (temp_v8 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x8fc),4), temp_v8 != 0)) {
                            sysPlaySe(0xb2);
                            temp_v8 = g_uiQuest;
                            temp_v12 = *(unsigned int *)(g_uiQuest + 4);
                            *(unsigned int *)(g_uiQuest + 4) = 10;
                            *(unsigned int *)(temp_v8 + 8) = temp_v12;
                            *(unsigned int *)(temp_v8 + 0x10) = 0;
                            temp_v12 = 0x100020e;
                            eventQueueAddUniqueIfValid(temp_v12);
                          }
                        }
                        else {
                          if (*(char *)(temp_v6 + 6) != '\x06') {
                            if (*(char *)(temp_v6 + 6) != '\v') {
                              temp_v3 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x8fc),0);
                              temp_v8 = g_uiQuest;
                            }
                            else {
                              temp_v3 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x8fc),0x12);
                              temp_v8 = g_uiQuest;
                            }
                          }
                          else {
                            temp_v3 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x8fc),0x11);
                            temp_v8 = g_uiQuest;
                          }
                          g_uiQuest = temp_v8;
                          if (temp_v3 != 0) {
                            temp_v12 = *(unsigned int *)(temp_v8 + 4);
                            *(unsigned int *)(temp_v8 + 4) = 6;
                            *(unsigned int *)(temp_v8 + 8) = temp_v12;
                            *(unsigned int *)(temp_v8 + 0x10) = 0;
                            sysPlaySe(0xe4);
                            temp_v12 = 0x100020e;
                            eventQueueAddUniqueIfValid(temp_v12);
                          }
                        }
                      }
                    }
                    else {
                      temp_v8 = recordCategoryNineIsActiveInMode24(temp_v10);
                      if ((temp_v8 != 0) &&
                         (temp_v8 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x8fc),4), temp_v8 != 0)) {
                        sysPlaySe(0xb2);
                        temp_v12 = 10;
                        temp_v8 = g_uiQuest;
                        temp_v5 = *(unsigned int *)(g_uiQuest + 4);
                        *(unsigned int *)(g_uiQuest + 4) = temp_v12;
                        *(unsigned int *)(temp_v8 + 8) = temp_v5;
                        *(unsigned int *)(temp_v8 + 0x10) = 0;
                      }
                    }
                  }
                  goto LAB_0023f2a8;
                }
              }
            }
LAB_0023f21c:
            temp_v8 = 1;
            FUN_001517b4();
            if (temp_v8 != 0) {
              uiSpriteSetKeyframe(temp_v2 + 0x34,2,0);
              uiSpriteSetImageKeyframe(temp_v2 + 0x34,9,0);
              temp_v8 = g_uiQuest;
              temp_v5 = *(unsigned int *)(g_uiQuest + 4);
              *(unsigned int *)(g_uiQuest + 4) = 3;
              *(unsigned int *)(temp_v8 + 8) = temp_v5;
              *(unsigned int *)(temp_v8 + 0x10) = 0;
              temp_v8 = campIsState85();
              if (temp_v8 != 0) {
                FUN_00212724();
              }
              questMarkSelectedSpecialDetail();
              if (*(short *)(temp_v2 + 0xcce) != 0) {
                FUN_00417d08(temp_v2);
                *(unsigned short *)(temp_v2 + 0xcce) = 0;
              }
              eventQueueAddUniqueIfValid(temp_v12);
            }
          }
        }
      }
    }
LAB_0023f2a8:
    temp_v14 = *(char *)(temp_v2 + 0x90c) == '\0';
    if (!temp_v14) {
      temp_v12 = resourceRunOperationIfUnblocked(temp_v11);
      temp_v5 = flaggedEntryGetValueA(temp_v11);
    }
    else {
      temp_v12 = resourceRunOperationIfUnblocked(temp_v11);
      temp_v5 = flaggedEntryGetValueA(temp_v11);
    }
    slotBlockSetPair(temp_v14,temp_v5,temp_v12);
  }
  *(short *)(temp_v2 + 0xcd0) = *(short *)(temp_v2 + 0xcd0) + 1;
  return;
}

} /* extern "C" */
