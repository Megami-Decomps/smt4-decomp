/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001956c4` (_code @ 0x1956c4, 0x16a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiQuestStartSelected(void);
int uiFadeRequestHalf(void);
int FUN_0028fe0c(...);
int uiQuestCountDetailPages(...);
int FUN_002900d0(void);
int FUN_0029016c(...);
int FUN_002902a0(...);
int FUN_002903f0(void);
int useCounterRelease(void);
int FUN_0029efa8(...);
int FUN_0029efc0(...);
int dataTable1bOr1cGetRecord(void);
int eventQueueAddUniqueIfValid(...);
int spriteStartAnimationByIndex(...);
int FUN_002bf810(...);
int FUN_002c1658(...);
int uiQuestSortListByEntryKind(...);
int gameStateResetRecord(...);
int gameOptionsHasEnabledParameters(void);
int SBORROW4(...);
int VectorUnsignedToFloat(...);

int FUN_001afc0c(void);
int FUN_00290404(void);
int FUN_002905d0(void);
int scrScriptProcessStartEntry(...);
int FUN_00297060(unsigned int, unsigned int);
int buttonHelpGetMode(void);
int asdMemFreeSlot(unsigned int);
int FUN_002b8584(int, int);
int buttonHelpSetPreset(...);
int FUN_002b8ee0(...);
int timerStart(...);
int FUN_002bf818(...);
int asdMemFree(...);

extern unsigned char LAB_00195cc8; /* 0x195cc8 */
extern unsigned char LAB_00195cdc; /* 0x195cdc */
extern int g_aocMain; /* 0x432fc8 */
extern int g_uiQuest; /* 0x43dd50 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: uiQuestStartSelected. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_001afc0c. */
/* Supplied declaration required: uiFadeRequestHalf. */
/* Supplied declaration required: FUN_0028fe0c. */
/* Supplied declaration required: uiQuestCountDetailPages. */
/* Supplied declaration required: FUN_002900d0. */
/* Supplied declaration required: FUN_0029016c. */
extern int FUN_0029022c(void);
extern unsigned char FUN_00290248(unsigned short);
/* Supplied declaration required: FUN_002902a0. */
extern int gameJumpRequestIsPending(void);
/* Supplied declaration required: FUN_002903f0. */
/* Supplied declaration required: FUN_00290404. */
/* Supplied declaration required: FUN_002905d0. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
extern int messageMainGetChoiceResult(void);
extern int useCounterGetCurrentValue(void);
/* Supplied declaration required: useCounterRelease. */
extern int useCounterIsFinished(void);
extern int FUN_0029ee54(int);
/* Supplied declaration required: FUN_0029efa8. */
/* Supplied declaration required: FUN_0029efc0. */
/* Supplied declaration required: buttonHelpGetMode. */
/* Supplied declaration required: asdMemFreeSlot. */
/* Supplied declaration required: dataTable1bOr1cGetRecord. */
/* Supplied declaration required: FUN_002b8584. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: FUN_002b8ee0. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: spriteStartAnimationByIndex. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf810. */
/* Supplied declaration required: FUN_002bf818. */
extern int gameFlagIsSet(unsigned int);
extern int randNextInRange(unsigned int);
/* Supplied declaration required: FUN_002c1658. */
/* Supplied declaration required: asdMemFree. */
extern unsigned int asdLoadFileSyncDefault(unsigned char *);
/* Supplied declaration required: uiQuestSortListByEntryKind. */
/* Supplied declaration required: gameStateResetRecord. */
/* Supplied declaration required: gameOptionsHasEnabledParameters. */


unsigned int FUN_001956c4(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 34 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned short temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  unsigned int in_fpscr;
  float temp_v13;
  unsigned long long temp_v14;
  
  temp_v1 = g_uiQuest;
  if (*(char *)(g_uiQuest + 0x5c4) != '\0') {
    temp_v11 = g_uiQuest + 0x5fc;
  }
  else {
    temp_v11 = g_uiQuest + 0x660;
  }
  FUN_002bf818(g_uiQuest + 0xc0);
  FUN_002bf818(temp_v1 + 0x14c);
  switch(*(unsigned int *)(temp_v1 + 4)) {
  default:
    *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
    return 0;
  case 1:
    temp_v6 = FUN_002b8ee0(temp_v1 + 0x34,0);
    temp_v5 = g_uiQuest;
    if (temp_v6 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v6 = *(int *)(temp_v1 + 0xc);
    if (temp_v6 == 0) {
      temp_v5 = 0;
      do {
        temp_v6 = FUN_0029ee54(temp_v11);
        if (temp_v6 <= temp_v5) break;
        temp_v3 = FUN_002b8584(0x29,temp_v5 + 0x9e);
        temp_v6 = temp_v5 * 2;
        temp_v5 = temp_v5 + 1;
        *(unsigned short *)(temp_v1 + temp_v6 + 0x9dc) = temp_v3;
        *(short *)(temp_v1 + 0x9f8) = *(short *)(temp_v1 + 0x9f8) + 1;
      } while (temp_v5 < 10);
      temp_v3 = FUN_002b8584(0x29,0xbf);
      *(unsigned short *)(temp_v1 + 0x9f2) = temp_v3;
      temp_v3 = FUN_002b8584(0x29,0xc0);
      *(unsigned short *)(temp_v1 + 0x9f4) = temp_v3;
      temp_v3 = FUN_002b8584(0x29,0xc1);
      *(unsigned short *)(temp_v1 + 0x9f6) = temp_v3;
      *(short *)(temp_v1 + 0x9f8) = *(short *)(temp_v1 + 0x9f8) + 3;
      FUN_002905d0();
      FUN_00290404();
      temp_v11 = gameFlagIsSet(0x215);
      if (temp_v11 == 0) {
        temp_v7 = 2;
        break;
      }
      temp_v7 = asdLoadFileSyncDefault(&LAB_00195cc8);
      *(unsigned int *)(temp_v1 + 0x5b8) = temp_v7;
      temp_v7 = asdLoadFileSyncDefault(&LAB_00195cdc);
      *(unsigned int *)(temp_v1 + 0x5bc) = temp_v7;
      FUN_00297060(temp_v7,*(unsigned int *)(temp_v1 + 0x5b8));
      *(unsigned int *)(temp_v1 + 0x5c0) = temp_v7;
      temp_v11 = scrScriptProcessStartEntry();
      if (temp_v11 == 0) {
        *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
        return 0;
      }
      temp_v7 = 0x1a;
      break;
    }
    if (temp_v6 != 0x1d) {
      if (temp_v6 != 0x1c) {
        temp_v7 = 0x1a;
        buttonHelpSetPreset(temp_v7);
      }
      else {
        temp_v11 = *(int *)(g_uiQuest + 0x5d0);
        if (temp_v11 == 1) {
          temp_v7 = 0xea;
          buttonHelpSetPreset(temp_v7);
          temp_v7 = *(unsigned int *)(temp_v1 + 0xc);
          break;
        }
        if (temp_v11 != 2) {
          if (temp_v11 == 3) {
            if (*(int *)(g_uiQuest + 0x5c8) == 0) {
              buttonHelpSetPreset(0xd6);
            }
            if (*(int *)(temp_v5 + 0x5c8) == 1) {
              buttonHelpSetPreset(0xd7);
            }
            temp_v11 = *(int *)(temp_v5 + 0x5c8);
            if (temp_v11 == 2) {
              temp_v7 = 0xd8;
              buttonHelpSetPreset(temp_v7);
            }
          }
        }
        else {
          if (*(int *)(g_uiQuest + 0x5c8) == 0) {
            buttonHelpSetPreset(0xeb);
          }
          if (*(int *)(temp_v5 + 0x5c8) == 1) {
            temp_v7 = 0xec;
            buttonHelpSetPreset(temp_v7);
          }
        }
      }
    }
    else if (*(char *)(g_uiQuest + 0x5c4) != '\0') {
      if (*(int *)(g_uiQuest + 0x5d0) == 2) {
        if (*(int *)(g_uiQuest + 0x5c8) == 0) {
          buttonHelpSetPreset(0xd5);
        }
        if (*(int *)(temp_v5 + 0x5c8) == 1) {
          temp_v7 = 0xd4;
          buttonHelpSetPreset(temp_v7);
        }
      }
    }
    else {
      if (*(int *)(g_uiQuest + 0x5d0) == 2) {
        if (*(int *)(g_uiQuest + 0x5c8) == 0) {
          buttonHelpSetPreset(0xd5);
        }
        if (*(int *)(temp_v5 + 0x5c8) == 1) {
          buttonHelpSetPreset(0xd4);
        }
      }
      if (*(int *)(temp_v5 + 0x5d0) == 3) {
        if (*(int *)(temp_v5 + 0x5c8) == 0) {
          buttonHelpSetPreset(0xd6);
        }
        if (*(int *)(temp_v5 + 0x5c8) == 1) {
          buttonHelpSetPreset(0xd7);
        }
        temp_v11 = *(int *)(temp_v5 + 0x5c8);
        if (temp_v11 == 2) {
          temp_v7 = 0xd8;
          buttonHelpSetPreset(temp_v7);
        }
      }
    }
    temp_v7 = *(unsigned int *)(temp_v1 + 0xc);
    break;
  case 2:
    FUN_001afc0c();
    *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
    return 0;
  case 3:
    temp_v5 = FUN_002bf818(temp_v1 + 0x34);
    temp_v11 = g_uiQuest;
    if (temp_v5 != 0) {
      if (*(int *)(g_uiQuest + 0x5e0) != 0) {
        if (*(char *)(g_uiQuest + 0x5f7) == '\0') {
          asdMemFree();
        }
        *(unsigned int *)(temp_v11 + 0x5e0) = 0;
      }
      asdMemFree(*(unsigned int *)(temp_v11 + 0x5e4));
      *(unsigned int *)(temp_v11 + 0x5e4) = 0;
      asdMemFreeSlot(*(unsigned int *)(temp_v11 + 0x5d4));
      *(unsigned int *)(temp_v11 + 0x5d4) = 0;
      asdMemFreeSlot(*(unsigned int *)(temp_v11 + 0x5d8));
      *(unsigned int *)(temp_v11 + 0x5d8) = 0;
      asdMemFreeSlot(*(unsigned int *)(temp_v11 + 0x5dc));
      *(unsigned int *)(temp_v11 + 0x5dc) = 0;
      temp_v11 = g_uiQuest;
      temp_v7 = *(unsigned int *)(g_uiQuest + 4);
      *(unsigned int *)(g_uiQuest + 4) = 0;
      *(unsigned int *)(temp_v11 + 8) = temp_v7;
      *(unsigned int *)(temp_v11 + 0x10) = 0;
      if (*(char *)(temp_v1 + 0x5f2) != '\0') {
        buttonHelpGetMode();
        buttonHelpSetPreset();
      }
    }
    *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
    return 0;
  case 4:
    if (*(short *)(temp_v1 + 0x228) != 0) {
      temp_v11 = FUN_002b8ee0(temp_v1 + 0x1d8,1);
    }
    else {
      temp_v11 = FUN_002b8ee0(temp_v1 + 0x1d8,0);
    }
    if (temp_v11 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v7 = *(unsigned int *)(temp_v1 + 8);
    break;
  case 5:
    temp_v11 = FUN_002bf818(temp_v1 + 0x1d8);
    if (temp_v11 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    if (*(short *)(temp_v1 + 0x228) != 2) {
      timerStart(temp_v1 + 0x1d8,1,0);
    }
    else {
      timerStart(temp_v1 + 0x1d8,0,0);
    }
    *(unsigned int *)(temp_v1 + 0x5c8) = *(unsigned int *)(temp_v1 + 0x5cc);
    temp_v11 = g_uiQuest;
    if (*(int *)(temp_v1 + 8) != 2) {
      if (*(int *)(temp_v1 + 8) != 0x1d) {
        if (*(int *)(temp_v1 + 0xc) == 0x1c) {
          temp_v5 = *(int *)(g_uiQuest + 0x5d0);
          if (temp_v5 == 1) {
            temp_v7 = 0xea;
            buttonHelpSetPreset(temp_v7);
          }
          else if (temp_v5 != 2) {
            if (temp_v5 == 3) {
              if (*(int *)(g_uiQuest + 0x5c8) == 0) {
                buttonHelpSetPreset(0xd6);
              }
              if (*(int *)(temp_v11 + 0x5c8) == 1) {
                buttonHelpSetPreset(0xd7);
              }
              if (*(int *)(temp_v11 + 0x5c8) == 2) {
                temp_v7 = 0xd8;
                buttonHelpSetPreset(temp_v7);
              }
            }
          }
          else {
            if (*(int *)(g_uiQuest + 0x5c8) == 0) {
              buttonHelpSetPreset(0xeb);
            }
            if (*(int *)(temp_v11 + 0x5c8) == 1) {
              temp_v7 = 0xec;
              buttonHelpSetPreset(temp_v7);
            }
          }
        }
      }
      else if (*(char *)(g_uiQuest + 0x5c4) != '\0') {
        if (*(int *)(g_uiQuest + 0x5d0) == 2) {
          if (*(int *)(g_uiQuest + 0x5c8) == 0) {
            buttonHelpSetPreset(0xd5);
          }
          if (*(int *)(temp_v11 + 0x5c8) == 1) {
            temp_v7 = 0xd4;
            buttonHelpSetPreset(temp_v7);
          }
        }
      }
      else {
        if (*(int *)(g_uiQuest + 0x5d0) == 2) {
          if (*(int *)(g_uiQuest + 0x5c8) == 0) {
            buttonHelpSetPreset(0xd5);
          }
          if (*(int *)(temp_v11 + 0x5c8) == 1) {
            buttonHelpSetPreset(0xd4);
          }
        }
        if (*(int *)(temp_v11 + 0x5d0) == 3) {
          if (*(int *)(temp_v11 + 0x5c8) == 0) {
            buttonHelpSetPreset(0xd6);
          }
          if (*(int *)(temp_v11 + 0x5c8) == 1) {
            buttonHelpSetPreset(0xd7);
          }
          if (*(int *)(temp_v11 + 0x5c8) == 2) {
            buttonHelpSetPreset(0xd8);
          }
        }
      }
    }
    else {
      FUN_002905d0();
    }
    temp_v7 = 4;
    temp_v11 = g_uiQuest;
    *(unsigned int *)(temp_v11 + 4) = temp_v7;
    *(unsigned int *)(temp_v11 + 0x10) = 0;
    *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
    return 0;
  case 6:
    temp_v11 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x5b4));
    if (temp_v11 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v11 = FUN_0029efc0(temp_v1 + 0x660);
    temp_v5 = FUN_0029efa8(temp_v1 + 0x660);
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + (temp_v5 + temp_v11) * 2 + 0x78a);
    temp_v11 = messageMainGetChoiceResult();
    if (temp_v11 != 0) {
      FUN_00290404();
      FUN_002905d0();
      temp_v7 = 2;
      break;
    }
    FUN_002bf810(0x100025c);
    dataTable1bOr1cGetRecord();
    if (*(char *)(temp_v4 + 6) != '\x06') {
      if (*(char *)(temp_v4 + 6) != '\t') {
        uiQuestStartSelected();
        *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
        return 0;
      }
      temp_v7 = 9;
      if (*(short *)(temp_v4 + 0x14c) != 0) {
        temp_v7 = 0xe;
      }
      temp_v11 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x5b4),temp_v7);
      if (temp_v11 == 0) {
        *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
        return 0;
      }
      temp_v7 = 0xf;
    }
    else {
      temp_v11 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x5b4),7);
      if (temp_v11 == 0) {
        *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
        return 0;
      }
      temp_v7 = 0xe;
    }
    break;
  case 7:
    temp_v11 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x5b4));
    if (temp_v11 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    FUN_0029efc0(temp_v1 + 0x660);
    FUN_0029efa8(temp_v1 + 0x660);
    temp_v11 = messageMainGetChoiceResult();
    if (temp_v11 != 0) {
      FUN_00290404();
      FUN_002905d0();
      temp_v7 = 2;
      break;
    }
    temp_v11 = FUN_002903f0();
    dataTable1bOr1cGetRecord();
    if ((*(char *)(temp_v11 + 6) != '\t') || (temp_v11 = gameJumpRequestIsPending(), temp_v11 == 0)) {
      temp_v3 = FUN_002903f0();
      *(unsigned short *)(temp_v1 + 0x980) = temp_v3;
      temp_v7 = FUN_002903f0();
      FUN_002902a0(temp_v7,0);
      *(unsigned char *)(temp_v1 + 0x5f3) = 1;
      temp_v2 = FUN_00290248(*(unsigned short *)(temp_v1 + 0x980));
      *(unsigned char *)(temp_v1 + 0x5f4) = temp_v2;
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v11 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x5b4),10);
    if (temp_v11 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v7 = 0x10;
    break;
  case 8:
    temp_v11 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x5b4));
    if (temp_v11 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    FUN_0029efc0(temp_v1 + 0x660);
    FUN_0029efa8(temp_v1 + 0x660);
    temp_v11 = messageMainGetChoiceResult();
    if (temp_v11 != 0) {
      FUN_00290404();
      FUN_002905d0();
      temp_v7 = 2;
      break;
    }
    temp_v11 = FUN_002903f0();
    dataTable1bOr1cGetRecord();
    if ((*(char *)(temp_v11 + 6) != '\t') || (temp_v11 = gameJumpRequestIsPending(), temp_v11 == 0)) {
      temp_v3 = FUN_002903f0();
      *(unsigned short *)(temp_v1 + 0x980) = temp_v3;
      temp_v7 = FUN_002903f0();
      FUN_002902a0(temp_v7,0);
      *(unsigned char *)(temp_v1 + 0x5f3) = 1;
      temp_v2 = FUN_00290248(*(unsigned short *)(temp_v1 + 0x980));
      *(unsigned char *)(temp_v1 + 0x5f4) = temp_v2;
      *(unsigned char *)(temp_v1 + 0x5f6) = 1;
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v11 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x5b4),10);
    if (temp_v11 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v7 = 9;
    break;
  case 9:
    temp_v11 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x5b4));
    if (temp_v11 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    FUN_0029efc0(temp_v1 + 0x660);
    FUN_0029efa8(temp_v1 + 0x660);
    temp_v11 = messageMainGetChoiceResult();
    if (temp_v11 == 0) {
      temp_v3 = FUN_002903f0();
      *(unsigned short *)(temp_v1 + 0x980) = temp_v3;
      temp_v7 = FUN_002903f0();
      FUN_002902a0(temp_v7,0);
      temp_v2 = 1;
      *(unsigned char *)(temp_v1 + 0x5f3) = 1;
      *(unsigned char *)(temp_v1 + 0x5f5) = 1;
      *(unsigned char *)(temp_v1 + 0x5f6) = temp_v2;
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    FUN_00290404();
    FUN_002905d0();
    temp_v7 = 2;
    break;
  case 10:
    temp_v11 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x5b4));
    if (temp_v11 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    FUN_002905d0();
    temp_v7 = 2;
    break;
  case 0xb:
    temp_v11 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x5b4));
    if (temp_v11 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v11 = messageMainGetChoiceResult();
    if (temp_v11 != 0) {
      FUN_00290404();
      FUN_002905d0();
      temp_v7 = 2;
      break;
    }
    buttonHelpSetPreset(0xe2);
    temp_v11 = FUN_0029022c();
    if (temp_v11 != 0) {
      temp_v11 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x5b4),2);
      if (temp_v11 == 0) {
        *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
        return 0;
      }
      temp_v7 = 8;
    }
    else {
      temp_v11 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x5b4),0);
      if (temp_v11 == 0) {
        *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
        return 0;
      }
      temp_v7 = 6;
    }
    break;
  case 0xc:
    FUN_002bf818(temp_v1 + 0x264);
    if ((*(char *)(temp_v1 + 0x2ee) == '\0') ||
       (temp_v11 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x5b4)), temp_v11 != 2)) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v11 = gameFlagIsSet(0x216);
    if (temp_v11 == 0) {
      FUN_00290404();
      FUN_002905d0();
      temp_v11 = FUN_0029efc0(temp_v1 + 0x660);
      temp_v5 = FUN_0029efa8(temp_v1 + 0x660);
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + (temp_v5 + temp_v11) * 2 + 0x78a);
      dataTable1bOr1cGetRecord();
      if (*(char *)(temp_v4 + 6) == '\x06') {
        *(unsigned char *)(temp_v1 + 0x5c5) = 1;
      }
      else if (*(char *)(temp_v4 + 6) != '\t') {
        if ((*(char *)(temp_v1 + 0x5f4) == '\0') && (*(char *)(temp_v1 + 0x5f5) == '\0')) {
          temp_v7 = 2;
          break;
        }
      }
      else {
        *(unsigned char *)(temp_v1 + 0x5c6) = 1;
        gameStateResetRecord(g_aocMain + 0xa8);
      }
      timerStart(temp_v1 + 0x34,2,0);
      temp_v7 = 3;
      break;
    }
    temp_v11 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x5c0),3);
    if (temp_v11 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v7 = 0x1b;
    break;
  case 0xe:
    temp_v11 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x5b4));
    if (temp_v11 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    FUN_0029efc0(temp_v1 + 0x660);
    FUN_0029efa8(temp_v1 + 0x660);
    temp_v11 = messageMainGetChoiceResult();
    if (temp_v11 == 0) {
      uiQuestStartSelected();
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    if (*(char *)(temp_v1 + 0x5f4) == '\0') {
      temp_v0 = *(char *)(temp_v1 + 0x5f5);
joined_r0x0019627c:
      if (temp_v0 == '\0') {
        FUN_00290404();
        FUN_002905d0();
        temp_v7 = 2;
        break;
      }
    }
    timerStart(temp_v1 + 0x34,2,0);
    temp_v7 = 3;
    break;
  case 0xf:
    temp_v11 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x5b4));
    if (temp_v11 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    FUN_0029efc0(temp_v1 + 0x660);
    FUN_0029efa8(temp_v1 + 0x660);
    temp_v11 = messageMainGetChoiceResult();
    if (temp_v11 == 0) {
      uiQuestStartSelected();
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    if (*(char *)(temp_v1 + 0x5f4) == '\0') {
      temp_v0 = *(char *)(temp_v1 + 0x5f5);
      goto joined_r0x0019627c;
    }
    timerStart(temp_v1 + 0x34,2,0);
    temp_v7 = 3;
    break;
  case 0x10:
    temp_v11 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x5b4));
    if (temp_v11 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    FUN_0029efc0(temp_v1 + 0x660);
    FUN_0029efa8(temp_v1 + 0x660);
    temp_v11 = messageMainGetChoiceResult();
    if (temp_v11 == 0) {
      temp_v3 = FUN_002903f0();
      *(unsigned short *)(temp_v1 + 0x980) = temp_v3;
      temp_v7 = FUN_002903f0();
      FUN_002902a0(temp_v7,0);
      *(unsigned char *)(temp_v1 + 0x5f3) = 1;
      *(unsigned char *)(temp_v1 + 0x5f5) = 1;
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    FUN_00290404();
    FUN_002905d0();
    temp_v7 = 2;
    break;
  case 0x11:
    if (*(int *)(temp_v1 + 0x10) < 6) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    FUN_002b8ee0(temp_v1 + 0x34,1);
    FUN_002bf818(temp_v1 + 0x2f0);
    if ((*(char *)(temp_v1 + 0x37a) == '\0') ||
       (temp_v11 = *(int *)(temp_v1 + 0x5e8) + 1, *(int *)(temp_v1 + 0x5e8) = temp_v11, temp_v11 < 2)) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    *(unsigned int *)(temp_v1 + 0x5e8) = 2;
    temp_v11 = FUN_002bf818(temp_v1 + 0x37c);
    if (temp_v11 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v11 = 0;
    temp_v14 = 0x3dcccccd;
    do {
      temp_v6 = temp_v1 + temp_v11 * 4;
      *(unsigned int *)(temp_v6 + 0x988) = 0x78;
      temp_v5 = randNextInRange(1);
      if (temp_v5 == 0) {
        *(unsigned int *)(temp_v6 + 0x9a4) = 0xffffffff;
      }
      else {
        *(unsigned int *)(temp_v6 + 0x9a4) = 1;
      }
      temp_v5 = randNextInRange(0x14);
      temp_v11 = temp_v11 + 1;
      temp_v13 = (float)VectorUnsignedToFloat(temp_v5 + 0x14,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(int *)(temp_v6 + 0x9c0) = (int)(temp_v13 * (float)temp_v14);
    } while (temp_v11 < 7);
    temp_v7 = 0x12;
    break;
  case 0x12:
    temp_v11 = FUN_002bf4f8(0x29,0x56);
    temp_v14 = 0x3dcccccd;
    temp_v5 = 0;
    do {
      temp_v10 = temp_v1 + temp_v5 * 4;
      temp_v6 = *(int *)(temp_v10 + 0x9a4);
      temp_v9 = temp_v6 * *(int *)(temp_v10 + 0x9c0) + *(int *)(temp_v10 + 0x988);
      *(int *)(temp_v10 + 0x988) = temp_v9;
      if (temp_v6 < 0) {
        temp_v8 = (int)*(short *)(temp_v11 + 10);
        if (temp_v9 <= temp_v8) {
          *(int *)(temp_v10 + 0x988) = temp_v8;
          *(int *)(temp_v10 + 0x9a4) = -temp_v6;
          temp_v6 = randNextInRange(0x14);
          temp_v13 = (float)VectorUnsignedToFloat(temp_v6 + 0x14,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(int *)(temp_v10 + 0x9c0) = (int)(temp_v13 * (float)temp_v14);
        }
      }
      else {
        temp_v8 = (int)*(short *)(temp_v11 + 10) + (int)*(short *)(*(int *)(temp_v11 + 0xc) + 2);
        if (temp_v8 <= temp_v9) {
          *(int *)(temp_v10 + 0x988) = temp_v8;
          *(int *)(temp_v10 + 0x9a4) = -temp_v6;
          temp_v6 = randNextInRange(0x14);
          temp_v13 = (float)VectorUnsignedToFloat(temp_v6 + 0x14,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(int *)(temp_v10 + 0x9c0) = (int)(temp_v13 * (float)temp_v14);
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 7);
    temp_v11 = 0;
    FUN_002c1658(0,1);
    if (temp_v11 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    timerStart(temp_v1 + 0x34,2,0);
    spriteStartAnimationByIndex(temp_v1 + 0x2f0,4);
    temp_v7 = 0x13;
    break;
  case 0x13:
    FUN_002bf818(temp_v1 + 0x34);
    FUN_002bf818(temp_v1 + 0x2f0);
    if (*(char *)(temp_v1 + 0xbe) == '\0') {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    buttonHelpGetMode();
    buttonHelpSetPreset();
    temp_v7 = 0;
    break;
  case 0x14:
    if (*(char *)(temp_v1 + 0x5f0) != '\0') {
      FUN_002b8ee0(temp_v1 + 0x34,0);
    }
    FUN_002b8ee0(temp_v1 + 0x408,0);
    temp_v12 = *(char *)(temp_v1 + 0x492) != '\0';
    temp_v11 = 0;
    temp_v5 = 0;
    if (temp_v12) {
      temp_v5 = *(int *)(temp_v1 + 0x10);
      temp_v11 = temp_v5 - 0x1e;
    }
    if ((temp_v12 && temp_v5 != 0x1e) && temp_v11 < 0 == (temp_v12 && SBORROW4(temp_v5,0x1e))) {
      if (temp_v5 < 0x22) {
        *(float *)(temp_v1 + 0x5ec) = *(float *)(temp_v1 + 0x5ec) - 0.0696f;
      }
      else if (temp_v5 < 0x25) {
        temp_v13 = *(float *)(temp_v1 + 0x5ec) + 0.0348f;
        *(float *)(temp_v1 + 0x5ec) = temp_v13;
      }
      else if (0x27 >= temp_v5) {
        temp_v13 = *(float *)(temp_v1 + 0x5ec) - 0.0348f;
        *(float *)(temp_v1 + 0x5ec) = temp_v13;
      }
      if (temp_v5 == 0x2b) {
        FUN_0029016c(*(unsigned short *)(temp_v1 + 0x97e),0);
        gameOptionsHasEnabledParameters();
        FUN_002900d0();
        if (*(char *)(temp_v1 + 0x5c4) != '\0') {
          temp_v11 = temp_v1 + 0x5fc;
          temp_v5 = temp_v1 + 0x6c4;
        }
        else {
          temp_v11 = temp_v1 + 0x660;
          temp_v5 = temp_v1 + 0x78a;
        }
        temp_v6 = FUN_0029efc0(temp_v11);
        temp_v11 = FUN_0029efa8(temp_v11);
        temp_v3 = *(unsigned short *)(temp_v5 + (temp_v11 + temp_v6) * 2);
        if (*(char *)(temp_v1 + 0x5f2) != '\0') {
          temp_v3 = *(unsigned short *)(temp_v1 + 0x97e);
        }
        uiQuestCountDetailPages(temp_v3);
        temp_v11 = g_uiQuest;
        *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
        *(unsigned int *)(temp_v11 + 4) = 0x15;
        *(unsigned int *)(temp_v11 + 0x10) = 0;
      }
      temp_v13 = *(float *)(temp_v1 + 0x5ec);
      if (temp_v13 < 0.0f) {
        temp_v13 = temp_v13 + 6.28f;
        *(float *)(temp_v1 + 0x5ec) = temp_v13;
      }
      if ((int)temp_v13 >= 0x40c8f5c4) {
        *(float *)(temp_v1 + 0x5ec) = temp_v13 - 6.28f;
      }
    }
    *(unsigned int *)(temp_v1 + 0x438) = *(unsigned int *)(temp_v1 + 0x5ec);
    *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
    return 0;
  case 0x15:
    temp_v11 = 0;
    FUN_002c1658(0,1);
    if (temp_v11 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    if (*(char *)(temp_v1 + 0x5f0) != '\0') {
      timerStart(temp_v1 + 0x34,2,0);
    }
    timerStart(temp_v1 + 0x408,2,0);
    uiFadeRequestHalf();
    temp_v7 = 0x16;
    break;
  case 0x16:
    if (*(char *)(temp_v1 + 0x5f0) != '\0') {
      FUN_002bf818(temp_v1 + 0x34);
    }
    FUN_002bf818();
    if (*(char *)(temp_v1 + 0x492) == '\0') {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    if (*(char *)(temp_v1 + 0x5f0) == '\0') {
      FUN_002905d0();
      FUN_00290404();
      if (*(char *)(temp_v1 + 0x5f6) != '\0') {
        temp_v11 = FUN_0029efc0(temp_v1 + 0x660);
        temp_v5 = FUN_0029efa8(temp_v1 + 0x660);
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + (temp_v5 + temp_v11) * 2 + 0x78a);
        dataTable1bOr1cGetRecord();
        if (*(char *)(temp_v4 + 6) != '\x06') {
          if (*(char *)(temp_v4 + 6) != '\t') {
            FUN_002bf810(0x100025c);
            uiQuestStartSelected();
          }
          else {
            temp_v7 = 9;
            if (*(short *)(temp_v4 + 0x14c) != 0) {
              temp_v7 = 0xe;
            }
            temp_v11 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x5b4),temp_v7);
            if (temp_v11 != 0) {
              temp_v7 = 0xf;
              temp_v11 = g_uiQuest;
              *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
              *(unsigned int *)(temp_v11 + 4) = temp_v7;
              *(unsigned int *)(temp_v11 + 0x10) = 0;
            }
          }
        }
        else {
          temp_v11 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x5b4),7);
          if (temp_v11 != 0) {
            temp_v7 = 0xe;
            temp_v11 = g_uiQuest;
            *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
            *(unsigned int *)(temp_v11 + 4) = temp_v7;
            *(unsigned int *)(temp_v11 + 0x10) = 0;
          }
        }
        temp_v2 = 0;
        *(unsigned char *)(temp_v1 + 0x5f6) = temp_v2;
        *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
        return 0;
      }
      temp_v0 = *(char *)(temp_v1 + 0x5f4);
      temp_v12 = temp_v0 != '\0';
      if (!temp_v12) {
        temp_v0 = *(char *)(temp_v1 + 0x5f5);
      }
      if (temp_v12 || temp_v0 != '\0') {
        timerStart(temp_v1 + 0x34,2,0);
        temp_v7 = 3;
        break;
      }
      temp_v7 = 2;
      break;
    }
    temp_v7 = 0;
    break;
  case 0x17:
    temp_v11 = FUN_002b8ee0(temp_v1 + 0x34,0);
    temp_v12 = temp_v11 == 0;
    temp_v11 = 0;
    temp_v5 = 0;
    if (!temp_v12) {
      temp_v5 = *(int *)(temp_v1 + 0x10);
      temp_v11 = temp_v5 - 0x1e;
    }
    if ((temp_v12 || temp_v5 == 0x1e) || temp_v11 < 0 != (!temp_v12 && SBORROW4(temp_v5,0x1e))) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v11 = FUN_002bf818();
    if (temp_v11 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    if (*(int *)(temp_v1 + 0x5e0) != 0) {
      if (*(char *)(temp_v1 + 0x5f7) == '\0') {
        asdMemFree();
      }
      *(unsigned int *)(temp_v1 + 0x5e0) = 0;
    }
    FUN_0028fe0c(*(unsigned short *)(temp_v1 + 0x97e),1);
    timerStart(temp_v1 + 0x494,0);
    spriteStartAnimationByIndex(temp_v1 + 0x520,5);
    temp_v7 = 0x18;
    break;
  case 0x18:
    temp_v11 = FUN_002b8ee0(temp_v1 + 0x494,0);
    if ((temp_v11 == 0) || (temp_v11 = FUN_002bf818(temp_v1 + 0x520), temp_v11 == 0)) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v11 = 8;
    FUN_002c1658(8,0);
    if (temp_v11 != 0) {
      temp_v11 = *(int *)(temp_v1 + 0x5c8) - 1;
      *(int *)(temp_v1 + 0x5cc) = temp_v11;
      if (temp_v11 < 0) {
        temp_v11 = *(int *)(temp_v1 + 0x5d0) - 1;
        *(int *)(temp_v1 + 0x5cc) = temp_v11;
      }
      else {
        temp_v11 = *(int *)(temp_v1 + 0x5cc);
      }
      if (temp_v11 == *(int *)(temp_v1 + 0x5c8)) {
        *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
        return 0;
      }
      timerStart(temp_v1 + 0x1d8,3,0);
      temp_v7 = 5;
    }
    else {
      temp_v11 = 7;
      FUN_002c1658(7,0);
      if (temp_v11 != 0) {
        temp_v11 = *(int *)(temp_v1 + 0x5c8) + 1;
        *(int *)(temp_v1 + 0x5cc) = temp_v11;
        if (temp_v11 >= *(int *)(temp_v1 + 0x5d0)) {
          temp_v11 = 0;
          *(unsigned int *)(temp_v1 + 0x5cc) = 0;
        }
        else {
          temp_v11 = *(int *)(temp_v1 + 0x5cc);
        }
        if (temp_v11 == *(int *)(temp_v1 + 0x5c8)) {
          *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
          return 0;
        }
        timerStart(temp_v1 + 0x1d8,2,0);
        temp_v7 = 5;
      }
      else {
        temp_v11 = 0;
        FUN_002c1658(0,1);
        if (temp_v11 == 0) {
          temp_v11 = 1;
          FUN_002c1658();
          if (temp_v11 == 0) {
            *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
            return 0;
          }
        }
        timerStart(temp_v1 + 0x34,2,0);
        temp_v7 = 0x19;
      }
    }
    break;
  case 0x19:
    temp_v11 = FUN_002bf818(temp_v1 + 0x34);
    if (temp_v11 == 0) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    buttonHelpGetMode();
    buttonHelpSetPreset();
    temp_v7 = 0;
    break;
  case 0x1a:
    temp_v11 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x5c0));
    if (temp_v11 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    temp_v7 = 2;
    break;
  case 0x1b:
    temp_v11 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x5c0));
    if (temp_v11 != 2) {
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    *(unsigned char *)(temp_v1 + 0x5c7) = 1;
    timerStart(temp_v1 + 0x34,2,0);
    temp_v7 = 3;
    break;
  case 0x1c:
  case 0x1d:
    temp_v11 = 8;
    FUN_002c1658(8,0);
    if (temp_v11 != 0) {
      temp_v11 = *(int *)(temp_v1 + 0x5c8) - 1;
      *(int *)(temp_v1 + 0x5cc) = temp_v11;
      if (temp_v11 < 0) {
        temp_v11 = *(int *)(temp_v1 + 0x5d0) - 1;
        *(int *)(temp_v1 + 0x5cc) = temp_v11;
      }
      else {
        temp_v11 = *(int *)(temp_v1 + 0x5cc);
      }
      if (temp_v11 == *(int *)(temp_v1 + 0x5c8)) {
        *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
        return 0;
      }
      timerStart(temp_v1 + 0x1d8,3,0);
      temp_v11 = g_uiQuest;
      *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
      *(unsigned int *)(temp_v11 + 4) = 5;
      *(unsigned int *)(temp_v11 + 0x10) = 0;
      temp_v7 = 0x100016f;
    }
    else {
      temp_v11 = 7;
      FUN_002c1658(7,0);
      if (temp_v11 != 0) {
        temp_v11 = *(int *)(temp_v1 + 0x5c8) + 1;
        *(int *)(temp_v1 + 0x5cc) = temp_v11;
        if (temp_v11 >= *(int *)(temp_v1 + 0x5d0)) {
          temp_v11 = 0;
          *(unsigned int *)(temp_v1 + 0x5cc) = 0;
        }
        else {
          temp_v11 = *(int *)(temp_v1 + 0x5cc);
        }
        if (temp_v11 == *(int *)(temp_v1 + 0x5c8)) {
          *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
          return 0;
        }
        timerStart(temp_v1 + 0x1d8,2,0);
        temp_v11 = g_uiQuest;
        *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
        *(unsigned int *)(temp_v11 + 4) = 5;
        *(unsigned int *)(temp_v11 + 0x10) = 0;
        temp_v7 = 0x100016f;
      }
      else {
        temp_v11 = 0;
        FUN_002c1658(0,1);
        if (temp_v11 == 0) {
          temp_v11 = 1;
          FUN_002c1658();
          if (temp_v11 == 0) {
            *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
            return 0;
          }
        }
        timerStart(temp_v1 + 0x34,2,0);
        temp_v11 = g_uiQuest;
        *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
        *(unsigned int *)(temp_v11 + 4) = 3;
        *(unsigned int *)(temp_v11 + 0x10) = 0;
        temp_v7 = 0x100016d;
      }
    }
    eventQueueAddUniqueIfValid(temp_v7);
    *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
    return 0;
  case 0x1e:
    temp_v5 = useCounterIsFinished();
    if (temp_v5 == 0) {
      temp_v5 = useCounterGetCurrentValue();
      if (temp_v5 != 0x4b) {
        uiQuestSortListByEntryKind((int)*(char *)(temp_v1 + 0x5c4));
        if (*(char *)(temp_v1 + 0x5c4) != '\0') {
          temp_v5 = temp_v1 + 0x6c4;
        }
        else {
          temp_v5 = temp_v1 + 0x78a;
        }
        temp_v6 = FUN_0029efc0(temp_v11);
        temp_v11 = FUN_0029efa8(temp_v11);
        temp_v3 = *(unsigned short *)(temp_v5 + (temp_v11 + temp_v6) * 2);
        if (*(int *)(temp_v1 + 0x5e0) != 0) {
          if (*(char *)(temp_v1 + 0x5f7) == '\0') {
            asdMemFree();
          }
          *(unsigned int *)(temp_v1 + 0x5e0) = 0;
        }
        FUN_0028fe0c(temp_v3,1);
      }
      *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
      return 0;
    }
    useCounterRelease();
    FUN_002905d0();
    FUN_00290404();
    temp_v7 = 2;
  }
  temp_v11 = g_uiQuest;
  *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
  *(unsigned int *)(temp_v11 + 4) = temp_v7;
  *(unsigned int *)(temp_v11 + 0x10) = 0;
  *(int *)(temp_v1 + 0x10) = *(int *)(temp_v1 + 0x10) + 1;
  return 0;
}

} /* extern "C" */
