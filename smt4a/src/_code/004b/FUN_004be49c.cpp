/* NON_MATCHING: wrapped-selection helper changes search branch layout and quotient/remainder scheduling. */
#include "shard/Shard0037.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"

static inline s32 findNextEnabledUnit(const Obj25C *menu, s32 start)
{
    for (s32 index = start; index < 12; ++index) {
        if ((s32)menu->ids[index] >= 0 && menu->flags[index] != 0)
            return index;
    }
    for (s32 index = 0; index < start; ++index) {
        if ((s32)menu->ids[index] >= 0 && menu->flags[index] != 0)
            return index;
    }
    return -1;
}

extern "C" {
void flagValueSub(u32 flag, s32 amount);
s32 flagValueIsPositive(u32 flag);
UnitCategoryRecord *FUN_003e4d68(u32 id);
s32 FUN_004801ac(UnitCategoryRecord *unit, u32 flag, s32 apply);
void FUN_002a4914(void *cursor, s32 column);
void FUN_002a4964(void *cursor, s32 row);
void statusPanelSetOpen(s32 open);

// Apply the selected unit operation, then advance to another enabled detail entry.
void FUN_004be49c(Obj25C *menu)
{
    flagValueSub(menu->unk334, 1);
    if (!flagValueIsPositive(menu->unk334)) {
        menu->transition.state = 13;
        return;
    }
    UnitCategoryRecord *unit = FUN_003e4d68((u16)menu->ids[menu->selectionIndex.selected]);
    if (FUN_004801ac(unit, menu->unk334, 1)) {
        menu->flags[menu->selectionIndex.selected] = 0;
        s32 next = findNextEnabledUnit(menu, menu->selectionIndex.selected);
        if (next >= 0) {
            FUN_002a4914(menu->selection.cursor, next % 4);
            FUN_002a4964(menu->selection.cursor, next / 4);
            unit = FUN_003e4d68((u16)menu->ids[next]);
            statusRequestUnitDetails(unit, 0, NULL);
            statusPanelSetOpen(1);
            return;
        }
    }
    statusRequestUnitDetails(unit, 0, NULL);
    statusPanelSetOpen(1);
}
}
