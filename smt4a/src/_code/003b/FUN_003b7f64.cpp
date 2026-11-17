#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Sets the script result and reports the command as done. */
static s32 commandResult(s32 value)
{
    scrSetResult(value);
    return 1;
}

/* Script check: 0 when the eligible battle entry with id argument 0 has status flag bit argument 1
 * clear, else 1. */
u32 FUN_003b7f64(void)
{
    u32 id = scrGetArg(0);
    u32 bit = scrGetArg(1);
    for (s32 i = 0; i < 0x6d; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) && (g_btlCandidateMasks.required & entry->flags) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            entry->data.id == id && !(entry->data.statusFlags & (1 << bit))) {
            return commandResult(0);
        }
    }
    return commandResult(1);
}
}
