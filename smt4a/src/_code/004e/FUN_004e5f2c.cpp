/* NON_MATCHING: retail loads the 64-bit marker mask with ldrd (built ldm) and reaches the slot value without ldr/str writeback (built `ldr [r6,#2532]!`); slot stride, minimum clamp and result match. */
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
    struct ValueSlotsView {
        s32 words[1];
    };
    extern ActionValueMasksView g_btlAction;
    BtlMainStateA *state = *owner;
    if ((state->markerMasks.bits & g_btlAction.disabledState) != 0)
        return 0;
    s32 *slotValue = &static_cast<ValueSlotsView *>(values)->words[index * 4 + 0x279];
    s32 value = *slotValue + change;
    MinimumValueEntryView *entry = static_cast<MinimumValueEntryView *>(FUN_003f0e20(state, index));
    if (entry != NULL && entry->minimumPercent > 0) {
        s32 minimum = (entry->maximum * entry->minimumPercent) / 100;
        if (minimum <= 0)
            minimum = 1;
        if (value < minimum)
            value = minimum;
    }
    if (gameFlagIsSet(0x591) && entry != NULL &&
        (entry->flags & g_btlAction.protectedUnit) == 0 && change < 0)
        return 0;
    if (value >= 0) {
        *slotValue = value;
        return 0;
    }
    *slotValue = 0;
    return 1;
}
}
