#include "shard/Shard0037.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"
#include "gamedata/FlagValueIsPositive.h"

extern "C" {
void flagValueSub(u32 flag, s32 amount);
UnitCategoryRecord *partyGetSlot(u32 id); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 itemApplyPercentageHpHeal(UnitCategoryRecord *unit, u32 flag, s32 apply);
void scrollOwnerSelectIndex(void *cursor, s32 column);
void scrollListSetSelectionTracked(void *cursor, s32 row); // declcheck: local (the shared declaration does not compile here or changes this unit)
void statusPanelSetOpen(s32 open);

/* Apply the selected unit operation, then advance to another enabled detail entry. */
void statusUseHealItemOnSelectedUnit(Obj25C *menu)
{
    flagValueSub(menu->unk334, 1);
    if (!flagValueIsPositive(menu->unk334)) {
        menu->transition.state = 13;
        return;
    }
    UnitCategoryRecord *unit = partyGetSlot((u16)menu->ids[menu->selectionIndex.selected]);
    if (!itemApplyPercentageHpHeal(unit, menu->unk334, 1)) {
        statusRequestUnitDetails(unit, 0, NULL);
        statusPanelSetOpen(1);
        return;
    }
    menu->flags[menu->selectionIndex.selected] = 0;
    s32 next = -1;
    for (s32 i = menu->selectionIndex.selected; i < 12; ++i) {
        if ((s32)menu->ids[i] >= 0 && menu->flags[i] != 0) {
            next = i;
            break;
        }
    }
    if (next < 0) {
        for (s32 i = 0; i < menu->selectionIndex.selected; ++i) {
            if ((s32)menu->ids[i] >= 0 && menu->flags[i] != 0) {
                next = i;
                break;
            }
        }
    }
    if (next < 0) {
        statusRequestUnitDetails(unit, 0, NULL);
        statusPanelSetOpen(1);
        return;
    }
    s32 col = next % 4;
    s32 row = next / 4;
    scrollOwnerSelectIndex(menu->selection.cursor, col);
    scrollListSetSelectionTracked(menu->selection.cursor, row);
    statusRequestUnitDetails(partyGetSlot((u16)menu->ids[next]), 0, NULL);
    statusPanelSetOpen(1);
}
} /* extern "C" */
