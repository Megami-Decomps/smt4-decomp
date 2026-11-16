/* NON_MATCHING: retail keeps the constant 1 in r8 (shift base and both return values), which also moves the excluded-mask AND temporaries. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Script check: 0 when the eligible battle entry with id argument 0 has status flag bit argument 1
 * clear, else 1. */
u32 FUN_003b7f64(void)
{
    u32 id = scrGetArg(0);
    u32 bit = scrGetArg(1);
    for (s32 i = 0; i < 0x6d; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((g_btlCandidateMasks.unavailable & entry->flags) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(g_btlCandidateMasks.excluded & entry->flags) &&
            entry->id == id && !(entry->statusFlags & (1 << bit))) {
            scrSetResult(0);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}
}
