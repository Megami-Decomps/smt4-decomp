/* NON_MATCHING: retail loads the entry flags as two words (ldr with writeback) into r1/r0; this source gets one ldrd. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);

// Script result: 1 when any battle entry passes all four candidate masks.
u32 FUN_003bc104(void)
{
    for (s32 i = 0; i < 109; ++i) {
        u64 flags = btlGetMainState()->entries[i].flags;
        if ((g_btlCandidateMasks.unavailable & flags) && (flags & g_btlCandidateMasks.required) &&
            !(g_btlCandidateMasks.excluded & flags) && (flags & g_btlCandidateMasks.unk30)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
