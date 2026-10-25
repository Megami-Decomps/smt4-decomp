/* NON_MATCHING: range/count stack placement now matches (count at sp, range array above it); remaining: retail loads the first/count pair with `ldm` straight into the index register, the unavailable-mask words with two separate loads, and addresses the active-entry bytes differently. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(u32 index);
s32 btlResolveEntryChoice(s32 choice);
void scrSetResult(s32 result);
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);

// Count eligible combatants missing at least the requested amount of HP.
u32 FUN_003bc468(void)
{
    s32 missingHp = scrGetArg(0);
    s32 choice = btlResolveEntryChoice(scrGetArg(1));
    s32 matches = 0;
    struct { u32 count; u32 range[8]; } selection;
    FUN_00301a08(choice, reinterpret_cast<s32 *>(selection.range), reinterpret_cast<s32 *>(&selection.count));
    for (s32 index = selection.range[0]; index < static_cast<s32>(selection.count + selection.range[0]); ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) == 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 &&
            missingHp <= entry->maxHp - entry->hp)
            ++matches;
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && missingHp <= entry->maxHp - entry->hp)
            ++matches;
    }
    scrSetResult(matches);
    return 1;
}
}
