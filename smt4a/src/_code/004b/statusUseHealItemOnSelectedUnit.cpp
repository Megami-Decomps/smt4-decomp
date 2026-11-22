#include "ui/PartnerSelectMenu.h"
#include "gamedata/FlagValueIsPositive.h"

extern "C" {
void flagValueSub(u32 flag, s32 amount);
void statusPanelSetOpen(s32 open);
u32 itemApplyPercentageHpHeal(PartySlotA *target, u32 itemId, s32 checkOnly);
void scrollOwnerSelectIndex(GridNavigation *list, s32 column);
void scrollListSetSelectionTracked(GridNavigation *list, s32 row); // declcheck: local (the shared prototype takes a ScrollSelection; the list is a GridNavigation)

/* Apply the selected unit operation, then advance to another enabled detail entry. */
void statusUseHealItemOnSelectedUnit(PartnerSelectMenu *menu)
{
    flagValueSub(menu->itemId, 1);
    if (!flagValueIsPositive(menu->itemId)) {
        menu->state = PARTNER_MENU_STATE_CLOSE;
        return;
    }
    PartySlotA *unit = partyGetSlot((u16)menu->slots[menu->selected]);
    if (!itemApplyPercentageHpHeal(unit, menu->itemId, 1)) {
        statusRequestUnitDetails((const UnitCategoryRecord *)unit, 0, NULL);
        statusPanelSetOpen(1);
        return;
    }
    menu->usable[menu->selected] = 0;
    s32 next = -1;
    for (s32 i = menu->selected; i < PARTNER_MENU_SLOTS; ++i) {
        if (menu->slots[i] >= 0 && menu->usable[i] != 0) {
            next = i;
            break;
        }
    }
    if (next < 0) {
        for (s32 i = 0; i < menu->selected; ++i) {
            if (menu->slots[i] >= 0 && menu->usable[i] != 0) {
                next = i;
                break;
            }
        }
    }
    if (next < 0) {
        statusRequestUnitDetails((const UnitCategoryRecord *)unit, 0, NULL);
        statusPanelSetOpen(1);
        return;
    }
    s32 col = next % 4;
    s32 row = next / 4;
    scrollOwnerSelectIndex(&menu->list, col);
    scrollListSetSelectionTracked(&menu->list, row);
    statusRequestUnitDetails((const UnitCategoryRecord *)partyGetSlot((u16)menu->slots[next]), 0, NULL);
    statusPanelSetOpen(1);
}
} /* extern "C" */
