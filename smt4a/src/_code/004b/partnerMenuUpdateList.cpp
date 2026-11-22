/* NON_MATCHING: retail's calls, branches, tail calls, constants and padding (shape 15, raw 75: one instruction of
 * length). Two things differ. Retail loads the zero that clears the list's two moved flags into r5 before the second
 * flag getter's call (the slot of this build's padding nop) and stores it from there; this build materialises it in
 * r0 after the test. And in both copies of the status request retail reloads the selected index through r0, this
 * build through r1. The status request is a helper here because it has two sites and gives retail's registers for
 * the sound constants; partnerMenuUpdateStatusPage's single copy of the same statements only matches written in place, so the
 * original probably had them in place here too, with another cause for the registers (in place: raw 105). */
#include "ui/PartnerSelectMenu.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/TableGroup.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "code/Code0019.h"
#include "code/Code0023.h"
#include "code/Code002a.h"
#include "code/Code002a_VariantA.h"
#include "code/Code0033.h"
#include "code/Code0035_Smt4a.h"

/* Sounds of the partner menu. */
enum {
    PARTNER_SE_CURSOR = 0xF0,
    PARTNER_SE_CHANGE = 0xF2,
    PARTNER_SE_CURRENT = 0x11B,         /* the cursor reached the partner in use */
    PARTNER_SE_DECIDE = 0x100020E,
    PARTNER_SE_CANCEL = 0x100020F,
    PARTNER_SE_ITEM_7CD = 0x100021C     /* item 0x7CD has its own use sound */
};

/* The touch selection mode that confirms the touched cell (ifTouch selectionMode). */
enum { TOUCH_MODE_DECIDE = 6 };

extern "C" {

u8 gridNavigationHandleConfirm(GridNavigation *list, s32 mode);
s8 uiStateGetFirstFlag(const void *state);     /* GridNavigation::changed */
s8 uiStateGetSecondFlag(const void *state);    /* GridNavigation::unk61 */
void scrollListSetSelectionTracked(GridNavigation *list, s32 row); // declcheck: local (the shared prototype takes a ScrollSelection; the list is a GridNavigation)
void scrollOwnerSelectIndex(GridNavigation *list, s32 column);
s32 gameGetMode(void);
s32 padQueryLogicalKey(s32 key, s32 mode);
void sysPlaySe(u32 id);
void statusPanelSetOpen(s32 open);
u32 itemApplyPercentageHpHeal(PartySlotA *target, u32 itemId, s32 checkOnly);
s32 tableGroupFindEntryIndex(TableGroupHeader *table, const char *name);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entryIndex);
s8 FUN_0022e714(void);
void screenShowMessage(s32 id);
void FUN_0032d0c8(RelativeDirectory *directory, u32 index, u16 devilId, u32 extra);
void buttonHelpSetText(const s8 *text, u32 color);
int FUN_0035db94(void);

/* Shows the status of the partner under the cursor, when that party slot is in use. */
static __inline void partnerMenuShowSelectedStatus(PartnerSelectMenu *menu)
{
    if (partySlotIsOccupied(partyGetSlot((u16)menu->slots[menu->selected])) != 0) {
        statusRequestUnitDetails((const UnitCategoryRecord *)partyGetSlot((u16)menu->slots[menu->selected]), 0, NULL);
        statusPanelSetOpen(1);
    }
}

/* Runs the partner grid's input: a touched cell or the pad moves the cursor and shows that partner's
 * status; decide uses the item on the partner or starts the partner change script, cancel closes the
 * menu. Afterwards shows the partner's help line, or starts the slide to the status page. */
void partnerMenuUpdateList(PartnerSelectMenu *menu)
{
    gridNavigationHandleConfirm(&menu->list, 1);

    s32 touchMode = 0;
    s32 touched = -1;
    for (s32 i = 0; i <= PARTNER_MENU_SLOTS - 1; ++i) {
        u8 mode = recordGetModeForId(menu->touchRegions[i]);
        if (mode == 1 || mode == 2 || mode == TOUCH_MODE_DECIDE) {
            touched = i;
            break;
        }
    }
    if (touched > -1 && touched < menu->count) {
        scrollListSetSelectionTracked(&menu->list, touched / PARTNER_MENU_COLUMNS);
        scrollOwnerSelectIndex(&menu->list, touched % PARTNER_MENU_COLUMNS);
        touchMode = recordGetModeForId(menu->touchRegions[touched]);
    }

    s32 index = listCursorGetRowOfChildIfUnblocked(&menu->list) +
                listCursorGetRowIfUnblocked(&menu->list) * PARTNER_MENU_COLUMNS;
    menu->cursor = index;
    menu->selected = index;

    if (gameGetMode() == 0) {
        if (uiStateGetSecondFlag(&menu->list) != 0 || uiStateGetFirstFlag(&menu->list) != 0) {
            /* The cursor moved: show the partner now under it. */
            menu->list.unk61 = 0;
            menu->list.changed = 0;
            partnerMenuShowSelectedStatus(menu);
            s32 selectedSlot = menu->slots[menu->selected];
            s32 currentSlot = menu->slots[menu->current];
            sysPlaySe(selectedSlot == currentSlot ? PARTNER_SE_CURRENT : PARTNER_SE_CURSOR);
        } else if (padQueryLogicalKey(0, 1) != 0 || touchMode == TOUCH_MODE_DECIDE) {
            if (menu->mode == PARTNER_MENU_MODE_ITEM) {
                PartySlotA *unit = partyGetSlot((u16)menu->slots[menu->selected]);
                if (unit != NULL && itemApplyPercentageHpHeal(unit, menu->itemId, 0) == 0) {
                    eventQueueAddUniqueIfValid(menu->itemId == 0x7CD ? PARTNER_SE_ITEM_7CD : PARTNER_SE_DECIDE);
                    statusUseHealItemOnSelectedUnit(menu);
                    return;
                }
                eventQueueAddUniqueIfValid(PARTNER_SE_CANCEL);
                return;
            }
            if (menu->count <= 0) {
                return;
            }
            if (menu->slots[menu->selected] == menu->slots[menu->current]) {
                return;
            }
            eventQueueAddUniqueIfValid(PARTNER_SE_DECIDE);
            sysPlaySe(PARTNER_SE_CHANGE);
            FUN_0035d03c(1);
            gameGlobalsSetMenuOpenFlag(1);
            menu->state = PARTNER_MENU_STATE_SCRIPT;
            s32 entry = tableGroupFindEntryIndex(menu->scriptTable, "SetMainPartner");
            if (entry < 0) {
                return;
            }
            scrScriptProcessStartEntry(menu->script, entry);
            return;
        } else if (padQueryLogicalKey(1, 1) != 0) {
            eventQueueAddUniqueIfValid(PARTNER_SE_CANCEL);
            menu->state = PARTNER_MENU_STATE_CLOSE;
            gameGlobalsSetMenuOpenFlag(1);
        } else if (padQueryLogicalKey(10, 1) == 0 && FUN_0022e714() == 0) {
            partnerMenuShowSelectedStatus(menu);
        }
    }

    if (FUN_0023b3b8() == 1) {
        /* Slide to the status page. */
        menu->nextState = PARTNER_MENU_STATE_STATUS;
        buttonHelpSetText(NULL, 0xF4F4F4FF);
        menu->slideDirection = 3;
        if (FUN_0035db94() < 0) {
            partnerMenuStartPanelSlide(menu, 3, -1, 0);
        } else if (FUN_0035db94() > 0) {
            partnerMenuStartPanelSlide(menu, 2, -1, 0);
        }
        menu->state = PARTNER_MENU_STATE_SLIDE;
    } else if (menu->mode == PARTNER_MENU_MODE_ITEM) {
        screenShowMessage(menu->itemId);
    } else {
        PartySlotA *unit = partyGetSlot((u16)menu->slots[menu->selected]);
        if (unit != NULL && (unit->flags & 1) != 0) {
            FUN_0032d0c8(menu->helpFile, unit->id, dataTable10FindValue(unit->id), (u32)unit);
        }
    }
}

} /* extern "C" */
