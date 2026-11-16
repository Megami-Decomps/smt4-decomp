/* NON_MATCHING: only the loop entry address: retail keeps it in r2 beside the flag words (ldrd r0, [r2]); the build reuses r0 and loads the flags with ldm. */
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
        u8 unk000[0xB0];
        s32 primary;
        u32 unk0B4;
        s32 secondary;
    };
    typedef char CounterOffsetCheck[offsetof(CounterView, primary) == 0xB0 &&
        offsetof(CounterView, secondary) == 0xB8 ? 1 : -1];
    CounterView *counters = (CounterView *)entry;
    return counters->primary > 0 || counters->secondary > 0;
}

// Test whether a requested candidate with the specified unit id still has a pending counter.
extern "C" u32 FUN_003cccd0(void)
{
    u32 id = scrGetArg(0);
    s32 first, count;
    btlGetEntryChoiceRange(btlResolveEntryChoice(scrGetArg(1)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(g_btlCandidateMasks.excluded & entry->flags) && entry->id == id) {
            if (candidateHasPendingCounter(entry)) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry != NULL && entry->id == id && candidateHasPendingCounter(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
