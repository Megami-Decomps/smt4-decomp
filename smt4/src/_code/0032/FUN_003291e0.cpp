/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003291e0` (_code @ 0x3291e0, 0x978 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gauntletAppSortMenuEntries(void);
int FUN_00241f2c(...);
int scrScriptProcessStartEntry(...);
int FUN_00298d64(...);
int flaggedEntrySetValueA(...);
int useCounterRelease(void);
int useCounterStart(void);
int FUN_0029e328(...);
int sortMenuCreate(...);
int FUN_0029ede8(...);
int FUN_002ae584(void);
int FUN_002dfefc(...);

int dataTable0BFindById(...);
int FUN_00242000(...);
int FUN_00248738(...);
unsigned int appTryPurchase(unsigned int, int, int);
int appCheckPurchaseRequirements(void);
int textEncodeFontSlot(...);
int FUN_0029eb5c(int, int);
int FUN_0029efc0(...);
int FUN_0029efd8(...);
int uiScrollHandleActionsOrTouch(...);
int FUN_0029f848(...);
int FUN_002b8584(int, int);
int buttonHelpSetPreset(...);
int eventQueueAddUnique(...);
int eventQueueAddUniqueIfValid(...);
int FUN_002bf818(...);
int FUN_002bff6c(int, int, int, int, int);
int FUN_002c1658(...);

/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: gauntletAppSortMenuEntries. */
/* Supplied declaration required: FUN_00241f2c. */
/* Supplied declaration required: dataTable0BFindById. */
/* Supplied declaration required: FUN_00242000. */
/* Supplied declaration required: FUN_00248738. */
/* Supplied declaration required: appTryPurchase. */
/* Supplied declaration required: appCheckPurchaseRequirements. */
extern int flagBitIsSet(unsigned int);
/* Supplied declaration required: textEncodeFontSlot. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int messageMainGetChoiceResult(void);
/* Supplied declaration required: FUN_00298d64. */
/* Supplied declaration required: flaggedEntrySetValueA. */
extern unsigned int flaggedEntryGetValueA(int);
/* Supplied declaration required: useCounterRelease. */
extern int useCounterIsFinished(void);
/* Supplied declaration required: useCounterStart. */
/* Supplied declaration required: FUN_0029e328. */
/* Supplied declaration required: sortMenuCreate. */
/* Supplied declaration required: FUN_0029eb5c. */
/* Supplied declaration required: FUN_0029ede8. */
extern int FUN_0029ee54(int);
extern int FUN_0029efa8(int);
/* Supplied declaration required: FUN_0029efc0. */
/* Supplied declaration required: FUN_0029efd8. */
/* Supplied declaration required: uiScrollHandleActionsOrTouch. */
/* Supplied declaration required: FUN_0029f848. */
extern int sys43e188GetState(void);
/* Supplied declaration required: FUN_002ae584. */
/* Supplied declaration required: FUN_002b8584. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern int padIsButtonRepeat(unsigned int);
/* Supplied declaration required: eventQueueAddUnique. */
extern int FUN_002b8ee0(int, unsigned int);
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern unsigned int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf818. */
extern int padIsButtonPressed(unsigned int);
/* Supplied declaration required: FUN_002bff6c. */
/* Supplied declaration required: FUN_002c1658. */
/* Supplied declaration required: FUN_002dfefc. */


unsigned int FUN_003291e0(int *param_1)

{
/* irregular: 30 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  char temp_v12 [4];
  
  temp_v7 = *param_1;
  FUN_002bf818(temp_v7 + 0x364);
  FUN_002bf818(temp_v7 + 0x3f0);
  temp_v9 = 0x100016d;
  temp_v10 = 0x100016e;
  switch(*(unsigned int *)(temp_v7 + 8)) {
  case 0:
    temp_v6 = FUN_002b8ee0(temp_v7 + 0x2d8,0);
    if (temp_v6 != 0) {
      buttonHelpSetPreset(0x19);
      FUN_00242000(temp_v7);
      FUN_00248738(temp_v7,3);
      temp_v6 = 0;
      do {
        temp_v4 = FUN_0029ee54(temp_v7 + 0x10);
        if (temp_v4 <= temp_v6) break;
        temp_v1 = FUN_002b8584(0x1d,temp_v6 + 0x40e);
        temp_v4 = temp_v6 * 2;
        temp_v6 = temp_v6 + 1;
        *(unsigned short *)(temp_v7 + temp_v4 + 0x508) = temp_v1;
        *(short *)(temp_v7 + 0x524) = *(short *)(temp_v7 + 0x524) + 1;
      } while (temp_v6 < 10);
      temp_v1 = FUN_002b8584(0x1d,0x573);
      *(unsigned short *)(temp_v7 + 0x51e) = temp_v1;
      temp_v1 = FUN_002b8584(0x1d,0x574);
      *(unsigned short *)(temp_v7 + 0x520) = temp_v1;
      temp_v1 = FUN_002b8584(0x1d,0x575);
      *(unsigned short *)(temp_v7 + 0x522) = temp_v1;
      *(short *)(temp_v7 + 0x524) = *(short *)(temp_v7 + 0x524) + 3;
    }
    break;
  case 1:
    temp_v6 = padIsButtonPressed(0);
    if (temp_v6 == 0) {
      temp_v6 = padIsButtonPressed(1);
      if (temp_v6 != 0) {
        eventQueueAddUniqueIfValid(0x100016e);
        return 0xffffffff;
      }
      temp_v6 = padIsButtonRepeat(5);
      if ((temp_v6 == 0) && (temp_v6 = padIsButtonRepeat(0xe), temp_v6 == 0)) {
        temp_v6 = padIsButtonRepeat(6);
        if ((temp_v6 == 0) && (temp_v6 = padIsButtonRepeat(0xf), temp_v6 == 0)) {
          temp_v6 = 0xa0;
          FUN_002bff6c(0xa0,0x30,200,0x20,2);
          if (temp_v6 != 0) {
            temp_v4 = FUN_0029efa8(temp_v7 + 0x10);
            temp_v6 = temp_v4 - 1;
            if (temp_v4 - 1 < 0) {
              temp_v6 = 0;
            }
          }
          else {
            temp_v6 = 0xa0;
            FUN_002bff6c(0xa0,0xc6,200,0x20,2);
            if (temp_v6 == 0) {
              return 0;
            }
            temp_v4 = FUN_0029efa8(temp_v7 + 0x10);
            temp_v2 = FUN_0029ee54(temp_v7 + 0x10);
            temp_v6 = temp_v4 + 1;
            if (temp_v2 <= temp_v4 + 1) {
              temp_v6 = temp_v4;
            }
          }
          FUN_0029eb5c(temp_v7 + 0x10,temp_v6);
          FUN_0029efd8(temp_v7 + 0x10,1);
          return 0;
        }
        temp_v6 = *(int *)(temp_v7 + 0xc) + 1;
        *(int *)(temp_v7 + 0xc) = temp_v6;
        if (temp_v6 < 2) {
          return 0;
        }
        *(unsigned int *)(temp_v7 + 0xc) = 0;
        return 0;
      }
      temp_v6 = *(int *)(temp_v7 + 0xc) - 1;
      *(int *)(temp_v7 + 0xc) = temp_v6;
      if (-1 < temp_v6) {
        return 0;
      }
      *(unsigned int *)(temp_v7 + 0xc) = 1;
      return 0;
    }
    if (*(int *)(temp_v7 + 0xc) != 0) {
      if (*(int *)(temp_v7 + 0xc) != 1) {
        return 0;
      }
      FUN_00248738(temp_v7,3);
    }
    else {
      FUN_00248738(temp_v7,2);
    }
    if (temp_v7 == 0) {
      return 0;
    }
    eventQueueAddUniqueIfValid(temp_v9);
    break;
  case 2:
    temp_v6 = temp_v7 + 0x10;
    FUN_0029efd8(temp_v6,1);
    if (temp_v6 != 0) {
      FUN_00242000();
      return 0;
    }
    temp_v6 = padIsButtonPressed(0);
    if (temp_v6 == 0) {
      temp_v6 = padIsButtonPressed(1);
      if (temp_v6 == 0) {
        return 0;
      }
      FUN_00248738(temp_v7,1);
      if (temp_v7 == 0) {
        return 0;
      }
      eventQueueAddUniqueIfValid();
      return 0;
    }
    temp_v6 = FUN_0029efc0(temp_v7 + 0x10);
    temp_v4 = FUN_0029efa8(temp_v7 + 0x10);
    temp_v6 = *(int *)(temp_v7 + (temp_v4 + temp_v6) * 4 + 0x74);
    temp_v6 = appTryPurchase(temp_v6,0,0);
    if (temp_v6 == 0) {
      return 0;
    }
    eventQueueAddUniqueIfValid(0x100016d);
    *(unsigned int *)(temp_v7 + 0x2a8) = 0;
    if (*(char *)(temp_v7 + 0x2b4) != '\0') {
      temp_v10 = 0x2e;
      temp_v6 = flagBitIsSet(0x2e);
      if (temp_v6 == 0) {
        temp_v6 = 0x2e;
        appCheckPurchaseRequirements();
        if (temp_v6 == 0) {
          *(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0x2a8) * 4 + 0x74) = temp_v10;
          *(int *)(temp_v7 + 0x2a8) = *(int *)(temp_v7 + 0x2a8) + 1;
        }
      }
    }
    else if (*(char *)(temp_v7 + 0x2b5) == '\0') {
      temp_v8 = 1;
      do {
        temp_v6 = flagBitIsSet(temp_v8);
        if ((temp_v6 == 0) && (temp_v5 = temp_v8, appCheckPurchaseRequirements(), temp_v5 == 0)) {
          *(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0x2a8) * 4 + 0x74) = temp_v8;
          *(int *)(temp_v7 + 0x2a8) = *(int *)(temp_v7 + 0x2a8) + 1;
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0x8d);
    }
    else {
      temp_v10 = 0x18;
      temp_v6 = flagBitIsSet(0x18);
      if (temp_v6 == 0) {
        temp_v6 = 0x18;
        appCheckPurchaseRequirements();
        if (temp_v6 == 0) {
          *(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0x2a8) * 4 + 0x74) = temp_v10;
          *(int *)(temp_v7 + 0x2a8) = *(int *)(temp_v7 + 0x2a8) + 1;
        }
      }
    }
    FUN_0029f848(temp_v7 + 0x10,*(unsigned int *)(temp_v7 + 0x2a8),10,1,1,1);
    if (*(int *)(temp_v7 + 0x2a8) != 0) {
      return 0;
    }
    temp_v10 = 1;
    FUN_00248738(temp_v7,temp_v10);
    return 0;
  case 3:
    temp_v12[0] = '\0';
    temp_v3 = FUN_002bf4f8(0x1d,0x575);
    temp_v6 = temp_v7 + 0x10;
    uiScrollHandleActionsOrTouch(temp_v6,temp_v3,temp_v7 + 0x508,(int)*(short *)(temp_v7 + 0x522),
                 (int)*(short *)(temp_v7 + 0x51e),(int)*(short *)(temp_v7 + 0x520),temp_v12,0,1);
    if (temp_v6 != 0) {
      FUN_00242000();
      return 0;
    }
    temp_v6 = temp_v7 + 0x10;
    FUN_0029efd8(temp_v6,1);
    if (temp_v6 != 0) {
      FUN_00242000();
      return 0;
    }
    temp_v6 = 0;
    FUN_002c1658(0,1);
    if (temp_v6 != 0 || temp_v12[0] != '\0') {
      temp_v6 = FUN_0029efc0(temp_v7 + 0x10);
      temp_v4 = FUN_0029efa8(temp_v7 + 0x10);
      temp_v4 = *(int *)(temp_v7 + (temp_v4 + temp_v6) * 4 + 0x74);
      temp_v6 = appTryPurchase(temp_v4,0,1);
      if (temp_v6 == 0) {
        eventQueueAddUnique(0x100016e);
        return 0;
      }
      temp_v6 = temp_v4;
      dataTable0BFindById(temp_v4);
      textEncodeFontSlot(0,temp_v6);
      FUN_00241f2c(temp_v4);
      FUN_0029ede8(0x18,temp_v4,0xffffffff,0);
      scrScriptProcessStartEntry(*(unsigned int *)(temp_v7 + 0x530),0);
      FUN_00248738(temp_v7,4);
      temp_v10 = temp_v9;
      eventQueueAddUniqueIfValid(temp_v10);
      return 0;
    }
    temp_v6 = 1;
    FUN_002c1658();
    if (temp_v6 != 0) {
      temp_v0 = *(char *)(temp_v7 + 0x2b4);
      temp_v8 = temp_v7 + 0x200;
      temp_v11 = temp_v0 != '\0';
      if (!temp_v11) {
        temp_v0 = *(char *)(temp_v7 + 0x2b5);
      }
      if (temp_v11 || temp_v0 != '\0') {
        return 0;
      }
      temp_v11 = *(char *)(temp_v7 + 0x2b6) != '\0';
      if (!temp_v11) {
        temp_v8 = (unsigned int)*(unsigned char *)(temp_v7 + 0x2b7);
      }
      if (temp_v11 || temp_v8 != 0) {
        return 0;
      }
      FUN_00248738(temp_v7,7);
      eventQueueAddUniqueIfValid(temp_v10);
      return 0;
    }
    temp_v6 = 9;
    FUN_002c1658(9,1);
    if (temp_v6 == 0) {
      return 0;
    }
    eventQueueAddUniqueIfValid(0x100016d);
    sortMenuCreate(0xd,0);
    FUN_0029e328(0x21);
    FUN_0029e328(0x15);
    FUN_0029e328(0x16);
    FUN_0029e328(3);
    useCounterStart();
    temp_v10 = 6;
    FUN_00248738(temp_v7,temp_v10);
    return 0;
  case 4:
    temp_v6 = scrRunOpcodesStub(*(unsigned int *)(temp_v7 + 0x530));
    if ((temp_v6 == 2) && (temp_v6 = sys43e188GetState(), temp_v6 != 0)) {
      temp_v6 = messageMainGetChoiceResult();
      if (temp_v6 != 0) {
        FUN_00248738(temp_v7,3);
      }
      else {
        temp_v6 = FUN_0029efc0(temp_v7 + 0x10);
        temp_v4 = FUN_0029efa8(temp_v7 + 0x10);
        appTryPurchase(*(unsigned int *)(temp_v7 + (temp_v4 + temp_v6) * 4 + 0x74),0,0);
        eventQueueAddUnique(0x100025c);
        FUN_00248738(temp_v7,5);
      }
      buttonHelpSetPreset(0x19);
    }
    break;
  case 5:
    temp_v6 = FUN_002bf818(temp_v7 + 0x47c);
    if (temp_v6 == 0) {
      return 0;
    }
    temp_v0 = *(char *)(temp_v7 + 0x2b4);
    temp_v11 = temp_v0 == '\0';
    if (temp_v11) {
      temp_v0 = *(char *)(temp_v7 + 0x2b5);
    }
    if (temp_v11 && temp_v0 == '\0') {
      temp_v0 = *(char *)(temp_v7 + 0x2b6);
      temp_v11 = temp_v0 == '\0';
      if (temp_v11) {
        temp_v0 = *(char *)(temp_v7 + 0x2b7);
      }
      if (temp_v11 && temp_v0 == '\0') {
        temp_v10 = FUN_0029efc0(temp_v7 + 0x10);
        temp_v9 = flaggedEntryGetValueA(temp_v7 + 0x10);
        *(unsigned int *)(temp_v7 + 0x2a8) = 0;
        if (*(char *)(temp_v7 + 0x2b4) != '\0') {
          *(unsigned int *)(temp_v7 + 0x74) = 0x2e;
          *(unsigned int *)(temp_v7 + 0x2a8) = 1;
        }
        else if (*(char *)(temp_v7 + 0x2b5) != '\0') {
          *(unsigned int *)(temp_v7 + 0x74) = 0x18;
          *(unsigned int *)(temp_v7 + 0x2a8) = 1;
        }
        else if (*(char *)(temp_v7 + 0x2b7) != '\0') {
          *(unsigned int *)(temp_v7 + 0x74) = 0x76;
          *(unsigned int *)(temp_v7 + 0x2a8) = 1;
        }
        else {
          temp_v8 = 1;
          do {
            temp_v5 = temp_v8;
            FUN_002ae584();
            if ((temp_v5 != 0) &&
               ((temp_v6 = flagBitIsSet(temp_v8), temp_v6 != 0 ||
                (temp_v5 = temp_v8, appCheckPurchaseRequirements(), temp_v5 != 2)))) {
              *(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0x2a8) * 4 + 0x74) = temp_v8;
              *(int *)(temp_v7 + 0x2a8) = *(int *)(temp_v7 + 0x2a8) + 1;
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < 0x8d);
        }
        FUN_0029f848(temp_v7 + 0x10,*(unsigned int *)(temp_v7 + 0x2a8),10,1,1,1);
        gauntletAppSortMenuEntries();
        FUN_00298d64(temp_v7 + 0x10,temp_v10);
        flaggedEntrySetValueA(temp_v7 + 0x10,temp_v9);
        FUN_00242000(temp_v7);
        FUN_00248738(temp_v7,3);
        return 0;
      }
    }
    FUN_00248738(temp_v7,7);
    temp_v9 = temp_v10;
    eventQueueAddUniqueIfValid(temp_v9);
    break;
  case 6:
    temp_v6 = useCounterIsFinished();
    if (temp_v6 != 0) {
      useCounterRelease();
      buttonHelpSetPreset(0x19);
      FUN_00242000(temp_v7);
      FUN_00248738(temp_v7,3);
    }
    else {
      gauntletAppSortMenuEntries();
    }
    break;
  case 7:
    temp_v7 = FUN_002bf818(temp_v7 + 0x2d8);
    if (temp_v7 != 0) {
      FUN_002dfefc(1);
      return 0xffffffff;
    }
  }
  return 0;
}

} /* extern "C" */
