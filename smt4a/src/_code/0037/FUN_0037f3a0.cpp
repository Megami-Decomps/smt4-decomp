#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

s32 FUN_003248e4(BtlCombatantEntryA *entry);

/* Script: sets 1 when an unavailable, required, non-excluded battle entry passes FUN_003248e4, else 0. */
u32 FUN_0037f3a0(void)
{
    for (s32 i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(g_btlCandidateMasks.excluded & entry->flags) &&
            FUN_003248e4(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
