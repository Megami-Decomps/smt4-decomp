/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bea0c` (_code @ 0x4bea0c, 0x458 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"

extern "C" {

int padQueryLogicalKey(...);
int eventQueueAddUniqueIfValid(...);
int sysPlaySe(...);
int buttonHelpSetText(...);
int gridNavigationHandleConfirm(int, int);
int scrScriptProcessStartEntry(unsigned int);
int scrollOwnerSelectIndex(int, int);
int scrollListSetSelectionTracked(int, int);
int statusPanelSetOpen(...);
int FUN_0032d0c8(...);
int gameGlobalsSetMenuOpenFlag(int);
int screenShowMessage(...);
int FUN_0035d03c(int);
int partyGetSlot(...);
int statusUseHealItemOnSelectedUnit(int);
int FUN_004be990(...);
int SBORROW4(int, int);
int SCARRY4(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char LAB_004bee70; /* 0x4bee70 */

/* Unsupported intrinsic, declaration required: SCARRY4 (INT_SCARRY). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: padQueryLogicalKey. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: sysPlaySe. */
extern int partySlotIsOccupied(void);
/* Supplied declaration required: buttonHelpSetText. */
extern unsigned int dataTable10FindValue(unsigned short);
/* Supplied declaration required: gridNavigationHandleConfirm. */
extern int FUN_0022e714(void);
extern int FUN_0023b3b8(void);
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int recordGetModeForId(int);
extern int listCursorGetRowOfChildIfUnblocked(int);
extern int listCursorGetRowIfUnblocked(int);
/* Supplied declaration required: scrollOwnerSelectIndex. */
/* Supplied declaration required: scrollListSetSelectionTracked. */
/* Supplied declaration required: statusPanelSetOpen. */
extern int gameGetMode(void);
/* Supplied declaration required: FUN_0032d0c8. */
/* Supplied declaration required: gameGlobalsSetMenuOpenFlag. */
/* Supplied declaration required: screenShowMessage. */
extern int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_0035d03c. */
extern int FUN_0035db94(void);
/* Supplied declaration required: partyGetSlot. */
extern int itemApplyPercentageHpHeal(int, unsigned int, unsigned int);
/* Supplied declaration required: statusUseHealItemOnSelectedUnit. */
/* Supplied declaration required: FUN_004be990. */


void FUN_004bea0c(int param_1)

{
/* irregular: 19 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  
  gridNavigationHandleConfirm(param_1 + 0x260,1);
  temp_v4 = 0;
  temp_v3 = 0;
  do {
    temp_v0 = recordGetModeForId((int)*(short *)(param_1 + temp_v3 * 2 + 0x2f8));
    if ((temp_v0 == 1 || temp_v0 == 2) || temp_v0 == 6) {
      temp_v6 = SCARRY4(temp_v3,1);
      temp_v0 = temp_v3 + 1;
      temp_v5 = temp_v3 == -1;
      if (-1 < temp_v3) {
        temp_v1 = *(int *)(param_1 + 0x324);
        temp_v6 = SBORROW4(temp_v1,temp_v3);
        temp_v0 = temp_v1 - temp_v3;
        temp_v5 = temp_v1 == temp_v3;
      }
      if (!temp_v5 && temp_v0 < 0 == temp_v6) {
        scrollListSetSelectionTracked(param_1 + 0x260,(int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2);
        scrollOwnerSelectIndex(param_1 + 0x260,temp_v3 % 4);
        temp_v4 = recordGetModeForId((int)*(short *)(param_1 + temp_v3 * 2 + 0x2f8));
      }
      break;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0xc);
  temp_v0 = listCursorGetRowOfChildIfUnblocked(param_1 + 0x260);
  temp_v3 = listCursorGetRowIfUnblocked(param_1 + 0x260);
  temp_v0 = temp_v0 + temp_v3 * 4;
  *(int *)(param_1 + 0x2f4) = temp_v0;
  *(int *)(param_1 + 0x32c) = temp_v0;
  temp_v3 = gameGetMode();
  if (temp_v3 == 0) {
    if ((*(char *)(param_1 + 0x2c1) != '\0') || (*(char *)(param_1 + 0x2c0) != '\0')) {
      *(unsigned char *)(param_1 + 0x2c1) = 0;
      *(unsigned char *)(param_1 + 0x2c0) = 0;
      partyGetSlot(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x32c) * 4 + 0x2c4) & 0xffff);
      temp_v4 = partySlotIsOccupied();
      if (temp_v4 != 0) {
        temp_v2 = partyGetSlot(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x32c) * 4 + 0x2c4) & 0xffff);
        statusRequestUnitDetails((const UnitCategoryRecord*)temp_v2,0,0);
        statusPanelSetOpen(1);
      }
      if (*(int *)(param_1 + *(int *)(param_1 + 0x32c) * 4 + 0x2c4) ==
          *(int *)(param_1 + *(int *)(param_1 + 0x328) * 4 + 0x2c4)) {
        temp_v2 = 0x11b;
      }
      else {
        temp_v2 = 0xf0;
      }
      sysPlaySe(temp_v2);
    }
    else {
      temp_v3 = 0;
      padQueryLogicalKey(0,1);
      if ((temp_v3 != 0) || (temp_v4 == 6)) {
        temp_v2 = 0x100020e;
        if (*(char *)(param_1 + 4) == '\x02') {
          temp_v4 = partyGetSlot(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x32c) * 4 + 0x2c4) & 0xffff);
          if ((temp_v4 != 0) &&
             (temp_v4 = itemApplyPercentageHpHeal(temp_v4,*(unsigned int *)(param_1 + 0x334),0), temp_v4 == 0)) {
            if (*(int *)(param_1 + 0x334) == 0x7cd) {
              temp_v2 = 0x100021c;
            }
            eventQueueAddUniqueIfValid(temp_v2);
            statusUseHealItemOnSelectedUnit(param_1);
            return;
          }
          eventQueueAddUniqueIfValid(0x100020f);
          return;
        }
        if (*(int *)(param_1 + 0x324) < 1) {
          return;
        }
        if (*(int *)(param_1 + *(int *)(param_1 + 0x32c) * 4 + 0x2c4) ==
            *(int *)(param_1 + *(int *)(param_1 + 0x328) * 4 + 0x2c4)) {
          return;
        }
        eventQueueAddUniqueIfValid(0x100020e);
        sysPlaySe(0xf2);
        FUN_0035d03c(1);
        gameGlobalsSetMenuOpenFlag(1);
        *(unsigned int *)(param_1 + 8) = 5;
        temp_v4 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x31c),&LAB_004bee70);
        if (temp_v4 < 0) {
          return;
        }
        scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 800));
        return;
      }
      temp_v4 = 1;
      padQueryLogicalKey();
      if (temp_v4 != 0) {
        eventQueueAddUniqueIfValid(0x100020f);
        *(unsigned int *)(param_1 + 8) = 0xd;
        gameGlobalsSetMenuOpenFlag(1);
      }
      else {
        temp_v4 = 10;
        padQueryLogicalKey(10,1);
        if ((temp_v4 == 0) && (temp_v4 = FUN_0022e714(), temp_v4 == 0)) {
          partyGetSlot(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x32c) * 4 + 0x2c4) & 0xffff);
          temp_v4 = partySlotIsOccupied();
          if (temp_v4 != 0) {
            temp_v2 = partyGetSlot(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x32c) * 4 + 0x2c4) & 0xffff
                                );
            statusRequestUnitDetails((const UnitCategoryRecord*)temp_v2,0,0);
            statusPanelSetOpen(1);
          }
        }
      }
    }
  }
  temp_v4 = FUN_0023b3b8();
  if (temp_v4 != 1) {
    if (*(char *)(param_1 + 4) == '\x02') {
      screenShowMessage(*(unsigned int *)(param_1 + 0x334));
      return;
    }
    temp_v4 = partyGetSlot(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x32c) * 4 + 0x2c4) & 0xffff);
    if ((temp_v4 != 0) && ((*(unsigned int *)(temp_v4 + 0x130) & 1) != 0)) {
      temp_v2 = dataTable10FindValue(*(unsigned short *)(temp_v4 + 300));
      FUN_0032d0c8(*(unsigned int *)(param_1 + 0x314),*(unsigned short *)(temp_v4 + 300),temp_v2,temp_v4);
      return;
    }
  }
  else {
    *(unsigned int *)(param_1 + 0xc) = 4;
    buttonHelpSetText(0,0xf4f4f4ff);
    *(unsigned int *)(param_1 + 0x344) = 3;
    temp_v4 = FUN_0035db94();
    if (temp_v4 < 0) {
      FUN_004be990(param_1,3,0xffffffff,0);
    }
    else {
      temp_v4 = FUN_0035db94();
      if (0 < temp_v4) {
        FUN_004be990(param_1,2,0xffffffff,0);
      }
    }
    *(unsigned int *)(param_1 + 8) = 2;
  }
  return;
}

} /* extern "C" */
