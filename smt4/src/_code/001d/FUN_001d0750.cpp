/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d0750` (_code @ 0x1d0754, 0xc54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "bible/bibleMain.h"

extern "C" {

int configOpen(void);
int FUN_00194ec8(void);
int bibleOpenMode0(...);
int bibleOpenMode1(...);
int campCecSetSubstate(...);
int campUiResetSlots(void);
int uniteSetMode(...);
int FUN_0028a368(...);
int FUN_0028a924(...);
int FUN_0029e774(void);
int FUN_002a035c(void);
int FUN_002cd37c(void);
int bibleOpenMode3(int);
int uniteReleaseModel(void);

int bgmRestart(int);
int bibleOpenMode2(int);
int FUN_00223cf0(void);
int FUN_00269dc8(void);
int scrEffectRunIfActive(void);
int partyPanelSetEnabled(...);
int campRebuildOwnedInventoryCategory(...);
int guestWinRequestClose(void);
int campTimersStart(void);
int FUN_0026d5a4(void);
int campUpdateCategoryHighlightColors(void);
int FUN_00298d0c(int);
int campRefreshEquipmentCategory(int);
int slotSetRequest(int, int, int);
int FUN_0029cc44(...);
int FUN_0029e788(void);
int FUN_0029e874(int);
int FUN_0029ee6c(int, int);
int timerStart(...);
int FUN_002cf780(void);
int FUN_002e24c8(void);
int FUN_003aacd0(void);
int FUN_003aca0c(void);
int spriteTable22Acquire(void);
int selectionSetUnitByRecordId(int);
int FUN_003ad0e0(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int g_camp; /* 0x43da90 */

/* Supplied declaration required: configOpen. */
/* Supplied declaration required: FUN_00194ec8. */
/* Supplied declaration required: bgmRestart. */
/* Supplied declaration required: bibleOpenMode0. */
/* Supplied declaration required: bibleOpenMode1. */
/* Supplied declaration required: bibleOpenMode2. */
/* Supplied declaration required: FUN_00223cf0. */
/* Supplied declaration required: campCecSetSubstate. */
/* Supplied declaration required: campUiResetSlots. */
/* Supplied declaration required: uniteSetMode. */
/* Supplied declaration required: FUN_00269dc8. */
/* Supplied declaration required: scrEffectRunIfActive. */
/* Supplied declaration required: partyPanelSetEnabled. */
/* Supplied declaration required: campRebuildOwnedInventoryCategory. */
/* Supplied declaration required: guestWinRequestClose. */
/* Supplied declaration required: campTimersStart. */
/* Supplied declaration required: FUN_0026d5a4. */
/* Supplied declaration required: FUN_0028a368. */
/* Supplied declaration required: FUN_0028a924. */
/* Supplied declaration required: campUpdateCategoryHighlightColors. */
/* Supplied declaration required: FUN_00298d0c. */
extern int dataTable15GetUnlockedEntryId(int, unsigned int);
/* Supplied declaration required: campRefreshEquipmentCategory. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: FUN_0029cc44. */
/* Supplied declaration required: FUN_0029e774. */
/* Supplied declaration required: FUN_0029e788. */
/* Supplied declaration required: FUN_0029e874. */
extern unsigned int objectPartRunUnlessLocked(int);
extern int FUN_0029ee54(int);
/* Supplied declaration required: FUN_0029ee6c. */
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: FUN_002a035c. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002cd37c. */
/* Supplied declaration required: FUN_002cf780. */
/* Supplied declaration required: bibleOpenMode3. */
/* Supplied declaration required: FUN_002e24c8. */
/* Supplied declaration required: uniteReleaseModel. */
/* Supplied declaration required: FUN_003aacd0. */
/* Supplied declaration required: FUN_003aca0c. */
/* Supplied declaration required: spriteTable22Acquire. */
/* Supplied declaration required: selectionSetUnitByRecordId. */
/* Supplied declaration required: FUN_003ad0e0. */


void FUN_001d0750(int *param_1)

{
/* irregular: 40 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  
  temp_v4 = 0;
  temp_v2 = *param_1;
  temp_v0 = objectPartRunUnlessLocked(temp_v2 + 0x34);
  temp_v1 = dataTable15GetUnlockedEntryId((int)*(char *)(temp_v2 + 0x98),temp_v0);
  switch(temp_v1) {
  case 7:
    *(unsigned char *)(temp_v2 + 0x25bd) = 1;
    slotSetRequest(0,10,0xff);
    bgmRestart(0x1e);
    return;
  case 9:
    campTimersStart();
    timerStart(temp_v2 + 0x6d4,1,0);
    FUN_0026d5a4();
    campUpdateCategoryHighlightColors();
    guestWinRequestClose();
    FUN_0029cc44(1);
    temp_v1 = FUN_0029ee54(temp_v2 + 0x1dc);
    if (0 < temp_v1) {
      FUN_0029e874(1);
      FUN_0029e788();
      FUN_00298d0c(1);
    }
    *(unsigned int *)(temp_v2 + 0x20) = 0xe;
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 4;
    return;
  case 10:
    temp_v1 = FUN_0029ee54(temp_v2 + 0x240);
    if (temp_v1 < 1) {
      return;
    }
    campTimersStart();
    timerStart(temp_v2 + 0x6d4,1,0);
    FUN_0026d5a4();
    spriteTable22Acquire();
    FUN_003ad0e0();
    temp_v1 = FUN_0029efc0(temp_v2 + 0x240);
    temp_v4 = FUN_0029efa8(temp_v2 + 0x240);
    selectionSetUnitByRecordId((int)*(short *)(temp_v2 + (temp_v4 + temp_v1) * 2 + 0x1db4));
    FUN_003aca0c();
    FUN_003aacd0();
    *(unsigned int *)(temp_v2 + 0x20) = 0x10;
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 4;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0xb:
  case 0xc:
  case 0xd:
    if (temp_v1 == 0xb) {
      temp_v4 = temp_v2 + 0xb0;
    }
    else if (temp_v1 == 0xc) {
      temp_v4 = temp_v2 + 0x114;
    }
    else if (temp_v1 == 0xd) {
      temp_v4 = temp_v2 + 0x178;
    }
    temp_v4 = FUN_0029ee54(temp_v4);
    if (temp_v4 < 1) {
      return;
    }
    campTimersStart();
    timerStart(temp_v2 + 0x6d4,1,0);
    FUN_0026d5a4();
    if (temp_v1 != 0xb) {
      if (temp_v1 != 0xc) {
        if (temp_v1 == 0xd) {
          *(unsigned int *)(temp_v2 + 0x20) = 0xd;
          campRebuildOwnedInventoryCategory();
        }
      }
      else {
        temp_v0 = 0xc;
        *(unsigned int *)(temp_v2 + 0x20) = 0xc;
        campRebuildOwnedInventoryCategory(temp_v0);
      }
    }
    else {
      *(unsigned int *)(temp_v2 + 0x20) = 10;
      temp_v0 = 0xb;
      campRebuildOwnedInventoryCategory(temp_v0);
    }
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 4;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0xe:
    campTimersStart();
    guestWinRequestClose();
    FUN_0029cc44(1);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 0x16;
    return;
  case 0x10:
    campTimersStart();
    guestWinRequestClose();
    FUN_0029cc44(1);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x17;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    if (temp_v1 == 0x11) {
      temp_v4 = temp_v2 + 0x2a4;
    }
    else if (temp_v1 == 0x12) {
      temp_v4 = temp_v2 + 0x308;
    }
    else if (temp_v1 == 0x13) {
      temp_v4 = temp_v2 + 0x36c;
    }
    else if (temp_v1 == 0x14) {
      temp_v4 = temp_v2 + 0x3d0;
    }
    else if (temp_v1 == 0x15) {
      temp_v4 = temp_v2 + 0x434;
    }
    else if (temp_v1 == 0x16) {
      temp_v4 = temp_v2 + 0x498;
    }
    else if (temp_v1 == 0x17) {
      temp_v4 = temp_v2 + 0x4fc;
    }
    temp_v1 = FUN_0029ee54(temp_v4);
    if (0 < temp_v1) {
      campTimersStart();
      timerStart(temp_v2 + 0x6d4,1,0);
      FUN_0026d5a4();
      guestWinRequestClose();
      FUN_0029cc44(1);
      FUN_0029e874(1);
      FUN_0029e788();
      *(unsigned int *)(temp_v2 + 0x20) = 0x1a;
      campRefreshEquipmentCategory(0x11);
      campRefreshEquipmentCategory(0x12);
      campRefreshEquipmentCategory(0x13);
      campRefreshEquipmentCategory(0x14);
      campRefreshEquipmentCategory(0x15);
      campRefreshEquipmentCategory(0x16);
      campRefreshEquipmentCategory(0x17);
      temp_v1 = g_camp;
      puVar5 = (unsigned int *)(g_camp + 0x18);
      *(unsigned int *)(g_camp + 0x1c) = 0;
      *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      *(unsigned int *)(temp_v1 + 0x18) = 4;
      return;
    }
    break;
  case 0x18:
    campTimersStart();
    guestWinRequestClose();
    FUN_0029cc44(1);
    partyPanelSetEnabled(0);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x12;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0x19:
    campTimersStart();
    FUN_0026d5a4();
    guestWinRequestClose();
    FUN_0029cc44(1);
    bibleOpenMode2(0);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x21;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0x1a:
    FUN_002e24c8();
    *(int *)(temp_v2 + 0xc) = temp_v1;
    FUN_0026d5a4();
    FUN_0029ee6c(0,0x323232ff);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x22;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    guestWinRequestClose();
    FUN_0029cc44(1);
    scrEffectRunIfActive();
    return;
  case 0x1b:
    FUN_0026d5a4();
    guestWinRequestClose();
    FUN_0029cc44(1);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 0x23;
    FUN_00269dc8();
    FUN_002cf780();
    *(unsigned char *)(temp_v2 + 0x248c) = 1;
    return;
  case 0x1c:
    FUN_0026d5a4();
    guestWinRequestClose();
    FUN_0029cc44(1);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x24;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    FUN_00269dc8();
    FUN_00223cf0();
    *(unsigned char *)(temp_v2 + 0x248d) = 1;
    return;
  case 0x24:
    campTimersStart();
    bibleOpenMode3(0);
    FUN_002a035c();
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x21;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    campUiResetSlots();
    return;
  case 0x25:
    campTimersStart();
    FUN_0026d5a4();
    guestWinRequestClose();
    FUN_0029cc44(1);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x2e;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0x26:
    campTimersStart();
    FUN_0026d5a4();
    guestWinRequestClose();
    FUN_0029cc44(1);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x2f;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0x27:
    configOpen();
    campTimersStart();
    timerStart(temp_v2 + 0x6d4,1,0);
    FUN_0026d5a4();
    guestWinRequestClose();
    FUN_0029cc44(1);
    *(unsigned int *)(temp_v2 + 0x20) = 0x2b;
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 4;
    return;
  case 0x29:
    FUN_00194ec8();
    campTimersStart();
    timerStart(temp_v2 + 0x6d4,0);
    FUN_0026d5a4();
    *(unsigned int *)(temp_v2 + 0x20) = 0x2c;
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 4;
    return;
  case 0x2a:
    temp_v1 = FUN_00269d4c();
    if (temp_v1 != 0) {
      campTimersStart();
      uniteSetMode(0);
      temp_v1 = g_camp;
      puVar5 = (unsigned int *)(g_camp + 0x18);
      *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
      *puVar5 = 0x1d;
      *(unsigned int *)(temp_v1 + 0x1c) = 0;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      campUiResetSlots();
      return;
    }
    break;
  case 0x2b:
    campTimersStart();
    uniteSetMode(1);
    temp_v1 = g_camp;
    puVar5 = (unsigned int *)(g_camp + 0x18);
    *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
    *puVar5 = 0x1d;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    campUiResetSlots();
    return;
  case 0x2c:
    temp_v1 = FUN_00269d4c();
    if (temp_v1 != 0) {
      campTimersStart();
      bibleOpenMode0(0);
      temp_v1 = g_camp;
      puVar5 = (unsigned int *)(g_camp + 0x18);
      *(unsigned int *)(g_camp + 0x1c) = 0;
      *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      *(unsigned int *)(temp_v1 + 0x18) = 0x21;
      FUN_002a035c();
      campUiResetSlots();
      return;
    }
    break;
  case 0x2d:
    temp_v1 = FUN_00269d4c();
    if (temp_v1 != 0) {
      temp_v1 = gameGetSlotTable();
      temp_v3 = 0;
      if (*(char *)(temp_v1 + 0x910b) != '\0') {
        do {
          temp_v2 = (int)*(char *)(temp_v1 + temp_v3 + 0x90f0);
          if (-1 < temp_v2) {
            temp_v2 = temp_v1 + temp_v2 * 0x604 + 0x90;
            FUN_002cd37c();
            if (temp_v2 == 0) {
              campTimersStart();
              bibleOpenMode1(0);
              temp_v1 = g_camp;
              puVar5 = (unsigned int *)(g_camp + 0x18);
              *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
              *puVar5 = 0x21;
              *(unsigned int *)(temp_v1 + 0x1c) = 0;
              *(unsigned int *)(temp_v1 + 0x14) = 0;
              FUN_002a035c();
              campUiResetSlots();
              return;
            }
          }
          temp_v3 = temp_v3 + 1;
          if (*(unsigned char *)(temp_v1 + 0x910b) <= temp_v3) {
            return;
          }
        } while( 1 );
      }
    }
    break;
  case 0x2f:
    temp_v1 = FUN_00269d4c();
    if (temp_v1 != 0) {
      campTimersStart();
      uniteSetMode(3);
      temp_v1 = g_camp;
      puVar5 = (unsigned int *)(g_camp + 0x18);
      *(unsigned int *)(g_camp + 0x24) = *(unsigned int *)(g_camp + 0x18);
      *puVar5 = 0x1d;
      *(unsigned int *)(temp_v1 + 0x1c) = 0;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      campUiResetSlots();
      *(unsigned char *)(temp_v2 + 0x248e) = 1;
      return;
    }
    break;
  case 0x30:
    temp_v1 = FUN_00269d4c();
    if (temp_v1 != 0) {
      campTimersStart();
      uniteSetMode(4);
      campUiResetSlots();
      uniteReleaseModel();
      guestWinRequestClose();
      FUN_0029cc44(1);
      partyPanelSetEnabled(1);
      FUN_0028a924(0xd,0,0xffffffff);
      FUN_0028a368(1);
      FUN_0029e774();
      temp_v1 = g_camp;
      puVar5 = (unsigned int *)(g_camp + 0x18);
      *(unsigned int *)(g_camp + 0x1c) = 0;
      *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      *(unsigned int *)(temp_v1 + 0x18) = 0x13;
      return;
    }
    break;
  case 0x31:
    *(unsigned int *)(temp_v2 + 0x20) = 0x34;
    return;
  case 0x32:
    *(unsigned int *)(temp_v2 + 0x18) = 0x31;
    campCecSetSubstate(2);
    FUN_0026d5a4();
    FUN_0029cc44(1);
    scrEffectRunIfActive();
    return;
  case 0x33:
    *(unsigned int *)(temp_v2 + 0x18) = 0x32;
    campCecSetSubstate(1);
    FUN_0026d5a4();
    FUN_0029cc44(1);
    scrEffectRunIfActive();
    return;
  case 0x34:
    *(unsigned int *)(temp_v2 + 0x18) = 0x33;
    campCecSetSubstate(3);
    FUN_0026d5a4();
    FUN_0029cc44(1);
    scrEffectRunIfActive();
    return;
  }
  return;
}

} /* extern "C" */
