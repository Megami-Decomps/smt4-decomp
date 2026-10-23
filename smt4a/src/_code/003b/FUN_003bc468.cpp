/* NON_MATCHING: range/count stack placement, mask load pairing, and active-entry byte addressing differ. */
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(u32 index);
s32 btlResolveEntryChoice(s32 choice);
void FUN_00301a08(s32 kind, u32 *first, u32 *count);
void scrSetResult(s32 result);
BattleMaskEntry *FUN_003eaf20(BattleMaskState *battle);

// Count eligible combatants missing at least the requested amount of HP.
u32 FUN_003bc468(void)
{
    s32 missingHp = scrGetArg(0);
    s32 choice = btlResolveEntryChoice(scrGetArg(1));
    s32 matches = 0;
    u32 range[8];
    u32 count;
    FUN_00301a08(choice, range, &count);
    for (s32 index = range[0]; index < static_cast<s32>(range[0] + count); ++index) {
        BattleMaskEntry *entry = &btlGetMainState()->entryView.entries[index];
        u64 flags = entry->mask;
        if ((flags & g_btlCandidateMasks.unavailable) == 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 &&
            missingHp <= entry->maxHp - entry->hp)
            ++matches;
    }
    if (btlGetMainState()->activeEntry.present) {
        BattleMaskEntry *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && missingHp <= entry->maxHp - entry->hp)
            ++matches;
    }
    scrSetResult(matches);
    return 1;
}
}
