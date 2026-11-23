/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00268770` (_code @ 0x268770, 0x2944 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include <stdio.h>
#include "util/Random.h"
#include "romwright_types.h"
#include "event/2dEvent/2dEventTex.h"
#include "addon/LookupRecord.h"
#include "code/Code0033.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

int table8Type5GetValue(void);

int buttonHelpSetText(...);
int scrScriptProcessCreate(void);
int listCursorGetRowOfChildIfUnblocked(...);
int statusDownRestartTransition(void);
int scrollListHandleTouch(...);
int FUN_002f7cd4(...);
int FUN_002f7f6c(...);
unsigned short* dataTable0cSub1GetText(unsigned short id);
int flaggedEntrySetValueB(...);
void statusSkillsCommitOnDialogResult(void*);
int screenShowMessage(...);
int obj04Finish(void);
int skillHelpUpdateAttributeAndTarget(...);
int screenStartOrClear(...);
int FUN_003d4104(void);

int qsort(...);
int FUN_0015f490(...);
int eventQueueAddUnique(...);
int useCounterStart(void);
int resourceRunOperationIfUnblocked(...);
int listCursorGetRowIfUnblocked(...);
int scrollListSetSelectionTracked(...);
int gridNavigationGetItemCount(...);
int useCounterAppendValue(...);
int sortMenuAcquire(...);
int useCounterRelease(void);

int padQueryLogicalKey(...);
int uiSpriteAdvanceAnimation(...);
int eventQueueAddUniqueIfValid(...);
int sysPlaySe(...);
int nkmBaseGetRecord(void);
int uiSpriteSelectAnim(...);
int uiSpriteSetKeyframe(...);
int gridNavigationConfigure(...);
int gridNavigationHandleConfirm(...);
int FUN_0023092c(void);
int statusDownSetSpriteMode(unsigned int, unsigned int, int);
int statusDownRebuildTouchRegions(void);
int recordGetModeForId(...);
int statusDownSwitchTab(...);
int flaggedEntryGetValueA(...);
int flaggedEntrySetValueA(...);
int buttonHelpSetPanelMode(...);
int uiScrollHandleActionsOrTouch(...);
int uiStoreTextureEntryCenter(...);
int statusDownInitializeSkillList(int);
int FUN_003e40d0(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} void_stack;

extern unsigned char LAB_0026b0b8; /* 0x26b0b8 */
extern int FUN_002b29fc(...); /* 0x2b29fc */
extern int entryRefCompareByKey(...); /* 0x2b2a94 */
extern int FUN_002ce088(...); /* 0x2ce088 */
extern int FUN_0034f2e0(...); /* 0x34f2e0 */
extern int recordCompareByKey(...); /* 0x34f378 */
extern int entryRefCompareByRankOrderId(...); /* 0x35fd60 */
extern int g_statusDown; /* 0x588fe8 */

/* Supplied declaration required: qsort. */
extern unsigned int demonGetRaceLabel(unsigned short, unsigned int);
/* Supplied declaration required: padQueryLogicalKey. */
/* Supplied declaration required: FUN_0015f490. */
extern int querySlotHasHandle(void);
/* Supplied declaration required: uiSpriteAdvanceAnimation. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern int uiSpriteSlideFromSide(int, unsigned int);
extern int ifTouchGetButtonHelpValue(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: nkmBaseGetRecord. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: buttonHelpSetText. */
/* Supplied declaration required: gridNavigationConfigure. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: gridNavigationHandleConfirm. */
extern int statusDownPanelIsOpenAndIdle(void);
/* Supplied declaration required: FUN_0023092c. */
/* Supplied declaration required: statusDownSetSpriteMode. */
/* Supplied declaration required: statusDownRebuildTouchRegions. */
extern int useCounterIsFinished(void);
/* Supplied declaration required: useCounterStart. */
extern int uniteNotBusy(void);
extern int itemIsCollectedWithRelated(unsigned short);
/* Supplied declaration required: scrScriptProcessCreate. */
/* Supplied declaration required: recordGetModeForId. */
extern short resourceRunEmbeddedOperationIfUnblocked(int);
/* Supplied declaration required: resourceRunOperationIfUnblocked. */
/* Supplied declaration required: listCursorGetRowOfChildIfUnblocked. */
/* Supplied declaration required: listCursorGetRowIfUnblocked. */
/* Supplied declaration required: scrollListSetSelectionTracked. */
extern int messageMainGetValue(void);
/* Supplied declaration required: statusDownRestartTransition. */
/* Supplied declaration required: gridNavigationGetItemCount. */
extern int useCounterGetCurrentValue(void);
/* Supplied declaration required: statusDownSwitchTab. */
extern unsigned short *gameGlobalsGetBlock1390(void);
extern int gameGlobalsGetFieldState(void);
extern int gameGlobalsGetSceneState(void);
/* Supplied declaration required: scrollListHandleTouch. */
/* Supplied declaration required: FUN_002f7cd4. */
/* Supplied declaration required: FUN_002f7f6c. */
/* Supplied declaration required: dataTable0cSub1GetText. */
/* Supplied declaration required: flaggedEntryGetValueA. */
/* Supplied declaration required: flaggedEntrySetValueB. */
/* Supplied declaration required: flaggedEntrySetValueA. */
/* Supplied declaration required: useCounterAppendValue. */
/* Supplied declaration required: sortMenuAcquire. */
extern int FUN_00334044(void);
/* Supplied declaration required: gameGlobalsSetMenuOpenFlag. */
/* Supplied declaration required: statusSkillsCommitOnDialogResult. */
/* Supplied declaration required: screenShowMessage. */
/* Supplied declaration required: buttonHelpSetPanelMode. */
/* Supplied declaration required: uiScrollHandleActionsOrTouch. */
/* Supplied declaration required: obj04Finish. */
extern int asdSoundIsBankHandleLoaded(unsigned int);
/* Supplied declaration required: skillHelpUpdateAttributeAndTarget. */
/* Supplied declaration required: useCounterRelease. */
extern int FUN_0037b564(void);
/* Supplied declaration required: screenStartOrClear. */
/* Supplied declaration required: uiStoreTextureEntryCenter. */
/* Supplied declaration required: statusDownInitializeSkillList. */
extern int fieldStateAllowsAction(void);
extern unsigned int sysPlayVoice(unsigned int);
/* Supplied declaration required: FUN_003d4104. */
/* Supplied declaration required: FUN_003e40d0. */
/* Supplied declaration required: table8Type5GetValue. */


unsigned int FUN_00268770(void)

{
/* irregular: 8 goto(s); 57 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  short temp_v4;
  short temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned short *puVar10;
  int temp_v9;
  int temp_v10;
  unsigned int *puVar13;
  unsigned short *puVar14;
  unsigned int temp_v11;
  unsigned char *puVar16;
  unsigned int temp_v12;
  unsigned short temp_v13;
  int temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned char temp_v17 [76];
  
  temp_v2 = g_statusDown;
  *(unsigned char *)(g_statusDown + 0x24a0) = 0;
  temp_v6 = flaggedEntryGetValueA(temp_v2 + 0x5ec);
  *(unsigned char *)(temp_v2 + 0x59b) = 0;
  temp_v7 = recordGetModeForId((int)*(short *)(temp_v2 + 0x58e));
  *(unsigned int *)(temp_v2 + 0x530) = temp_v7;
  temp_v7 = recordGetModeForId((int)*(short *)(temp_v2 + 0x590));
  *(unsigned int *)(temp_v2 + 0x534) = temp_v7;
  temp_v7 = recordGetModeForId((int)*(short *)(temp_v2 + 0x58c));
  *(unsigned int *)(temp_v2 + 0x538) = temp_v7;
  temp_v7 = recordGetModeForId((int)*(short *)(temp_v2 + 0x592));
  *(unsigned int *)(temp_v2 + 0x53c) = temp_v7;
  temp_v7 = recordGetModeForId((int)*(short *)(temp_v2 + 0x594));
  *(unsigned int *)(temp_v2 + 0x540) = temp_v7;
  temp_v14 = 0;
  *(unsigned int *)(temp_v2 + 0x52c) = 0xffffffff;
  do {
    if ((-1 < *(short *)(temp_v2 + temp_v14 * 2 + 0x544)) &&
       (temp_v8 = recordGetModeForId(), temp_v8 == 1 || temp_v8 == 2)) {
      *(int *)(temp_v2 + 0x52c) = temp_v14;
      break;
    }
    temp_v14 = temp_v14 + 1;
  } while (temp_v14 < 0x24);
  temp_v8 = statusDownPanelIsOpenAndIdle();
  if (temp_v8 == 0) {
    *(unsigned int *)(temp_v2 + 0x53c) = 0;
    *(unsigned int *)(temp_v2 + 0x540) = 0;
  }
  switch(*(unsigned int *)(temp_v2 + 0x518)) {
  case 1:
    if (*(char *)(g_statusDown + 0x2584) != '\0') {
      FUN_003e40d0(g_statusDown + 0x2588,0);
    }
    temp_v14 = uiSpriteAdvanceAnimation(temp_v2 + 0x28);
    temp_v6 = g_statusDown;
    if (temp_v14 != 0) {
      temp_v7 = *(unsigned int *)(temp_v2 + 0x520);
      *(unsigned int *)(g_statusDown + 0x524) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x518);
      temp_v12 = *puVar13;
      *puVar13 = temp_v7;
      *(unsigned int *)(temp_v6 + 0x51c) = temp_v12;
      statusDownRebuildTouchRegions();
      *(unsigned char *)(temp_v2 + 0x528) = 1;
    }
    break;
  case 2:
    if (*(char *)(g_statusDown + 0x2584) != '\0') {
      FUN_003e40d0(g_statusDown + 0x2588,0);
    }
    uiSpriteAdvanceAnimation(temp_v2 + 0x28);
    if (*(char *)(temp_v2 + 0xb2) != '\0') {
      if (*(int *)(temp_v2 + 0x520) != 0) {
        if ((*(short *)(temp_v2 + 0x78) == 3) || (*(short *)(temp_v2 + 0x78) == 9)) {
          temp_v7 = 0;
        }
        else {
          temp_v7 = 1;
        }
        statusDownSetSpriteMode(temp_v7,0xffffffff,0);
        temp_v6 = g_statusDown;
        *(unsigned int *)(g_statusDown + 0x524) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x518);
        temp_v7 = *puVar13;
        *puVar13 = 1;
        *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
        temp_v6 = gameGlobalsGetFieldState();
        temp_v16 = temp_v6 != 0xe;
        temp_v15 = temp_v6 != 7;
        temp_v7 = 0x29;
        temp_v12 = 0;
        temp_v6 = fieldStateAllowsAction();
        if (temp_v6 != 0) {
          temp_v7 = 0xfa;
        }
        if (*(int *)(temp_v2 + 0x520) == 3) {
          if (!(temp_v16 && temp_v15)) {
            puVar10 = (unsigned short *)gameGlobalsGetBlock1390();
            temp_v11 = (unsigned int)*puVar10;
            nkmBaseGetRecord();
            if ((*(unsigned char *)(temp_v11 + 0xb3) & 2) == 0) {
              temp_v7 = 0x31;
            }
            else {
              temp_v7 = 0xf1;
            }
          }
          else {
            temp_v6 = gameGlobalsGetFieldState();
            if (temp_v6 == 4) {
              temp_v7 = 0xf1;
            }
            else {
              temp_v6 = gameGlobalsGetSceneState();
              if (temp_v6 == 0xd) {
                temp_v7 = 0x119;
              }
              else {
                temp_v6 = FUN_00334044();
                if (temp_v6 != 2) {
                  if (*(short *)(temp_v2 + 0x598) < 0) {
                    temp_v7 = 0x1f;
                    temp_v6 = fieldStateAllowsAction();
                    if (temp_v6 != 0) {
                      temp_v7 = 0xf9;
                    }
                  }
                  else {
                    temp_v7 = 0x29;
                    temp_v6 = fieldStateAllowsAction();
                    if (temp_v6 != 0) {
                      temp_v7 = 0xfa;
                    }
                  }
                }
                else {
                  temp_v7 = 0x2a;
                  temp_v6 = fieldStateAllowsAction();
                  if (temp_v6 != 0) {
                    temp_v7 = 0xfb;
                  }
                }
              }
            }
          }
        }
        if (*(int *)(temp_v2 + 0x520) == 0x13) {
          temp_v7 = 0x20;
        }
        else {
          if (*(int *)(temp_v2 + 0x520) == 0x14) {
            if (!temp_v16 || !temp_v15) {
              temp_v7 = 0x32;
              goto LAB_00268c6c;
            }
            temp_v6 = gameGlobalsGetFieldState();
            if ((((temp_v6 == 9) || (temp_v6 = gameGlobalsGetFieldState(), temp_v6 == 10)) ||
                (temp_v6 = gameGlobalsGetFieldState(), temp_v6 == 0xc)) || (temp_v6 = gameGlobalsGetFieldState(), temp_v6 == 8)) {
              temp_v7 = 0x60;
            }
            else {
              temp_v7 = 0x2b;
            }
          }
          if (*(int *)(temp_v2 + 0x520) == 0x16) {
            temp_v6 = gameGlobalsGetFieldState();
            if (((temp_v6 == 9) || (temp_v6 = gameGlobalsGetFieldState(), temp_v6 == 10)) ||
               ((temp_v6 = gameGlobalsGetFieldState(), temp_v6 == 0xc || (temp_v6 = gameGlobalsGetFieldState(), temp_v6 == 8)))) {
              temp_v7 = 0x61;
            }
            else {
              temp_v7 = 0x2c;
            }
          }
          if (*(int *)(temp_v2 + 0x520) == 0x18) {
            if (!(temp_v16 && temp_v15)) {
              temp_v7 = 0x33;
            }
            else {
              temp_v6 = gameGlobalsGetFieldState();
              if (((temp_v6 != 9) && (temp_v6 = gameGlobalsGetFieldState(), temp_v6 != 10)) &&
                 ((temp_v6 = gameGlobalsGetFieldState(), temp_v6 != 0xc && (temp_v6 = gameGlobalsGetFieldState(), temp_v6 != 8)))) {
                temp_v6 = gameGlobalsGetSceneState();
                if (temp_v6 == 0xd) {
                  temp_v7 = 0x11a;
                }
                else {
                  temp_v7 = 0x2d;
                }
              }
              else {
                temp_v7 = 0x62;
              }
            }
            temp_v12 = 2;
          }
          if (*(int *)(temp_v2 + 0x520) == 0x1f) {
            temp_v7 = 0x108;
          }
          else if (*(int *)(temp_v2 + 0x520) == 0x20) break;
        }
LAB_00268c6c:
        temp_v6 = gameGlobalsGetFieldState();
        temp_v16 = temp_v6 == 9;
        if (temp_v16) {
          temp_v6 = *(int *)(temp_v2 + 0x520);
        }
        if (!temp_v16 || temp_v6 != 3) {
          temp_v6 = gameGlobalsGetFieldState();
          temp_v16 = temp_v6 == 10;
          if (temp_v16) {
            temp_v6 = *(int *)(temp_v2 + 0x520);
          }
          if (!temp_v16 || temp_v6 != 3) {
            temp_v6 = gameGlobalsGetFieldState();
            temp_v16 = temp_v6 == 0xc;
            if (temp_v16) {
              temp_v6 = *(int *)(temp_v2 + 0x520);
            }
            if (!temp_v16 || temp_v6 != 3) {
              temp_v6 = gameGlobalsGetFieldState();
              temp_v16 = temp_v6 == 8;
              if (temp_v16) {
                temp_v6 = *(int *)(temp_v2 + 0x520);
              }
              if ((((!temp_v16 || temp_v6 != 3) && (temp_v6 = gameGlobalsGetSceneState(), temp_v6 != 5)) &&
                  (temp_v6 = gameGlobalsGetSceneState(), temp_v6 != 6)) && (temp_v6 = gameGlobalsGetSceneState(), temp_v6 != 7)) {
                buttonHelpSetPanelMode(temp_v12);
                sysPlaySe(temp_v7);
              }
            }
          }
        }
      }
      else {
        temp_v6 = FUN_0037b564();
        if (temp_v6 == 2) {
          buttonHelpSetPanelMode(0);
        }
        temp_v6 = g_statusDown;
        *(unsigned int *)(g_statusDown + 0x524) = 0;
        temp_v7 = *(unsigned int *)(temp_v6 + 0x518);
        *(unsigned int *)(temp_v6 + 0x518) = 0;
        *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
      }
    }
    break;
  case 3:
    uiSpriteAdvanceAnimation(temp_v2 + 0xb4);
    uiSpriteAdvanceAnimation(temp_v2 + 0x1cc);
    if ((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v14 = statusDownPanelIsOpenAndIdle(), temp_v14 != 0)) {
      temp_v14 = 4;
      padQueryLogicalKey(4,0);
      if (temp_v14 == 0) goto LAB_00268d68;
    }
    else {
LAB_00268d68:
      if (*(int *)(temp_v2 + 0x540) != 6) {
        if ((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v14 = statusDownPanelIsOpenAndIdle(), temp_v14 != 0)) {
          temp_v14 = 3;
          padQueryLogicalKey(3,0);
          if (temp_v14 != 0) {
            temp_v3 = 1;
            *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
            break;
          }
        }
        if (*(int *)(temp_v2 + 0x53c) == 6) {
          temp_v3 = 1;
          *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
          break;
        }
        temp_v8 = temp_v2 + 0x5ec;
        temp_v14 = temp_v8;
        uiScrollHandleActionsOrTouch(temp_v8,0,temp_v2 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x24a0,0,1);
        if (temp_v14 != 0) {
          *(unsigned char *)(temp_v2 + 0x528) = 1;
          temp_v14 = flaggedEntryGetValueA(temp_v8);
          if (temp_v14 != temp_v6) {
            eventQueueAddUniqueIfValid(0x100020d);
          }
        }
        else if (*(char *)(temp_v2 + 0x52a) == '\0') {
          temp_v14 = temp_v8;
          gridNavigationHandleConfirm(temp_v8,0);
          if (temp_v14 != 0) {
            *(unsigned char *)(temp_v2 + 0x528) = 1;
            temp_v14 = flaggedEntryGetValueA(temp_v8);
            if (temp_v14 != temp_v6) {
              eventQueueAddUniqueIfValid(0x100020d);
            }
            break;
          }
          temp_v6 = fieldStateAllowsAction();
          if (temp_v6 != 0) {
            temp_v6 = 10;
            padQueryLogicalKey(10,1);
            if (temp_v6 != 0) {
              statusDownInitializeSkillList(0);
              eventQueueAddUniqueIfValid(0x100020e);
              temp_v3 = 6;
              statusDownSwitchTab(temp_v3);
            }
          }
        }
        break;
      }
    }
    temp_v3 = 0xff;
    *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
    break;
  case 4:
    if (*(int *)(temp_v2 + 0x524) >= 8) {
      if (*(int *)(temp_v2 + 0x524) == 8) {
        temp_v6 = 0;
        temp_v14 = -1;
        do {
          temp_v4 = *(short *)(temp_v2 + temp_v6 * 2 + 0x59c);
          if (temp_v4 == *(short *)(temp_v2 + 0x5bc)) {
            temp_v14 = temp_v6;
          }
          if (temp_v4 == 0) {
            *(short *)(temp_v2 + temp_v6 * 2 + 0x59c) = *(short *)(temp_v2 + 0x5bc);
            break;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 8);
        if ((-1 < temp_v14) && (temp_v8 = gameGlobalsGetSceneState(), temp_v8 == 0xc)) {
          *(unsigned short *)(temp_v2 + temp_v6 * 2 + 0x59c) = 0;
          *(unsigned short *)(temp_v2 + temp_v14 * 2 + 0x59c) = *(unsigned short *)(temp_v2 + 0x5bc);
          temp_v6 = temp_v14;
        }
        gridNavigationConfigure(temp_v2 + 0x5ec,temp_v6 + 1,8,1,0,1);
        flaggedEntrySetValueA(temp_v2 + 0x5ec,temp_v6);
        *(unsigned char *)(temp_v2 + 0x528) = 1;
        uiSpriteSetKeyframe(temp_v2 + 0x2e4,1,0);
        uiSpriteSelectAnim(temp_v2 + 0x370,2);
        uiStoreTextureEntryCenter(temp_v2 + 0x370,0x12,temp_v6 + 0x414);
        *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
      }
      if (*(char *)(g_statusDown + 0x2584) != '\0') {
        FUN_003e40d0(g_statusDown + 0x2588,0);
      }
      temp_v6 = uiSpriteAdvanceAnimation(temp_v2 + 0x2e4);
      if (temp_v6 != 0) {
        if (*(char *)(g_statusDown + 0x2584) != '\0') {
          FUN_003e40d0(g_statusDown + 0x2588,1);
        }
        temp_v6 = uiSpriteAdvanceAnimation(temp_v2 + 0x370);
        if (temp_v6 != 0) {
          FUN_0023092c();
          statusDownRebuildTouchRegions();
          temp_v6 = g_statusDown;
          *(unsigned int *)(g_statusDown + 0x524) = 0;
          puVar13 = (unsigned int *)(temp_v6 + 0x518);
          temp_v7 = *puVar13;
          *puVar13 = 5;
          *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
        }
      }
    }
    break;
  case 7:
    uiSpriteAdvanceAnimation(temp_v2 + 0xb4);
    uiSpriteAdvanceAnimation(temp_v2 + 0x1cc);
    if (*(int *)(temp_v2 + 0x524) >= 8) {
      if (*(int *)(temp_v2 + 0x524) == 8) {
        temp_v6 = temp_v2 + 0x5ec;
        temp_v7 = listCursorGetRowIfUnblocked();
        temp_v14 = gridNavigationGetItemCount(temp_v6);
        gridNavigationConfigure(temp_v6,temp_v14 + 1,9,1,0,1);
        scrollListSetSelectionTracked(temp_v6,temp_v7);
        *(unsigned char *)(temp_v2 + 0x528) = 1;
      }
      if (*(char *)(temp_v2 + 0x52a) == '\0') {
        temp_v14 = temp_v2 + 0x5ec;
        temp_v8 = flaggedEntryGetValueA();
        temp_v6 = temp_v14;
        uiScrollHandleActionsOrTouch(temp_v14,0,temp_v2 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x24a0,0,1);
        if ((temp_v6 == 0) && (temp_v6 = temp_v14, gridNavigationHandleConfirm(temp_v14,0), temp_v6 == 0)) {
          temp_v6 = 0;
          padQueryLogicalKey(0,1);
          if ((temp_v6 != 0) || (*(char *)(temp_v2 + 0x24a0) != '\0')) {
            temp_v6 = resourceRunOperationIfUnblocked(temp_v14);
            temp_v8 = listCursorGetRowIfUnblocked(temp_v14);
            temp_v10 = gridNavigationGetItemCount(temp_v14);
            if ((temp_v6 + temp_v8) - temp_v10 != -1) {
              resourceRunOperationIfUnblocked();
              listCursorGetRowIfUnblocked(temp_v14);
              temp_v6 = resourceRunOperationIfUnblocked(temp_v14);
              temp_v14 = listCursorGetRowIfUnblocked(temp_v14);
              *(int *)(temp_v2 + 0x654) = temp_v14 + temp_v6;
              temp_v7 = sysPlayVoice(0x100020e);
              *(unsigned int *)(temp_v2 + 0x24a4) = temp_v7;
              temp_v7 = *(unsigned int *)(temp_v2 + 0x524);
              temp_v14 = gameGlobalsGetSceneState();
              temp_v6 = g_statusDown;
              if (temp_v14 != 0xc) {
                *(unsigned int *)(g_statusDown + 0x524) = 0;
                temp_v12 = *(unsigned int *)(temp_v6 + 0x518);
                *(unsigned int *)(temp_v6 + 0x518) = 8;
                *(unsigned int *)(temp_v6 + 0x51c) = temp_v12;
              }
              else {
                *(unsigned int *)(g_statusDown + 0x524) = 0;
                temp_v12 = *(unsigned int *)(temp_v6 + 0x518);
                *(unsigned int *)(temp_v6 + 0x518) = 10;
                *(unsigned int *)(temp_v6 + 0x51c) = temp_v12;
              }
              *(unsigned int *)(temp_v2 + 0x524) = temp_v7;
              *(unsigned int *)(temp_v2 + 0x668) = 0;
              break;
            }
            temp_v6 = gridNavigationGetItemCount(temp_v14);
            *(int *)(temp_v2 + 0x654) = temp_v6 - 1;
            temp_v6 = g_statusDown;
            temp_v12 = *(unsigned int *)(temp_v2 + 0x524);
            *(unsigned int *)(g_statusDown + 0x524) = 0;
            puVar13 = (unsigned int *)(temp_v6 + 0x518);
            temp_v7 = *puVar13;
            *puVar13 = 8;
            *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
            temp_v7 = sysPlayVoice(0x100020e);
            *(unsigned int *)(temp_v2 + 0x24a4) = temp_v7;
            *(unsigned int *)(temp_v2 + 0x668) = 0;
            *(unsigned int *)(temp_v2 + 0x524) = temp_v12;
          }
          else {
            temp_v6 = 1;
            padQueryLogicalKey();
            if (temp_v6 != 0) {
              temp_v7 = sysPlayVoice(0x100020f);
              *(unsigned int *)(temp_v2 + 0x24a4) = temp_v7;
              temp_v6 = gridNavigationGetItemCount(temp_v14);
              *(int *)(temp_v2 + 0x654) = temp_v6 - 1;
              temp_v7 = *(unsigned int *)(temp_v2 + 0x524);
              temp_v14 = gameGlobalsGetSceneState();
              temp_v6 = g_statusDown;
              if (temp_v14 != 0xc) {
                *(unsigned int *)(g_statusDown + 0x524) = 0;
                temp_v12 = *(unsigned int *)(temp_v6 + 0x518);
                *(unsigned int *)(temp_v6 + 0x518) = 8;
                *(unsigned int *)(temp_v6 + 0x51c) = temp_v12;
              }
              else {
                *(unsigned int *)(g_statusDown + 0x524) = 0;
                temp_v12 = *(unsigned int *)(temp_v6 + 0x518);
                *(unsigned int *)(temp_v6 + 0x518) = 0xb;
                *(unsigned int *)(temp_v6 + 0x51c) = temp_v12;
              }
              *(unsigned int *)(temp_v2 + 0x524) = temp_v7;
              *(unsigned int *)(temp_v2 + 0x668) = 0;
            }
          }
          break;
        }
        *(unsigned char *)(temp_v2 + 0x528) = 1;
        temp_v6 = flaggedEntryGetValueA(temp_v14);
        if (temp_v6 == temp_v8) break;
        eventQueueAddUniqueIfValid(0x100020d);
      }
    }
    break;
  case 8:
    uiSpriteAdvanceAnimation(temp_v2 + 0xb4);
    uiSpriteAdvanceAnimation(temp_v2 + 0x1cc);
    temp_v6 = asdSoundIsBankHandleLoaded(*(unsigned int *)(temp_v2 + 0x24a4));
    if ((temp_v6 == 0) && (*(char *)(temp_v2 + 0x24a9) != '\0')) {
      temp_v6 = gridNavigationGetItemCount(temp_v2 + 0x5ec);
      if (temp_v6 - 1 == *(int *)(temp_v2 + 0x654)) {
        temp_v6 = randRange(1);
        FUN_0015f490((int)*(short *)(temp_v2 + 0x598),temp_v6 != 0,1,0);
      }
LAB_0026941c:
      temp_v6 = g_statusDown;
      *(unsigned int *)(g_statusDown + 0x524) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x518);
      temp_v7 = *puVar13;
      *puVar13 = 0xc;
      *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
    }
    break;
  case 9:
    uiSpriteAdvanceAnimation(temp_v2 + 0xb4);
    uiSpriteAdvanceAnimation(temp_v2 + 0x1cc);
    temp_v6 = *(int *)(temp_v2 + 0x668) + 1;
    *(int *)(temp_v2 + 0x668) = temp_v6;
    if (temp_v6 >= 9) {
      temp_v6 = querySlotHasHandle();
joined_r0x002694c0:
      if (temp_v6 == 0) goto LAB_0026941c;
    }
    break;
  case 10:
    uiSpriteAdvanceAnimation(temp_v2 + 0xb4);
    uiSpriteAdvanceAnimation(temp_v2 + 0x1cc);
    if (*(char *)(temp_v2 + 0x24a9) != '\0') {
      temp_v6 = asdSoundIsBankHandleLoaded(*(unsigned int *)(temp_v2 + 0x24a4));
      goto joined_r0x002694c0;
    }
    break;
  case 0xb:
    uiSpriteAdvanceAnimation(temp_v2 + 0xb4);
    uiSpriteAdvanceAnimation(temp_v2 + 0x1cc);
    if (*(char *)(temp_v2 + 0x24a9) != '\0') {
      temp_v6 = asdSoundIsBankHandleLoaded(*(unsigned int *)(temp_v2 + 0x24a4));
      goto joined_r0x002694c0;
    }
    break;
  case 0xc:
    if (*(int *)(temp_v2 + 0x524) >= 8) {
      if (*(int *)(temp_v2 + 0x524) == 8) {
        *(unsigned char *)(temp_v2 + 0x24a8) = 0;
        temp_v6 = temp_v2 + 0x5ec;
        temp_v14 = gridNavigationGetItemCount();
        if (temp_v14 - 1 == *(int *)(temp_v2 + 0x654)) {
          FUN_0023092c();
          temp_v14 = g_statusDown;
          *(unsigned int *)(g_statusDown + 0x524) = 0;
          puVar13 = (unsigned int *)(temp_v14 + 0x518);
          temp_v7 = *puVar13;
          *puVar13 = 0xd;
          *(unsigned int *)(temp_v14 + 0x51c) = temp_v7;
        }
        else {
          *(unsigned short *)(temp_v2 + *(int *)(temp_v2 + 0x654) * 2 + 0x59c) =
               *(unsigned short *)(temp_v2 + 0x5bc);
          eventQueueAddUnique(0x100021a);
        }
        temp_v14 = gridNavigationGetItemCount(temp_v6);
        gridNavigationConfigure(temp_v6,temp_v14 - 1,8,1,0,1);
        if (*(int *)(temp_v2 + 0x654) >= 8) {
          flaggedEntrySetValueA(temp_v6,0);
        }
        else {
          flaggedEntrySetValueA(temp_v6);
        }
        *(unsigned char *)(temp_v2 + 0x528) = 1;
        uiSpriteSetKeyframe(temp_v2 + 0x2e4,1,0);
        uiSpriteSelectAnim(temp_v2 + 0x370,2);
        uiStoreTextureEntryCenter(temp_v2 + 0x370,0x12,*(int *)(temp_v2 + 0x654) + 0x414);
        *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
      }
      temp_v6 = uiSpriteSlideFromSide(temp_v2 + 0x2e4,0);
      if (temp_v6 != 0) {
        if (*(char *)(temp_v2 + 0x24a8) == '\0') {
          FUN_0015f490((int)*(short *)(temp_v2 + 0x598),0,1);
          *(unsigned char *)(temp_v2 + 0x24a8) = 1;
        }
        temp_v6 = uiSpriteAdvanceAnimation(temp_v2 + 0x370);
        if (temp_v6 != 0) {
          FUN_0023092c();
          statusDownRebuildTouchRegions();
          temp_v6 = g_statusDown;
          *(unsigned int *)(g_statusDown + 0x524) = 0;
          puVar13 = (unsigned int *)(temp_v6 + 0x518);
          temp_v7 = *puVar13;
          *puVar13 = 0xd;
          *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
        }
      }
    }
    break;
  case 0xe:
    uiSpriteAdvanceAnimation(temp_v2 + 0xb4);
    uiSpriteAdvanceAnimation(temp_v2 + 0x1cc);
    if (*(char *)(temp_v2 + 0x52a) == '\0') {
      temp_v14 = temp_v2 + 0x5ec;
      temp_v8 = flaggedEntryGetValueA();
      temp_v6 = temp_v14;
      uiScrollHandleActionsOrTouch(temp_v14,0,temp_v2 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x24a0,0,1);
      if ((temp_v6 != 0) || (temp_v6 = temp_v14, gridNavigationHandleConfirm(temp_v14,0), temp_v6 != 0)) {
        *(unsigned char *)(temp_v2 + 0x528) = 1;
        temp_v6 = flaggedEntryGetValueA(temp_v14);
        if (temp_v6 != temp_v8) {
          temp_v7 = 0x100020d;
          eventQueueAddUniqueIfValid(temp_v7);
        }
      }
    }
    break;
  case 0x11:
    if (*(int *)(temp_v2 + 0x524) >= 8) {
      if (*(int *)(temp_v2 + 0x524) == 8) {
        if (*(int *)(temp_v2 + 0x65c) < 0) {
          temp_v6 = gridNavigationGetItemCount();
          gridNavigationConfigure(temp_v2 + 0x5ec,temp_v6 - 1,8,1,0,1);
          flaggedEntrySetValueA(temp_v2 + 0x5ec,0);
          temp_v6 = g_statusDown;
          *(unsigned int *)(g_statusDown + 0x524) = 0;
          puVar13 = (unsigned int *)(temp_v6 + 0x518);
          temp_v7 = *puVar13;
          *puVar13 = 0x12;
          *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
          *(unsigned char *)(temp_v2 + 0x528) = 1;
        }
        else {
          *(short *)(temp_v2 + *(int *)(temp_v2 + 0x65c) * 2 + 0x59c) =
               (short)*(unsigned int *)(temp_v2 + 0x658);
          temp_v6 = gridNavigationGetItemCount();
          gridNavigationConfigure(temp_v2 + 0x5ec,temp_v6 - 1,8,1,0,1);
          uiSpriteSetKeyframe(temp_v2 + 0x2e4,1,0);
          uiSpriteSelectAnim(temp_v2 + 0x370,2);
          uiStoreTextureEntryCenter(temp_v2 + 0x370,0x12,*(int *)(temp_v2 + 0x65c) + 0x414);
          *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
        }
      }
      temp_v6 = uiSpriteSlideFromSide(temp_v2 + 0x2e4,0);
      if ((temp_v6 != 0) && (temp_v14 = uiSpriteAdvanceAnimation(temp_v2 + 0x370), temp_v6 = g_statusDown, temp_v14 != 0))
      {
        *(unsigned int *)(g_statusDown + 0x524) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x518);
        temp_v7 = *puVar13;
        *puVar13 = 0x12;
        *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
        *(unsigned char *)(temp_v2 + 0x528) = 1;
      }
    }
    break;
  case 0x12:
    uiSpriteAdvanceAnimation(temp_v2 + 0xb4);
    uiSpriteAdvanceAnimation(temp_v2 + 0x1cc);
    temp_v9 = temp_v2 + 0x5ec;
    temp_v6 = temp_v9;
    uiScrollHandleActionsOrTouch(temp_v9,0,temp_v2 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x24a0,0,1);
    if (temp_v6 != 0) {
      *(unsigned char *)(temp_v2 + 0x528) = 1;
    }
    if (*(char *)(temp_v2 + 0x52a) == '\0') {
      gridNavigationHandleConfirm(temp_v9,1);
      if (temp_v9 != 0) {
        *(unsigned char *)(temp_v2 + 0x528) = 1;
      }
    }
    break;
  case 0x13:
    uiSpriteAdvanceAnimation(temp_v2 + 0xb4);
    uiSpriteAdvanceAnimation(temp_v2 + 600);
    if (*(char *)(temp_v2 + 0x52a) == '\0') {
      temp_v6 = temp_v2 + 0x67c;
      temp_v14 = listCursorGetRowIfUnblocked();
      if ((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v8 = statusDownPanelIsOpenAndIdle(), temp_v8 != 0)) {
        temp_v8 = 4;
        padQueryLogicalKey(4,0);
        if (temp_v8 != 0) {
          temp_v3 = 0xff;
          *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x540) == 6) {
        temp_v3 = 0xff;
        *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
        break;
      }
      if ((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v8 = statusDownPanelIsOpenAndIdle(), temp_v8 != 0)) {
        temp_v8 = 3;
        padQueryLogicalKey(3,0);
        if (temp_v8 != 0) {
          temp_v3 = 1;
          *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x53c) != 6) {
        temp_v8 = temp_v6;
        uiScrollHandleActionsOrTouch(temp_v6,0,temp_v2 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x24a0,0,1);
        if (temp_v8 == 0) {
          temp_v8 = temp_v6;
          gridNavigationHandleConfirm(temp_v6,1);
          if (temp_v8 == 0) break;
          temp_v8 = gameFlagIsSet(0x410);
          if (temp_v8 == 0) {
            if (temp_v14 != 0) {
              if ((temp_v14 == 3) && (temp_v14 = listCursorGetRowIfUnblocked(temp_v6), temp_v14 == 2)) {
                flaggedEntrySetValueA(temp_v6,0);
              }
            }
            else {
              temp_v14 = listCursorGetRowIfUnblocked(temp_v6);
              if (temp_v14 == 1) {
                flaggedEntrySetValueA(temp_v6,3);
              }
            }
          }
        }
        *(unsigned char *)(temp_v2 + 0x528) = 1;
        break;
      }
      temp_v3 = 1;
      *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
    }
    break;
  case 0x14:
    uiSpriteAdvanceAnimation(temp_v2 + 0xb4);
    uiSpriteAdvanceAnimation(temp_v2 + 0x1cc);
    if (*(char *)(temp_v2 + 0x52a) == '\0') {
      if ((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v6 = statusDownPanelIsOpenAndIdle(), temp_v6 != 0)) {
        temp_v6 = 4;
        padQueryLogicalKey(4,0);
        if (temp_v6 != 0) {
          temp_v3 = 0xff;
          *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x540) == 6) {
        temp_v3 = 0xff;
        *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
        break;
      }
      if ((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v6 = statusDownPanelIsOpenAndIdle(), temp_v6 != 0)) {
        temp_v6 = 3;
        padQueryLogicalKey(3,0);
        if (temp_v6 != 0) {
          temp_v3 = 1;
          *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x53c) == 6) {
        temp_v3 = 1;
        *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
        break;
      }
      temp_v6 = 9;
      padQueryLogicalKey(9,1);
      if (temp_v6 != 0) {
        sortMenuAcquire(0x15,0);
        useCounterAppendValue(1);
        useCounterAppendValue(0x21);
        useCounterAppendValue(3);
        useCounterStart();
        temp_v6 = g_statusDown;
        *(unsigned int *)(g_statusDown + 0x524) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x518);
        temp_v7 = *puVar13;
        *puVar13 = 0x15;
        *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
        gameGlobalsSetMenuOpenFlag(1);
        temp_v7 = 0x100020e;
        eventQueueAddUniqueIfValid(temp_v7);
        break;
      }
      temp_v7 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x12,0x406));
      temp_v9 = temp_v2 + 0xee4;
      temp_v6 = temp_v9;
      uiScrollHandleActionsOrTouch(temp_v9,temp_v7,temp_v2 + 0x544,(int)*(short *)(temp_v2 + 0x58c),
                   (int)*(short *)(temp_v2 + 0x58e),(int)*(short *)(temp_v2 + 0x590),temp_v2 + 0x24a0,0,1)
      ;
      if (temp_v6 == 0) {
        gridNavigationHandleConfirm(temp_v9,1);
        if (temp_v9 != 0) {
          *(unsigned char *)(temp_v2 + 0x528) = 1;
        }
        break;
      }
      *(unsigned char *)(temp_v2 + 0x528) = 1;
    }
    break;
  case 0x15:
    temp_v6 = useCounterIsFinished();
    if (temp_v6 != 0) {
      useCounterRelease();
      gameGlobalsSetMenuOpenFlag(0);
      temp_v6 = gameGlobalsGetFieldState();
      if (temp_v6 == 0xe || temp_v6 == 7) {
        temp_v7 = 0x32;
      }
      else {
        temp_v7 = 0x2b;
      }
      sysPlaySe(temp_v7);
      *(unsigned char *)(temp_v2 + 0x528) = 1;
      temp_v6 = g_statusDown;
      *(unsigned int *)(g_statusDown + 0x524) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x518);
      temp_v7 = *puVar13;
      *puVar13 = 0x14;
      *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
    }
    else {
      temp_v14 = useCounterGetCurrentValue();
      temp_v6 = g_statusDown;
      if (temp_v14 != 0x69) {
        temp_v14 = reinterpret_cast<int>(saveGetUserSettingsBlock());
        if ((*(unsigned char *)(temp_v14 + 0x15) & 0x7f) == 1) {
          if ((char)*(unsigned char *)(temp_v14 + 0x15) < '\0') {
            qsort(temp_v6 + 0x6e0,(int)*(short *)(temp_v6 + 0xee0),4,entryRefCompareByRankOrderId);
          }
          else {
            qsort(temp_v6 + 0x6e0,(int)*(short *)(temp_v6 + 0xee0),4,FUN_002ce088);
          }
        }
        temp_v0 = *(unsigned char *)(temp_v14 + 0x15);
        if ((temp_v0 & 0x7f) == 0x21) {
          if ((char)temp_v0 < '\0') {
            qsort(temp_v6 + 0x6e0,(int)*(short *)(temp_v6 + 0xee0),4,FUN_0034f2e0);
          }
          else {
            qsort(temp_v6 + 0x6e0,(int)*(short *)(temp_v6 + 0xee0),4,FUN_002b29fc);
          }
        }
        temp_v0 = *(unsigned char *)(temp_v14 + 0x15);
        if ((temp_v0 & 0x7f) == 3) {
          if ((char)temp_v0 < '\0') {
            qsort(temp_v6 + 0x6e0,(int)*(short *)(temp_v6 + 0xee0),4,recordCompareByKey);
          }
          else {
            qsort(temp_v6 + 0x6e0,(int)*(short *)(temp_v6 + 0xee0),4,entryRefCompareByKey);
          }
        }
        *(unsigned char *)(temp_v2 + 0x528) = 1;
      }
    }
    break;
  case 0x16:
    uiSpriteAdvanceAnimation(temp_v2 + 0x140);
    if (*(char *)(temp_v2 + 0x52a) == '\0') {
      temp_v9 = temp_v2 + 0x2354;
      temp_v6 = resourceRunOperationIfUnblocked();
      temp_v14 = listCursorGetRowIfUnblocked(temp_v9);
      temp_v8 = listCursorGetRowOfChildIfUnblocked(temp_v9);
      temp_v10 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x12,0x406));
      temp_v7 = *(unsigned int *)(temp_v10 + 8);
      temp_v12 = **(unsigned int **)(temp_v10 + 0xc);
      if (((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v10 = statusDownPanelIsOpenAndIdle(), temp_v10 != 0)) &&
         ((temp_v10 = listCursorGetRowOfChildIfUnblocked(temp_v9), temp_v10 == 0 || (*(short *)(temp_v2 + 0x234a) == 0)))) {
        temp_v10 = 4;
        padQueryLogicalKey(4,0);
        if (temp_v10 == 0) goto LAB_00269ec4;
      }
      else {
LAB_00269ec4:
        if (*(int *)(temp_v2 + 0x540) != 6) {
          if (((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v10 = statusDownPanelIsOpenAndIdle(), temp_v10 != 0)) &&
             ((temp_v10 = listCursorGetRowOfChildIfUnblocked(temp_v9), temp_v10 == 3 ||
              ((int)*(short *)(temp_v2 + 0x234a) == temp_v8 + (temp_v6 + temp_v14) * 4 + 1 ||
               *(short *)(temp_v2 + 0x234a) == 0)))) {
            temp_v6 = 3;
            padQueryLogicalKey(3,0);
            if (temp_v6 == 0) goto LAB_00269f7c;
          }
          else {
LAB_00269f7c:
            if (*(int *)(temp_v2 + 0x53c) != 6) {
              temp_v6 = 9;
              padQueryLogicalKey(9,1);
              if (temp_v6 != 0) {
                sortMenuAcquire(0x16,0);
                useCounterAppendValue(1);
                useCounterAppendValue(8);
                useCounterAppendValue(2);
                useCounterAppendValue(3);
                useCounterStart();
                temp_v6 = g_statusDown;
                *(unsigned int *)(g_statusDown + 0x524) = 0;
                puVar13 = (unsigned int *)(temp_v6 + 0x518);
                temp_v7 = *puVar13;
                *puVar13 = 0x17;
                *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
                gameGlobalsSetMenuOpenFlag(1);
                temp_v7 = 0x100020e;
                eventQueueAddUniqueIfValid(temp_v7);
                break;
              }
              if ((-1 < *(int *)(temp_v2 + 0x52c)) && (0 < *(short *)(temp_v2 + 0x234a))) {
                temp_v6 = *(int *)(temp_v2 + 0x540);
                temp_v16 = temp_v6 == 0;
                if (temp_v16) {
                  temp_v6 = *(int *)(temp_v2 + 0x53c);
                }
                if (temp_v16 && temp_v6 == 0) {
                  temp_v6 = listCursorGetRowOfChildIfUnblocked(temp_v9);
                  temp_v14 = listCursorGetRowIfUnblocked(temp_v9);
                  flaggedEntrySetValueA(temp_v9,(int)(*(int *)(temp_v2 + 0x52c) +
                                           ((unsigned int)(*(int *)(temp_v2 + 0x52c) >> 0x1f) >> 0x1e)) >> 2);
                  flaggedEntrySetValueB(temp_v9,*(int *)(temp_v2 + 0x52c) % 4);
                  if (*(int *)(temp_v2 + 0x52c) != temp_v6 + temp_v14 * 4) {
                    eventQueueAddUniqueIfValid(0x100020d);
                  }
                  *(unsigned char *)(temp_v2 + 0x528) = 1;
                  break;
                }
              }
              temp_v6 = temp_v9;
              gridNavigationHandleConfirm(temp_v9,1);
              if (temp_v6 == 0) {
                scrollListHandleTouch(temp_v9,temp_v7,temp_v12,(int)*(short *)(temp_v2 + 0x58c),
                             (int)*(short *)(temp_v2 + 0x58e),(int)*(short *)(temp_v2 + 0x590),0,1);
                if (temp_v9 != 0) {
                  *(unsigned char *)(temp_v2 + 0x528) = 1;
                }
                break;
              }
              temp_v4 = resourceRunOperationIfUnblocked(temp_v9);
              temp_v5 = listCursorGetRowIfUnblocked(temp_v9);
              *(short *)(temp_v2 + 0x234e) = temp_v5 + temp_v4;
              temp_v4 = resourceRunEmbeddedOperationIfUnblocked(temp_v9);
              temp_v5 = listCursorGetRowOfChildIfUnblocked(temp_v9);
              *(short *)(temp_v2 + 0x234c) = temp_v5 + temp_v4;
              *(unsigned char *)(temp_v2 + 0x528) = 1;
              break;
            }
          }
          *(unsigned char *)(temp_v2 + 0x59b) = 1;
          temp_v4 = resourceRunOperationIfUnblocked(temp_v9);
          temp_v5 = listCursorGetRowIfUnblocked(temp_v9);
          *(short *)(temp_v2 + 0x234e) = temp_v5 + temp_v4;
          temp_v4 = resourceRunEmbeddedOperationIfUnblocked(temp_v9);
          temp_v5 = listCursorGetRowOfChildIfUnblocked(temp_v9);
          *(short *)(temp_v2 + 0x234c) = temp_v5 + temp_v4;
          break;
        }
      }
      *(unsigned char *)(temp_v2 + 0x59b) = 0xff;
      temp_v4 = resourceRunOperationIfUnblocked(temp_v9);
      temp_v5 = listCursorGetRowIfUnblocked(temp_v9);
      *(short *)(temp_v2 + 0x234e) = temp_v5 + temp_v4;
      temp_v4 = resourceRunEmbeddedOperationIfUnblocked(temp_v9);
      temp_v5 = listCursorGetRowOfChildIfUnblocked(temp_v9);
      *(short *)(temp_v2 + 0x234c) = temp_v5 + temp_v4;
    }
    break;
  case 0x17:
    temp_v6 = useCounterIsFinished();
    if (temp_v6 != 0) {
      useCounterRelease();
      gameGlobalsSetMenuOpenFlag(0);
      temp_v6 = gameGlobalsGetFieldState();
      if ((((temp_v6 == 9) || (temp_v6 = gameGlobalsGetFieldState(), temp_v6 == 10)) ||
          (temp_v6 = gameGlobalsGetFieldState(), temp_v6 == 0xc)) || (temp_v6 = gameGlobalsGetFieldState(), temp_v6 == 8)) {
        temp_v7 = 0x61;
      }
      else {
        temp_v7 = 0x2c;
      }
      sysPlaySe(temp_v7);
      *(unsigned char *)(temp_v2 + 0x528) = 1;
      temp_v6 = g_statusDown;
      *(unsigned int *)(g_statusDown + 0x524) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x518);
      temp_v7 = *puVar13;
      *puVar13 = 0x16;
      *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
    }
    else {
      temp_v6 = useCounterGetCurrentValue();
      if (temp_v6 != 0x69) {
        FUN_003d4104();
        *(unsigned char *)(temp_v2 + 0x528) = 1;
      }
    }
    break;
  case 0x18:
    if (*(char *)(temp_v2 + 0x52a) == '\0') {
      temp_v6 = resourceRunOperationIfUnblocked(temp_v2 + 0x23c0);
      if ((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v14 = statusDownPanelIsOpenAndIdle(), temp_v14 != 0)) {
        temp_v14 = 4;
        padQueryLogicalKey(4,0);
        if (temp_v14 != 0) {
          temp_v3 = 0xff;
          *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x540) == 6) {
        temp_v3 = 0xff;
        *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
        break;
      }
      if ((*(char *)(temp_v2 + 0x529) == '\0') && (temp_v14 = statusDownPanelIsOpenAndIdle(), temp_v14 != 0)) {
        temp_v14 = 3;
        padQueryLogicalKey(3,0);
        if (temp_v14 != 0) {
          temp_v3 = 1;
          *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
          break;
        }
      }
      if (*(int *)(temp_v2 + 0x53c) == 6) {
        temp_v3 = 1;
        *(unsigned char *)(temp_v2 + 0x59b) = temp_v3;
        break;
      }
      temp_v7 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x12,0x48c));
      temp_v14 = temp_v2 + 0x23c0;
      uiScrollHandleActionsOrTouch(temp_v14,temp_v7,0,(int)*(short *)(temp_v2 + 0x58c),(int)*(short *)(temp_v2 + 0x58e),
                   (int)*(short *)(temp_v2 + 0x590),temp_v2 + 0x24a0,0,0);
      if (temp_v14 != 0) {
        temp_v14 = resourceRunOperationIfUnblocked(temp_v2 + 0x23c0);
        if (temp_v14 != temp_v6) {
          temp_v7 = 0x100020d;
          eventQueueAddUniqueIfValid(temp_v7);
        }
      }
      else {
        temp_v14 = temp_v2 + 0x23c0;
        gridNavigationHandleConfirm(temp_v14,0);
        if ((temp_v14 != 0) && (temp_v14 = gridNavigationGetItemCount(temp_v2 + 0x23c0), temp_v14 >= 11)) {
          resourceRunOperationIfUnblocked(temp_v2 + 0x23c0);
          temp_v14 = listCursorGetRowIfUnblocked(temp_v2 + 0x23c0);
          if ((temp_v14 != 9) && (temp_v14 = listCursorGetRowIfUnblocked(temp_v2 + 0x23c0), temp_v14 != 0)) {
            eventQueueAddUniqueIfValid(0x100020d);
          }
          temp_v14 = resourceRunOperationIfUnblocked(temp_v2 + 0x23c0);
          while ((temp_v14 == temp_v6 &&
                 ((temp_v14 = resourceRunOperationIfUnblocked(temp_v2 + 0x23c0), temp_v14 != 0 ||
                  (temp_v14 = listCursorGetRowIfUnblocked(temp_v2 + 0x23c0), temp_v14 != 0))))) {
            temp_v14 = resourceRunOperationIfUnblocked(temp_v2 + 0x23c0);
            temp_v8 = gridNavigationGetItemCount(temp_v2 + 0x23c0);
            if ((temp_v14 == temp_v8 - 10) && (temp_v14 = listCursorGetRowIfUnblocked(temp_v2 + 0x23c0), temp_v14 == 9))
            break;
            gridNavigationHandleConfirm(temp_v2 + 0x23c0,0);
            temp_v14 = resourceRunOperationIfUnblocked(temp_v2 + 0x23c0);
          }
        }
      }
    }
    break;
  case 0x19:
    temp_v14 = 0;
    padQueryLogicalKey(0,1);
    temp_v6 = g_statusDown;
    if (temp_v14 != 0) {
      *(unsigned int *)(g_statusDown + 0x524) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x518);
      temp_v7 = *puVar13;
      *puVar13 = 0x1a;
      *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
    }
    break;
  case 0x1a:
    temp_v6 = *(int *)(temp_v2 + 0x524);
    if (temp_v6 == 8) {
      temp_v14 = 0;
    }
    if (temp_v6 >= 8) {
      if (temp_v6 == 8) {
        do {
          if (*(short *)(temp_v2 + temp_v14 * 2 + 0x2488) == 0) {
            *(unsigned short *)(temp_v2 + temp_v14 * 2 + 0x2488) = *(unsigned short *)(temp_v2 + 0x2498);
            break;
          }
          temp_v14 = temp_v14 + 1;
        } while (temp_v14 < 8);
        flaggedEntrySetValueA(temp_v2 + 0x2424,temp_v14);
        *(unsigned char *)(temp_v2 + 0x528) = 1;
        uiSpriteSetKeyframe(temp_v2 + 0x2e4,0);
        uiSpriteSelectAnim(temp_v2 + 0x370,2);
        uiStoreTextureEntryCenter(temp_v2 + 0x370,0x12,temp_v14 + 0x414);
        *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
      }
      temp_v6 = uiSpriteSlideFromSide(temp_v2 + 0x2e4,0);
      if ((temp_v6 != 0) && (temp_v14 = uiSpriteAdvanceAnimation(temp_v2 + 0x370), temp_v6 = g_statusDown, temp_v14 != 0))
      {
        *(unsigned int *)(g_statusDown + 0x524) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x518);
        temp_v7 = *puVar13;
        *puVar13 = 0x1b;
        *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
      }
    }
    break;
  case 0x1b:
    temp_v14 = temp_v2 + 0x2424;
    temp_v6 = temp_v14;
    uiScrollHandleActionsOrTouch(temp_v14,0,temp_v2 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x24a0,0,1);
    if ((temp_v6 != 0) || (gridNavigationHandleConfirm(temp_v14,1), temp_v14 != 0)) {
      *(unsigned char *)(temp_v2 + 0x528) = 1;
      break;
    }
    temp_v6 = 0;
    padQueryLogicalKey(0,1);
    if (temp_v6 == 0) {
      temp_v6 = 1;
      padQueryLogicalKey();
      if (temp_v6 == 0) break;
    }
    temp_v6 = uniteNotBusy();
    if (temp_v6 == 0) {
      obj04Finish();
    }
    buttonHelpSetText(0,0xf4f4f4ff);
    statusDownRestartTransition();
    *(unsigned int *)(temp_v2 + 0x249c) = 0;
    break;
  case 0x1c:
    temp_v14 = temp_v2 + 0x2424;
    temp_v6 = temp_v14;
    uiScrollHandleActionsOrTouch(temp_v14,0,temp_v2 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x24a0,0,1);
    if ((temp_v6 != 0) || (temp_v6 = temp_v14, gridNavigationHandleConfirm(temp_v14,1), temp_v6 != 0)) {
      *(unsigned char *)(temp_v2 + 0x528) = 1;
      break;
    }
    temp_v6 = 0;
    padQueryLogicalKey(0,1);
    if ((temp_v6 != 0) || (*(char *)(temp_v2 + 0x24a0) != '\0')) {
      temp_v6 = listCursorGetRowIfUnblocked(temp_v14);
      temp_v8 = gridNavigationGetItemCount(temp_v14);
      if (temp_v6 == temp_v8 - 1) {
        *(unsigned int *)(temp_v2 + 0x249c) = 0;
        if (*(char *)(temp_v2 + 0x52b) != '\0') {
          temp_v6 = uniteNotBusy();
          if (temp_v6 == 0) {
            obj04Finish();
          }
          buttonHelpSetText(0,0xf4f4f4ff);
          statusDownRestartTransition();
          break;
        }
      }
      else {
        temp_v6 = listCursorGetRowIfUnblocked(temp_v14);
        *(unsigned int *)(temp_v2 + 0x249c) = (unsigned int)*(unsigned short *)(temp_v2 + temp_v6 * 2 + 0x2488);
      }
      temp_v6 = g_statusDown;
      *(unsigned int *)(g_statusDown + 0x524) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x518);
      temp_v7 = *puVar13;
      *puVar13 = 0x1d;
      *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
    }
    else {
      temp_v6 = 1;
      padQueryLogicalKey();
      if (temp_v6 != 0) {
        *(unsigned int *)(temp_v2 + 0x249c) = 0;
        temp_v6 = uniteNotBusy();
        if (temp_v6 == 0) {
          obj04Finish();
        }
        buttonHelpSetText(0,0xf4f4f4ff);
        statusDownRestartTransition();
      }
    }
    break;
  case 0x1d:
    if (*(int *)(temp_v2 + 0x524) >= 8) {
      if (*(int *)(temp_v2 + 0x524) == 8) {
        temp_v6 = temp_v2 + 0x2424;
        if (*(int *)(temp_v2 + 0x249c) != 0) {
          temp_v14 = listCursorGetRowIfUnblocked();
          *(unsigned short *)(temp_v2 + temp_v14 * 2 + 0x2488) = *(unsigned short *)(temp_v2 + 0x2498);
          temp_v8 = gridNavigationGetItemCount(temp_v6);
          gridNavigationConfigure(temp_v6,temp_v8 - 1,8,1,1,1);
          flaggedEntrySetValueA(temp_v6,temp_v14);
          *(unsigned char *)(temp_v2 + 0x528) = 1;
          uiSpriteSetKeyframe(temp_v2 + 0x2e4,0);
          uiSpriteSelectAnim(temp_v2 + 0x370,2);
          uiStoreTextureEntryCenter(temp_v2 + 0x370,0x12,temp_v14 + 0x414);
          *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
        }
        else {
          temp_v14 = gridNavigationGetItemCount();
          gridNavigationConfigure(temp_v6,temp_v14 - 1,8,1,1,1);
          flaggedEntrySetValueA(temp_v6,0);
          temp_v6 = g_statusDown;
          *(unsigned int *)(g_statusDown + 0x524) = 0;
          puVar13 = (unsigned int *)(temp_v6 + 0x518);
          temp_v7 = *puVar13;
          *puVar13 = 0x1e;
          *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
        }
      }
      temp_v6 = uiSpriteSlideFromSide(temp_v2 + 0x2e4,0);
      if ((temp_v6 != 0) && (temp_v14 = uiSpriteAdvanceAnimation(temp_v2 + 0x370), temp_v6 = g_statusDown, temp_v14 != 0))
      {
        *(unsigned int *)(g_statusDown + 0x524) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x518);
        temp_v7 = *puVar13;
        *puVar13 = 0x1e;
        *(unsigned int *)(temp_v6 + 0x51c) = temp_v7;
      }
    }
    break;
  case 0x1e:
    temp_v14 = temp_v2 + 0x2424;
    temp_v6 = temp_v14;
    uiScrollHandleActionsOrTouch(temp_v14,0,temp_v2 + 0x544,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x24a0,0,1);
    if ((temp_v6 != 0) || (gridNavigationHandleConfirm(temp_v14,1), temp_v14 != 0)) {
      *(unsigned char *)(temp_v2 + 0x528) = 1;
      break;
    }
    temp_v6 = 0;
    padQueryLogicalKey(0,1);
    if (temp_v6 == 0) {
      temp_v6 = 1;
      padQueryLogicalKey();
      if (temp_v6 == 0) break;
    }
    temp_v6 = uniteNotBusy();
    if (temp_v6 == 0) {
      obj04Finish();
    }
    buttonHelpSetText(0,0xf4f4f4ff);
    statusDownRestartTransition();
    break;
  case 0x1f:
    uiSpriteAdvanceAnimation(temp_v2 + 0xb4);
    uiSpriteAdvanceAnimation(temp_v2 + 0x1cc);
    temp_v14 = g_statusDown;
    *(unsigned char *)(g_statusDown + 0x2578) = 1;
    temp_v6 = *(int *)(temp_v14 + 0x2564);
    switch(temp_v6) {
    case 0:
      temp_v16 = *(int *)(temp_v14 + 0x256c) != 0;
      if (temp_v16) {
        temp_v6 = *(int *)(temp_v14 + 0x2570);
      }
      if (temp_v16 && temp_v6 != 0) {
        if (*(int *)(temp_v14 + 0x2574) == 0) {
          scrScriptProcessCreate();
          *(int *)(temp_v14 + 0x2574) = temp_v6;
          *(unsigned int *)(temp_v6 + 0x108) = 2;
        }
        *(unsigned int *)(temp_v14 + 0x2564) = 1;
        *(unsigned int *)(temp_v14 + 0x2568) = 0;
        FUN_002f7f6c(temp_v14);
      }
      break;
    case 1:
      FUN_002f7f6c(temp_v14);
      temp_v6 = g_statusDown;
      temp_v8 = g_statusDown + 0x24ac;
      temp_v14 = listCursorGetRowIfUnblocked(g_statusDown + 0x2500);
      temp_v4 = *(short *)(temp_v8 + temp_v14 * 8);
      temp_v14 = listCursorGetRowIfUnblocked(temp_v6 + 0x2500);
      if (temp_v14 >= *(int *)(temp_v6 + 0x24ec)) {
        screenStartOrClear(*(unsigned int *)(temp_v6 + 0x256c),7);
      }
      else if (temp_v4 != 0) {
        skillHelpUpdateAttributeAndTarget(temp_v4);
      }
      else {
        buttonHelpSetText(0,0xf4f4f4ff);
      }
      if (*(char *)(temp_v6 + 0x24f0) != '\0') {
        temp_v6 = ifTouchGetButtonHelpValue();
        if (temp_v6 != 0x109) {
          sysPlaySe();
        }
        break;
      }
      temp_v6 = ifTouchGetButtonHelpValue();
      if (temp_v6 != 0x108) {
        sysPlaySe(0x108);
      }
      break;
    case 2:
      *(unsigned char *)(temp_v14 + 0x2578) = 0;
      FUN_002f7cd4(temp_v14);
      temp_v6 = g_statusDown;
      temp_v8 = g_statusDown + 0x24ac;
      temp_v14 = listCursorGetRowIfUnblocked(g_statusDown + 0x2500);
      temp_v4 = *(short *)(temp_v8 + temp_v14 * 8);
      temp_v14 = listCursorGetRowIfUnblocked(temp_v6 + 0x2500);
      if (temp_v14 >= *(int *)(temp_v6 + 0x24ec)) {
        screenStartOrClear(*(unsigned int *)(temp_v6 + 0x256c),7);
      }
      else if (temp_v4 != 0) {
        skillHelpUpdateAttributeAndTarget(temp_v4);
      }
      else {
        buttonHelpSetText(0,0xf4f4f4ff);
      }
      if (*(char *)(temp_v6 + 0x24f0) == '\0') {
        temp_v6 = ifTouchGetButtonHelpValue();
        if (temp_v6 != 0x108) {
          sysPlaySe(0x108);
        }
        break;
      }
      temp_v6 = ifTouchGetButtonHelpValue();
      if (temp_v6 != 0x109) {
        sysPlaySe();
      }
      break;
    case 3:
      statusSkillsCommitOnDialogResult(reinterpret_cast<void*>(temp_v14));
      break;
    case 4:
      temp_v6 = scrRunOpcodesStub(*(unsigned int *)(temp_v14 + 0x2574));
      if (temp_v6 == 2) {
        temp_v6 = messageMainGetValue();
        if (temp_v6 != 0) {
          *(unsigned int *)(temp_v14 + 0x2564) = 1;
          *(unsigned int *)(temp_v14 + 0x2568) = 0;
        }
        else {
          if (*(char *)(temp_v14 + 0x2580) != '\0') {
            gameGlobalsSetMenuOpenFlag(0);
            *(unsigned char *)(temp_v14 + 0x2580) = 0;
          }
          *(unsigned int *)(temp_v14 + 0x2564) = 5;
          *(unsigned int *)(temp_v14 + 0x2568) = 0;
        }
      }
    }
    if ((g_statusDown == 0) || (*(int *)(g_statusDown + 0x2564) == 5)) {
      gameGlobalsSetMenuOpenFlag(0);
      temp_v3 = *(unsigned char *)(temp_v2 + 0x515);
      statusDownSwitchTab(temp_v3);
    }
  }
  temp_v16 = *(char *)(temp_v2 + 0x528) == '\0';
  temp_v6 = 0;
  if (!temp_v16) {
    temp_v6 = *(int *)(temp_v2 + 0x518);
  }
  if (temp_v16 || temp_v6 < 3) {
    *(int *)(temp_v2 + 0x524) = *(int *)(temp_v2 + 0x524) + 1;
    return 0;
  }
  *(unsigned char *)(temp_v2 + 0x528) = 0;
  temp_v16 = 0;
  temp_v6 = gameGlobalsGetFieldState();
  if (temp_v6 != 0xe) {
    if (temp_v6 != 7) {
      if (temp_v6 == 0x10) {
        temp_v16 = 1;
      }
    }
    else {
      puVar14 = (unsigned short *)gameGlobalsGetBlock1390();
      temp_v6 = itemIsCollectedWithRelated(*puVar14);
      if (temp_v6 == 0) {
        temp_v16 = 1;
      }
    }
  }
  else {
    temp_v16 = 1;
  }
  temp_v6 = *(int *)(temp_v2 + 0x518);
  if (((temp_v6 == 3 || temp_v6 == 7) || (temp_v6 == 0xe || temp_v6 == 0x11)) ||
     ((temp_v6 == 0x12 || temp_v6 == 4 ||
      ((temp_v6 == 0xc || temp_v6 == 8 || ((temp_v6 == 9 || temp_v6 == 0xf) || temp_v6 == 0x10)))))) {
    temp_v6 = temp_v2 + 0x5ec;
    temp_v14 = resourceRunOperationIfUnblocked();
    temp_v8 = listCursorGetRowIfUnblocked(temp_v6);
    temp_v14 = temp_v14 + temp_v8;
    if (*(int *)(temp_v2 + 0x518) == 7) {
      if (*(int *)(temp_v2 + 0x524) >= 8) {
        temp_v8 = gridNavigationGetItemCount(temp_v6);
        if (temp_v8 - 1 != temp_v14) goto LAB_0026adc4;
        temp_v11 = (unsigned int)*(unsigned short *)(temp_v2 + 0x5bc);
      }
      else {
        temp_v11 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v14 * 2 + 0x59c);
      }
    }
    else {
LAB_0026adc4:
      if ((*(int *)(temp_v2 + 0x518) == 0xe) && (temp_v6 = gridNavigationGetItemCount(temp_v6), temp_v6 - 1 == temp_v14)) {
        temp_v11 = *(unsigned int *)(temp_v2 + 0x658);
      }
      else {
        temp_v11 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v14 * 2 + 0x59c);
      }
    }
    if (temp_v16) {
      sprintf((char *)temp_v17,(const char *)&LAB_0026b0b8);
      buttonHelpSetText(temp_v17,0xf4f4f4ff);
    }
    else {
      skillHelpUpdateAttributeAndTarget(temp_v11);
    }
  }
  if (*(int *)(temp_v2 + 0x518) == 0x13) {
    temp_v13 = 0;
    temp_v6 = resourceRunOperationIfUnblocked();
    temp_v14 = listCursorGetRowIfUnblocked(temp_v2 + 0x67c);
    temp_v14 = temp_v14 + temp_v6;
    if (temp_v14 == 0) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x66c);
    }
    else if (temp_v14 == 1) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x66e);
    }
    else if (temp_v14 == 2) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x670);
    }
    else if (temp_v14 == 3) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x672);
    }
    else if (temp_v14 == 4) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x674);
    }
    else if (temp_v14 == 5) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x676);
    }
    else if (temp_v14 == 6) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x678);
    }
    screenShowMessage(temp_v13);
  }
  if (*(int *)(temp_v2 + 0x518) == 0x14) {
    if (temp_v16) {
      sprintf((char *)temp_v17,(const char *)&LAB_0026b0b8);
      buttonHelpSetText(temp_v17,0xf4f4f4ff);
    }
    else {
      temp_v6 = resourceRunOperationIfUnblocked();
      temp_v14 = listCursorGetRowIfUnblocked(temp_v2 + 0xee4);
      temp_v11 = (unsigned int)*(unsigned short *)(temp_v2 + (temp_v14 + temp_v6) * 4 + 0x6e2);
      if (temp_v11 != 0) {
        temp_v11 = (unsigned int)dataTable0cSub1GetText((unsigned short)temp_v11);
        sprintf((char *)temp_v17,"%s",temp_v11);
        buttonHelpSetText(temp_v17,0xf4f4f4ff);
      }
    }
  }
  if (*(int *)(temp_v2 + 0x518) == 0x16) {
    temp_v6 = listCursorGetRowOfChildIfUnblocked();
    temp_v14 = resourceRunOperationIfUnblocked(temp_v2 + 0x2354);
    temp_v8 = listCursorGetRowIfUnblocked(temp_v2 + 0x2354);
    temp_v6 = temp_v2 + (temp_v6 + (temp_v8 + temp_v14) * 4) * 4;
    temp_v4 = *(short *)(temp_v6 + 0xf4a);
    if (temp_v4 == 0) {
      puVar16 = (unsigned char *)0x0;
    }
    else {
      temp_v13 = *(unsigned short *)(temp_v6 + 0xf48);
      temp_v7 = (unsigned int)table01RecordLookupForContent(temp_v13);
      temp_v12 = demonGetRaceLabel(temp_v13,0);
      sprintf((char *)temp_v17,"%s  %s",temp_v12,temp_v7);
      puVar16 = temp_v17;
    }
    buttonHelpSetText(puVar16,0xf4f4f4ff);
  }
  temp_v6 = *(int *)(temp_v2 + 0x518);
  if (((temp_v6 != 0x19 && temp_v6 != 0x1a) && (temp_v6 != 0x1b && temp_v6 != 0x1c)) &&
     (temp_v6 != 0x1d && temp_v6 != 0x1e)) {
    *(int *)(temp_v2 + 0x524) = *(int *)(temp_v2 + 0x524) + 1;
    return 0;
  }
  temp_v6 = temp_v2 + 0x2424;
  temp_v14 = listCursorGetRowIfUnblocked();
  temp_v8 = gridNavigationGetItemCount(temp_v6);
  if (temp_v14 == temp_v8 - 1) {
    temp_v1 = *(unsigned short *)(temp_v2 + 0x2498);
    temp_v11 = (unsigned int)temp_v1;
    table8Type5GetValue();
    if (temp_v11 != 0) {
      skillHelpUpdateAttributeAndTarget();
      *(int *)(temp_v2 + 0x524) = *(int *)(temp_v2 + 0x524) + 1;
      return 0;
    }
  }
  else {
    temp_v14 = listCursorGetRowIfUnblocked(temp_v6);
    if (*(short *)(temp_v2 + temp_v14 * 2 + 0x2488) != 0) {
      temp_v6 = listCursorGetRowIfUnblocked(temp_v6);
      temp_v1 = *(unsigned short *)(temp_v2 + temp_v6 * 2 + 0x2488);
      temp_v11 = (unsigned int)temp_v1;
      table8Type5GetValue();
      if (temp_v11 != 0) {
        skillHelpUpdateAttributeAndTarget();
        *(int *)(temp_v2 + 0x524) = *(int *)(temp_v2 + 0x524) + 1;
        return 0;
      }
    }
  }
  buttonHelpSetText(0,0xf4f4f4ff);
  *(int *)(temp_v2 + 0x524) = *(int *)(temp_v2 + 0x524) + 1;
  return 0;
}

} /* extern "C" */
