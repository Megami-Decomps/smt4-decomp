/* NON_MATCHING: retail loads the required mask as two ldr (lo into ip, hi into r3) where armcc emits `ldm r6, {r3, ip}`; the rest matches. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

s32 scrGetArg(s32 index);
void scrSetResult(s32 value);
BtlMainStateA *btlGetMainState(void);

/* Script result: whether any candidate combatant has stat arg 0 at encoded stage 1. */
u32 FUN_0037f534(void)
{
    s32 stat = scrGetArg(0);
    for (s32 index = 0; index < 109; ++index) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) != 0 && (flags & g_btlCandidateMasks.required) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0 && (entry->encodedStats.values[stat] >> 10) == 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
