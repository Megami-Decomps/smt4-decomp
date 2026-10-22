/* NON_MATCHING: retail 59 vs built 61 rows; action-mask loads, protected-value branches, and saved registers differ. */
#include "battle/btlMain.h"

extern "C" {
void *FUN_003f0e20(BtlMainStateA *, s32);
s32 gameFlagIsSet(u32);

u8 FUN_004e5f2c(BtlMainStateA **owner, void *values, s32 index, s32 change)
{
    // The mask at 0x190 extends beyond the shared action-global prefix.
    struct ActionValueMasksView {
        u8 unk000[0x30];
        u64 protectedUnit;
        u8 unk038[0x158];
        u64 disabledState;
    };
    // A word at 0x15c cannot be added to the shared combatant's halfword-aligned union.
    struct MinimumValueEntryView {
        u64 flags;
        u8 unk008[0x154];
        s32 minimumPercent;
        u8 unk160[0xFC];
        s32 maximum;
    };
    struct ValueSlot {
        u32 unk00;
        s32 value;
        u32 unk08[2];
    };
    extern ActionValueMasksView g_btlAction;
    BtlMainStateA *state = *owner;
    if ((state->markerMasks.bits & g_btlAction.disabledState) != 0)
        return 0;
    ValueSlot *slots = reinterpret_cast<ValueSlot *>(static_cast<u8 *>(values) + 0x9E0);
    ValueSlot *slot = &slots[index];
    s32 value = slot->value + change;
    MinimumValueEntryView *entry = static_cast<MinimumValueEntryView *>(FUN_003f0e20(state, index));
    if (entry != NULL && entry->minimumPercent > 0) {
        s32 minimum = (entry->maximum * entry->minimumPercent) / 100;
        if (minimum < 1)
            minimum = 1;
        if (value < minimum)
            value = minimum;
    }
    if (gameFlagIsSet(0x591) && entry != NULL &&
        (entry->flags & g_btlAction.protectedUnit) == 0 && change < 0)
        return 0;
    slot->value = value >= 0 ? value : 0;
    return value < 0;
}
}
