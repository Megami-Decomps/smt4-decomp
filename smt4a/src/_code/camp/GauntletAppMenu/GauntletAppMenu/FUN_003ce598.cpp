/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ce598` (_code @ 0x3ce598, 0xa90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "gamedata/GameFlags.h"
#include "gamedata/KeyedCatalog.h"

extern "C" {

int FUN_001517b4(...);
int eventQueueAddUnique(...);
int campResetScreen(void);
int useCounterStart(void);
int msgWindowReset(void);
int scrollOwnerSetValue(...);
int FUN_003180c4(...);
int flaggedEntrySetValueA(...);
int FUN_0031f208(...);
int sortMenuAcquire(...);
int messageBannerRestartOrClear(void);
int FUN_00353b00(...);
int FUN_00359974(...);
int useCounterRelease(void);
int gauntletAppBuildAvailableEntries(...);
int gauntletAppSortMenuEntries(void);

int uiPointerHitsRect(int, int, int, int, int);
int FUN_00163aa4(...);
int eventQueueAddUniqueIfValid(...);
int FUN_001643b4(int, int);
int sysPlaySe(...);
int FUN_00203b40(...);
int FUN_0021b1a8(...);
int FUN_00228b04(...);
int campHideNumericBanner(void);
int scrScriptProcessStartEntry(...);
int resourceRunOperationIfUnblocked(...);
int FUN_002a4964(...);
int FUN_003450d4(...);
int FUN_003dc0c0(...);
int FUN_003e41f8(...);
int FUN_003e45bc(...);

/* stack frame of void: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int g_gauntletAppMenu; /* 0x57f238 */

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: uiPointerHitsRect. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: FUN_001643b4. */
extern int padButtonRepeat(unsigned int);
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: eventQueueAddUnique. */
extern unsigned int FUN_001834a4(unsigned int, unsigned int);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_0021b1a8. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: campResetScreen. */
/* Supplied declaration required: FUN_00228b04. */
/* Supplied declaration required: campHideNumericBanner. */
extern int useCounterIsFinished(void);
/* Supplied declaration required: useCounterStart. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: msgWindowReset. */
/* Supplied declaration required: resourceRunOperationIfUnblocked. */
extern int FUN_002a4894(int);
/* Supplied declaration required: scrollOwnerSetValue. */
/* Supplied declaration required: FUN_002a4964. */
extern int messageGetChoiceResult(void);
extern int objectApplyIfUnblocked(int);
/* Supplied declaration required: FUN_003180c4. */
extern unsigned int flaggedEntryGetValueA(int);
/* Supplied declaration required: flaggedEntrySetValueA. */
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: sortMenuAcquire. */
/* Supplied declaration required: FUN_003450d4. */
/* Supplied declaration required: messageBannerRestartOrClear. */
/* Supplied declaration required: FUN_00353b00. */
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: useCounterRelease. */
/* Supplied declaration required: gauntletAppBuildAvailableEntries. */
/* Supplied declaration required: gauntletAppSortMenuEntries. */
/* Supplied declaration required: FUN_003dc0c0. */
/* Supplied declaration required: FUN_003e41f8. */
extern int FUN_003e4230(unsigned int);
extern int areaConsumeOneShotFlags(unsigned int);
extern unsigned int dataRecordGetValue(unsigned int);
/* Supplied declaration required: FUN_003e45bc. */
extern int gameDataFlagTestBit(unsigned int);
extern int gameDataAreaBitTest(unsigned int);


unsigned int FUN_003ce598(void)

{
/* irregular: 33 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  char temp_v10 [12];
  
  temp_v6 = g_gauntletAppMenu;
  FUN_00163aa4(g_gauntletAppMenu + 0x364);
  FUN_00163aa4(temp_v6 + 0x3f0);
  temp_v8 = 0x100020e;
  switch(*(unsigned int *)(temp_v6 + 8)) {
  case 0:
    temp_v7 = FUN_00163aa4(temp_v6 + 0x2d8);
    if (temp_v7 != 0) {
      sysPlaySe(0x19);
      FUN_0021b1a8(temp_v6);
      temp_v7 = gameFlagIsSet(0x4b7);
      if (temp_v7 != 0) {
        FUN_003dc0c0(temp_v6,3);
      }
      else {
        scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x530),1);
        FUN_003dc0c0(temp_v6,8);
        campHideNumericBanner();
      }
      temp_v7 = 0;
      do {
        temp_v3 = objectApplyIfUnblocked(temp_v6 + 0x10);
        if (temp_v3 <= temp_v7) break;
        temp_v1 = FUN_001643b4(0x14,temp_v7 + 0x40e);
        temp_v3 = temp_v7 * 2;
        temp_v7 = temp_v7 + 1;
        *(unsigned short *)(temp_v6 + temp_v3 + 0x508) = temp_v1;
        *(short *)(temp_v6 + 0x524) = *(short *)(temp_v6 + 0x524) + 1;
      } while (temp_v7 < 10);
      temp_v1 = FUN_001643b4(0x14,0x573);
      *(unsigned short *)(temp_v6 + 0x51e) = temp_v1;
      temp_v1 = FUN_001643b4(0x14,0x574);
      *(unsigned short *)(temp_v6 + 0x520) = temp_v1;
      temp_v1 = FUN_001643b4(0x14,0x575);
      *(unsigned short *)(temp_v6 + 0x522) = temp_v1;
      *(short *)(temp_v6 + 0x524) = *(short *)(temp_v6 + 0x524) + 3;
    }
    break;
  case 1:
    temp_v7 = padButtonIsPressed(0);
    if (temp_v7 == 0) {
      temp_v7 = padButtonIsPressed(1);
      if (temp_v7 != 0) {
        eventQueueAddUniqueIfValid(0x100020f);
        return 0xffffffff;
      }
      temp_v7 = padButtonRepeat(5);
      if ((temp_v7 == 0) && (temp_v7 = padButtonRepeat(0xe), temp_v7 == 0)) {
        temp_v7 = padButtonRepeat(6);
        if ((temp_v7 == 0) && (temp_v7 = padButtonRepeat(0xf), temp_v7 == 0)) {
          temp_v7 = 0xa0;
          uiPointerHitsRect(0xa0,0x30,200,0x20,2);
          if (temp_v7 != 0) {
            temp_v3 = FUN_002a4894(temp_v6 + 0x10);
            temp_v7 = temp_v3 - 1;
            if (temp_v3 - 1 < 0) {
              temp_v7 = 0;
            }
          }
          else {
            temp_v7 = 0xa0;
            uiPointerHitsRect(0xa0,0xc6,200,0x20,2);
            if (temp_v7 == 0) {
              return 0;
            }
            temp_v3 = FUN_002a4894(temp_v6 + 0x10);
            temp_v2 = objectApplyIfUnblocked(temp_v6 + 0x10);
            temp_v7 = temp_v3 + 1;
            if (temp_v2 <= temp_v3 + 1) {
              temp_v7 = temp_v3;
            }
          }
          FUN_002a4964(temp_v6 + 0x10,temp_v7);
          FUN_00228b04(temp_v6 + 0x10,1);
          return 0;
        }
        temp_v7 = *(int *)(temp_v6 + 0xc) + 1;
        *(int *)(temp_v6 + 0xc) = temp_v7;
        if (temp_v7 < 2) {
          return 0;
        }
        *(unsigned int *)(temp_v6 + 0xc) = 0;
        return 0;
      }
      temp_v7 = *(int *)(temp_v6 + 0xc) - 1;
      *(int *)(temp_v6 + 0xc) = temp_v7;
      if (-1 < temp_v7) {
        return 0;
      }
      *(unsigned int *)(temp_v6 + 0xc) = 1;
      return 0;
    }
    if (*(int *)(temp_v6 + 0xc) != 0) {
      if (*(int *)(temp_v6 + 0xc) != 1) {
        return 0;
      }
      FUN_003dc0c0(temp_v6,3);
    }
    else {
      FUN_003dc0c0(temp_v6,2);
    }
    if (temp_v6 == 0) {
      return 0;
    }
    eventQueueAddUniqueIfValid(temp_v8);
    break;
  case 2:
    temp_v7 = temp_v6 + 0x10;
    FUN_00228b04(temp_v7,1);
    if (temp_v7 != 0) {
      FUN_0021b1a8(temp_v6);
      return 0;
    }
    temp_v7 = padButtonIsPressed(0);
    if (temp_v7 == 0) {
      temp_v7 = padButtonIsPressed(1);
      if (temp_v7 == 0) {
        return 0;
      }
      FUN_003dc0c0(temp_v6,1);
      if (temp_v6 == 0) {
        return 0;
      }
      eventQueueAddUniqueIfValid();
      return 0;
    }
    temp_v7 = resourceRunOperationIfUnblocked(temp_v6 + 0x10);
    temp_v3 = FUN_002a4894(temp_v6 + 0x10);
    temp_v7 = FUN_003e45bc(*(unsigned int *)(temp_v6 + (temp_v3 + temp_v7) * 4 + 0x74),0);
    if (temp_v7 == 0) {
      return 0;
    }
    eventQueueAddUniqueIfValid(0x100020e);
    *(unsigned int *)(temp_v6 + 0x2a8) = 0;
    if (*(char *)(temp_v6 + 0x2b4) != '\0') {
      temp_v8 = 0x2e;
      temp_v7 = gameDataFlagTestBit(0x2e);
      if (temp_v7 != 0) {
        FUN_00203b40(temp_v6 + 0x10,*(unsigned int *)(temp_v6 + 0x2a8),10,1,1,1);
        if (*(int *)(temp_v6 + 0x2a8) == 0) {
          FUN_003dc0c0(temp_v6,1);
        }
        return 0;
      }
      temp_v7 = FUN_003e4230(0x2e);
      if (temp_v7 == 0) {
        *(unsigned int *)(temp_v6 + *(int *)(temp_v6 + 0x2a8) * 4 + 0x74) = temp_v8;
        *(int *)(temp_v6 + 0x2a8) = *(int *)(temp_v6 + 0x2a8) + 1;
      }
    }
    else {
      if (*(char *)(temp_v6 + 0x2b5) == '\0') {
        temp_v4 = 1;
        do {
          temp_v7 = gameDataFlagTestBit(temp_v4);
          if ((temp_v7 == 0) && (temp_v7 = FUN_003e4230(temp_v4), temp_v7 == 0)) {
            *(unsigned int *)(temp_v6 + *(int *)(temp_v6 + 0x2a8) * 4 + 0x74) = temp_v4;
            *(int *)(temp_v6 + 0x2a8) = *(int *)(temp_v6 + 0x2a8) + 1;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x8d);
        FUN_00203b40(temp_v6 + 0x10,*(unsigned int *)(temp_v6 + 0x2a8),10,1,1,1);
        if (*(int *)(temp_v6 + 0x2a8) == 0) {
          FUN_003dc0c0(temp_v6,1);
        }
        return 0;
      }
      temp_v8 = 0x18;
      temp_v7 = gameDataFlagTestBit(0x18);
      if (temp_v7 == 0) {
        temp_v7 = FUN_003e4230(0x18);
        if (temp_v7 == 0) {
          *(unsigned int *)(temp_v6 + *(int *)(temp_v6 + 0x2a8) * 4 + 0x74) = temp_v8;
          *(int *)(temp_v6 + 0x2a8) = *(int *)(temp_v6 + 0x2a8) + 1;
        }
      }
    }
    FUN_00203b40(temp_v6 + 0x10,*(unsigned int *)(temp_v6 + 0x2a8),10,1,1,1);
    if (*(int *)(temp_v6 + 0x2a8) == 0) {
      FUN_003dc0c0(temp_v6,1);
    }
    return 0;
  case 3:
    temp_v7 = resourceRunOperationIfUnblocked(temp_v6 + 0x10);
    temp_v3 = FUN_002a4894(temp_v6 + 0x10);
    temp_v5 = *(unsigned int *)(temp_v6 + (temp_v3 + temp_v7) * 4 + 0x74);
    temp_v10[0] = '\0';
    temp_v8 = FUN_001834a4(0x14,0x575);
    temp_v7 = temp_v6 + 0x10;
    FUN_003450d4(temp_v7,temp_v8,temp_v6 + 0x508,(int)*(short *)(temp_v6 + 0x522),
                 (int)*(short *)(temp_v6 + 0x51e),(int)*(short *)(temp_v6 + 0x520),temp_v10,0,1);
    if (temp_v7 != 0) {
      FUN_0021b1a8(temp_v6);
      if (*(int *)(temp_v6 + 0x534) >= 3) {
        temp_v7 = gameDataAreaBitTest(temp_v5);
        if (temp_v7 != 0) {
          FUN_003e41f8(temp_v5,0);
        }
      }
    }
    else {
      temp_v7 = temp_v6 + 0x10;
      FUN_00228b04(temp_v7,1);
      if (temp_v7 == 0) {
        temp_v7 = 0;
        FUN_001517b4(0,1);
        if (!(temp_v7 == 0 && temp_v10[0] == '\0')) {
          temp_v7 = FUN_003e45bc(temp_v5,0,1);
          if (temp_v7 != 0) {
            temp_v8 = reinterpret_cast<u32>(FUN_00186f54(temp_v5));
            FUN_003180c4(0,temp_v8);
            temp_v8 = dataRecordGetValue(temp_v5);
            FUN_00359974(0x18,temp_v8,0xffffffff,0);
            scrScriptProcessStartEntry(*(unsigned int *)(temp_v6 + 0x530),0);
            FUN_003dc0c0(temp_v6,4);
            eventQueueAddUniqueIfValid(0x100020e);
            temp_v7 = gameDataAreaBitTest(temp_v5);
            if (temp_v7 != 0) {
              FUN_003e41f8(temp_v5,0);
            }
          }
          else {
            eventQueueAddUnique(0x100020f);
          }
        }
        else {
          temp_v7 = 1;
          FUN_001517b4();
          if (temp_v7 != 0) {
            temp_v0 = *(char *)(temp_v6 + 0x2b4);
            temp_v4 = temp_v6 + 0x200;
            temp_v9 = temp_v0 == '\0';
            if (temp_v9) {
              temp_v0 = *(char *)(temp_v6 + 0x2b5);
            }
            if (temp_v9 && temp_v0 == '\0') {
              temp_v9 = *(char *)(temp_v6 + 0x2b6) == '\0';
              if (temp_v9) {
                temp_v4 = (unsigned int)*(unsigned char *)(temp_v6 + 0x2b7);
              }
              if (temp_v9 && temp_v4 == 0) {
                FUN_003dc0c0(temp_v6,7);
                eventQueueAddUniqueIfValid(0x100020f);
              }
            }
          }
          else {
            temp_v7 = 9;
            FUN_001517b4(9,1);
            if (temp_v7 != 0) {
              eventQueueAddUniqueIfValid(0x100020e);
              sortMenuAcquire(0xd,0);
              FUN_0031f208(0x21);
              FUN_0031f208(0x15);
              FUN_0031f208(0x16);
              FUN_0031f208(3);
              useCounterStart();
              FUN_003dc0c0(temp_v6,6);
            }
            else {
              temp_v7 = 10;
              FUN_001517b4(10,1);
              if ((temp_v7 != 0) && (temp_v7 = areaConsumeOneShotFlags(temp_v5), temp_v7 != 0)) {
                eventQueueAddUniqueIfValid(0x100020f);
              }
            }
          }
        }
        *(int *)(temp_v6 + 0x534) = *(int *)(temp_v6 + 0x534) + 1;
        return 0;
      }
      FUN_0021b1a8(temp_v6);
      if (*(int *)(temp_v6 + 0x534) >= 3) {
        temp_v7 = gameDataAreaBitTest(temp_v5);
        if (temp_v7 != 0) {
          FUN_003e41f8(temp_v5,0);
        }
      }
    }
    *(unsigned int *)(temp_v6 + 0x534) = 0;
    *(int *)(temp_v6 + 0x534) = *(int *)(temp_v6 + 0x534) + 1;
    return 0;
  case 4:
    temp_v7 = scrRunOpcodesStub(*(unsigned int *)(temp_v6 + 0x530));
    if (temp_v7 == 2) {
      temp_v7 = messageGetChoiceResult();
      if (temp_v7 != 0) {
        FUN_003dc0c0(temp_v6,3);
      }
      else {
        temp_v7 = resourceRunOperationIfUnblocked(temp_v6 + 0x10);
        temp_v3 = FUN_002a4894(temp_v6 + 0x10);
        FUN_003e45bc(*(unsigned int *)(temp_v6 + (temp_v3 + temp_v7) * 4 + 0x74),0);
        eventQueueAddUnique(0x1000308);
        FUN_003dc0c0(temp_v6,5);
      }
      msgWindowReset();
      messageBannerRestartOrClear();
      sysPlaySe(0x19);
    }
    break;
  case 5:
    temp_v7 = FUN_00163aa4(temp_v6 + 0x47c);
    if (temp_v7 == 0) {
      return 0;
    }
    temp_v0 = *(char *)(temp_v6 + 0x2b4);
    temp_v4 = temp_v6 + 0x200;
    temp_v9 = temp_v0 == '\0';
    if (temp_v9) {
      temp_v0 = *(char *)(temp_v6 + 0x2b5);
    }
    if (temp_v9 && temp_v0 == '\0') {
      temp_v9 = *(char *)(temp_v6 + 0x2b6) == '\0';
      if (temp_v9) {
        temp_v4 = (unsigned int)*(unsigned char *)(temp_v6 + 0x2b7);
      }
      if (temp_v9 && temp_v4 == 0) {
        temp_v8 = resourceRunOperationIfUnblocked(temp_v6 + 0x10);
        temp_v5 = flaggedEntryGetValueA(temp_v6 + 0x10);
        gauntletAppBuildAvailableEntries(temp_v6);
        scrollOwnerSetValue(temp_v6 + 0x10,temp_v8);
        flaggedEntrySetValueA(temp_v6 + 0x10,temp_v5);
        FUN_0021b1a8(temp_v6);
        FUN_003dc0c0(temp_v6,3);
        return 0;
      }
    }
    FUN_003dc0c0(temp_v6,7);
    temp_v8 = 0x100020f;
    eventQueueAddUniqueIfValid(temp_v8);
    break;
  case 6:
    temp_v7 = useCounterIsFinished();
    if (temp_v7 != 0) {
      useCounterRelease();
      sysPlaySe(0x19);
      FUN_0021b1a8(temp_v6);
      FUN_003dc0c0(temp_v6,3);
    }
    else {
      gauntletAppSortMenuEntries();
    }
    break;
  case 7:
    temp_v6 = FUN_00163aa4(temp_v6 + 0x2d8);
    if (temp_v6 != 0) {
      FUN_00353b00(1);
      return 0xffffffff;
    }
    break;
  case 8:
    temp_v7 = scrRunOpcodesStub(*(unsigned int *)(temp_v6 + 0x530));
    if (temp_v7 == 2) {
      gameFlagSetValue(0x4b7, 1, 1);
      campResetScreen();
      FUN_0021b1a8(temp_v6);
      FUN_003dc0c0(temp_v6,3);
    }
  }
  return 0;
}

} /* extern "C" */
