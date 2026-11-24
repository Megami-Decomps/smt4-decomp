/* NON_MATCHING: the entry-table base and index arithmetic use R0/R1 in the opposite order. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Reports whether an eligible combatant has the selected property above the threshold. */
u32 btlScriptAnyPropertyAbove(void)
{
    u32 kind = scrGetArg(0);
    s32 parameter = 0;
    if (kind == 0) {
        parameter = 7;
    } else if (kind == 1) {
        parameter = 8;
    } else if (kind == 2) {
        parameter = 10;
    } else if (kind == 3) {
        parameter = 11;
    }
    s32 threshold = (s32)scrGetArg(1);
    for (s32 i = 0; i < 109; ++i) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((g_btlCandidateMasks.unavailable & entry->flags) != 0 &&
            (g_btlCandidateMasks.required & entry->flags) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 &&
            entry->properties[parameter] > threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
} /* extern "C" */
