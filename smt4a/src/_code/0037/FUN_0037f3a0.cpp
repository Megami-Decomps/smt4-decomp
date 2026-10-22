/* NON_MATCHING: retail reads the `required` mask with one ldm r5, {r3, ip}; armcc emits two ldr with the halves in swapped registers. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);
s32 FUN_003248e4(BtlCombatantEntryA *entry);

/* Script: sets 1 when an unavailable, required, non-excluded battle entry passes FUN_003248e4, else 0. */
u32 FUN_0037f3a0(void)
{
    for (s32 i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            FUN_003248e4(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
