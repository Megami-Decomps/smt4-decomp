#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);

/* Script command: result = whether at least arg1 eligible combatants have status bit arg0 set. */
s32 btlScrCheckStatusCount(void)
{
    u32 bit = scrGetArg(0);
    s32 needed = scrGetArg(1);
    s32 count = 0;
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];

        if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 && (entry->statusFlags & (1 << bit))) {
            count++;
        }
    }
    scrSetResult(needed <= count);
    return 1;
}

} /* extern "C" */
