/* NON_MATCHING: retail loads the entry flags as two words (`ldr r1, [r0, r1, lsl #3]!` then hi into r0) where armcc emits ldrd into r0/r1; the rest only swaps registers. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

BtlMainStateA *btlGetMainState(void);
void scrSetResult(s32 value);

/* Script result: whether any of the 109 combatant entries is a candidate under the masks. */
u32 FUN_003c67c0(void)
{
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) != 0 && (flags & g_btlCandidateMasks.required) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 && (flags & g_btlCandidateMasks.unk30) == 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
