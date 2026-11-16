/* NON_MATCHING: the excluded-mask test pairs the halves the other way round (and r1, r1, r0; and r0, r2, ip); everything else matches. */
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

/* Script command: sets 1 when a combatant passing the candidate masks has status bit `argument 0` set, else 0. */
u32 FUN_003729ec(void)
{
    s32 bit = scrGetArg(0);

    for (s32 index = 0; index < 109; ++index) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((g_btlCandidateMasks.unavailable & entry->flags) && (g_btlCandidateMasks.required & entry->flags) &&
            !(g_btlCandidateMasks.excluded & entry->flags) && (entry->statusFlags & (1 << bit))) {
            return commandResult(1);
        }
    }
    return commandResult(0);
}

} /* extern "C" */
