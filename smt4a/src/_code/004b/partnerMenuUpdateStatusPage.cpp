#include "ui/ButtonHelp.h"
#include "ui/PartnerSelectMenu.h"

extern "C" {

extern s32 statusDownGetMode(void);
extern s32 FUN_0022e714(void);
extern s32 FUN_0023b3b8(void);
extern s32 FUN_0035db94(void);
extern void statusPanelSetOpen(s32 arg);
extern void FUN_0023b45c(s32 arg);
extern void flaggedEntrySetValueA(void *entry, s32 value);
extern void flaggedEntrySetValueB(void *entry, s32 value);
extern void sysPlaySe(u32 se);

/* Handles the pick menu's input: moves the cursor, confirms or cancels. */
void partnerMenuUpdateStatusPage(PartnerSelectMenu *menu)
{
    s32 step = statusDownGetMode();

    if (step != 0) {
        s32 index = menu->cursor + step;
        s32 row;
        s32 column;

        if (index >= menu->count) {
            index = 0;
        } else if (index < 0) {
            index = menu->count - 1;
        }
        column = index % 4;
        row = index / 4;
        flaggedEntrySetValueB(&menu->list, column);
        flaggedEntrySetValueA(&menu->list, row);
        menu->cursor = index;
        menu->selected = index;
        FUN_0023b45c(0);
    } else if (FUN_0022e714() == 0) {
        if (partySlotIsOccupied(partyGetSlot((u16)menu->slots[menu->selected])) != 0) {
            statusRequestUnitDetails((const UnitCategoryRecord *)partyGetSlot((u16)menu->slots[menu->selected]), 0, NULL);
            statusPanelSetOpen(1);
        }
    }
    if (FUN_0023b3b8() == 0) {
        menu->slideDirection = 3;
        menu->state = 2;
        menu->nextState = 3;
        if (menu->mode == PARTNER_MENU_MODE_ITEM && menu->count > 0) {
            sysPlaySe(0xF0);
            buttonHelpSelectSlot(5, 1, 1, 1);
        } else {
            s32 selectedItem = menu->slots[menu->selected];
            s32 markedItem = menu->slots[menu->current];
            if (selectedItem == markedItem) {
                sysPlaySe(0x11B);
            } else {
                sysPlaySe(0xF0);
            }
        }
        if (FUN_0035db94() < 0) {
            partnerMenuStartPanelSlide(menu, 1, -1, 0);
            return;
        }
        if (FUN_0035db94() > 0) {
            partnerMenuStartPanelSlide(menu, 0, -1, 0);
            return;
        }
    }
}

} /* extern "C" */
