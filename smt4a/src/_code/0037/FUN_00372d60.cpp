/* NON_MATCHING: one excluded-mask AND uses different source-register operands. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "script/ScriptArgs.h"

extern "C" {
BtlMainStateA *btlGetMainState();
void scrSetResult(s32 result);

// Compare a script threshold with the average encoded value of eligible combatants.
u32 FUN_00372d60()
{
    s32 threshold = scrGetArg(0);
    s32 total = 0;
    s32 count = 0;
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) &&
            (flags & g_btlCandidateMasks.required) && !(g_btlCandidateMasks.excluded & flags)) {
            ++count;
            total += entry->thresholdView.unk27A;
        }
    }
    scrSetResult(threshold <= total / count);
    return 1;
}
}
