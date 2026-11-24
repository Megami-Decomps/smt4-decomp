/* NON_MATCHING: the second mask test swaps AND operands and the exclusion mask loads as a pair. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Tests whether an eligible combatant has a negative value in the selected property. */
u32 FUN_003b0bb8()
{
    s32 selector = scrGetArg(0);
    s32 column = 0;
    if (selector == 0) {
        column = 7;
    } else if (selector == 1) {
        column = 8;
    } else if (selector == 2) {
        column = 10;
    } else if (selector == 3) {
        column = 11;
    }
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((g_btlCandidateMasks.unavailable & entry->flags) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(g_btlCandidateMasks.excluded & entry->flags) &&
            entry->properties[column] <= -1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
} /* extern "C" */
