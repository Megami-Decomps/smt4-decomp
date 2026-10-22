/* NON_MATCHING: the excluded-mask test allocates its AND results to the mask registers instead of the flag registers (r0/r1) */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);

/* Script query: reports whether an eligible battle entry with id argument 0 has status bit argument 1 set. */
u32 FUN_0037f450(void)
{
    u32 id = scrGetArg(0);
    s32 bit = scrGetArg(1);
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            entry->id == id && (entry->statusFlags & (1 << bit))) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
