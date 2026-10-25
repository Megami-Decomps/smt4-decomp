/* NON_MATCHING: the middle mask load is combined into LDM with different carry registers, and the final slot-byte load has a separate low-offset address addition. */
#include "common.h"
#include "gamedata/SaveSlotTable.h"

struct PartyMaskSelection {
    /* 0x0000 */ u8 unk0000[0x3898];
    /* 0x3898 */ s32 selection;
    /* 0x389c */ u8 unk389c[0x3e8];
    /* 0x3c84 */ u8 selected[4];
};


static __inline u64 partySelectionBit(u8 slot)
{
    return static_cast<s64>(1 << (slot + 1));
}

extern "C" {
void FUN_002ccde8(PartyMaskSelection *, u16 *value, s16 *count);

// Expand the chosen party entry (or checked entries) to a mask and signed count.
u32 partySelectionExpandMask(PartyMaskSelection *selection, u64 *mask, s64 *count)
{
    if (selection->selection < 0) {
        return 0;
    }
    *mask = 0;
    *count = 0;
    SaveSlotTable *slots = gameGetSlotTable();
    if (selection->selection == 9999) {
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
    FUN_002ccde8(selection, &value, &selectedCount);
    *count = selectedCount;
    return 1;
}
}
