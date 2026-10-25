#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);

/* Script command: result = whether any eligible combatant has encoded stat arg0 at level 5. */
s32 btlScrAnyStatLevelFive(void)
{
    u32 stat = scrGetArg(0);
    s32 i;

    if (stat < 21) {
        for (i = 0; i < 109; i++) {
            BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];

            if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 &&
                (g_btlCandidateMasks.required & entry->flags) != 0 &&
                (entry->flags & g_btlCandidateMasks.excluded) == 0 &&
                (entry->encodedStats.values[stat] >> 10) == 5) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
