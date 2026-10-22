/* NON_MATCHING: candidate-mask conjunctions select different AND destination registers. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
BtlMainStateA *btlGetMainState();
void scrSetResult(s32 result);

u32 FUN_003c9b94()
{
    // A word cannot be added to the shared union beginning at byte 0x0a.
    struct CandidateValueView { u8 unk000[0xc8]; s32 value; };
    typedef char CandidateValueOffsetCheck[offsetof(CandidateValueView, value) == 0xc8 ? 1 : -1];
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) != 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 &&
            ((CandidateValueView *)entry)->value > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
