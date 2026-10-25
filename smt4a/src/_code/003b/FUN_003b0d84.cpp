#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 FUN_003020fc(BtlCombatantEntryA *entry, u32 value);

/* Script check: report whether a candidate battle entry with demon id argument 0 passes FUN_003020fc with argument 1. */
u32 FUN_003b0d84(void)
{
    u32 id = scrGetArg(0);
    u32 value = scrGetArg(1);

    for (s32 i = 0; i < 0x6d; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if (g_btlCandidateMasks.unavailable & (entry->flags) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            entry->id == id && FUN_003020fc(entry, value)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
