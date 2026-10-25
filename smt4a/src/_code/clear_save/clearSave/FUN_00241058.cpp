/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241058` (_code @ 0x241058, 0x5c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "gamedata/GameFlags.h"
#include "map/mapRndMaze.h"
#include "clear_save/clearSave.h"

extern "C" {

int asdSequenceRequest(...);
int jobStop(...);
int sysPlaySe(...);
int FUN_0019de98(...);
int uiAdjustIntegerFromRepeat(...);
int slotSetRequest(...);
int FUN_00239b08(void);
int FUN_00261a28(...);
int scrScriptProcessStartEntry(...);
int saveLoadStartWindowWithArgument(...);
int FUN_003d54f8(int, int);
int clearTwoWordsAndByte(...);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned int *g_clearSave; /* 0x57f394 */

/* Supplied declaration required: asdSequenceRequest. */
/* Supplied declaration required: jobStop. */
extern int jobGetWork(void);
extern int padButtonRepeat(unsigned int);
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: sysPlaySe. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_0019de98. */
extern int gameGetSlotTable(void);
extern unsigned int gameSlotTableFindFree(void);
/* Supplied declaration required: uiAdjustIntegerFromRepeat. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: FUN_00212204. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_00239b08. */
/* Supplied declaration required: FUN_00261a28. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int screenFadeIsBusy(void);
extern unsigned int messageMainGetValue(void);
extern int messageGetChoiceResult(void);
extern int FUN_002e07f4(void);
extern int FUN_0037de28(void);
/* Supplied declaration required: saveLoadStartWindowWithArgument. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: clearTwoWordsAndByte. */


unsigned int FUN_00241058(void)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = jobGetWork();
  switch(*(unsigned int *)(temp_v0 + 0xc)) {
  case 0:
    *(unsigned int *)(temp_v0 + 0xc) = 1;
    slotSetRequest(0,0,0xff);
    slotSetRequest(1,0,0xff);
    break;
  case 1:
    *(unsigned int *)(temp_v0 + 0xc) = 2;
    FUN_003d54f8(0,0x14);
    FUN_003d54f8(1,0x14);
    break;
  case 2:
    temp_v5 = FUN_002e07f4();
    if (temp_v5 != 0) {
      *(unsigned int *)(temp_v0 + 0xc) = 8;
      sysPlaySe(0xa9);
      scrScriptProcessStartEntry(*(unsigned int *)(temp_v0 + 0x90),1);
    }
    break;
  case 3:
    temp_v5 = uiAdjustIntegerFromRepeat(temp_v0 + 0x20,0,8,1,0,1);
    if (temp_v5 == 0) {
      temp_v5 = padButtonIsPressed(0);
      if (temp_v5 == 0) {
        temp_v5 = padButtonRepeat(4);
        if ((temp_v5 == 0) && (temp_v5 = padButtonRepeat(3), temp_v5 == 0)) {
          return 0;
        }
        temp_v2 = *(unsigned int *)(temp_v0 + 0x20);
        if (temp_v2 >= 7) {
          return 0;
        }
        *(unsigned char *)(temp_v2 + temp_v0 + 0x10) = *(char *)(temp_v2 + temp_v0 + 0x10) != '\x01';
        return 0;
      }
      temp_v5 = *(int *)(temp_v0 + 0x20);
      if (temp_v5 == 7) {
        *(unsigned int *)(temp_v0 + 0xc) = 4;
        slotSetRequest(0,10,0xff);
        slotSetRequest(1,10,0xff);
        return 0;
      }
      if (temp_v5 != 8) {
        if (temp_v5 != 6) {
          return 0;
        }
        if (*(char *)(temp_v0 + 0x16) == '\0') {
          return 0;
        }
        *(unsigned int *)(temp_v0 + 0x24) = 0xffffffff;
        *(unsigned int *)(temp_v0 + 0xc) = 7;
        temp_v4 = gameSlotTableFindFree();
        *(unsigned int *)(temp_v0 + 0x88) = temp_v4;
        temp_v5 = gameGetSlotTable();
        temp_v1 = 0;
        if (temp_v1 < *(int *)(temp_v0 + 0x88)) {
          do {
            *(int *)(temp_v0 + temp_v1 * 4 + 0x28) = (int)*(char *)(temp_v5 + temp_v1 + 0x1c88);
            if ((int)*(char *)(temp_v5 + temp_v1 + 0x1c88) == *(int *)(temp_v0 + 0x1c)) {
              *(int *)(temp_v0 + 0x24) = temp_v1;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < *(int *)(temp_v0 + 0x88));
        }
        temp_v5 = *(int *)(temp_v0 + 0x24);
        if (temp_v5 < 1) {
          temp_v5 = 0;
        }
        *(int *)(temp_v0 + 0x24) = temp_v5;
        *(unsigned int *)(temp_v0 + 0x1c) = *(unsigned int *)(temp_v0 + temp_v5 * 4 + 0x28);
        return 0;
      }
      *(unsigned int *)(temp_v0 + 0xc) = 6;
      temp_v4 = *(unsigned int *)(temp_v0 + 0x90);
      temp_v6 = 0;
      scrScriptProcessStartEntry(temp_v4,temp_v6);
      return 0;
    }
    temp_v2 = *(unsigned int *)(temp_v0 + 0x20);
    temp_v4 = dataTableGet(0x3c,0);
    temp_v0 = dataTableGetEntries();
    temp_v3 = dataTableGetCount(temp_v4);
    if (temp_v2 >= temp_v3) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = temp_v0 + temp_v2 * 0x50;
    }
    FUN_0019de98(temp_v0,0xf4f4f4ff);
    break;
  case 6:
    temp_v5 = scrRunOpcodesStub(*(unsigned int *)(temp_v0 + 0x90));
    if (temp_v5 != 2) {
      return 0;
    }
    temp_v5 = messageGetChoiceResult();
    if (temp_v5 == 0) {
      *(unsigned int *)(temp_v0 + 0xc) = 0xb;
      slotSetRequest(0,10,0xff);
      slotSetRequest(1,10,0xff);
      return 0;
    }
    if (temp_v5 != 1) {
      return 0;
    }
    temp_v4 = 2;
    *(unsigned int *)(temp_v0 + 0xc) = temp_v4;
    break;
  case 7:
    temp_v5 = uiAdjustIntegerFromRepeat(temp_v0 + 0x24,0,*(int *)(temp_v0 + 0x88) - 1,1,1,1);
    if (temp_v5 != 0) {
      return 0;
    }
    temp_v5 = padButtonIsPressed(1);
    if (temp_v5 != 0) {
      *(unsigned int *)(temp_v0 + 0xc) = 3;
      return 0;
    }
    temp_v5 = padButtonIsPressed(0);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v4 = 3;
    *(unsigned int *)(temp_v0 + 0x1c) = *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x24) * 4 + 0x28);
    *(unsigned char *)(temp_v0 + 0x16) = 1;
    *(unsigned int *)(temp_v0 + 0xc) = temp_v4;
    break;
  case 8:
    temp_v5 = scrRunOpcodesStub(*(unsigned int *)(temp_v0 + 0x90));
    if (temp_v5 == 2) {
      clearTwoWordsAndByte(temp_v0 + 0x10);
      temp_v5 = messageGetChoiceResult();
      if (temp_v5 != 0) {
        if (temp_v5 == 1) {
          *(unsigned char *)(temp_v0 + 0x17) = 1;
          *(unsigned char *)(temp_v0 + 0x16) = 1;
        }
      }
      else {
        *(unsigned char *)(temp_v0 + 0x11) = 1;
        *(unsigned char *)(temp_v0 + 0x10) = 1;
        *(unsigned char *)(temp_v0 + 0x17) = 1;
        *(unsigned char *)(temp_v0 + 0x14) = 1;
        *(unsigned char *)(temp_v0 + 0x15) = 1;
        *(unsigned char *)(temp_v0 + 0x16) = 1;
        *(unsigned char *)(temp_v0 + 0x18) = 1;
      }
      FUN_00261a28(temp_v0 + 0x10);
      gameFlagSetValue(0x556, 1, 1);
      gameFlagSetValue(0x555, 1, 1);
      saveLoadStartWindowWithArgument(2);
      temp_v4 = 9;
      *(unsigned int *)(temp_v0 + 0xc) = temp_v4;
      break;
    }
    temp_v2 = messageMainGetValue();
    temp_v4 = dataTableGet(0x3c,0);
    temp_v0 = dataTableGetEntries();
    temp_v3 = dataTableGetCount(temp_v4);
    if (temp_v2 < temp_v3) {
      temp_v0 = temp_v0 + temp_v2 * 0x50;
      FUN_0019de98(temp_v0,0xf4f4f4ff);
      break;
    }
    temp_v0 = 0;
    FUN_0019de98(temp_v0,0xf4f4f4ff);
    break;
  case 9:
    temp_v5 = FUN_002ef9f0();
    if (temp_v5 != 0) {
      return 0;
    }
    temp_v5 = FUN_0037de28();
    if (temp_v5 == 0) {
      FUN_00239b08();
      *(unsigned int *)(temp_v0 + 0xc) = 10;
      sysPlaySe(0xa9);
      temp_v4 = *(unsigned int *)(temp_v0 + 0x90);
      temp_v6 = 2;
      scrScriptProcessStartEntry(temp_v4,temp_v6);
      return 0;
    }
    slotSetRequest(0,0x14,0xff);
    slotSetRequest(1,0x14,0xff);
    temp_v4 = 0xb;
    *(unsigned int *)(temp_v0 + 0xc) = temp_v4;
    break;
  case 10:
    temp_v5 = scrRunOpcodesStub(*(unsigned int *)(temp_v0 + 0x90));
    if (temp_v5 != 2) {
      return 0;
    }
    temp_v5 = messageGetChoiceResult();
    if (temp_v5 == 0) {
      slotSetRequest(0,0x14,0xff);
      slotSetRequest(1,0x14,0xff);
      temp_v4 = 0xb;
      *(unsigned int *)(temp_v0 + 0xc) = temp_v4;
      break;
    }
    if (temp_v5 != 1) {
      return 0;
    }
    temp_v4 = 2;
    *(unsigned int *)(temp_v0 + 0xc) = temp_v4;
    break;
  case 0xb:
    temp_v5 = screenFadeIsBusy();
    if (temp_v5 == 0) {
      if (*(char *)(temp_v0 + 8) != '\0') {
        FUN_00212204(0);
        FUN_00212204(1);
        jobStop(*g_clearSave,0);
      }
      else {
        asdSequenceRequest(1,0);
      }
      return 0xffffffff;
    }
  }
  return 0;
}

} /* extern "C" */
