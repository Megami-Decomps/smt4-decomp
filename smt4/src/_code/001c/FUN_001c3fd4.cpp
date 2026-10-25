/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c3fd4` (_code @ 0x1c3fd4, 0x48d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int partyPanelResetCursor(void);
int FUN_00205a90(void);
int FUN_0026b7c0(void);
int FUN_0026b9bc(void);
int partyPanelSortEntries(void);
int FUN_0029bbc8(void);
int partyFindActiveSlotById(...);
int gameCounterAddSaturating(...);
int FUN_0029bed8(...);
int FUN_0029c1c8(...);
int unitRecalculateEffectiveStats(...);
int useCounterRelease(void);
int eventQueueAddUnique(...);
int spriteStartAnimationByIndex(...);
int memClear(...);
int FUN_002e3378(...);
int FUN_003ae34c(...);

int FUN_0017fbc4(void);
int scrRunOpcodesStub(...);
int FUN_0026beb4(...);
int FUN_0026c214(void);
int FUN_0026c464(...);
int uniteLoadPreviewRoomModel(void);
int FUN_0028a924(...);
int FUN_0028d1f4(...);
int FUN_00295eb0(...);
int gameGlobalsSetSelected(...);
int FUN_0029bd4c(void);
int FUN_0029c43c(...);
int FUN_0029c4ac(...);
int FUN_0029c4c8(...);
int FUN_0029ee6c(...);
int buttonHelpGetMode(void);
int partyMemberFindById(...);
int devilGetRecord(void);
int table08ApplyToParty(...);

int FUN_001d1828(void);
int FUN_0026c654(...);
int FUN_0026c710(...);
int communicationBeginTransition(...);
int communicationSetResultPointer(void);
void comWinSetText(const unsigned char* text);
int btlUiPanelFadeInWhenReady(...);
int FUN_0026c868(void);
int FUN_0026c9c0(void);
int FUN_00292bcc(...);
int scrScriptProcessStartEntry(...);
int FUN_00298d28(...);
int FUN_0029a0cc(...);
int FUN_0029c4e4(...);
int beginStatusPanelClose(void);
int buttonHelpSetPreset(...);
int __aeabi_memcpy4(...);

int FUN_0026cba4(...);
int partyPanelHandleCursorEdgeInput(...);
int FUN_0026d144(...);
int FUN_0026d3e0(...);
int FUN_00292be4(...);
int FUN_0029378c(...);
int menuSetModeAndResetTransitions(...);
int FUN_0029e890(...);
int FUN_0029eb5c(...);

int FUN_0026d5a4(void);
int FUN_0026d654(...);
int FUN_0026d670(void);
int partyPanelToggleRefresh(...);
int FUN_002932d8(...);
int statusPanelSetOpen(...);
int FUN_0029d8f4(...);
int FUN_0029defc(...);
int FUN_0029dfc0(...);
int scrollOwnerSelectIndex(...);
int objectPartRunUnlessLocked(...);
int FUN_0029efd8(...);
int gameGetUnitRecord(...);
int eventQueueAddUniqueIfValid(...);
int FUN_002c1658(...);

int FUN_0026cf4c(void);
int FUN_0026d6a4(...);
void FUN_0026dafc(unsigned int color);
unsigned int partyPanelPollSelectedStatusColor(void);
int partyPanelSetState(...);
int partyPanelRebuildTouchRegions(void);
int objClearFlagPair(int);
int FUN_002937e0(void);
int messageMainFinishWindow(void);
int FUN_00297060(unsigned int, unsigned int);
int FUN_0029acb0(void);
int FUN_002a0cc8(...);
int gameGetSlotTable(...);
int ifTouchRegionRemove(void);
int FUN_002b8ee0(...);
int timerStart(...);
int FUN_002bf818(...);
int __aeabi_memset4(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_001c6014; /* 0x1c6014 */
extern int g_btlUiBlock; /* 0x439ca8 */
extern int g_partyPanel; /* 0x43dcf0 */

/* Supplied declaration required: FUN_0017fbc4. */
/* Supplied declaration required: scrRunOpcodesStub. */
/* Supplied declaration required: FUN_001d1828. */
extern int FUN_002015a4(void);
/* Supplied declaration required: partyPanelResetCursor. */
/* Supplied declaration required: FUN_00205a90. */
/* Supplied declaration required: FUN_0026b7c0. */
/* Supplied declaration required: FUN_0026b9bc. */
/* Supplied declaration required: partyPanelSortEntries. */
/* Supplied declaration required: FUN_0026beb4. */
/* Supplied declaration required: FUN_0026c214. */
/* Supplied declaration required: FUN_0026c464. */
/* Supplied declaration required: uniteLoadPreviewRoomModel. */
extern int gameGetNavigationState(void);
/* Supplied declaration required: FUN_0026c654. */
/* Supplied declaration required: FUN_0026c710. */
/* Supplied declaration required: communicationBeginTransition. */
/* Supplied declaration required: communicationSetResultPointer. */
/* Supplied declaration required: btlUiPanelFadeInWhenReady. */
/* Supplied declaration required: FUN_0026c868. */
/* Supplied declaration required: FUN_0026c9c0. */
/* Supplied declaration required: FUN_0026cba4. */
/* Supplied declaration required: partyPanelHandleCursorEdgeInput. */
/* Supplied declaration required: FUN_0026cf4c. */
/* Supplied declaration required: FUN_0026d144. */
/* Supplied declaration required: FUN_0026d3e0. */
/* Supplied declaration required: FUN_0026d5a4. */
/* Supplied declaration required: FUN_0026d654. */
/* Supplied declaration required: FUN_0026d670. */
/* Supplied declaration required: FUN_0026d6a4. */
extern int gameGetPendingNavigationState(void);
extern int campCecIsActive(void);
extern unsigned short FUN_00282ccc(void);
extern unsigned char FUN_00282e70(void);
/* Supplied declaration required: FUN_0028a924. */
/* Supplied declaration required: FUN_0028d1f4. */
extern int FUN_0028fb40(unsigned short);
/* Supplied declaration required: FUN_00292bcc. */
/* Supplied declaration required: FUN_00292be4. */
/* Supplied declaration required: partyPanelToggleRefresh. */
/* Supplied declaration required: FUN_002932d8. */
/* Supplied declaration required: partyPanelSetState. */
/* Supplied declaration required: partyPanelRebuildTouchRegions. */
/* Supplied declaration required: FUN_0029378c. */
/* Supplied declaration required: objClearFlagPair. */
/* Supplied declaration required: FUN_002937e0. */
extern int btlGetMainState(void);
extern int FUN_0029563c(void);
/* Supplied declaration required: FUN_00295eb0. */
/* Supplied declaration required: messageMainFinishWindow. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
extern int messageMainGetChoiceResult(void);
extern int FUN_002987d8(int, unsigned short);
/* Supplied declaration required: FUN_00298d28. */
/* Supplied declaration required: FUN_0029a0cc. */
/* Supplied declaration required: gameGlobalsSetSelected. */
/* Supplied declaration required: FUN_0029acb0. */
extern int FUN_0029ae44(void);
/* Supplied declaration required: FUN_0029bbc8. */
/* Supplied declaration required: partyFindActiveSlotById. */
/* Supplied declaration required: FUN_0029bd4c. */
/* Supplied declaration required: gameCounterAddSaturating. */
/* Supplied declaration required: FUN_0029bed8. */
extern unsigned int FUN_0029c0c0(unsigned int, int);
/* Supplied declaration required: FUN_0029c1c8. */
extern unsigned int FUN_0029c1fc(void);
extern int messageMainTargetIsClear(void);
extern int FUN_0029c40c(void);
/* Supplied declaration required: FUN_0029c43c. */
extern int FUN_0029c46c(void);
extern int FUN_0029c48c(void);
/* Supplied declaration required: FUN_0029c4ac. */
/* Supplied declaration required: FUN_0029c4c8. */
/* Supplied declaration required: FUN_0029c4e4. */
/* Supplied declaration required: unitRecalculateEffectiveStats. */
/* Supplied declaration required: beginStatusPanelClose. */
extern int ifTouchGetSelectionModeForRegion(int);
/* Supplied declaration required: statusPanelSetOpen. */
/* Supplied declaration required: FUN_0029d8f4. */
/* Supplied declaration required: menuSetModeAndResetTransitions. */
extern unsigned int FUN_0029dde0(void);
/* Supplied declaration required: FUN_0029defc. */
extern int FUN_0029dfa8(void);
/* Supplied declaration required: FUN_0029dfc0. */
extern int gameGetFlagByte12e8(void);
extern int FUN_0029e02c(void);
extern int FUN_0029e0f8(void);
extern int useCounterGetCurrentValue(void);
/* Supplied declaration required: useCounterRelease. */
extern int useCounterIsFinished(void);
/* Supplied declaration required: FUN_0029e890. */
/* Supplied declaration required: scrollOwnerSelectIndex. */
/* Supplied declaration required: objectPartRunUnlessLocked. */
extern int FUN_0029ea68(unsigned short);
/* Supplied declaration required: FUN_0029eb5c. */
/* Supplied declaration required: FUN_0029ee6c. */
extern int FUN_0029efa8(int);
/* Supplied declaration required: FUN_0029efd8. */
/* Supplied declaration required: buttonHelpGetMode. */
/* Supplied declaration required: FUN_002a0cc8. */
extern int sys43e188GetState(void);
/* Supplied declaration required: gameGetUnitRecord. */
/* Supplied declaration required: gameGetSlotTable. */
extern int gameCountUnits(void);
/* Supplied declaration required: partyMemberFindById. */
extern unsigned int gameGetPlayerData(void);
/* Supplied declaration required: buttonHelpSetPreset. */
extern int buttonHelpGetStatus(void);
/* Supplied declaration required: ifTouchRegionRemove. */
extern int ifTouchGetSelectionMode(void);
/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: FUN_002b8ee0. */
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: spriteStartAnimationByIndex. */
/* Supplied declaration required: FUN_002bf818. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_002c1658. */
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: FUN_002e3378. */
extern unsigned long long partyPanelFocusSelectedPartyMember(unsigned int);
/* Supplied declaration required: table08ApplyToParty. */
extern int btlItemUselessOnGroupMember(unsigned int, unsigned short);
extern int FUN_003a65f4(unsigned int, int, unsigned short);
/* Supplied declaration required: FUN_003ae34c. */
/* Supplied declaration required: __aeabi_memcpy4. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_001c3fd4(void)

{
/* irregular: 35 goto(s); 97 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  int *piVar17;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned char temp_v22;
  unsigned long long temp_v23;
  int temp_v24;
  
  temp_v1 = g_partyPanel;
  if (*(int *)(g_partyPanel + 0x1c) == 0x17) {
    return 0;
  }
  temp_v4 = gameGetSlotTable(*(int *)(g_partyPanel + 0x1c));
  temp_v24 = 0;
  FUN_002bf818(temp_v1 + 0x68);
  FUN_002bf818(temp_v1 + 0xf4);
  FUN_002bf818(temp_v1 + 0x20c);
  temp_v5 = temp_v1 + 0x4c8;
  FUN_002bf818();
  FUN_0026dafc(partyPanelPollSelectedStatusColor());
  temp_v6 = *(int *)(temp_v1 + 0x1c);
  if ((((temp_v6 == 0 || temp_v6 == 0x15) || (temp_v6 == 0xe || temp_v6 == 0xd)) ||
      (temp_v6 == 0x12 || temp_v6 == 0x16)) || (*(char *)(temp_v1 + 0x66c) == '\v')) {
    temp_v7 = 1;
  }
  else {
    temp_v7 = 0;
  }
  FUN_002a0cc8(temp_v7);
  temp_v6 = *(int *)(temp_v1 + 0x1c);
  if (((temp_v6 != 0 && temp_v6 != 0x15) && ((temp_v6 != 0x17 && temp_v6 != 0xb) && temp_v6 != 0xd)) &&
     ((*(char *)(temp_v1 + 0x43) == '\0' &&
      ((temp_v6 = FUN_0029e02c(), temp_v6 != 0 &&
       (temp_v8 = useCounterIsFinished(), temp_v6 = g_partyPanel, temp_v8 != 0)))))) {
    temp_v8 = 0;
    if (0 < *(int *)(g_partyPanel + 0x6b8)) {
      do {
        ifTouchRegionRemove();
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < *(int *)(temp_v6 + 0x6b8));
    }
    *(unsigned int *)(temp_v6 + 0x6b8) = 0;
    __aeabi_memset4(temp_v6 + 0x67c,0x3c,0xffffffff);
    FUN_0029acb0();
    temp_v6 = gameGetFlagByte12e8();
    if (temp_v6 < 0) {
      temp_v6 = 0;
      do {
        timerStart(temp_v1 + temp_v6 * 0x8c + 0x298,8,0);
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
      timerStart(temp_v5,8,0);
    }
    else {
      temp_v6 = gameGetFlagByte12e8();
      if (0 < temp_v6) {
        temp_v6 = 0;
        do {
          timerStart(temp_v1 + temp_v6 * 0x8c + 0x298,7,0);
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 4);
        timerStart(temp_v5,7,0);
      }
    }
    if (*(char *)(temp_v1 + 0x66c) == '\v') {
      messageMainFinishWindow();
    }
    *(unsigned int *)(temp_v1 + 0x20) = 0x10;
    partyPanelSetState(0x15,1);
  }
  temp_v15 = 0;
  do {
    temp_v6 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v1 + temp_v15 * 2 + 0x67c));
    temp_v10 = temp_v15;
    if ((temp_v6 == 1 || temp_v6 == 2) || temp_v6 == 6) break;
    temp_v15 = temp_v15 + 1;
    temp_v10 = 0xffffffff;
  } while ((int)temp_v15 < 0x1c);
  temp_v3 = FUN_00282ccc();
  *(unsigned short *)(temp_v1 + 0x3a) = temp_v3;
  temp_v2 = FUN_00282e70();
  *(unsigned char *)(temp_v1 + 0x44) = temp_v2;
  switch(*(unsigned int *)(temp_v1 + 0x1c)) {
  case 0:
    temp_v6 = 0;
    do {
      temp_v4 = temp_v1 + temp_v6 * 0x8c + 0x298;
      if (*(short *)(temp_v1 + 0x2e8) != 5) {
        FUN_002b8ee0(temp_v4,0);
        if (temp_v6 == 3) {
          temp_v0 = *(char *)(temp_v1 + 0x4c6);
joined_r0x001c43a0:
          if ((temp_v0 != '\0') &&
             ((temp_v6 = gameGetPendingNavigationState(), temp_v6 == 0 || (temp_v6 = FUN_0029e0f8(), temp_v6 != 0)))) {
            temp_v22 = *(int *)(temp_v1 + 0x10) != 0;
            temp_v6 = 0;
            if (temp_v22) {
              temp_v6 = *(int *)(temp_v1 + 0xc);
            }
            if (temp_v22 && temp_v6 != 0) {
              FUN_002937e0();
              objClearFlagPair(temp_v1 + 0x940);
              objClearFlagPair(temp_v1 + 0xa08);
              if (*(int *)(temp_v1 + 0x20) != 1) {
                partyPanelRebuildTouchRegions();
              }
              if (*(int *)(temp_v1 + 0x14) == 0) {
                temp_v7 = *(unsigned int *)(temp_v1 + 0x10);
                FUN_00297060(temp_v7,*(unsigned int *)(temp_v1 + 0xc));
                *(unsigned int *)(temp_v1 + 0x14) = temp_v7;
              }
              partyPanelSetState(*(unsigned int *)(temp_v1 + 0x20),1);
            }
          }
          break;
        }
      }
      else {
        FUN_002b8ee0(temp_v4,1);
        if (temp_v6 == 3) {
          temp_v0 = *(char *)(temp_v1 + 0x4c6);
          goto joined_r0x001c43a0;
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 4);
    break;
  case 1:
    if ((((*(char *)(temp_v1 + 0x66c) == '\x01') && (temp_v6 = FUN_0026d6a4(1), temp_v6 != 0)) &&
        (temp_v6 = FUN_0029dfa8(), temp_v6 != 0)) && (temp_v6 = campCecIsActive(), temp_v6 != 0)) {
      FUN_0026cf4c();
    }
    break;
  case 2:
    temp_v6 = ifTouchGetSelectionMode();
    if (temp_v6 == 0) {
      temp_v6 = FUN_002015a4();
      if (temp_v6 < 0) {
        *(unsigned int *)(temp_v1 + 0x2c) = *(unsigned int *)(temp_v1 + 0x2c) ^ 1;
        timerStart(temp_v1 + 0x180,4,0);
      }
      else {
        temp_v6 = FUN_002015a4();
        if (0 < temp_v6) {
          *(unsigned int *)(temp_v1 + 0x2c) = *(unsigned int *)(temp_v1 + 0x2c) ^ 1;
          timerStart(temp_v1 + 0x180,5,0);
        }
      }
      temp_v14 = 0;
      temp_v7 = 3;
      partyPanelSetState(temp_v7,temp_v14);
    }
    break;
  case 3:
    if (*(short *)(temp_v1 + 0x1d0) != 5) {
      temp_v6 = FUN_002b8ee0(temp_v1 + 0x180,0);
    }
    else {
      temp_v6 = FUN_002b8ee0(temp_v1 + 0x180,1);
    }
    if (temp_v6 != 0) {
      partyPanelSetState(*(unsigned int *)(temp_v1 + 0x24),1);
      partyPanelRebuildTouchRegions();
    }
    break;
  case 4:
    *(unsigned int *)(temp_v1 + 0x670) = 0xffffffff;
    temp_v4 = temp_v1 + 0x8dc;
    if (*(char *)(temp_v1 + 0x93d) != '\0') {
      FUN_0029dfc0(0);
      *(unsigned char *)(temp_v1 + 0x93d) = 0;
    }
    else {
      temp_v24 = FUN_0029dfa8();
      if (temp_v24 == 0) {
        temp_v24 = objectPartRunUnlessLocked(temp_v4);
        if (temp_v24 != 0) {
          temp_v8 = gameGetSlotTable();
          if (*(char *)(temp_v8 + temp_v24 + 0x9107) < '\0') {
            FUN_0026d670();
            FUN_0029defc(0);
            FUN_0029dfc0(0);
          }
          else {
            temp_v7 = gameGetUnitRecord();
            FUN_0029d8f4(temp_v7,0);
            statusPanelSetOpen(1);
          }
        }
        else {
          FUN_0029defc(0xffffffff,0);
          statusPanelSetOpen(1);
        }
        temp_v8 = 0;
        temp_v24 = 0;
        do {
          temp_v16 = gameGetSlotTable();
          temp_v16 = temp_v16 + temp_v24;
          temp_v24 = temp_v24 + 1;
          if (-1 < *(char *)(temp_v16 + 0x9108)) {
            temp_v8 = temp_v8 + 1;
          }
        } while (temp_v24 < 3);
        FUN_0026d654(0 < temp_v8);
      }
    }
    temp_v24 = g_partyPanel;
    if (*(char *)(temp_v1 + 0x43) != '\0') {
      temp_v6 = FUN_0029ae44();
      if (temp_v6 != 0) {
        temp_v24 = objectPartRunUnlessLocked(temp_v4);
        temp_v8 = 0;
        do {
          temp_v24 = temp_v24 + temp_v6;
          if (temp_v24 < 0) {
            temp_v24 = 3;
          }
          else {
            if (temp_v24 >= 4) {
              temp_v24 = 0;
              break;
            }
            if (temp_v24 == 0) break;
          }
          temp_v16 = gameGetSlotTable();
          temp_v22 = *(char *)(temp_v16 + temp_v24 + 0x9107) < '\0';
          if (temp_v22) {
            temp_v8 = temp_v8 + 1;
          }
        } while (temp_v22 && temp_v8 < 4);
        temp_v6 = objectPartRunUnlessLocked(temp_v4);
        if (temp_v6 != temp_v24) {
          scrollOwnerSelectIndex(temp_v4,temp_v24);
          FUN_0029dfc0(0);
        }
      }
    }
    else if ((*(char *)(g_partyPanel + 0x42) == '\0') && (*(int *)(g_partyPanel + 0x30) >= 2)) {
      temp_v8 = ifTouchGetSelectionModeForRegion((int)*(short *)(g_partyPanel + 0x6b4));
      if (temp_v8 != 6) {
        temp_v24 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v24 + 0x6b6));
        if (temp_v24 != 6) goto LAB_001c4748;
        partyPanelToggleRefresh(temp_v4);
      }
      else {
        FUN_002932d8(temp_v4);
      }
      FUN_002937e0();
      partyPanelSetState(3,1);
      temp_v7 = 0x100016f;
      eventQueueAddUniqueIfValid(temp_v7);
    }
    else {
LAB_001c4748:
      if ((temp_v6 == 1 || temp_v6 == 2) && ((int)temp_v10 < 4)) {
        temp_v15 = objectPartRunUnlessLocked(temp_v4);
        if (temp_v15 != temp_v10) {
          eventQueueAddUniqueIfValid(0x100016c);
        }
        scrollOwnerSelectIndex(temp_v4,temp_v10);
        FUN_0029dfc0(0);
      }
      else {
        temp_v24 = temp_v4;
        FUN_0029efd8(temp_v4,1);
        if (temp_v24 == 0) {
          temp_v24 = 0;
          FUN_002c1658(0,1);
          if ((temp_v24 != 0) || ((temp_v6 == 6 && (3 >= (int)temp_v10)))) {
            temp_v6 = objectPartRunUnlessLocked(temp_v4);
            if (*(char *)(temp_v6 + temp_v1 + 0x678) != '\0') {
              temp_v7 = objectPartRunUnlessLocked(temp_v4);
              *(unsigned int *)(temp_v1 + 0x670) = temp_v7;
              if (*(char *)(temp_v1 + 0x66c) == '\x02') {
                *(unsigned char *)(temp_v1 + 0x34) = 1;
                FUN_0026d5a4();
                eventQueueAddUniqueIfValid(0x100016d);
              }
              if (*(char *)(temp_v1 + 0x66c) == '\x04') {
                *(unsigned char *)(temp_v1 + 0x34) = 1;
                FUN_0029dfc0(0);
                partyPanelSetState(8,1);
              }
            }
            else {
              temp_v7 = 0x100016e;
              eventQueueAddUniqueIfValid(temp_v7);
            }
          }
          else {
            temp_v6 = 1;
            FUN_002c1658();
            if (temp_v6 != 0) {
              *(unsigned char *)(temp_v1 + 0x34) = 0;
              FUN_0029dfc0(0);
              partyPanelSetState(8,1);
              temp_v6 = 0;
              do {
                *(unsigned char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6c8) + 0x27) = 0;
                temp_v6 = temp_v6 + 1;
              } while (temp_v6 < 4);
              temp_v6 = 0;
              do {
                *(unsigned char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6d8) + 0x27) = 0;
                temp_v6 = temp_v6 + 1;
              } while (temp_v6 < 0x18);
              temp_v7 = 0x100016e;
              eventQueueAddUniqueIfValid(temp_v7);
            }
            else {
              FUN_0026d6a4(1);
            }
          }
        }
      }
    }
    temp_v0 = *(char *)(temp_v1 + 0x66c);
    if (!(temp_v0 == '\t' || temp_v0 == '\b')) {
      if ((temp_v0 == '\x06' || temp_v0 == '\x05') || (temp_v0 == '\a' || temp_v0 == '\x02')) {
        FUN_0026d144(temp_v4,0);
      }
    }
    else {
      FUN_0026d3e0(temp_v4,0);
    }
    temp_v6 = 0;
    do {
      *(unsigned char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6c8) + 0x25) = 0;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 4);
    temp_v6 = 0;
    do {
      *(unsigned char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6d8) + 0x25) = 0;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x18);
    temp_v6 = objectPartRunUnlessLocked(temp_v4);
    *(unsigned char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6c8) + 0x25) = 1;
    FUN_0026cf4c();
    break;
  case 6:
    temp_v24 = temp_v1 + 0x940;
    temp_v22 = *(char *)(temp_v1 + 0x42) == '\0';
    if (!temp_v22) {
      temp_v24 = temp_v1 + 0x9a4;
    }
    temp_v8 = 0;
    if (!temp_v22) {
      temp_v16 = objectPartRunUnlessLocked();
      temp_v11 = FUN_0029efa8(temp_v24);
      temp_v16 = temp_v16 + temp_v11 * 4;
    }
    else {
      temp_v11 = FUN_0029efa8(temp_v24);
      temp_v9 = *(int *)(temp_v1 + 0x2c);
      temp_v16 = objectPartRunUnlessLocked(temp_v24);
      temp_v16 = temp_v11 * 4 + temp_v9 * 0xc + temp_v16;
    }
    *(unsigned int *)(temp_v1 + 0x674) = 0xffffffff;
    if ((*(char *)(temp_v24 + 0x61) != '\0') || (*(char *)(temp_v24 + 0x60) != '\0')) {
      FUN_0029dfc0(0);
      *(unsigned char *)(temp_v24 + 0x61) = 0;
      *(unsigned char *)(temp_v24 + 0x60) = 0;
    }
    else {
      temp_v11 = FUN_0029dfa8();
      if (temp_v11 == 0) {
        if (*(char *)(temp_v1 + 0x42) != '\0') {
          temp_v9 = objectPartRunUnlessLocked();
          temp_v11 = FUN_0029efa8(temp_v24);
          temp_v9 = temp_v9 + temp_v11 * 4;
        }
        else {
          temp_v11 = FUN_0029efa8(temp_v24);
          temp_v12 = *(int *)(temp_v1 + 0x2c);
          temp_v9 = objectPartRunUnlessLocked(temp_v24);
          temp_v9 = temp_v9 + temp_v11 * 4 + temp_v12 * 0xc;
        }
        if (*(int *)(temp_v1 + temp_v9 * 8 + 0x738) < 0) {
          FUN_0026d670();
          FUN_0029defc(0);
          FUN_0029dfc0(0);
        }
        else {
          temp_v7 = gameGetUnitRecord();
          FUN_0029d8f4(temp_v7,0);
          statusPanelSetOpen(1);
        }
        temp_v11 = gameCountUnits();
        FUN_0026d654(temp_v11 >= 2);
      }
    }
    temp_v11 = g_partyPanel;
    if (*(char *)(temp_v1 + 0x43) != '\0') {
      temp_v6 = FUN_0029ae44();
      if (temp_v6 != 0) {
        if (*(char *)(temp_v1 + 0x42) != '\0') {
          temp_v4 = objectPartRunUnlessLocked();
          temp_v16 = FUN_0029efa8(temp_v24);
          temp_v4 = temp_v4 + temp_v16 * 4;
        }
        else {
          temp_v16 = FUN_0029efa8(temp_v24);
          temp_v11 = *(int *)(temp_v1 + 0x2c);
          temp_v4 = objectPartRunUnlessLocked(temp_v24);
          temp_v4 = temp_v16 * 4 + temp_v11 * 0xc + temp_v4;
        }
        temp_v11 = 0;
        temp_v16 = temp_v4;
        do {
          temp_v16 = temp_v16 + temp_v6;
          if (temp_v16 < 0) {
            temp_v16 = 0x17;
          }
          else if (temp_v16 >= 0x18) {
            temp_v16 = 0;
          }
          temp_v9 = gameGetSlotTable();
        } while ((*(char *)(temp_v9 + temp_v16 + 0x90f0) < '\0') &&
                (temp_v11 = temp_v11 + 1, temp_v11 < 0x19));
        if (temp_v16 != temp_v4) {
          FUN_00292be4(*(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x6d8),0);
          if (*(char *)(temp_v1 + 0x42) != '\0') {
            *(unsigned int *)(temp_v1 + 0x2c) = 0;
            scrollOwnerSelectIndex(temp_v24,temp_v16 % 4);
            FUN_0029eb5c(temp_v24,(int)(temp_v16 + ((unsigned int)(temp_v16 >> 0x1f) >> 0x1e)) >> 2);
          }
          else {
            if (temp_v16 >= 0xc) {
              *(unsigned int *)(temp_v1 + 0x2c) = 1;
              temp_v16 = temp_v16 - 0xc;
              scrollOwnerSelectIndex(temp_v24,temp_v16 % 4);
              FUN_0029eb5c(temp_v24,(int)(temp_v16 + ((unsigned int)(temp_v16 >> 0x1f) >> 0x1e)) >> 2);
            }
            else {
              *(unsigned int *)(temp_v1 + 0x2c) = 0;
              scrollOwnerSelectIndex(temp_v24,temp_v16 % 4);
              FUN_0029eb5c(temp_v24,(int)(temp_v16 + ((unsigned int)(temp_v16 >> 0x1f) >> 0x1e)) >> 2);
            }
            temp_v6 = 0;
            do {
              FUN_0029378c(*(unsigned int *)(temp_v1 + temp_v6 * 4 + 0x6c8),*(unsigned int *)(temp_v1 + 0x2c))
              ;
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 4);
            temp_v6 = 0;
            do {
              FUN_0029378c(*(unsigned int *)(temp_v1 + temp_v6 * 4 + 0x6d8),*(unsigned int *)(temp_v1 + 0x2c))
              ;
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 0x18);
          }
          FUN_0029dfc0(0);
        }
      }
    }
    else if (((temp_v6 == 1) || (temp_v6 == 2)) && (temp_v15 = temp_v10 - 4, temp_v15 < 0x18)) {
      if ((int)temp_v15 < *(int *)(temp_v24 + 0x50)) {
        temp_v6 = objectPartRunUnlessLocked(temp_v24);
        temp_v4 = FUN_0029efa8(temp_v24);
        temp_v16 = temp_v10 - 4;
        scrollOwnerSelectIndex(temp_v24,temp_v16 % 4);
        FUN_0029eb5c(temp_v24,(int)(temp_v16 + ((unsigned int)(temp_v16 >> 0x1f) >> 0x1e)) >> 2);
        FUN_0029dfc0(0);
        if (temp_v6 + temp_v4 * 4 != temp_v15) {
          temp_v7 = 0x100016c;
          eventQueueAddUniqueIfValid(temp_v7);
        }
      }
    }
    else if ((*(char *)(g_partyPanel + 0x42) == '\0') && (*(int *)(g_partyPanel + 0x30) >= 2)) {
      temp_v9 = ifTouchGetSelectionModeForRegion((int)*(short *)(g_partyPanel + 0x6b4));
      if (temp_v9 != 6) {
        temp_v11 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v11 + 0x6b6));
        if (temp_v11 != 6) goto LAB_001c4df0;
        partyPanelToggleRefresh(temp_v24);
      }
      else {
        FUN_002932d8(temp_v24);
      }
      FUN_002937e0();
      FUN_0029dfc0(0);
      partyPanelSetState(3,1);
      eventQueueAddUniqueIfValid(0x100016f);
    }
    else {
LAB_001c4df0:
      temp_v11 = partyPanelHandleCursorEdgeInput(temp_v24,0);
      if (temp_v11 != 0) {
        FUN_0029dfc0(0);
        partyPanelSetState(3,1);
        temp_v7 = 0x100016f;
        goto LAB_001c5040;
      }
      temp_v11 = temp_v24;
      FUN_0029efd8(temp_v24,1);
      if (temp_v11 != 0) {
        if (*(char *)(temp_v1 + 0x42) != '\0') {
          temp_v11 = objectPartRunUnlessLocked();
          temp_v6 = FUN_0029efa8(temp_v24);
          temp_v11 = temp_v11 + temp_v6 * 4;
        }
        else {
          temp_v6 = FUN_0029efa8(temp_v24);
          temp_v4 = *(int *)(temp_v1 + 0x2c);
          temp_v11 = objectPartRunUnlessLocked(temp_v24);
          temp_v11 = temp_v11 + temp_v6 * 4 + temp_v4 * 0xc;
        }
        if (temp_v16 != temp_v11) {
          FUN_00292be4(*(unsigned int *)(temp_v1 + temp_v16 * 4 + 0x6d8),0);
        }
      }
      else {
        temp_v16 = 0;
        FUN_002c1658(0,1);
        if ((temp_v16 != 0) || ((temp_v6 == 6 && (0x17 >= temp_v10 - 4)))) {
          if (*(char *)(temp_v1 + 0x42) != '\0') {
            temp_v4 = objectPartRunUnlessLocked();
            temp_v6 = FUN_0029efa8(temp_v24);
            temp_v4 = temp_v4 + temp_v6 * 4;
          }
          else {
            temp_v6 = FUN_0029efa8(temp_v24);
            temp_v16 = *(int *)(temp_v1 + 0x2c);
            temp_v4 = objectPartRunUnlessLocked(temp_v24);
            temp_v4 = temp_v4 + temp_v6 * 4 + temp_v16 * 0xc;
          }
          if ((0x17 >= temp_v4) && (*(short *)(temp_v1 + temp_v4 * 8 + 0x73c) != 0)) {
            *(int *)(temp_v1 + 0x674) = temp_v4;
            if (*(char *)(temp_v1 + 0x66c) == '\x02') {
              *(unsigned char *)(temp_v1 + 0x34) = 1;
              FUN_0026d5a4();
              eventQueueAddUniqueIfValid(0x100016d);
            }
            if (*(char *)(temp_v1 + 0x66c) == '\x03') {
              *(unsigned char *)(temp_v1 + 0x34) = 1;
              FUN_0026d5a4();
              eventQueueAddUniqueIfValid(0x100016d);
            }
            if (*(char *)(temp_v1 + 0x66c) == '\x04') {
              *(unsigned char *)(temp_v1 + 0x34) = 1;
              FUN_0029dfc0(0);
              partyPanelSetState(8,1);
            }
          }
          else {
            temp_v7 = 0x100016e;
            eventQueueAddUniqueIfValid(temp_v7);
          }
        }
        else {
          temp_v6 = 1;
          FUN_002c1658();
          if (temp_v6 != 0) {
            if (*(char *)(temp_v1 + 0x66c) == '\x02' || *(char *)(temp_v1 + 0x66c) == '\x04') {
              if (-1 < *(char *)(*(int *)(temp_v1 + 0x670) + temp_v4 + 0x9107)) {
                temp_v6 = gameGetUnitRecord();
                temp_v4 = 0;
                do {
                  temp_v8 = temp_v1 + temp_v4 * 8;
                  if ((-1 < *(int *)(temp_v8 + 0x738)) &&
                     (temp_v16 = gameGetUnitRecord(), *(short *)(temp_v16 + 0x46) == *(short *)(temp_v6 + 0x46)
                     )) {
                    *(unsigned short *)(temp_v8 + 0x73c) = 0;
                  }
                  temp_v4 = temp_v4 + 1;
                } while (temp_v4 < 0x18);
              }
              temp_v6 = 0;
              do {
                *(unsigned char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6c8) + 0x27) = 0;
                temp_v6 = temp_v6 + 1;
              } while (temp_v6 < 4);
              temp_v6 = 0;
              do {
                temp_v4 = temp_v1 + temp_v6 * 4;
                *(unsigned char *)(*(int *)(temp_v4 + 0x6d8) + 0x27) = 0;
                FUN_00292be4(*(unsigned int *)(temp_v4 + 0x6d8),0);
                temp_v6 = temp_v6 + 1;
              } while (temp_v6 < 0x18);
              FUN_0029dfc0(0);
              partyPanelSetState(8,1);
            }
            if (*(char *)(temp_v1 + 0x66c) == '\x03') {
              *(unsigned char *)(temp_v1 + 0x34) = 0;
              FUN_0026d5a4();
            }
            temp_v8 = 1;
            temp_v7 = 0x100016e;
LAB_001c5040:
            eventQueueAddUniqueIfValid(temp_v7);
          }
          else {
            temp_v6 = FUN_0026d6a4(1);
            if ((temp_v6 != 0) && (temp_v24 = temp_v1 + 0x940, *(char *)(temp_v1 + 0x42) != '\0')) {
              temp_v24 = temp_v1 + 0x9a4;
            }
          }
        }
      }
    }
    temp_v0 = *(char *)(temp_v1 + 0x66c);
    if (!(temp_v0 == '\t' || temp_v0 == '\b')) {
      if (((temp_v0 == '\x06' || temp_v0 == '\x05') || (temp_v0 == '\a' || temp_v0 == '\x02')) &&
         (temp_v8 == 0)) {
        FUN_0026d144(temp_v24,1);
      }
    }
    else if (temp_v8 == 0) {
      FUN_0026d3e0(temp_v24,1);
    }
    temp_v6 = 0;
    do {
      *(unsigned char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6c8) + 0x25) = 0;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 4);
    temp_v6 = 0;
    do {
      *(unsigned char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6d8) + 0x25) = 0;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x18);
    temp_v6 = objectPartRunUnlessLocked(temp_v24);
    temp_v4 = FUN_0029efa8(temp_v24);
    *(unsigned char *)(*(int *)(temp_v1 + (temp_v6 + temp_v4 * 4) * 4 + 0x6d8) + 0x25) = 1;
    FUN_0026cf4c();
    break;
  case 8:
    *(unsigned short *)(temp_v1 + 0x6bc) = 0;
    temp_v8 = temp_v1 + 0xa08;
    if (*(char *)(temp_v1 + 0x42) != '\0') {
      temp_v8 = temp_v1 + 0xa6c;
    }
    if ((*(char *)(temp_v8 + 0x61) != '\0') || (*(char *)(temp_v8 + 0x60) != '\0')) {
      if (*(char *)(temp_v1 + 0x66c) != '\v') {
        FUN_0029dfc0(0);
      }
      *(unsigned char *)(temp_v8 + 0x61) = 0;
      *(unsigned char *)(temp_v8 + 0x60) = 0;
    }
    else {
      temp_v16 = FUN_0029dfa8();
      if (temp_v16 == 0) {
        if (*(char *)(temp_v1 + 0x66c) != '\n') {
          FUN_0029e890(0xffffffff,1);
LAB_001c52f4:
          if (*(char *)(temp_v1 + 0x66c) == '\v') {
            FUN_0029e890(0);
            FUN_0029d8f4(temp_v1 + 0xb50,0);
            statusPanelSetOpen(1);
            menuSetModeAndResetTransitions(3);
            goto LAB_001c545c;
          }
        }
        else {
          if (*(int *)(temp_v1 + 0xb3c) == 0) {
            temp_v7 = 1;
LAB_001c538c:
            FUN_0029e890(temp_v7,0);
            goto LAB_001c52f4;
          }
          if (*(int *)(temp_v1 + 0xb3c) == 1) {
            temp_v7 = 2;
            goto LAB_001c538c;
          }
        }
        temp_v16 = FUN_0029efa8(temp_v8);
        if (temp_v16 < 1) {
          temp_v16 = objectPartRunUnlessLocked(temp_v8);
          if (temp_v16 != 0) {
            temp_v11 = gameGetSlotTable();
            if (*(char *)(temp_v11 + temp_v16 + 0x9107) < '\0') {
              FUN_0029defc(0);
              FUN_0029dfc0(0);
            }
            else {
              temp_v7 = gameGetUnitRecord();
              FUN_0029d8f4(temp_v7,0);
              statusPanelSetOpen(1);
            }
          }
          else {
            FUN_0029defc(0xffffffff,0);
            statusPanelSetOpen(1);
          }
          temp_v11 = 0;
          temp_v16 = 0;
          do {
            temp_v9 = gameGetSlotTable();
            temp_v9 = temp_v9 + temp_v16;
            temp_v16 = temp_v16 + 1;
            if (-1 < *(char *)(temp_v9 + 0x9108)) {
              temp_v11 = temp_v11 + 1;
            }
          } while (temp_v16 < 3);
          if (temp_v11 < 1) {
            temp_v7 = 0;
          }
          else {
            temp_v7 = 1;
          }
        }
        else {
          if (*(char *)(temp_v1 + 0x42) != '\0') {
            temp_v11 = objectPartRunUnlessLocked();
            temp_v16 = FUN_0029efa8(temp_v8);
            temp_v11 = temp_v11 + temp_v16 * 4;
          }
          else {
            temp_v16 = FUN_0029efa8(temp_v8);
            temp_v9 = *(int *)(temp_v1 + 0x2c);
            temp_v11 = objectPartRunUnlessLocked(temp_v8);
            temp_v11 = temp_v11 + temp_v16 * 4 + temp_v9 * 0xc;
          }
          if (*(int *)(temp_v1 + (temp_v11 - 4) * 8 + 0x738) < 0) {
            FUN_0029defc(0);
            FUN_0029dfc0(0);
          }
          else {
            temp_v7 = gameGetUnitRecord();
            FUN_0029d8f4(temp_v7,0);
            statusPanelSetOpen(1);
          }
          temp_v16 = gameCountUnits();
          if (temp_v16 >= 2) {
            temp_v7 = 1;
          }
          else {
            temp_v7 = 0;
          }
        }
        FUN_0026d654(temp_v7);
      }
    }
LAB_001c545c:
    temp_v16 = g_partyPanel;
    temp_v22 = 0;
    if (((temp_v6 == 1 || temp_v6 == 2) && (temp_v10 < 0x1c)) && ((int)temp_v10 < *(int *)(temp_v8 + 0x50))) {
      temp_v22 = 1;
    }
    if (*(char *)(temp_v1 + 0x43) != '\0') {
      temp_v6 = objectPartRunUnlessLocked(temp_v8);
      temp_v4 = FUN_0029ae44();
      if (temp_v4 != 0) {
        temp_v24 = FUN_0029efa8(temp_v8);
        if (temp_v24 < 1) {
          temp_v24 = objectPartRunUnlessLocked(temp_v8);
          temp_v16 = 0;
          do {
            temp_v24 = temp_v24 + temp_v4;
            if (temp_v24 < 0) {
              temp_v24 = 3;
            }
            else {
              if (temp_v24 >= 4) {
                temp_v24 = 0;
                break;
              }
              if (temp_v24 == 0) break;
            }
            temp_v11 = gameGetSlotTable();
            temp_v22 = *(char *)(temp_v11 + temp_v24 + 0x9107) < '\0';
            if (temp_v22) {
              temp_v16 = temp_v16 + 1;
            }
          } while (temp_v22 && temp_v16 < 4);
          temp_v4 = objectPartRunUnlessLocked(temp_v8);
          if ((temp_v4 != temp_v24) && (scrollOwnerSelectIndex(temp_v8,temp_v24), *(char *)(temp_v1 + 0x66c) != '\v')) {
            FUN_0029dfc0(0);
            if (*(char *)(temp_v1 + 0x66c) == '\t') {
              temp_v4 = gameGetSlotTable();
              FUN_0026cba4((int)*(char *)(temp_v4 + temp_v24 + 0x9107),temp_v24,0);
            }
            if (temp_v6 != temp_v24) {
              FUN_00292be4(*(unsigned int *)(temp_v1 + temp_v6 * 4 + 0x6c8),0);
            }
          }
        }
        else {
          if (*(char *)(temp_v1 + 0x42) != '\0') {
            temp_v24 = objectPartRunUnlessLocked();
            temp_v6 = FUN_0029efa8(temp_v8);
            temp_v24 = temp_v24 + temp_v6 * 4;
          }
          else {
            temp_v6 = FUN_0029efa8(temp_v8);
            temp_v16 = *(int *)(temp_v1 + 0x2c);
            temp_v24 = objectPartRunUnlessLocked(temp_v8);
            temp_v24 = temp_v24 + temp_v6 * 4 + temp_v16 * 0xc;
          }
          temp_v24 = temp_v24 - 4;
          temp_v16 = 0;
          temp_v6 = temp_v24;
          do {
            temp_v6 = temp_v6 + temp_v4;
            if (temp_v6 < 0) {
              temp_v6 = 0x17;
            }
            else if (temp_v6 >= 0x18) {
              temp_v6 = 0;
            }
            temp_v11 = gameGetSlotTable();
          } while ((*(char *)(temp_v11 + temp_v6 + 0x90f0) < '\0') &&
                  (temp_v16 = temp_v16 + 1, temp_v16 < 0x19));
          if (temp_v6 != temp_v24) {
            if (*(char *)(temp_v1 + 0x42) != '\0') {
              temp_v4 = temp_v6 + 4;
              *(unsigned int *)(temp_v1 + 0x2c) = 0;
              scrollOwnerSelectIndex(temp_v8,temp_v4 % 4);
              FUN_0029eb5c(temp_v8,(int)(temp_v4 + ((unsigned int)(temp_v4 >> 0x1f) >> 0x1e)) >> 2);
            }
            else {
              if (temp_v6 >= 0xc) {
                *(unsigned int *)(temp_v1 + 0x2c) = 1;
                temp_v4 = temp_v6 - 8;
                scrollOwnerSelectIndex(temp_v8,temp_v4 % 4);
                FUN_0029eb5c(temp_v8,(int)(temp_v4 + ((unsigned int)(temp_v4 >> 0x1f) >> 0x1e)) >> 2);
              }
              else {
                temp_v4 = temp_v6 + 4;
                *(unsigned int *)(temp_v1 + 0x2c) = 0;
                scrollOwnerSelectIndex(temp_v8,temp_v4 % 4);
                FUN_0029eb5c(temp_v8,(int)(temp_v4 + ((unsigned int)(temp_v4 >> 0x1f) >> 0x1e)) >> 2);
              }
              temp_v4 = 0;
              do {
                FUN_0029378c(*(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x6c8),
                             *(unsigned int *)(temp_v1 + 0x2c));
                temp_v4 = temp_v4 + 1;
              } while (temp_v4 < 4);
              temp_v4 = 0;
              do {
                FUN_0029378c(*(unsigned int *)(temp_v1 + temp_v4 * 4 + 0x6d8),
                             *(unsigned int *)(temp_v1 + 0x2c));
                temp_v4 = temp_v4 + 1;
              } while (temp_v4 < 0x18);
            }
            if (*(char *)(temp_v1 + 0x66c) != '\v') {
              FUN_0029dfc0(0);
              if (*(char *)(temp_v1 + 0x66c) == '\t') {
                FUN_0026cba4(*(unsigned int *)(temp_v1 + temp_v6 * 8 + 0x738),temp_v6,1);
              }
              FUN_00292be4(*(unsigned int *)(temp_v1 + temp_v24 * 4 + 0x6d8),0);
            }
          }
        }
      }
    }
    else if ((*(char *)(g_partyPanel + 0x42) == '\0') && (*(int *)(g_partyPanel + 0x30) >= 2)) {
      temp_v11 = ifTouchGetSelectionModeForRegion((int)*(short *)(g_partyPanel + 0x6b4));
      if (temp_v11 != 6) {
        temp_v16 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v16 + 0x6b6));
        if (temp_v16 != 6) goto LAB_001c589c;
        partyPanelToggleRefresh(temp_v8);
      }
      else {
        FUN_002932d8(temp_v8);
      }
      FUN_002937e0();
      temp_v6 = FUN_0029efa8(temp_v8);
      if ((0 < temp_v6) && (*(char *)(temp_v1 + 0x66c) != '\v')) {
        FUN_0029dfc0(0);
      }
      partyPanelSetState(3,1);
      eventQueueAddUniqueIfValid(0x100016f);
    }
    else {
LAB_001c589c:
      temp_v16 = FUN_0029efa8(temp_v8);
      if ((temp_v16 >= 1) && (temp_v16 = partyPanelHandleCursorEdgeInput(temp_v8,0), temp_v16 != 0)) {
        if (*(char *)(temp_v1 + 0x66c) != '\v') {
          FUN_0029dfc0(0);
          temp_v6 = 0;
          do {
            FUN_00292be4(*(unsigned int *)(temp_v1 + temp_v6 * 4 + 0x6d8),0);
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 0x18);
        }
        partyPanelSetState(3,1);
        temp_v7 = 0x100016f;
LAB_001c659c:
        eventQueueAddUniqueIfValid(temp_v7);
      }
      else {
        temp_v16 = temp_v8;
        FUN_0029efd8(temp_v8,1);
        if (!(temp_v16 == 0 && !temp_v22)) {
          if (temp_v22) {
            temp_v6 = objectPartRunUnlessLocked(temp_v8);
            temp_v4 = FUN_0029efa8(temp_v8);
            scrollOwnerSelectIndex(temp_v8,(int)temp_v10 % 4);
            FUN_0029eb5c(temp_v8,(int)(temp_v10 + ((unsigned int)((int)temp_v10 >> 0x1f) >> 0x1e)) >> 2);
            if (temp_v6 + temp_v4 * 4 != temp_v10) {
              eventQueueAddUniqueIfValid();
            }
          }
          temp_v6 = 0;
          do {
            temp_v4 = temp_v1 + temp_v6 * 4;
            FUN_00292be4(*(unsigned int *)(temp_v4 + 0x6c8),0);
            *(unsigned char *)(*(int *)(temp_v4 + 0x6c8) + 0x27) = 0;
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 4);
          temp_v6 = 0;
          do {
            temp_v4 = temp_v1 + temp_v6 * 4;
            FUN_00292be4(*(unsigned int *)(temp_v4 + 0x6d8),0);
            *(unsigned char *)(*(int *)(temp_v4 + 0x6d8) + 0x27) = 0;
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 0x18);
          FUN_00298d28(0);
          if (*(char *)(temp_v1 + 0x66c) != '\v') {
            FUN_0029dfc0(0);
          }
        }
        else {
          temp_v0 = *(char *)(temp_v1 + 0x66c);
          if (temp_v0 != '\f') {
            if (temp_v0 != '\r' && temp_v0 != '\x0e') {
              temp_v16 = 0;
              FUN_002c1658(0,1);
              if ((temp_v16 != 0) || ((temp_v6 == 6 && (temp_v10 < 0x1c)))) {
                temp_v6 = FUN_0029efa8(temp_v8);
                if (temp_v6 < 1) {
                  temp_v6 = objectPartRunUnlessLocked(temp_v8);
                  temp_v24 = temp_v1 + temp_v6;
                  if (*(char *)(temp_v24 + 0x678) != '\0') {
                    temp_v16 = temp_v1 + temp_v6 * 4;
                    *(unsigned char *)(*(int *)(temp_v16 + 0x6c8) + 0x27) = 1;
                    temp_v0 = *(char *)(temp_v1 + 0x66c);
                    if (temp_v0 != '\n') {
                      if (temp_v0 != '\v') {
                        if (temp_v0 != '\t') {
                          if (temp_v0 != '\x06') {
                            if (!(temp_v0 == '\x02' || temp_v0 == '\x04')) {
                              if (temp_v0 != '\x0f') {
                                if (temp_v0 != '\x10') {
                                  *(int *)(temp_v1 + 0x670) = temp_v6;
                                  *(unsigned char *)(temp_v1 + 0x34) = 1;
                                  FUN_0026d5a4();
                                }
                                else {
                                  temp_v24 = gameGetNavigationState();
                                  if ((temp_v24 != 0) || (temp_v24 = FUN_0029e02c(), temp_v24 != 0))
                                  break;
                                  temp_v24 = FUN_0029dfa8();
                                  temp_v4 = temp_v4 + temp_v6;
                                  if (temp_v24 != 0) {
                                    temp_v6 = gameGetUnitRecord((int)*(char *)(temp_v4 + 0x9107));
                                    *(unsigned short *)(temp_v1 + 0x3c) = *(unsigned short *)(temp_v6 + 0x46);
                                    partyPanelSetState(0x16,1);
                                    FUN_002a0cc8(1);
                                  }
                                  else {
                                    temp_v6 = gameGetUnitRecord((int)*(char *)(temp_v4 + 0x9107));
                                    *(unsigned short *)(temp_v1 + 0x3e) = *(unsigned short *)(temp_v6 + 0x46);
                                    *(short *)(temp_v1 + 0x40) = (short)*(char *)(temp_v4 + 0x9107);
                                    FUN_002a0cc8(1);
                                    temp_v7 = 0x16;
                                    partyPanelSetState(temp_v7,1);
                                  }
                                }
                              }
                              else {
                                temp_v4 = gameGetSlotTable();
                                if (-1 < *(char *)(temp_v4 + temp_v6 + 0x9107)) {
                                  *(unsigned int *)(temp_v1 + 0x674) = 0xffffffff;
                                  *(int *)(temp_v1 + 0x670) = temp_v6;
                                  temp_v6 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),0);
                                  if (temp_v6 != 0) {
                                    FUN_002a0cc8(1);
                                    temp_v7 = 0x12;
                                    partyPanelSetState(temp_v7,1);
                                  }
                                }
                              }
                            }
                            else {
                              *(int *)(temp_v1 + 0x670) = temp_v6;
                              if (-1 < *(char *)(temp_v4 + temp_v6 + 0x9107)) {
                                temp_v6 = gameGetUnitRecord();
                                temp_v4 = 0;
                                do {
                                  temp_v24 = temp_v1 + temp_v4 * 8;
                                  if ((-1 < *(int *)(temp_v24 + 0x738)) &&
                                     (temp_v16 = gameGetUnitRecord(),
                                     *(short *)(temp_v16 + 0x46) == *(short *)(temp_v6 + 0x46))) {
                                    *(unsigned short *)(temp_v24 + 0x73c) = 1;
                                  }
                                  temp_v4 = temp_v4 + 1;
                                } while (temp_v4 < 0x18);
                              }
                              FUN_0029dfc0(0);
                              temp_v23 = partyPanelFocusSelectedPartyMember(0);
                              if ((int)temp_v23 == 0) {
                                temp_v7 = 6;
                                partyPanelSetState(temp_v7,1);
                              }
                              else {
                                FUN_0029dfc0(0,(int)((unsigned long long)temp_v23 >> 0x20));
                                partyPanelSetState(3,1);
                                *(unsigned int *)(temp_v1 + 0x24) = 6;
                              }
                            }
                          }
                          else {
                            FUN_002a0cc8(1);
                            if (temp_v6 != 0) {
                              temp_v4 = temp_v4 + temp_v6;
                              temp_v6 = (int)*(short *)(temp_v1 + 0x38);
                              FUN_0026c654(temp_v6,(int)*(char *)(temp_v4 + 0x9107),
                                           *(unsigned short *)(temp_v1 + 0x36),1);
                              if (temp_v6 == 0) {
                                FUN_0026c654((int)*(short *)(temp_v1 + 0x38),
                                             (int)*(char *)(temp_v4 + 0x9107),
                                             *(unsigned short *)(temp_v1 + 0x36),0);
                                temp_v7 = gameGetUnitRecord((int)*(char *)(temp_v4 + 0x9107));
                                FUN_0029d8f4(temp_v7,0);
                                FUN_0026dafc(partyPanelPollSelectedStatusColor());
                                temp_v6 = (int)*(short *)(temp_v1 + 0x38);
                                FUN_0026c654(temp_v6,(int)*(char *)(temp_v4 + 0x9107),
                                             *(unsigned short *)(temp_v1 + 0x36),1);
                                if (temp_v6 == 1) {
                                  *(unsigned char *)(temp_v24 + 0x678) = 0;
                                }
                                goto LAB_001c5fe8;
                              }
                            }
                            else {
                              temp_v6 = (int)*(short *)(temp_v1 + 0x38);
                              FUN_0026c654(temp_v6,0xffffffff,*(unsigned short *)(temp_v1 + 0x36),1);
                              if (temp_v6 == 0) {
                                FUN_0026c654((int)*(short *)(temp_v1 + 0x38),0xffffffff,
                                             *(unsigned short *)(temp_v1 + 0x36),0);
                                FUN_0029defc(0xffffffff,0);
                                FUN_0026dafc(partyPanelPollSelectedStatusColor());
                                temp_v6 = (int)*(short *)(temp_v1 + 0x38);
                                FUN_0026c654(temp_v6,0xffffffff,*(unsigned short *)(temp_v1 + 0x36),1);
                                if (temp_v6 == 1) {
                                  *(unsigned char *)(temp_v1 + 0x678) = 0;
                                }
                                FUN_00292bcc(*(unsigned int *)(temp_v1 + 0x6c8),0xff);
                                partyPanelSetState(0x13,1);
                                goto LAB_001c6598;
                              }
                            }
                          }
                        }
                        else {
                          FUN_002a0cc8(1);
                          if (temp_v6 != 0) {
                            temp_v4 = temp_v4 + temp_v6;
                            temp_v6 = (int)*(char *)(temp_v4 + 0x9107);
                            FUN_0026c710(temp_v6,*(unsigned short *)(temp_v1 + 0x36),1);
                            if (temp_v6 == 0) {
                              FUN_0026c710((int)*(char *)(temp_v4 + 0x9107),
                                           *(unsigned short *)(temp_v1 + 0x36),0);
                              temp_v7 = gameGetUnitRecord((int)*(char *)(temp_v4 + 0x9107));
                              FUN_0029d8f4(temp_v7,0);
                              FUN_0026dafc(partyPanelPollSelectedStatusColor());
                              temp_v6 = (int)*(char *)(temp_v4 + 0x9107);
                              FUN_0026c710(temp_v6,*(unsigned short *)(temp_v1 + 0x36),1);
                              if (temp_v6 == 1) {
                                *(unsigned char *)(temp_v24 + 0x678) = 0;
                              }
                              temp_v7 = gameGetUnitRecord((int)*(char *)(temp_v4 + 0x9107));
                              __aeabi_memcpy4(temp_v1 + 0x11ec,temp_v7,0x604);
                              FUN_0029c4e4(temp_v1 + 0x11ec,0);
LAB_001c5fe8:
                              FUN_00292bcc(*(unsigned int *)(temp_v16 + 0x6c8),0xff);
                              partyPanelSetState(0x13,1);
LAB_001c6598:
                              temp_v7 = 0x100017c;
                              goto LAB_001c659c;
                            }
                          }
                          else {
                            temp_v6 = -1;
                            FUN_0026c710(0xffffffff,*(unsigned short *)(temp_v1 + 0x36),1);
                            if (temp_v6 == 0) {
                              FUN_0026c710(0xffffffff,*(unsigned short *)(temp_v1 + 0x36),0);
                              FUN_0029defc(0xffffffff,0);
                              FUN_0026dafc(partyPanelPollSelectedStatusColor());
                              temp_v6 = -1;
                              FUN_0026c710(0xffffffff,*(unsigned short *)(temp_v1 + 0x36),1);
                              if (temp_v6 == 1) {
                                *(unsigned char *)(temp_v1 + 0x678) = 0;
                              }
                              FUN_0026dafc(partyPanelPollSelectedStatusColor());
                              FUN_00292bcc(*(unsigned int *)(temp_v1 + 0x6c8),0xff);
                              temp_v7 = gameGetPlayerData();
                              __aeabi_memcpy4(temp_v1 + 0x1160,temp_v7,0x8c);
                              FUN_0029a0cc(temp_v1 + 0x1160);
                              partyPanelSetState(0x13,1);
                              goto LAB_001c6598;
                            }
                          }
                        }
                      }
                      else {
                        btlUiPanelFadeInWhenReady(g_btlUiBlock);
                        comWinSetText(&LAB_001c6014);
                        communicationSetResultPointer();
                        communicationBeginTransition(0);
                        messageMainFinishWindow();
                        beginStatusPanelClose();
                        temp_v7 = 0xe;
                        *(int *)(temp_v1 + 0x670) = temp_v6;
                        partyPanelSetState(temp_v7,1);
                      }
                    }
                    else {
                      piVar17 = (int *)(temp_v1 + 0xb3c);
                      *(unsigned char *)(*(int *)(temp_v1 + 0xb3c) + temp_v1 + 0xb40) = 0;
                      temp_v6 = gameGetUnitRecord((int)*(char *)(temp_v4 + temp_v6 + 0x9107));
                      *(unsigned int *)(temp_v1 + *piVar17 * 4 + 0xb34) = (unsigned int)*(unsigned short *)(temp_v6 + 0x46);
                      *piVar17 = *piVar17 + 1;
                      FUN_0026c9c0();
                      FUN_0026c868();
                      temp_v6 = *piVar17;
                      if (temp_v6 >= 2) {
                        FUN_001d1828();
                        temp_v4 = g_partyPanel;
                        if (temp_v6 != 0) {
                          temp_v6 = 0;
                          if (0 < *(int *)(g_partyPanel + 0x6b8)) {
                            do {
                              ifTouchRegionRemove();
                              temp_v6 = temp_v6 + 1;
                            } while (temp_v6 < *(int *)(temp_v4 + 0x6b8));
                          }
                          *(unsigned int *)(temp_v4 + 0x6b8) = 0;
                          __aeabi_memset4(temp_v4 + 0x67c,0x3c,0xffffffff);
                          temp_v6 = 0;
                          do {
                            timerStart(temp_v1 + temp_v6 * 0x8c + 0x298,7,0);
                            temp_v6 = temp_v6 + 1;
                          } while (temp_v6 < 4);
                          goto LAB_001c5c34;
                        }
                        temp_v6 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),4);
                        if (temp_v6 != 0) {
                          partyPanelSetState(0xd,1);
                          buttonHelpSetPreset(0x9e);
                        }
                      }
                    }
                    temp_v7 = 0x100016d;
                  }
                  else {
                    temp_v7 = 0x100016e;
                  }
                }
                else {
                  if (*(char *)(temp_v1 + 0x42) != '\0') {
                    temp_v4 = objectPartRunUnlessLocked();
                    temp_v6 = FUN_0029efa8(temp_v8);
                    temp_v4 = temp_v4 + temp_v6 * 4;
                  }
                  else {
                    temp_v6 = FUN_0029efa8(temp_v8);
                    temp_v16 = *(int *)(temp_v1 + 0x2c);
                    temp_v4 = objectPartRunUnlessLocked(temp_v8);
                    temp_v4 = temp_v4 + temp_v6 * 4 + temp_v16 * 0xc;
                  }
                  temp_v4 = temp_v4 - 4;
                  temp_v6 = temp_v1 + temp_v4 * 8;
                  if (*(short *)(temp_v6 + 0x73c) == 0) {
                    temp_v7 = 0x100016e;
                  }
                  else {
                    temp_v16 = temp_v1 + temp_v4 * 4;
                    *(unsigned char *)(*(int *)(temp_v16 + 0x6d8) + 0x27) = 1;
                    temp_v0 = *(char *)(temp_v1 + 0x66c);
                    if (temp_v0 != '\n') {
                      if (temp_v0 != '\v') {
                        if (temp_v0 != '\t') {
                          if (temp_v0 != '\x06') {
                            if (!(temp_v0 == '\x02' || temp_v0 == '\x04')) {
                              if (temp_v0 != '\x0f') {
                                if (temp_v0 != '\x10') {
                                  *(int *)(temp_v1 + 0x674) = temp_v4;
                                  *(unsigned char *)(temp_v1 + 0x34) = 1;
                                  FUN_0026d5a4();
                                }
                                else {
                                  temp_v4 = FUN_0029dfa8();
                                  if (temp_v4 != 0) {
                                    temp_v6 = gameGetUnitRecord(*(unsigned int *)(temp_v6 + 0x738));
                                    *(unsigned short *)(temp_v1 + 0x3c) = *(unsigned short *)(temp_v6 + 0x46);
                                    partyPanelSetState(0x16,1);
                                    FUN_002a0cc8(1);
                                  }
                                  else {
                                    temp_v4 = gameGetUnitRecord(*(unsigned int *)(temp_v6 + 0x738));
                                    *(unsigned short *)(temp_v1 + 0x3e) = *(unsigned short *)(temp_v4 + 0x46);
                                    *(short *)(temp_v1 + 0x40) = (short)*(unsigned int *)(temp_v6 + 0x738)
                                    ;
                                    FUN_002a0cc8(1);
                                    temp_v7 = 0x16;
                                    partyPanelSetState(temp_v7,1);
                                  }
                                }
                              }
                              else {
                                temp_v6 = gameGetSlotTable();
                                if (-1 < *(char *)(temp_v6 + temp_v4 + 0x90f0)) {
                                  *(unsigned int *)(temp_v1 + 0x670) = 0xffffffff;
                                  *(int *)(temp_v1 + 0x674) = temp_v4;
                                  temp_v6 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),0);
                                  if (temp_v6 != 0) {
                                    FUN_002a0cc8(1);
                                    temp_v7 = 0x12;
                                    partyPanelSetState(temp_v7,1);
                                  }
                                }
                              }
                            }
                            else {
                              *(int *)(temp_v1 + 0x674) = temp_v4;
                              scrollOwnerSelectIndex(temp_v1 + 0x8dc,1);
                              FUN_0029dfc0(0);
                              partyPanelSetState(4,1);
                              if (temp_v24 != 0) goto LAB_001c6598;
                            }
                          }
                          else {
                            FUN_002a0cc8(1);
                            temp_v4 = (int)*(short *)(temp_v1 + 0x38);
                            FUN_0026c654(temp_v4,*(unsigned int *)(temp_v6 + 0x738),
                                         *(unsigned short *)(temp_v1 + 0x36),1);
                            if (temp_v4 == 0) {
                              FUN_0026c654((int)*(short *)(temp_v1 + 0x38),
                                           *(unsigned int *)(temp_v6 + 0x738),
                                           *(unsigned short *)(temp_v1 + 0x36),0);
                              temp_v7 = gameGetUnitRecord(*(unsigned int *)(temp_v6 + 0x738));
                              FUN_0029d8f4(temp_v7,0);
                              FUN_0026dafc(partyPanelPollSelectedStatusColor());
                              temp_v4 = (int)*(short *)(temp_v1 + 0x38);
                              FUN_0026c654(temp_v4,*(unsigned int *)(temp_v6 + 0x738),
                                           *(unsigned short *)(temp_v1 + 0x36),1);
                              if (temp_v4 == 1) {
                                *(unsigned short *)(temp_v6 + 0x73c) = 0;
                              }
                              goto LAB_001c653c;
                            }
                          }
                        }
                        else {
                          FUN_002a0cc8(1);
                          temp_v4 = *(int *)(temp_v6 + 0x738);
                          FUN_0026c710(temp_v4,*(unsigned short *)(temp_v1 + 0x36),1);
                          if (temp_v4 == 0) {
                            FUN_0026c710(*(unsigned int *)(temp_v6 + 0x738),
                                         *(unsigned short *)(temp_v1 + 0x36),0);
                            temp_v7 = gameGetUnitRecord(*(int *)(temp_v6 + 0x738));
                            FUN_0029d8f4(temp_v7,0);
                            FUN_0026dafc(partyPanelPollSelectedStatusColor());
                            temp_v4 = *(int *)(temp_v6 + 0x738);
                            FUN_0026c710(temp_v4,*(unsigned short *)(temp_v1 + 0x36),1);
                            if (temp_v4 == 1) {
                              *(unsigned short *)(temp_v6 + 0x73c) = 0;
                            }
                            temp_v7 = gameGetUnitRecord(*(unsigned int *)(temp_v6 + 0x738));
                            __aeabi_memcpy4(temp_v1 + 0x11ec,temp_v7,0x604);
                            FUN_0029c4e4(temp_v1 + 0x11ec,0);
LAB_001c653c:
                            FUN_00292bcc(*(unsigned int *)(temp_v16 + 0x6d8),0xff);
                            partyPanelSetState(0x13,1);
                            goto LAB_001c6598;
                          }
                        }
                      }
                      else {
                        btlUiPanelFadeInWhenReady(g_btlUiBlock);
                        comWinSetText(&LAB_001c6014);
                        communicationSetResultPointer();
                        communicationBeginTransition(0);
                        messageMainFinishWindow();
                        beginStatusPanelClose();
                        *(int *)(temp_v1 + 0x674) = temp_v4;
                        partyPanelSetState(0xe,1);
                      }
                    }
                    else {
                      *(unsigned char *)(*(int *)(temp_v1 + 0xb3c) + temp_v1 + 0xb40) = 1;
                      piVar17 = (int *)(temp_v1 + 0xb3c);
                      temp_v6 = gameGetUnitRecord(*(unsigned int *)(temp_v6 + 0x738));
                      *(unsigned int *)(temp_v1 + *piVar17 * 4 + 0xb34) = (unsigned int)*(unsigned short *)(temp_v6 + 0x46);
                      *piVar17 = *piVar17 + 1;
                      FUN_0026c9c0();
                      FUN_0026c868();
                      temp_v6 = *piVar17;
                      if (temp_v6 >= 2) {
                        FUN_001d1828();
                        temp_v4 = g_partyPanel;
                        if (temp_v6 != 0) {
                          temp_v6 = 0;
                          if (0 < *(int *)(g_partyPanel + 0x6b8)) {
                            do {
                              ifTouchRegionRemove();
                              temp_v6 = temp_v6 + 1;
                            } while (temp_v6 < *(int *)(temp_v4 + 0x6b8));
                          }
                          *(unsigned int *)(temp_v4 + 0x6b8) = 0;
                          __aeabi_memset4(temp_v4 + 0x67c,0x3c,0xffffffff);
                          temp_v6 = 0;
                          do {
                            timerStart(temp_v1 + temp_v6 * 0x8c + 0x298,7,0);
                            temp_v6 = temp_v6 + 1;
                          } while (temp_v6 < 4);
LAB_001c5c34:
                          timerStart(temp_v5,7,0);
                          buttonHelpSetPreset(0x5d);
                          *(unsigned char *)(temp_v1 + 0xb42) = 2;
                          *(unsigned int *)(temp_v1 + 0x20) = 0xb;
                          partyPanelSetState(0x15,1);
                          FUN_0029dfc0(0);
                        }
                        else {
                          temp_v6 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),4);
                          if (temp_v6 != 0) {
                            partyPanelSetState(0xd,1);
                            buttonHelpSetPreset(0x9e);
                          }
                        }
                      }
                    }
                    temp_v7 = 0x100016d;
                  }
                }
                goto LAB_001c659c;
              }
              if (*(char *)(temp_v1 + 0x66c) == '\f') goto LAB_001c6680;
            }
          }
          else {
LAB_001c6680:
            temp_v24 = gameFlagIsSet(0x401);
            if (temp_v24 != 0) {
              temp_v24 = 0;
              FUN_002c1658(0,1);
              if ((temp_v24 != 0) || ((temp_v6 == 6 && (temp_v10 < 0x1c)))) {
                *(unsigned char *)(temp_v1 + 0x34) = 0;
                *(unsigned short *)(temp_v1 + 0x6bc) = 1;
                FUN_0026d5a4();
                temp_v7 = 0x100016d;
                goto LAB_001c659c;
              }
            }
          }
          temp_v24 = 1;
          FUN_002c1658();
          temp_v6 = g_partyPanel;
          temp_v0 = *(char *)(temp_v1 + 0x66c);
          if (temp_v24 != 0) {
            if (temp_v0 != '\n') {
              if (temp_v0 != '\v') {
                if (temp_v0 != '\r') {
                  if (temp_v0 != '\x10') {
                    *(unsigned char *)(temp_v1 + 0x34) = 0;
                    FUN_0026d5a4();
                  }
                }
                else {
                  *(unsigned char *)(temp_v1 + 0x34) = 0;
                  FUN_0026d5a4();
                  FUN_0029dfc0(0);
                  uniteLoadPreviewRoomModel();
                }
              }
              else {
                temp_v4 = 0;
                if (0 < *(int *)(g_partyPanel + 0x6b8)) {
                  do {
                    ifTouchRegionRemove();
                    temp_v4 = temp_v4 + 1;
                  } while (temp_v4 < *(int *)(temp_v6 + 0x6b8));
                }
                *(unsigned int *)(temp_v6 + 0x6b8) = 0;
                __aeabi_memset4(temp_v6 + 0x67c,0x3c,0xffffffff);
                temp_v6 = 0;
                do {
                  timerStart(temp_v1 + temp_v6 * 0x8c + 0x298,7,0);
                  temp_v6 = temp_v6 + 1;
                } while (temp_v6 < 4);
                timerStart(temp_v5,7,0);
                FUN_0026c9c0();
                buttonHelpSetPreset(0x5d);
                messageMainFinishWindow();
                FUN_0029dfc0(0);
                FUN_002a0cc8(0);
                *(unsigned char *)(temp_v1 + 0x66c) = 10;
                *(unsigned char *)(temp_v1 + 0xb42) = 2;
                *(unsigned int *)(temp_v1 + 0x20) = 0xb;
                partyPanelSetState(0x15,1);
              }
            }
            else {
              *(unsigned char *)(*(int *)(temp_v1 + 0xb3c) + temp_v1 + 0xb40) = 0xff;
              *(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0xb3c) * 4 + 0xb34) = 0xffffffff;
              *(int *)(temp_v1 + 0xb3c) = *(int *)(temp_v1 + 0xb3c) - 1;
              FUN_0026c9c0();
              temp_v6 = 0;
              if (*(char *)(*(int *)(temp_v1 + 0xb3c) + temp_v1 + 0xb40) == '\0') {
                do {
                  if ((-1 < *(char *)(temp_v4 + temp_v6 + 0x9108)) &&
                     (temp_v24 = gameGetUnitRecord(),
                     (unsigned int)*(unsigned short *)(temp_v24 + 0x46) ==
                     *(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0xb3c) * 4 + 0xb34))) {
                    *(unsigned char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6c8) + 0x27) = 0;
                    break;
                  }
                  temp_v6 = temp_v6 + 1;
                } while (temp_v6 < 3);
              }
              else {
                do {
                  if ((-1 < *(int *)(temp_v1 + temp_v6 * 8 + 0x738)) &&
                     (temp_v4 = gameGetUnitRecord(),
                     (unsigned int)*(unsigned short *)(temp_v4 + 0x46) ==
                     *(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0xb3c) * 4 + 0xb34))) {
                    *(unsigned char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6d8) + 0x27) = 0;
                    break;
                  }
                  temp_v6 = temp_v6 + 1;
                } while (temp_v6 < 0x18);
              }
              if (*(int *)(temp_v1 + 0xb3c) < 0) {
                *(unsigned char *)(temp_v1 + 0x34) = 0;
                FUN_0026d5a4();
                FUN_0029e890(0xffffffff,1);
              }
              else {
                FUN_0029e890((int)(char)((char)*(int *)(temp_v1 + 0xb3c) + '\x01'),0);
                FUN_0026c868();
              }
            }
            eventQueueAddUniqueIfValid(0x100016e);
            FUN_0029c4c8(0);
          }
          else {
            temp_v6 = FUN_0026d6a4(temp_v0 != '\v');
            if ((temp_v6 != 0) && (temp_v8 = temp_v1 + 0xa08, *(char *)(temp_v1 + 0x42) != '\0')) {
              temp_v8 = temp_v1 + 0xa6c;
            }
          }
        }
      }
    }
    if (*(int *)(temp_v1 + 0x1c) == 8) {
      temp_v6 = 0;
      do {
        *(unsigned char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6c8) + 0x25) = 0;
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
      temp_v6 = 0;
      do {
        *(unsigned char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6d8) + 0x25) = 0;
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x18);
      temp_v6 = FUN_0029efa8(temp_v8);
      if (temp_v6 < 1) {
        temp_v6 = objectPartRunUnlessLocked(temp_v8);
        *(unsigned char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6c8) + 0x25) = 1;
      }
      else {
        if (*(char *)(temp_v1 + 0x42) != '\0') {
          temp_v4 = objectPartRunUnlessLocked();
          temp_v6 = FUN_0029efa8(temp_v8);
          temp_v4 = temp_v4 + temp_v6 * 4;
        }
        else {
          temp_v6 = FUN_0029efa8(temp_v8);
          temp_v24 = *(int *)(temp_v1 + 0x2c);
          temp_v4 = objectPartRunUnlessLocked(temp_v8);
          temp_v4 = temp_v4 + temp_v6 * 4 + temp_v24 * 0xc;
        }
        *(unsigned char *)(*(int *)(temp_v1 + (temp_v4 - 4) * 4 + 0x6d8) + 0x25) = 1;
      }
      temp_v0 = *(char *)(temp_v1 + 0x66c);
      if (!(temp_v0 == '\t' || temp_v0 == '\b')) {
        if ((!(temp_v0 == '\x06' || temp_v0 == '\x05')) && (!(temp_v0 == '\a' || temp_v0 == '\x02'))) {
          if (temp_v0 == '\n') {
            FUN_0026c9c0();
          }
        }
        else {
          FUN_0026d144(temp_v8,0);
        }
      }
      else {
        FUN_0026d3e0(temp_v8,0);
      }
    }
    if (*(char *)(temp_v1 + 0x66c) != '\v') {
      FUN_0026cf4c();
      break;
    }
    scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x14));
    if (*(int *)(temp_v1 + 0x20) != 0xb) {
      temp_v6 = buttonHelpGetStatus();
      if (temp_v6 != 0xc5) {
        if (*(char *)(temp_v1 + 0x42) != '\0') {
          buttonHelpSetPreset(0xc5);
        }
        if (temp_v6 == 0xc4) break;
      }
      if (*(char *)(temp_v1 + 0x42) == '\0') {
        buttonHelpSetPreset(0xc4);
      }
    }
    break;
  case 10:
    temp_v4 = FUN_0029dfa8();
    if (temp_v4 == 0) {
      if (*(short *)(temp_v1 + 0x38) < 0) {
        FUN_0029defc(0xffffffff,0);
      }
      else {
        temp_v7 = gameGetUnitRecord();
        FUN_0029d8f4(temp_v7,0);
      }
      gameGlobalsSetSelected(10);
      statusPanelSetOpen(1);
    }
    *(unsigned int *)(temp_v1 + 0x670) = 0xffffffff;
    temp_v4 = 0;
    *(unsigned int *)(temp_v1 + 0x674) = 0xffffffff;
    do {
      temp_v24 = temp_v1 + temp_v4 * 4;
      if ((*(char *)(*(int *)(temp_v24 + 0x6c8) + 0x20) == '\0') &&
         (*(char *)(*(int *)(temp_v24 + 0x6c8) + 0x23) == '\0')) {
        *(unsigned char *)(*(int *)(temp_v24 + 0x6c8) + 0x27) = 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    temp_v4 = 0;
    do {
      temp_v24 = temp_v1 + temp_v4 * 4;
      if ((*(char *)(*(int *)(temp_v24 + 0x6d8) + 0x20) == '\0') &&
         (*(char *)(*(int *)(temp_v24 + 0x6d8) + 0x23) == '\0')) {
        *(unsigned char *)(*(int *)(temp_v24 + 0x6d8) + 0x27) = 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x18);
    if (*(char *)(temp_v1 + 0x43) == '\0') {
      temp_v4 = 0;
      FUN_002c1658(0,1);
      if ((temp_v4 == 0) && (temp_v6 != 6)) {
        temp_v4 = 1;
        FUN_002c1658();
        temp_v6 = g_partyPanel;
        if (temp_v4 != 0) {
          *(unsigned char *)(temp_v1 + 0x34) = 0;
          FUN_0026d5a4();
          gameGlobalsSetSelected(0);
          temp_v7 = 0x100016e;
        }
        else {
          if ((*(char *)(g_partyPanel + 0x42) == '\0') && (*(int *)(g_partyPanel + 0x30) >= 2)) {
            temp_v4 = ifTouchGetSelectionModeForRegion((int)*(short *)(g_partyPanel + 0x6b4));
            if (temp_v4 != 6) {
              temp_v6 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v6 + 0x6b6));
              if (temp_v6 != 6) goto LAB_001c6eb8;
LAB_001c6f54:
              partyPanelToggleRefresh(0);
            }
            else {
LAB_001c6f28:
              FUN_002932d8(0);
            }
            FUN_002937e0();
          }
          else {
LAB_001c6eb8:
            temp_v6 = partyPanelHandleCursorEdgeInput(0,1);
            if (temp_v6 == 0) {
              if ((*(char *)(g_partyPanel + 0x42) == '\0') && (*(int *)(g_partyPanel + 0x30) >= 2)) {
                temp_v6 = 4;
                FUN_002c1658(4,1);
                if (temp_v6 != 0) goto LAB_001c6f28;
                temp_v6 = 3;
                FUN_002c1658(3,1);
                if (temp_v6 != 0) goto LAB_001c6f54;
              }
              FUN_0026d6a4(1);
              FUN_0026cf4c();
              break;
            }
          }
          partyPanelSetState(3,1);
          temp_v7 = 0x100016f;
        }
        eventQueueAddUniqueIfValid(temp_v7);
      }
      else {
        temp_v0 = *(char *)(temp_v1 + 0x66c);
        if (temp_v0 != '\t') {
          if (temp_v0 != '\x06') {
            if (temp_v0 != '\a') {
              *(unsigned int *)(temp_v1 + 0x670) = 9999;
              *(unsigned char *)(temp_v1 + 0x34) = 1;
              *(unsigned int *)(temp_v1 + 0x674) = 9999;
              FUN_0026d5a4();
            }
            else {
              FUN_0026c464((int)*(short *)(temp_v1 + 0x38),*(unsigned short *)(temp_v1 + 0x36),0);
              temp_v6 = FUN_0028d1f4(*(unsigned short *)(temp_v1 + 0x36));
              FUN_0029c43c(-temp_v6,0);
              partyPanelSetState(0x11,1);
            }
            temp_v7 = 0x100016d;
          }
          else {
            FUN_002a0cc8(1);
            temp_v6 = (int)*(short *)(temp_v1 + 0x38);
            FUN_0026c464(temp_v6,*(unsigned short *)(temp_v1 + 0x36),1);
            if (temp_v6 == 0) {
              FUN_0026c464((int)*(short *)(temp_v1 + 0x38),*(unsigned short *)(temp_v1 + 0x36),0);
              if (-1 < *(short *)(temp_v1 + 0x38)) goto LAB_001c6d98;
LAB_001c6d64:
              FUN_0029defc(0xffffffff,0);
              FUN_0026dafc(partyPanelPollSelectedStatusColor());
              partyPanelSetState(0x14,1);
              temp_v7 = 0x100017c;
              eventQueueAddUniqueIfValid(temp_v7);
              gameGlobalsSetSelected(0);
              FUN_0026cf4c();
              break;
            }
            temp_v7 = 0x100016e;
          }
        }
        else {
          FUN_002a0cc8(1);
          temp_v15 = (unsigned int)*(unsigned short *)(temp_v1 + 0x36);
          table08ApplyToParty(temp_v15,1);
          if (temp_v15 != 0) {
            temp_v7 = 0x100016e;
            eventQueueAddUniqueIfValid(temp_v7);
            gameGlobalsSetSelected(0);
            FUN_0026cf4c();
            break;
          }
          table08ApplyToParty(*(unsigned short *)(temp_v1 + 0x36),0);
          if (*(short *)(temp_v1 + 0x38) < 0) goto LAB_001c6d64;
LAB_001c6d98:
          temp_v7 = gameGetUnitRecord();
          FUN_0029d8f4(temp_v7,0);
          FUN_0026dafc(partyPanelPollSelectedStatusColor());
          partyPanelSetState(0x14,1);
          temp_v7 = 0x100017c;
        }
        eventQueueAddUniqueIfValid(temp_v7);
        gameGlobalsSetSelected(0);
      }
    }
    FUN_0026cf4c();
    break;
  case 0xb:
    temp_v6 = gameGetFlagByte12e8();
    if (((temp_v6 != 0) && (temp_v6 = FUN_0029e02c(), temp_v6 == 0)) &&
       (temp_v6 = buttonHelpGetStatus(), temp_v6 != 0x5d)) {
      buttonHelpSetPreset(0x5d);
    }
    temp_v6 = FUN_0029dfa8();
    if (temp_v6 == 0) {
      if (*(char *)(temp_v1 + 0xb42) != 2) {
        temp_v7 = partyMemberFindById(*(unsigned int *)(temp_v1 + *(char *)(temp_v1 + 0xb42) * 4 + 0xb34) & 0xffff);
        FUN_0029e890((int)(char)(*(char *)(temp_v1 + 0xb42) + '\x01'),1);
        FUN_0029d8f4(temp_v7,0);
        FUN_0029c4c8(0);
        menuSetModeAndResetTransitions(0xb);
        statusPanelSetOpen(1);
      }
      else {
        FUN_0029e890(0,1);
        FUN_0029c4c8(1);
        FUN_0029defc((int)*(short *)(temp_v1 + 0xb96),0);
        FUN_0029c4e4(temp_v1 + 0xb50,0);
        FUN_0029c4ac(0);
        temp_v15 = FUN_0029dde0();
        if (temp_v15 < *(unsigned char *)(temp_v1 + 0xb98)) {
          temp_v7 = 10;
        }
        else {
          temp_v7 = 9;
        }
        menuSetModeAndResetTransitions(temp_v7);
        statusPanelSetOpen(1);
      }
    }
    temp_v6 = FUN_0029563c();
    if (((temp_v6 != 0) && (temp_v6 = FUN_0029c46c(), temp_v6 != 0)) &&
       ((temp_v6 = FUN_0029c48c(), temp_v6 != 0 && (temp_v6 = useCounterIsFinished(), temp_v6 != 0)))) {
      temp_v6 = FUN_0029ae44();
      if (temp_v6 != 0) {
        FUN_0029dfc0(0);
        temp_v0 = *(char *)(temp_v1 + 0xb42) + (char)temp_v6;
        *(char *)(temp_v1 + 0xb42) = temp_v0;
        if (temp_v0 < '\0') {
          *(unsigned char *)(temp_v1 + 0xb42) = 2;
        }
        else if ('\x02' < temp_v0) {
          *(unsigned char *)(temp_v1 + 0xb42) = 0;
        }
      }
      else {
        temp_v6 = 0;
        FUN_002c1658(0,1);
        if (temp_v6 != 0) {
          temp_v15 = (*(unsigned int *)(temp_v1 + 0xb4c) & 0x1ffff) >> 2;
          devilGetRecord();
          temp_v10 = FUN_0029dde0();
          if (temp_v10 >= *(unsigned char *)(temp_v15 + 3)) {
            temp_v6 = 0;
            do {
              if ((-1 < *(char *)(temp_v4 + temp_v6 + 0x90f0)) &&
                 (temp_v24 = gameGetUnitRecord(),
                 (unsigned int)*(unsigned short *)(temp_v24 + 0x46) == (*(unsigned int *)(temp_v1 + 0xb4c) & 0x1ffff) >> 2)) {
                if (temp_v6 < 0x18) {
                  temp_v6 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),3);
                  goto joined_r0x001c7220;
                }
                break;
              }
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 0x18);
            FUN_0029e890(0);
            FUN_0029d8f4(temp_v1 + 0xb50,0);
            statusPanelSetOpen(1);
            menuSetModeAndResetTransitions(3);
            FUN_0029bd4c();
            FUN_0026d670();
            temp_v6 = 0;
            do {
              timerStart(temp_v1 + temp_v6 * 0x8c + 0x298,4,0);
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 4);
            if (*(char *)(temp_v1 + 0x42) != '\0') {
              timerStart(temp_v5,6,0);
            }
            else {
              timerStart(temp_v5,4,0);
            }
            FUN_0029ee6c(0,0x323232ff);
            FUN_0026c214();
            temp_v6 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),1);
            if (temp_v6 != 0) {
              FUN_0028a924(0xb,0,0xffffffff);
              partyPanelSetState(0,1);
            }
          }
          else {
            temp_v6 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),2);
joined_r0x001c7220:
            if (temp_v6 != 0) {
              partyPanelSetState(0xd,1);
              buttonHelpSetPreset(0x9e);
            }
          }
          temp_v7 = 0x100016d;
          eventQueueAddUniqueIfValid(temp_v7);
        }
        else {
          temp_v6 = FUN_0029c40c();
          if (temp_v6 == 0) {
            temp_v6 = 1;
            FUN_002c1658();
            if (temp_v6 != 0) {
              temp_v24 = 0;
              temp_v6 = *(int *)(temp_v1 + 0xb3c) - 1;
              *(int *)(temp_v1 + 0xb3c) = temp_v6;
              if (*(char *)(temp_v6 + temp_v1 + 0xb40) == '\0') {
                do {
                  if ((-1 < *(char *)(temp_v4 + temp_v24 + 0x9108)) &&
                     (temp_v6 = gameGetUnitRecord(),
                     (unsigned int)*(unsigned short *)(temp_v6 + 0x46) ==
                     *(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0xb3c) * 4 + 0xb34))) {
                    *(unsigned char *)(*(int *)(temp_v1 + temp_v24 * 4 + 0x6c8) + 0x27) = 0;
                    break;
                  }
                  temp_v24 = temp_v24 + 1;
                } while (temp_v24 < 3);
              }
              else {
                do {
                  if ((-1 < *(int *)(temp_v1 + temp_v24 * 8 + 0x738)) &&
                     (temp_v6 = gameGetUnitRecord(),
                     (unsigned int)*(unsigned short *)(temp_v6 + 0x46) ==
                     *(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0xb3c) * 4 + 0xb34))) {
                    *(unsigned char *)(*(int *)(temp_v1 + temp_v24 * 4 + 0x6d8) + 0x27) = 0;
                    break;
                  }
                  temp_v24 = temp_v24 + 1;
                } while (temp_v24 < 0x18);
              }
              FUN_0026c9c0();
              FUN_0029e890(2,0);
              FUN_0029dfc0(0);
              FUN_0029bd4c();
              FUN_0029c4c8(0);
              FUN_0029c4ac(0);
              temp_v6 = 0;
              do {
                timerStart(temp_v1 + temp_v6 * 0x8c + 0x298,4,0);
                temp_v6 = temp_v6 + 1;
              } while (temp_v6 < 4);
              if (*(char *)(temp_v1 + 0x42) != '\0') {
                timerStart(temp_v5,6,0);
              }
              else {
                timerStart(temp_v5,4,0);
              }
              *(unsigned char *)(temp_v1 + 0x66c) = 10;
              *(unsigned int *)(temp_v1 + 0x20) = 8;
              partyPanelSetState(0,1);
              FUN_0026c868();
              FUN_0026c214();
              temp_v7 = 0x100016e;
              eventQueueAddUniqueIfValid(temp_v7);
            }
          }
        }
      }
    }
    break;
  case 0xd:
    temp_v6 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x14));
    if (temp_v6 == 2) {
      if (*(int *)(temp_v1 + 0x24) == 8) {
        temp_v6 = *(int *)(temp_v1 + 0xb3c) - 1;
        *(int *)(temp_v1 + 0xb3c) = temp_v6;
        *(unsigned char *)(temp_v6 + temp_v1 + 0xb40) = 0xff;
        *(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0xb3c) * 4 + 0xb34) = 0xffffffff;
        FUN_0026c9c0();
        temp_v6 = 0;
        if (*(char *)(*(int *)(temp_v1 + 0xb3c) + temp_v1 + 0xb40) == '\0') {
          do {
            if ((-1 < *(char *)(temp_v4 + temp_v6 + 0x9108)) &&
               (temp_v24 = gameGetUnitRecord(),
               (unsigned int)*(unsigned short *)(temp_v24 + 0x46) ==
               *(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0xb3c) * 4 + 0xb34))) {
              *(unsigned char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6c8) + 0x27) = 0;
              break;
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 3);
        }
        else {
          do {
            if ((-1 < *(int *)(temp_v1 + temp_v6 * 8 + 0x738)) &&
               (temp_v4 = gameGetUnitRecord(),
               (unsigned int)*(unsigned short *)(temp_v4 + 0x46) ==
               *(unsigned int *)(temp_v1 + *(int *)(temp_v1 + 0xb3c) * 4 + 0xb34))) {
              *(unsigned char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6d8) + 0x27) = 0;
              break;
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 0x18);
        }
        FUN_0029e890((int)(char)((char)*(unsigned int *)(temp_v1 + 0xb3c) + '\x01'),0);
      }
      buttonHelpGetMode();
      buttonHelpSetPreset();
      temp_v7 = *(unsigned int *)(temp_v1 + 0x24);
      temp_v14 = 1;
      partyPanelSetState(temp_v7,temp_v14);
    }
    break;
  case 0xe:
    if (*(char *)(g_partyPanel + 0x42) == '\0') {
      temp_v6 = 0;
      do {
        if ((-1 < *(int *)(g_partyPanel + temp_v6 * 8 + 0x738)) &&
           (*(char *)(*(int *)(g_partyPanel + temp_v6 * 4 + 0x6d8) + 0x28) != '\0')) {
          if (temp_v6 >= 0xc) {
            if (*(int *)(g_partyPanel + 0x2c) != 0) goto LAB_001c7720;
            partyPanelToggleRefresh(g_partyPanel + 0x940);
            goto LAB_001c7700;
          }
          break;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x18);
      if (*(int *)(g_partyPanel + 0x2c) == 1) {
        FUN_002932d8(g_partyPanel + 0x940);
LAB_001c7700:
        FUN_002937e0();
        FUN_0029dfc0(0);
        partyPanelSetState(3,1);
        *(unsigned int *)(temp_v1 + 0x24) = 0xe;
      }
    }
LAB_001c7720:
    if (*(int *)(temp_v1 + 0x18) != 8) {
      FUN_002bf818();
      FUN_002bf818(temp_v1 + 0x5e0);
      if ((*(int *)(temp_v1 + 0x18) >= 0x29) && (*(char *)(temp_v1 + 0x5de) != '\0')) {
        FUN_0017fbc4();
        *(unsigned char *)(temp_v1 + 0x34) = 1;
        FUN_0026d5a4();
      }
    }
    else {
      FUN_0026beb4(0,0,0,0,1);
      temp_v6 = 0;
      do {
        if ((-1 < *(int *)(temp_v1 + temp_v6 * 8 + 0x738)) &&
           (temp_v4 = temp_v6, *(char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6d8) + 0x28) != '\0')) break;
        temp_v6 = temp_v6 + 1;
        temp_v4 = 0;
      } while (temp_v6 < 0x18);
      if (*(char *)(temp_v1 + 0x42) != '\0') {
        FUN_00295eb0(temp_v1 + 0x554,0x19,temp_v4 + 0x5b);
        FUN_00295eb0(temp_v1 + 0x5e0,0x19,temp_v4 + 0x5b);
      }
      else {
        if (temp_v4 >= 0xc) {
          temp_v4 = temp_v4 - 0xc;
        }
        FUN_00295eb0(temp_v1 + 0x554,0x19,temp_v4 + 0x31);
        FUN_00295eb0(temp_v1 + 0x5e0,0x19,temp_v4 + 0x31);
      }
      spriteStartAnimationByIndex(temp_v1 + 0x554,3);
      spriteStartAnimationByIndex(temp_v1 + 0x5e0,4);
      eventQueueAddUnique(0x10001e1);
    }
    break;
  case 0xf:
    temp_v6 = useCounterIsFinished();
    if (temp_v6 != 0) {
      useCounterRelease();
      FUN_002a0cc8(0);
      if (*(char *)(temp_v1 + 0x66c) != '\x01') {
        FUN_0026c214();
      }
      FUN_0029dfc0(0);
      temp_v7 = *(unsigned int *)(temp_v1 + 0x24);
      temp_v14 = 1;
      partyPanelSetState(temp_v7,temp_v14);
      break;
    }
    temp_v6 = useCounterGetCurrentValue();
    if (temp_v6 == 0x4b) break;
    temp_v6 = 0;
    if (*(int *)(temp_v1 + 0x674) >= 0) {
      temp_v4 = 0;
      do {
        if (*(char *)(*(int *)(temp_v1 + temp_v4 * 4 + 0x6d8) + 0x27) != '\0') {
          temp_v4 = gameGetUnitRecord(*(unsigned int *)(*(int *)(temp_v1 + temp_v4 * 4 + 0x6d8) + 0x34));
          goto LAB_001c7990;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x18);
LAB_001c7944:
      partyPanelSortEntries();
    }
    else {
      if (*(int *)(temp_v1 + 0x670) < 1) {
        partyPanelSortEntries();
        memClear(temp_v1 + 0x7fc,0x70);
        memClear(temp_v1 + 0x86c,0x70);
        break;
      }
      temp_v6 = 0;
LAB_001c7954:
      if (*(char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6c8) + 0x27) == '\0') goto LAB_001c79e4;
      temp_v4 = gameGetUnitRecord(*(unsigned int *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6c8) + 0x34));
      temp_v6 = *(int *)(temp_v1 + 0x670);
LAB_001c7990:
      partyPanelSortEntries();
      if (*(int *)(temp_v1 + 0x674) >= 0) {
        temp_v6 = 0;
        do {
          if (*(int *)(temp_v1 + temp_v6 * 8 + 0x738) < 0) break;
          temp_v24 = gameGetUnitRecord();
          temp_v8 = *(int *)(temp_v1 + temp_v6 * 4 + 0x6d8);
          if (*(short *)(temp_v24 + 0x46) == *(short *)(temp_v4 + 0x46)) {
            *(unsigned char *)(temp_v8 + 0x27) = 1;
            *(int *)(temp_v1 + 0x674) = temp_v6;
          }
          else {
            *(unsigned char *)(temp_v8 + 0x27) = 0;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 0x18);
      }
      else if (0 < *(int *)(temp_v1 + 0x670)) {
        *(unsigned char *)(*(int *)(temp_v1 + temp_v6 * 4 + 0x6c8) + 0x27) = 1;
      }
    }
    memClear(temp_v1 + 0x7fc,0x70);
    memClear(temp_v1 + 0x86c,0x70);
    break;
  case 0x11:
    temp_v6 = messageMainTargetIsClear();
    if (temp_v6 == 1) {
      temp_v7 = FUN_0028d1f4(*(unsigned short *)(temp_v1 + 0x36));
      gameCounterAddSaturating(1,temp_v7);
      temp_v14 = 1;
      temp_v7 = 10;
      partyPanelSetState(temp_v7,temp_v14);
    }
    break;
  case 0x12:
    temp_v6 = temp_v1 + 0xa08;
    if (*(char *)(temp_v1 + 0x42) != '\0') {
      temp_v6 = temp_v1 + 0xa6c;
    }
    temp_v4 = FUN_0029dfa8();
    if (temp_v4 == 0) {
      if (*(char *)(temp_v1 + 0x66c) != '\n') {
        FUN_0029e890(0xffffffff,1);
LAB_001c7ac8:
        if (*(char *)(temp_v1 + 0x66c) == '\v') {
          FUN_0029e890(0);
          FUN_0029d8f4(temp_v1 + 0xb50,0);
          statusPanelSetOpen(1);
          menuSetModeAndResetTransitions(3);
          goto LAB_001c7c50;
        }
      }
      else {
        if (*(int *)(temp_v1 + 0xb3c) == 0) {
          temp_v7 = 1;
LAB_001c7b60:
          FUN_0029e890(temp_v7,0);
          goto LAB_001c7ac8;
        }
        if (*(int *)(temp_v1 + 0xb3c) == 1) {
          temp_v7 = 2;
          goto LAB_001c7b60;
        }
      }
      temp_v4 = FUN_0029efa8(temp_v6);
      if (temp_v4 < 1) {
        temp_v6 = objectPartRunUnlessLocked(temp_v6);
        if (temp_v6 != 0) {
          temp_v4 = gameGetSlotTable();
          if (-1 >= *(char *)(temp_v4 + temp_v6 + 0x9107)) {
            FUN_0029defc(0);
            FUN_0029dfc0(0);
          }
          else {
            temp_v7 = gameGetUnitRecord();
            FUN_0029d8f4(temp_v7,0);
            statusPanelSetOpen(1);
          }
        }
        else {
          FUN_0029defc(0xffffffff,0);
          statusPanelSetOpen(1);
        }
      }
      else {
        if (*(char *)(temp_v1 + 0x42) != '\0') {
          temp_v24 = objectPartRunUnlessLocked();
          temp_v6 = FUN_0029efa8(temp_v6);
          temp_v24 = temp_v24 + temp_v6 * 4;
        }
        else {
          temp_v4 = FUN_0029efa8(temp_v6);
          temp_v8 = *(int *)(temp_v1 + 0x2c);
          temp_v24 = objectPartRunUnlessLocked(temp_v6);
          temp_v24 = temp_v24 + temp_v4 * 4 + temp_v8 * 0xc;
        }
        if (*(int *)(temp_v1 + (temp_v24 - 4) * 8 + 0x738) < 0) {
          FUN_0029defc(0);
          FUN_0029dfc0(0);
        }
        else {
          temp_v7 = gameGetUnitRecord();
          FUN_0029d8f4(temp_v7,0);
          statusPanelSetOpen(1);
        }
      }
    }
LAB_001c7c50:
    temp_v6 = scrRunOpcodesStub(*(unsigned int *)(temp_v1 + 0x14));
    if ((temp_v6 == 2) && (temp_v6 = sys43e188GetState(), temp_v6 != 0)) {
      temp_v6 = messageMainGetChoiceResult();
      if (temp_v6 != 0) {
        temp_v6 = 0;
        do {
          temp_v4 = temp_v1 + temp_v6 * 4;
          *(unsigned char *)(*(int *)(temp_v4 + 0x6c8) + 0x25) = 0;
          *(unsigned char *)(*(int *)(temp_v4 + 0x6c8) + 0x27) = 0;
          *(unsigned char *)(*(int *)(temp_v4 + 0x6c8) + 0x26) = 0;
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 4);
        temp_v6 = 0;
        do {
          temp_v4 = temp_v1 + temp_v6 * 4;
          *(unsigned char *)(*(int *)(temp_v4 + 0x6d8) + 0x25) = 0;
          *(unsigned char *)(*(int *)(temp_v4 + 0x6d8) + 0x27) = 0;
          *(unsigned char *)(*(int *)(temp_v4 + 0x6d8) + 0x26) = 0;
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 0x18);
      }
      else {
        if (*(int *)(temp_v1 + 0x670) >= 1) {
          temp_v6 = gameGetSlotTable();
          temp_v6 = gameGetUnitRecord((int)*(char *)(*(int *)(temp_v1 + 0x670) + temp_v6 + 0x9107));
        }
        else {
          if ((*(int *)(temp_v1 + 0x674) < 0) ||
             (*(int *)(temp_v1 + *(int *)(temp_v1 + 0x674) * 8 + 0x738) < 0)) {
            FUN_0026c214();
            temp_v14 = 1;
            temp_v7 = 8;
            partyPanelSetState(temp_v7,temp_v14);
            break;
          }
          temp_v6 = gameGetUnitRecord();
        }
        if (temp_v6 != 0) {
          partyFindActiveSlotById(*(unsigned short *)(temp_v6 + 0x46));
          FUN_0029bbc8();
          FUN_0026b9bc();
          FUN_0029dfc0(0);
          temp_v7 = objectPartRunUnlessLocked();
          temp_v6 = objectPartRunUnlessLocked(temp_v1 + 0x940);
          temp_v4 = FUN_0029efa8(temp_v1 + 0x940);
          temp_v6 = temp_v6 + temp_v4 * 4;
          FUN_0028a924(0xf,0);
          scrollOwnerSelectIndex(temp_v1 + 0x8dc,temp_v7);
          scrollOwnerSelectIndex(temp_v1 + 0x940,temp_v6 % 4);
          FUN_0029eb5c(temp_v1 + 0x940,(int)(temp_v6 + ((unsigned int)(temp_v6 >> 0x1f) >> 0x1e)) >> 2);
          eventQueueAddUniqueIfValid(0x100017f);
        }
      }
      FUN_0026c214();
      temp_v14 = 1;
      temp_v7 = 8;
      partyPanelSetState(temp_v7,temp_v14);
    }
    break;
  case 0x13:
    FUN_002a0cc8(1);
    if (*(int *)(temp_v1 + 0x18) >= 0xf) {
      FUN_002a0cc8(0);
      if (*(char *)(temp_v1 + 0x66c) != '\t') {
        if (*(char *)(temp_v1 + 0x66c) == '\x06') {
          temp_v6 = FUN_002987d8((int)*(short *)(temp_v1 + 0x38),*(unsigned short *)(temp_v1 + 0x36));
          if (temp_v6 == 0) {
            *(unsigned char *)(temp_v1 + 0x34) = 0;
            FUN_0026d5a4();
            break;
          }
          if (*(char *)(temp_v1 + 0x42) == '\0') {
            temp_v6 = temp_v1 + 0xa08;
          }
          else {
            temp_v6 = temp_v1 + 0xa6c;
          }
          FUN_0026d144(temp_v6,0);
          temp_v6 = temp_v1 + 0xa08;
          if (*(char *)(temp_v1 + 0x42) != '\0') {
            temp_v6 = temp_v1 + 0xa6c;
          }
          temp_v24 = FUN_0029efa8(temp_v6);
          if (temp_v24 < 1) {
            temp_v24 = objectPartRunUnlessLocked(temp_v6);
            if (temp_v24 != 0) {
              temp_v8 = (int)*(short *)(temp_v1 + 0x38);
              FUN_0026c654(temp_v8,(int)*(char *)(temp_v24 + temp_v4 + 0x9107),
                           *(unsigned short *)(temp_v1 + 0x36),1);
            }
            else {
              temp_v8 = (int)*(short *)(temp_v1 + 0x38);
              FUN_0026c654(temp_v8,0xffffffff,*(unsigned short *)(temp_v1 + 0x36),1);
            }
          }
          else {
            if (*(char *)(temp_v1 + 0x42) != '\0') {
              temp_v24 = objectPartRunUnlessLocked();
              temp_v4 = FUN_0029efa8(temp_v6);
              temp_v24 = temp_v24 + temp_v4 * 4;
            }
            else {
              temp_v4 = FUN_0029efa8(temp_v6);
              temp_v8 = *(int *)(temp_v1 + 0x2c);
              temp_v24 = objectPartRunUnlessLocked(temp_v6);
              temp_v24 = temp_v24 + temp_v4 * 4 + temp_v8 * 0xc;
            }
            temp_v8 = (int)*(short *)(temp_v1 + 0x38);
            FUN_0026c654(temp_v8,*(unsigned int *)(temp_v1 + (temp_v24 - 4) * 8 + 0x738),
                         *(unsigned short *)(temp_v1 + 0x36),1);
          }
          if ((temp_v8 != 0) &&
             (temp_v4 = FUN_003a65f4(0,(int)*(short *)(temp_v1 + 0x38),*(unsigned short *)(temp_v1 + 0x36)),
             temp_v4 != 0)) {
            FUN_0029dfc0(0);
            partyPanelResetCursor();
            FUN_0026d144(temp_v6,0);
          }
          temp_v14 = 1;
          temp_v7 = 8;
          partyPanelSetState(temp_v7,temp_v14);
        }
      }
      else {
        temp_v6 = FUN_0028fb40(*(unsigned short *)(temp_v1 + 0x36));
        if (0 < temp_v6) {
          if (*(char *)(temp_v1 + 0x42) != '\0') {
            temp_v6 = temp_v1 + 0xa6c;
          }
          else {
            temp_v6 = temp_v1 + 0xa08;
          }
          FUN_0026d3e0(temp_v6,0);
          temp_v6 = temp_v1 + 0xa08;
          if (*(char *)(temp_v1 + 0x42) != '\0') {
            temp_v6 = temp_v1 + 0xa6c;
          }
          temp_v24 = FUN_0029efa8(temp_v6);
          if (temp_v24 < 1) {
            temp_v24 = objectPartRunUnlessLocked(temp_v6);
            if (temp_v24 != 0) {
              temp_v4 = (int)*(char *)(temp_v24 + temp_v4 + 0x9107);
              FUN_0026c710(temp_v4,*(unsigned short *)(temp_v1 + 0x36),1);
            }
            else {
              temp_v4 = -1;
              FUN_0026c710(0xffffffff,*(unsigned short *)(temp_v1 + 0x36),1);
            }
          }
          else {
            if (*(char *)(temp_v1 + 0x42) != '\0') {
              temp_v24 = objectPartRunUnlessLocked();
              temp_v4 = FUN_0029efa8(temp_v6);
              temp_v24 = temp_v24 + temp_v4 * 4;
            }
            else {
              temp_v4 = FUN_0029efa8(temp_v6);
              temp_v8 = *(int *)(temp_v1 + 0x2c);
              temp_v24 = objectPartRunUnlessLocked(temp_v6);
              temp_v24 = temp_v24 + temp_v4 * 4 + temp_v8 * 0xc;
            }
            temp_v4 = *(int *)(temp_v1 + (temp_v24 - 4) * 8 + 0x738);
            FUN_0026c710(temp_v4,*(unsigned short *)(temp_v1 + 0x36),1);
          }
          if ((temp_v4 != 0) && (temp_v4 = btlItemUselessOnGroupMember(0,*(unsigned short *)(temp_v1 + 0x36)), temp_v4 != 0)) {
            FUN_0029dfc0(0);
            partyPanelResetCursor();
            FUN_0026d3e0(temp_v6,0);
          }
          FUN_0026c868();
          temp_v14 = 1;
          temp_v7 = 8;
          partyPanelSetState(temp_v7,temp_v14);
          break;
        }
        *(unsigned char *)(temp_v1 + 0x34) = 0;
        FUN_0026d5a4();
        FUN_0029c4c8(0);
      }
    }
    break;
  case 0x14:
    FUN_002a0cc8(1);
    if (*(int *)(temp_v1 + 0x18) >= 0xf) {
      FUN_002a0cc8(0);
      if (*(char *)(temp_v1 + 0x66c) != '\t') {
        if (*(char *)(temp_v1 + 0x66c) != '\x06') break;
        temp_v6 = FUN_002987d8((int)*(short *)(temp_v1 + 0x38),*(unsigned short *)(temp_v1 + 0x36));
        if (temp_v6 == 0) {
          *(unsigned char *)(temp_v1 + 0x34) = 0;
          FUN_0026d5a4();
          break;
        }
        temp_v6 = (int)*(short *)(temp_v1 + 0x38);
        FUN_0026c654(temp_v6,0xffffffff,*(unsigned short *)(temp_v1 + 0x36),1);
        if (temp_v6 == 1) {
          *(unsigned char *)(temp_v1 + 0x678) = 0;
          temp_v6 = btlGetMainState();
          if ((temp_v6 != 0) && (temp_v6 = btlGetMainState(), (*(unsigned int *)(temp_v6 + 0x44a8) & 0x2000000) != 0)
             ) {
            *(unsigned char *)(temp_v1 + 0x678) = 1;
          }
        }
        temp_v6 = 0;
        do {
          temp_v24 = (int)*(short *)(temp_v1 + 0x38);
          FUN_0026c654(temp_v24,(int)*(char *)(temp_v4 + temp_v6 + 0x9108),*(unsigned short *)(temp_v1 + 0x36),1
                      );
          if (temp_v24 == 1) {
            *(unsigned char *)(temp_v1 + temp_v6 + 0x679) = 0;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 3);
        temp_v6 = 0;
        do {
          temp_v24 = temp_v1 + temp_v6 * 8;
          temp_v4 = (int)*(short *)(temp_v1 + 0x38);
          FUN_0026c654(temp_v4,*(unsigned int *)(temp_v24 + 0x738),*(unsigned short *)(temp_v1 + 0x36),1);
          if (temp_v4 == 1) {
            *(unsigned short *)(temp_v24 + 0x73c) = 0;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 0x18);
        FUN_0026b7c0();
        temp_v14 = 1;
        temp_v7 = 10;
      }
      else {
        temp_v6 = FUN_0028fb40(*(unsigned short *)(temp_v1 + 0x36));
        if (temp_v6 < 1) {
          *(unsigned char *)(temp_v1 + 0x34) = 0;
          FUN_0026d5a4();
          FUN_0029c4c8(0);
          break;
        }
        temp_v24 = -1;
        FUN_0026c710(0xffffffff,*(unsigned short *)(temp_v1 + 0x36),1);
        temp_v6 = 0;
        if (temp_v24 == 1) {
          *(unsigned char *)(temp_v1 + 0x678) = 0;
        }
        do {
          temp_v24 = (int)*(char *)(temp_v4 + temp_v6 + 0x9108);
          FUN_0026c710(temp_v24,*(unsigned short *)(temp_v1 + 0x36),1);
          if (temp_v24 == 1) {
            *(unsigned char *)(temp_v1 + temp_v6 + 0x679) = 0;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 3);
        temp_v6 = 0;
        do {
          temp_v24 = temp_v1 + temp_v6 * 8;
          temp_v4 = *(int *)(temp_v24 + 0x738);
          FUN_0026c710(temp_v4,*(unsigned short *)(temp_v1 + 0x36),1);
          if (temp_v4 == 1) {
            *(unsigned short *)(temp_v24 + 0x73c) = 0;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 0x18);
        FUN_00205a90();
        temp_v14 = 1;
        temp_v7 = 10;
      }
      partyPanelSetState(temp_v7,temp_v14);
    }
    break;
  case 0x15:
    temp_v6 = 0;
    do {
      FUN_002bf818(temp_v1 + temp_v6 * 0x8c + 0x298);
      temp_v24 = g_partyPanel;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 4);
    if (*(char *)(temp_v1 + 0x322) == '\0') break;
    temp_v6 = 0;
    if (0 < *(int *)(g_partyPanel + 0x6b8)) {
      do {
        ifTouchRegionRemove();
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < *(int *)(temp_v24 + 0x6b8));
    }
    *(unsigned int *)(temp_v24 + 0x6b8) = 0;
    __aeabi_memset4(temp_v24 + 0x67c,0x3c,0xffffffff);
    FUN_0029ee6c(0,0x323232ff);
    if (*(int *)(temp_v1 + 0x20) != 0x10) {
      if (*(int *)(temp_v1 + 0x20) == 0xb) {
        temp_v14 = 1;
        temp_v7 = 0xb;
      }
      else {
        if (*(int *)(temp_v1 + 0x24) == 0xe) {
          temp_v6 = partyMemberFindById(*(unsigned int *)(temp_v1 + 0xb48) & 0x7fff,temp_v13);
          temp_v24 = partyMemberFindById((*(unsigned int *)(temp_v1 + 0xb48) & 0x3fffffff) >> 0xf);
          if (g_btlUiBlock != 0) {
            FUN_003ae34c(g_btlUiBlock,temp_v6);
            FUN_003ae34c(g_btlUiBlock,temp_v24);
          }
          temp_v8 = 0;
          do {
            if (*(char *)(temp_v1 + temp_v8 + 0xb40) == '\0') {
              temp_v16 = 0;
              do {
                if ((-1 < *(char *)(temp_v4 + temp_v16 + 0x9108)) &&
                   (temp_v11 = gameGetUnitRecord(),
                   (unsigned int)*(unsigned short *)(temp_v11 + 0x46) == *(unsigned int *)(temp_v1 + temp_v8 * 4 + 0xb34))) break;
                temp_v16 = temp_v16 + 1;
              } while (temp_v16 < 3);
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < 2);
          partyFindActiveSlotById(*(unsigned short *)(temp_v6 + 0x46));
          FUN_0029bbc8();
          partyFindActiveSlotById(*(unsigned short *)(temp_v24 + 0x46));
          FUN_0029bbc8();
          temp_v7 = FUN_0029c1fc();
          temp_v6 = FUN_0029ea68(*(unsigned short *)(temp_v1 + 0xb96));
          FUN_0029c1c8(temp_v7,*(unsigned short *)(temp_v1 + 0xb96),0);
          temp_v4 = gameGetUnitRecord(temp_v7);
          temp_v7 = *(unsigned int *)(temp_v1 + 0xb88);
          temp_v14 = *(unsigned int *)(temp_v1 + 0xb8c);
          temp_v20 = *(unsigned int *)(temp_v1 + 0xb90);
          *(unsigned int *)(temp_v4 + 0x34) = *(unsigned int *)(temp_v1 + 0xb84);
          *(unsigned int *)(temp_v4 + 0x38) = temp_v7;
          *(unsigned int *)(temp_v4 + 0x3c) = temp_v14;
          *(unsigned int *)(temp_v4 + 0x40) = temp_v20;
          temp_v7 = *(unsigned int *)(temp_v1 + 0xba0);
          temp_v14 = *(unsigned int *)(temp_v1 + 0xba4);
          temp_v20 = *(unsigned int *)(temp_v1 + 0xba8);
          temp_v17 = *(unsigned int *)(temp_v1 + 0xbac);
          temp_v18 = *(unsigned int *)(temp_v1 + 0xbb0);
          temp_v19 = *(unsigned int *)(temp_v1 + 0xbb4);
          temp_v21 = *(unsigned int *)(temp_v1 + 3000);
          *(unsigned int *)(temp_v4 + 0x4c) = *(unsigned int *)(temp_v1 + 0xb9c);
          *(unsigned int *)(temp_v4 + 0x50) = temp_v7;
          *(unsigned int *)(temp_v4 + 0x54) = temp_v14;
          *(unsigned int *)(temp_v4 + 0x58) = temp_v20;
          *(unsigned int *)(temp_v4 + 0x5c) = temp_v17;
          *(unsigned int *)(temp_v4 + 0x60) = temp_v18;
          *(unsigned int *)(temp_v4 + 100) = temp_v19;
          *(unsigned int *)(temp_v4 + 0x68) = temp_v21;
          temp_v7 = *(unsigned int *)(temp_v1 + 0xbc0);
          temp_v14 = *(unsigned int *)(temp_v1 + 0xbc4);
          temp_v20 = *(unsigned int *)(temp_v1 + 0xbc8);
          temp_v21 = *(unsigned int *)(temp_v1 + 0xbcc);
          temp_v17 = *(unsigned int *)(temp_v1 + 0xbd0);
          temp_v18 = *(unsigned int *)(temp_v1 + 0xbd4);
          temp_v19 = *(unsigned int *)(temp_v1 + 0xbbc);
          *(unsigned int *)(temp_v4 + 0x88) = *(unsigned int *)(temp_v1 + 0xbd8);
          *(unsigned int *)(temp_v4 + 0x6c) = temp_v19;
          *(unsigned int *)(temp_v4 + 0x70) = temp_v7;
          *(unsigned int *)(temp_v4 + 0x74) = temp_v14;
          *(unsigned int *)(temp_v4 + 0x78) = temp_v20;
          *(unsigned int *)(temp_v4 + 0x7c) = temp_v21;
          *(unsigned int *)(temp_v4 + 0x80) = temp_v17;
          *(unsigned int *)(temp_v4 + 0x84) = temp_v18;
          __aeabi_memcpy4(temp_v4 + 0x8c,temp_v1 + 0xbdc,0x500);
          unitRecalculateEffectiveStats(temp_v4);
          *(unsigned short *)(temp_v4 + 0x2a) = *(unsigned short *)(temp_v4 + 0xe);
          *(unsigned short *)(temp_v4 + 0x2c) = *(unsigned short *)(temp_v4 + 0x10);
          temp_v7 = FUN_0029c0c0(*(unsigned int *)(temp_v1 + 0x115c),temp_v4);
          *(unsigned int *)(temp_v1 + 0x1154) = temp_v7;
          *(unsigned int *)(temp_v1 + 0x1158) = (unsigned int)*(unsigned char *)(temp_v4 + 0x48);
          if (temp_v6 == 0) {
            FUN_0029bed8(*(unsigned short *)(temp_v4 + 0x46));
          }
          gameCounterAddSaturating(0x26,1);
          FUN_002e3378(*(unsigned short *)(temp_v4 + 0x46));
        }
        temp_v14 = 1;
        temp_v7 = 0x17;
      }
      partyPanelSetState(temp_v7,temp_v14);
      break;
    }
    *(unsigned int *)(temp_v1 + 0x20) = *(unsigned int *)(temp_v1 + 0x24);
    partyPanelSetState(*(unsigned int *)(temp_v1 + 0x24),1);
    *(unsigned char *)(temp_v1 + 0x43) = 1;
    goto LAB_001c8644;
  case 0x16:
    temp_v6 = temp_v1 + 0xa08;
    if (*(char *)(temp_v1 + 0x42) != '\0') {
      temp_v6 = temp_v1 + 0xa6c;
    }
    temp_v4 = FUN_0029dfa8();
    if (temp_v4 != 0) {
      temp_v6 = FUN_0029563c();
      if (temp_v6 != 0) {
        *(unsigned short *)(temp_v1 + 0x3c) = *(unsigned short *)(temp_v1 + 0x3e);
      }
    }
    else {
      temp_v4 = FUN_0029efa8(temp_v6);
      if (temp_v4 < 1) {
        temp_v6 = objectPartRunUnlessLocked(temp_v6);
        if (temp_v6 != 0) {
          temp_v4 = gameGetSlotTable();
          if (-1 < *(char *)(temp_v4 + temp_v6 + 0x9107)) {
            temp_v7 = gameGetUnitRecord();
            FUN_0029d8f4(temp_v7,0);
            statusPanelSetOpen(1);
            break;
          }
          FUN_0029defc(0);
          FUN_0029dfc0(0);
        }
        else {
          FUN_0029defc(0xffffffff,0);
          statusPanelSetOpen(1);
        }
      }
      else {
        if (*(char *)(temp_v1 + 0x42) != '\0') {
          temp_v24 = objectPartRunUnlessLocked();
          temp_v6 = FUN_0029efa8(temp_v6);
          temp_v24 = temp_v24 + temp_v6 * 4;
        }
        else {
          temp_v4 = FUN_0029efa8(temp_v6);
          temp_v8 = *(int *)(temp_v1 + 0x2c);
          temp_v24 = objectPartRunUnlessLocked(temp_v6);
          temp_v24 = temp_v24 + temp_v4 * 4 + temp_v8 * 0xc;
        }
        if (*(int *)(temp_v1 + (temp_v24 - 4) * 8 + 0x738) < 0) {
          FUN_0029defc(0);
          FUN_0029dfc0(0);
          break;
        }
        temp_v7 = gameGetUnitRecord();
        FUN_0029d8f4(temp_v7,0);
        statusPanelSetOpen(1);
      }
    }
  }
  if (*(char *)(temp_v1 + 0x43) == '\0') {
    *(int *)(temp_v1 + 0x18) = *(int *)(temp_v1 + 0x18) + 1;
    return 0;
  }
LAB_001c8644:
  temp_v6 = FUN_0029e02c();
  if ((temp_v6 != 0) || (temp_v6 = useCounterIsFinished(), temp_v6 == 0)) {
    *(int *)(temp_v1 + 0x18) = *(int *)(temp_v1 + 0x18) + 1;
    return 0;
  }
  *(unsigned char *)(temp_v1 + 0x43) = 0;
  temp_v6 = gameGetFlagByte12e8();
  if (temp_v6 < 0) {
    temp_v6 = 0;
    do {
      timerStart(temp_v1 + temp_v6 * 0x8c + 0x298,5,0);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 4);
    if (*(char *)(temp_v1 + 0x42) == '\0') {
      timerStart(temp_v5,5,0);
    }
    else {
      timerStart(temp_v5,6,0);
    }
  }
  else {
    temp_v6 = gameGetFlagByte12e8();
    if (0 < temp_v6) {
      temp_v6 = 0;
      do {
        timerStart(temp_v1 + temp_v6 * 0x8c + 0x298,4,0);
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
      if (*(char *)(temp_v1 + 0x42) != '\0') {
        timerStart(temp_v5,6,0);
      }
      else {
        timerStart(temp_v5,4,0);
      }
    }
  }
  FUN_0026c868();
  FUN_0026c214();
  partyPanelSetState(0,1);
  if (*(char *)(temp_v1 + 0x66c) == '\v') {
    scrScriptProcessStartEntry(*(unsigned int *)(temp_v1 + 0x14),1);
  }
  *(int *)(temp_v1 + 0x18) = *(int *)(temp_v1 + 0x18) + 1;
  return 0;
LAB_001c79e4:
  temp_v6 = temp_v6 + 1;
  if (temp_v6 >= 4) goto LAB_001c7944;
  goto LAB_001c7954;
}

} /* extern "C" */
