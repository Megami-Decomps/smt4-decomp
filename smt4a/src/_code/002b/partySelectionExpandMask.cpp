#include "battle/PartySelection.h"
#include "gamedata/SaveSlotTable.h"

struct PartyMaskSelection {
    /* 0x0000 */ u8 unk0000[0x3898];
    /* 0x3898 */ s32 selection;
    /* 0x389c */ u8 unk389c[0x3e8];
    /* 0x3c84 */ u8 selected[4];
};


extern "C" {
void btlMenuResolveHighlightedCommand(PartyMaskSelection *, u16 *value, s16 *count);

/* Expands the selected party entry or the checked entries to a target mask. */
u32 partySelectionExpandMask(PartyMaskSelection *selection, u64 *mask, s64 *count)
{
    if (selection->selection < 0) {
        return 0;
    }
    *mask = 0;
    *count = 0;
    SaveSlotTableA *slots = gameGetSlotTable();
    if (selection->selection == PARTY_SELECT_CHECKED) {
        if (selection->selected[0]) {
            *mask += 1;
        }
        for (u32 slot = 0; slot < 3; ++slot) {
            if (selection->selected[slot + 1]) {
                *mask += partySelectionBit(slots->reserve[slot]);
            }
        }
    } else if (selection->selection >= 0) {
        if (selection->selection == 0) {
            *mask = 1;
        } else {
            *mask = partySelectionBit(slots->reserve[selection->selection - 1]);
        }
    }
    u16 value = 0;
    s16 selectedCount = 0;
    btlMenuResolveHighlightedCommand(selection, &value, &selectedCount);
    *count = selectedCount;
    return 1;
}
}
