#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

s32 scrGetArg(s32 index);
void scrSetResult(s32 result);

/* Script: counts the required, non-excluded battle entries missing at least arg 0 HP. */
u32 btlScriptCountEntriesMissingHp(void)
{
    s32 damage = scrGetArg(0);
    s32 count = 0;
    for (s32 i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            entry->maxHp - entry->hp >= damage) {
            count++;
        }
    }
    scrSetResult(count);
    return 1;
}

} /* extern "C" */
