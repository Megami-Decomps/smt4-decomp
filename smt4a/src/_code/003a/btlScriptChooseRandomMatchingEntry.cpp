/* NON_MATCHING: registers of the entries base and index*0x408 are swapped in the entry address computation (retail base in r1, product in r0); everything else matches.
 * Wave 91: a single-use `BtlCombatantEntryA *entries = btlGetMainState()->entries;` copy inside the loop gives
 * IDENTICAL, but its sibling btlScriptAnyCandidateHasNegativeCounter matches only with the direct `&btlGetMainState()->entries[i]` (6 lines
 * with the copy): a temporary chosen per function by score, not kept. */
#include "battle/BtlMainAccess.h"
#include "util/Random.h"
#include "battle/BattleHelpers.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlCombatantHasSkillAction(BtlCombatantEntryA *, u32 condition);
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *);

// Pick a random battle entry satisfying the current masks and script-supplied condition.
u32 btlScriptChooseRandomMatchingEntry(void)
{
    u32 condition = scrGetArg(0);
    u32 side = btlResolveEntryChoice(scrGetArg(1));
    u32 candidates[109];
    s32 candidateCount = 0;
    s32 start, count;
    btlGetEntryChoiceRange(side, &start, &count);
    for (s32 index = start; index < start + count; ++index) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = &state->entries[index];
        if ((g_btlCandidateMasks.unavailable & entry->flags) == 0 &&
            (g_btlCandidateMasks.required & entry->flags) != 0 &&
            (g_btlCandidateMasks.excluded & entry->flags) == 0 &&
            btlCombatantHasSkillAction(entry, condition)) {
            candidates[candidateCount++] = entry->data.id;
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry != NULL && btlCombatantHasSkillAction(entry, condition)) {
            candidates[candidateCount++] = entry->data.id;
        }
    }
    if (candidateCount != 0) {
        scrSetResult(candidates[randRange(static_cast<u16>(candidateCount - 1))]);
        return 1;
    }
    scrSetResult(0);
    return 1;
}
}
