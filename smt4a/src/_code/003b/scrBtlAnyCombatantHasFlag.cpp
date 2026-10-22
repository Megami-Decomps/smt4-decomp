#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

u32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);

/* Script command: sets the result to 1 when an available, required, non-excluded combatant has
 * per-index flag `arg` set. */
s32 scrBtlAnyCombatantHasFlag(void)
{
    u32 index = scrGetArg(0);
    s32 i;

    if (index < 21) {
        for (i = 0; i < 109; i++) {
            BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];

            if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 &&
                (g_btlCandidateMasks.required & entry->flags) != 0 &&
                (entry->flags & g_btlCandidateMasks.excluded) == 0 &&
                entry->indexedFlags.values[index] != 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
