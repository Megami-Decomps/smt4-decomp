/* NON_MATCHING: first group-output stack slot and excluded-mask load pairing differ. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32);
s32 btlResolveEntryChoice(s32);
void scrSetResult(s32);
s32 btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *);

// Test whether the eligible entries in the requested group fit within a limit.
u32 FUN_0035ee28(void)
{
    s32 limit = scrGetArg(0);
    s32 group = btlResolveEntryChoice(scrGetArg(1));
    s32 first, count;
    s32 eligible = 0;
    btlGetEntryChoiceRange(group, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if (!(g_btlCandidateMasks.unavailable & entry->flags) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(g_btlCandidateMasks.excluded & entry->flags))
            ++eligible;
    }
    if (btlGetMainState()->unk4cd1) {
        if (btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState()))
            ++eligible;
    }
    scrSetResult(eligible <= limit);
    return 1;
}
}
