#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 FUN_003020fc(BtlCombatantEntryA *entry, s32 arg);

/* Script query: reports whether any marked, required, non-excluded battle entry passes
 * FUN_003020fc with argument 0. */
u32 FUN_0039d174(void)
{
    s32 arg = scrGetArg(0);
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            FUN_003020fc(entry, arg)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
