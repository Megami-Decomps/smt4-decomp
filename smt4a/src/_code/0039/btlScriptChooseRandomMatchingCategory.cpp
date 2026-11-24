/* NON_MATCHING: only the entry-table and scaled-index address registers r0/r1 are exchanged (retail adds the pointer offsets into r1, the index multiply into r0).
 * Wave 91: a single-use `BtlCombatantEntryA *entries = btlGetMainState()->entries;` copy inside the loop gives
 * IDENTICAL, but its sibling btlScriptAnyCandidateHasNegativeCounter matches only with the direct `&btlGetMainState()->entries[i]` (6 lines
 * with the copy): a temporary chosen per function by score, not kept. */
#include "battle/BtlMainAccess.h"
#include "util/Random.h"
#include "battle/BattleHelpers.h"
#include "battle/BattleHelpers_Smt4a.h"
#include "script/ScriptArgs.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *state);

/* Chooses a random eligible group member whose available action matches the requested category. */
u32 btlScriptChooseRandomMatchingCategory(void)
{
    u32 category = scrGetArg(0);
    s32 group = btlResolveEntryChoice(scrGetArg(1));
    u32 candidates[109];
    s32 candidateCount = 0;
    s32 first, count;
    btlGetEntryChoiceRange(group, &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = &state->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) == 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 && btlCombatantMatchesCategory(entry, category) != 0) {
            candidates[candidateCount++] = entry->data.id;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry != NULL && btlCombatantMatchesCategory(entry, category) != 0) {
            candidates[candidateCount++] = entry->data.id;
        }
    }
    if (candidateCount != 0) {
        u32 choice = randRange((u16)(candidateCount - 1));
        scrSetResult(candidates[choice]);
        return 1;
    }
    scrSetResult(0);
    return 1;
}
} /* extern "C" */
