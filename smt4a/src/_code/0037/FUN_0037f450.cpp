#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Script query: reports whether an eligible battle entry with id argument 0 has status bit argument 1 set. */
u32 FUN_0037f450(void)
{
    u32 id = scrGetArg(0);
    s32 bit = scrGetArg(1);
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if (g_btlCandidateMasks.unavailable & (entry->flags) &&
            (entry->flags & g_btlCandidateMasks.required) &&
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
