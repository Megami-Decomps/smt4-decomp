#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
void scrSetResult(s32 result);

// Report whether an available, nonexcluded battle candidate has a positive condition.
u32 btlScriptHasPositiveCandidateCondition(void)
{
    // A word in the entry's halfword-aligned union needs a local aligned view.
    struct CandidateConditionView {
        u8 unk000[0xC4];
        s32 value;
    };
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((g_btlCandidateMasks.unavailable & entry->flags) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(g_btlCandidateMasks.excluded & entry->flags) &&
            ((CandidateConditionView *)entry)->value > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
