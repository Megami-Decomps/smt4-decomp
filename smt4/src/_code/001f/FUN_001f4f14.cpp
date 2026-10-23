/* NON_MATCHING: 64-bit output clears use stm, one mask accumulation groups loads differently and the last active-slot byte uses a different base; 102 instructions each. */
#include "shard/W7_W7Match2_PartyDamage.h"

extern "C" {
PartyDamageSlotsIV *gameGetSlotTable(s32 selection);
void FUN_0028cb40(void *work, u16 *kind, s16 *index);

// Resolve selected party positions to the battle target mask and return the current command index.
u32 FUN_001f4f14(void *work, u64 *targets, s64 *commandIndex)
{
    struct SelectionView {
        u8 prefix[0x3064];
        s32 selection;
        u8 unk3068[0x3f4];
        u8 selected[4];
    };
    typedef char SelectionViewOffsets[offsetof(SelectionView, selection) == 0x3064 && offsetof(SelectionView, selected) == 0x345c ? 1 : -1];
    SelectionView *selection = static_cast<SelectionView *>(work);
    s32 selected = selection->selection;
    if (selected < 0)
        return 0;
    *targets = 0;
    *commandIndex = 0;
    const PartyDamageSlotsIV *slots = gameGetSlotTable(selected);
    if (selection->selection == 9999) {
        if (selection->selected[0])
            ++*targets;
        if (selection->selected[1])
            *targets += static_cast<s64>(static_cast<s32>(1u << (static_cast<u8>(slots->active[0]) + 1)));
        if (selection->selected[2])
            *targets += static_cast<s64>(static_cast<s32>(1u << (static_cast<u8>(slots->active[1]) + 1)));
        if (selection->selected[3])
            *targets += static_cast<s64>(static_cast<s32>(1u << (static_cast<u8>(slots->active[2]) + 1)));
    } else if (selection->selection >= 0) {
        if (selection->selection == 0)
            *targets = 1;
        else
            *targets = static_cast<s64>(static_cast<s32>(1u << (static_cast<u8>(slots->active[selection->selection - 1]) + 1)));
    }
    u16 kind = 0;
    s16 index = 0;
    FUN_0028cb40(work, &kind, &index);
    *commandIndex = index;
    return 1;
}
}
