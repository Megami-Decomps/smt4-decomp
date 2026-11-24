#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers_Smt4a.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Script check: report whether a candidate battle entry with demon id argument 0 passes btlCombatantMatchesCategory with argument 1. */
u32 FUN_003b0d84(void)
{
    u32 id = scrGetArg(0);
    u32 value = scrGetArg(1);

    for (s32 i = 0; i < 0x6d; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if (g_btlCandidateMasks.unavailable & (entry->flags) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            entry->data.id == id && btlCombatantMatchesCategory(entry, value)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
