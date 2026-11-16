#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {


/* Script command: result 1 when every candidate combatant has status bit `arg0`, else 0. */
s32 FUN_0039cd78(void)
{
    s32 status = scrGetArg(0);
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 && (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 && !(entry->statusFlags & (1u << status))) {
            scrSetResult(0);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}

} /* extern "C" */
