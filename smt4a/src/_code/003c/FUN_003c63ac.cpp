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

static inline s32 candidateTimer(const BtlCombatantEntryA *entry)
{
    // Adding an s32 to the canonical +0xA union would change that union's alignment.
    struct TimerView {
        u8 unk000[0xC4];
        s32 timer;
    };
    typedef char TimerOffsetCheck[offsetof(TimerView, timer) == 0xC4 ? 1 : -1];
    return ((const TimerView *)entry)->timer;
}

// Test whether an eligible requested combatant has a positive pending timer.
extern "C" u32 FUN_003c63ac(void)
{
    s32 first, count;
    btlGetEntryChoiceRange(btlResolveEntryChoice(scrGetArg(0)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) && !(entry->flags & g_btlCandidateMasks.excluded) &&
            candidateTimer(entry) > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry != NULL && candidateTimer(entry) > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
