#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

/* btlScriptAnyEntryHasStatusBit's body, which retail inlines whole into this command (one source file in the
 * original). */
static __inline u32 scriptAnyEntryHasStatusBit(void)
{
    s32 bit = scrGetArg(0);
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            (entry->data.statusFlags & (1 << bit))) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

/* Script command: sets 1 when a combatant passing the candidate masks has status bit `argument 0` set, else 0
 * (btlScriptAnyEntryHasStatusBit). */
u32 FUN_003729ec(void)
{
    return scriptAnyEntryHasStatusBit();
}

} /* extern "C" */
