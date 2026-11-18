/* NON_MATCHING: runs the camp menu item under the cursor (dataTable15GetUnlockedEntryId maps the group and row to an
 * item id): opens the item's screen, list, script or unite mode. IV's twin of Apocalypse's FUN_002a4cfc (which
 * matches); the cases are in retail's order. Same calls, stores and jump table as retail. What differs is how armcc
 * emits and tail-merges the inlined state change (campChangeState): retail stores state/phase with one stm from a
 * callee-saved base at items 0x1A and 0x1C and phase/substep/state from r0 at 0x29 and 0x2C (here the other way
 * round), item 10 shares item 0xB's `substep = 0; return`, items 0x2B and 0x24 share item 0x2A's tail call of
 * campUiResetSlots and item 0x2C shares item 0x2D's FUN_002a035c call (here each has its own). */
#include "camp/CampState.h"
#include "camp/PartyPanel/PartyPanel.h"
#include "bible/bibleMain.h"
#include "gamedata/SaveSlotTableIV.h"
#include "ui/UiSpriteApi.h"
#include "sys/RuntimeObjects.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "code/Code0029_VariantA.h"
#include "code/Code0029_VariantB.h"

struct Object0029e908;

extern "C" {

s32 objectPartRunUnlessLocked(Object0029e908 *object);
u8 dataTable15GetUnlockedEntryId(u32 group, s32 index);
void bgmRestart(u32 value);
void campTimersStart(void);
void campUpdateCategoryHighlightColors(void);
void guestWinRequestClose(void);
void FUN_0029e788(void);
void FUN_00298d0c(u32 value);
void spriteTable22Acquire(void);
void FUN_003ad0e0(void);
u32 resourceRunOperationIfUnblocked(const GridNavigation *grid);
void selectionSetUnitByRecordId(u32 requestedId);
void FUN_003aca0c(void);
void FUN_003aacd0(void);
void campRebuildOwnedInventoryCategory(s32 category);
void campRefreshEquipmentCategory(u32 category);
void partyPanelSetEnabled(s32 enabled);
/* The bible openers ignore their argument; the menu passes 0. */
void bibleOpenMode0(s32 unused);
void bibleOpenMode1(s32 unused);
void bibleOpenMode2(s32 unused);
void bibleOpenMode3(s32 unused);
u32 FUN_002e24c8(void);
void buttonHelpSetText(const s8 *text, u32 style);
u32 scrEffectRunIfActive(void);
void uiQuestCreate(void);
void FUN_002cf780(void);
void FUN_00223cf0(void);
void uniteSetMode(u8 mode);
void FUN_002a035c(void);
void campUiResetSlots(void);
void configOpen(void);
void FUN_00194ec8(void);
u32 FUN_002cd37c(void *saved);
void uniteReleaseModel(void);
void FUN_0028a924(u32 first, u32 second, u32 third);
void FUN_0028a368(int reset);
void FUN_0029e774(void);
void campCecSetSubstate(u32 value);

/* Enters camp state `state` (IV has no out-of-line campChangeState). */
static __inline void campChangeState(s32 state)
{
    CampState *camp = g_camp;

    camp->previousState = camp->state;
    camp->state = state;
    camp->phase = 0;
    camp->substep = 0;
}

void campMenuRunSelectedItem(void)
{
    CampState *camp = g_camp;
    GridNavigation *grid = NULL;
    s32 item = dataTable15GetUnlockedEntryId(camp->menuGroup,
                                             objectPartRunUnlessLocked(reinterpret_cast<Object0029e908 *>(&camp->menuGrid)));

    switch (item) {
    case 0:
        return;
    case 0x31:
        camp->returnState = 0x34;
        return;
    case 7:
        camp->slotRequestPending = 1;
        slotSetRequest(0, 10, 0xff);
        bgmRestart(0x1e);
        return;
    case 9:
        campTimersStart();
        timerStart(&camp->sprites[1], 1, 0);
        FUN_0026d5a4();
        campUpdateCategoryHighlightColors();
        guestWinRequestClose();
        messageDismissNumericBanner(1);
        if ((s32)FUN_0029ee54(&camp->grids[3]) > 0) {
            gameSetIconDisplayEnabled(1);
            FUN_0029e788();
            FUN_00298d0c(1);
        }
        camp->returnState = 0xe;
        campChangeState(4);
        return;
    case 10:
        if ((s32)FUN_0029ee54(&camp->grids[4]) > 0) {
            campTimersStart();
            timerStart(&camp->sprites[1], 1, 0);
            FUN_0026d5a4();
            spriteTable22Acquire();
            FUN_003ad0e0();
            selectionSetUnitByRecordId((s16)camp->gridIds4[resourceRunOperationIfUnblocked(&camp->grids[4]) +
                                                           listCursorGetRowIfUnblocked(&camp->grids[4])]);
            FUN_003aca0c();
            FUN_003aacd0();
            camp->returnState = 0x10;
            campChangeState(4);
        }
        return;
    case 0xb:
    case 0xc:
    case 0xd:
        if (item == 0xb) {
            grid = &camp->grids[0];
        } else if (item == 0xc) {
            grid = &camp->grids[1];
        } else if (item == 0xd) {
            grid = &camp->grids[2];
        }
        if ((s32)FUN_0029ee54(grid) > 0) {
            campTimersStart();
            timerStart(&camp->sprites[1], 1, 0);
            FUN_0026d5a4();
            if (item == 0xb) {
                camp->returnState = 10;
                campRebuildOwnedInventoryCategory(0xb);
            }
            if (item == 0xc) {
                camp->returnState = 0xc;
                campRebuildOwnedInventoryCategory(0xc);
            }
            if (item == 0xd) {
                camp->returnState = 0xd;
                campRebuildOwnedInventoryCategory(0xd);
            }
            campChangeState(4);
        }
        return;
    case 0xe:
        campTimersStart();
        guestWinRequestClose();
        messageDismissNumericBanner(1);
        campChangeState(0x16);
        return;
    case 0x10:
        campTimersStart();
        guestWinRequestClose();
        messageDismissNumericBanner(1);
        campChangeState(0x17);
        return;
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
        if (item == 0x11) {
            grid = &camp->grids[5];
        } else if (item == 0x12) {
            grid = &camp->grids[6];
        } else if (item == 0x13) {
            grid = &camp->grids[7];
        } else if (item == 0x14) {
            grid = &camp->grids[8];
        } else if (item == 0x15) {
            grid = &camp->grids[9];
        } else if (item == 0x16) {
            grid = &camp->grids[10];
        } else if (item == 0x17) {
            grid = &camp->grids[11];
        }
        if ((s32)FUN_0029ee54(grid) > 0) {
            campTimersStart();
            timerStart(&camp->sprites[1], 1, 0);
            FUN_0026d5a4();
            guestWinRequestClose();
            messageDismissNumericBanner(1);
            gameSetIconDisplayEnabled(1);
            FUN_0029e788();
            camp->returnState = 0x1a;
            campRefreshEquipmentCategory(0x11);
            campRefreshEquipmentCategory(0x12);
            campRefreshEquipmentCategory(0x13);
            campRefreshEquipmentCategory(0x14);
            campRefreshEquipmentCategory(0x15);
            campRefreshEquipmentCategory(0x16);
            campRefreshEquipmentCategory(0x17);
            campChangeState(4);
        }
        return;
    case 0x18:
        campTimersStart();
        guestWinRequestClose();
        messageDismissNumericBanner(1);
        partyPanelSetEnabled(0);
        campChangeState(0x12);
        return;
    case 0x19:
        campTimersStart();
        FUN_0026d5a4();
        guestWinRequestClose();
        messageDismissNumericBanner(1);
        bibleOpenMode2(0);
        campChangeState(0x21);
        return;
    case 0x1a:
        camp->unk000C = FUN_002e24c8();
        FUN_0026d5a4();
        buttonHelpSetText(NULL, 0x323232ff);
        campChangeState(0x22);
        guestWinRequestClose();
        messageDismissNumericBanner(1);
        scrEffectRunIfActive();
        return;
    case 0x1b:
        FUN_0026d5a4();
        guestWinRequestClose();
        messageDismissNumericBanner(1);
        campChangeState(0x23);
        uiQuestCreate();
        FUN_002cf780();
        camp->questMenuOpened = 1;
        return;
    case 0x1c:
        FUN_0026d5a4();
        guestWinRequestClose();
        messageDismissNumericBanner(1);
        campChangeState(0x24);
        uiQuestCreate();
        FUN_00223cf0();
        camp->questListOpened = 1;
        return;
    case 0x2b:
        campTimersStart();
        uniteSetMode(1);
        campChangeState(0x1d);
        campUiResetSlots();
        return;
    case 0x24:
        campTimersStart();
        bibleOpenMode3(0);
        FUN_002a035c();
        campChangeState(0x21);
        campUiResetSlots();
        return;
    case 0x25:
        campTimersStart();
        FUN_0026d5a4();
        guestWinRequestClose();
        messageDismissNumericBanner(1);
        campChangeState(0x2e);
        return;
    case 0x26:
        campTimersStart();
        FUN_0026d5a4();
        guestWinRequestClose();
        messageDismissNumericBanner(1);
        campChangeState(0x2f);
        return;
    case 0x27:
        configOpen();
        campTimersStart();
        timerStart(&camp->sprites[1], 1, 0);
        FUN_0026d5a4();
        guestWinRequestClose();
        messageDismissNumericBanner(1);
        camp->returnState = 0x2b;
        campChangeState(4);
        return;
    case 0x29:
        FUN_00194ec8();
        campTimersStart();
        timerStart(&camp->sprites[1], 0, 0);
        FUN_0026d5a4();
        camp->returnState = 0x2c;
        campChangeState(4);
        return;
    case 0x2a:
        if (FUN_00269d4c()) {
            campTimersStart();
            uniteSetMode(0);
            campChangeState(0x1d);
            campUiResetSlots();
        }
        return;
    case 0x2c:
        if (FUN_00269d4c()) {
            campTimersStart();
            bibleOpenMode0(0);
            campChangeState(0x21);
            FUN_002a035c();
            campUiResetSlots();
        }
        return;
    case 0x2d:
        /* opens the bible when a stocked unit no longer matches its saved entry */
        if (FUN_00269d4c()) {
            SaveSlotTableIV *table = gameGetSlotTable();
            for (u16 i = 0; i < table->stockCount; i++) {
                s32 unit = table->stock[i];
                if (unit >= 0 && FUN_002cd37c(&table->units[unit]) == 0) {
                    campTimersStart();
                    bibleOpenMode1(0);
                    campChangeState(0x21);
                    FUN_002a035c();
                    campUiResetSlots();
                    return;
                }
            }
        }
        return;
    case 0x2f:
        if (FUN_00269d4c()) {
            campTimersStart();
            uniteSetMode(3);
            campChangeState(0x1d);
            campUiResetSlots();
            camp->uniteMode3Opened = 1;
        }
        return;
    case 0x30:
        if (FUN_00269d4c()) {
            campTimersStart();
            uniteSetMode(4);
            campUiResetSlots();
            uniteReleaseModel();
            guestWinRequestClose();
            messageDismissNumericBanner(1);
            partyPanelSetEnabled(1);
            FUN_0028a924(0xd, 0, -1);
            FUN_0028a368(1);
            FUN_0029e774();
            campChangeState(0x13);
        }
        return;
    case 0x32:
        camp->state = 0x31;
        campCecSetSubstate(2);
        FUN_0026d5a4();
        messageDismissNumericBanner(1);
        scrEffectRunIfActive();
        return;
    case 0x33:
        camp->state = 0x32;
        campCecSetSubstate(1);
        FUN_0026d5a4();
        messageDismissNumericBanner(1);
        scrEffectRunIfActive();
        return;
    case 0x34:
        camp->state = 0x33;
        campCecSetSubstate(3);
        FUN_0026d5a4();
        messageDismissNumericBanner(1);
        scrEffectRunIfActive();
        return;
    }
}

} /* extern "C" */
