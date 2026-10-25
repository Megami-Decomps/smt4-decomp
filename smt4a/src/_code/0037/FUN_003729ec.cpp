/* NON_MATCHING: retail keeps the constant 1 in r7 (shared by the status mask shift and both return values), saving r7/r8. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {
BtlMainStateA *btlGetMainState();
void scrSetResult(s32 value);

/* Script command: sets 1 when a combatant passing the candidate masks has status bit `argument 0` set, else 0. */
u32 FUN_003729ec(void)
{
    s32 bit = scrGetArg(0);

    for (s32 index = 0; index < 109; ++index) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 && (entry->statusFlags & (1 << bit)) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
