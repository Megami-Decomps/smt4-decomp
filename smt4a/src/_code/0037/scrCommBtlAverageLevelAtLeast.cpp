#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Tests whether the eligible combatants' average level meets the script threshold. */
u32 scrCommBtlAverageLevelAtLeast()
{
    s32 threshold = scrGetArg(0);
    s32 total = 0;
    s32 count = 0;
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded)) {
            ++count;
            total += entry->data.unk116;
        }
    }
    if (threshold <= total / count) {
        scrSetResult(1);
    } else {
        scrSetResult(0);
    }
    return 1;
}

} /* extern "C" */
