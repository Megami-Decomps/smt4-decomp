/* NON_MATCHING: first group-output stack slot and excluded-mask load pairing differ. */
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32);
s32 btlResolveEntryChoice(s32);
void scrSetResult(s32);
s32 FUN_003eaf20(BattleMaskState *);

// Test whether the eligible entries in the requested group fit within a limit.
u32 FUN_0035ee28(void)
{
    s32 limit = scrGetArg(0);
    s32 group = btlResolveEntryChoice(scrGetArg(1));
    u32 first, count;
    s32 eligible = 0;
    FUN_00301a08(group, reinterpret_cast<s32 *>(&first), reinterpret_cast<s32 *>(&count));
    for (s32 index = first; index < (s32)(first + count); ++index) {
        u64 mask = btlGetMainState()->entryView.entries[index].mask;
        if (!(mask & g_btlCandidateMasks.unavailable) &&
            (mask & g_btlCandidateMasks.required) &&
            !(mask & g_btlCandidateMasks.excluded))
            ++eligible;
    }
    if (btlGetMainState()->activeEntry.present) {
        if (FUN_003eaf20(btlGetMainState()))
            ++eligible;
    }
    scrSetResult(eligible <= limit);
    return 1;
}
}
