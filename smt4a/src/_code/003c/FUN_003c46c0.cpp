/* NON_MATCHING: written as its sibling FUN_003cccd0; only the loop entry address differs: retail keeps it in r2 beside the
 * flag words (ldrd r0, [r2]); the build reuses r0 and loads the flags with ldm. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 btlResolveEntryChoice(s32 choice);
void scrSetResult(s32 value);
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *state);
}

static inline bool candidateHasPendingCounter(BtlCombatantEntryA *entry)
{
    // These words cannot be inserted into the canonical byte-aligned +0xA padding union.
    struct CounterView {
        u8 unk000[0xAC];
        s32 primary;
        s32 unused;
        s32 secondary;
    };
    typedef char CounterOffsetCheck[offsetof(CounterView, primary) == 0xAC &&
        offsetof(CounterView, secondary) == 0xB4 ? 1 : -1];
    CounterView *counters = (CounterView *)entry;
    return counters->primary > 0 || counters->secondary > 0;
}

// Test selected matching combatants and the special active entry for an effect counter.
extern "C" u32 FUN_003c46c0(void)
{
    u32 id = scrGetArg(0);
    s32 first, count;
    btlGetEntryChoiceRange(btlResolveEntryChoice(scrGetArg(1)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(g_btlCandidateMasks.excluded & entry->flags) && entry->data.id == id) {
            if (candidateHasPendingCounter(entry)) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry != NULL && entry->data.id == id && candidateHasPendingCounter(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
