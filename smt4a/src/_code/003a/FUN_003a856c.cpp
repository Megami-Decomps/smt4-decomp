#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);

/* Script command: result 1 when the candidate combatant with id `arg0` has encoded stat `arg1` at
 * level 3. */
s32 FUN_003a856c(void)
{
    u32 id = scrGetArg(0);
    s32 stat = scrGetArg(1);
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 || (entry->flags & g_btlCandidateMasks.required) == 0 ||
            (entry->flags & g_btlCandidateMasks.excluded) != 0) {
            continue;
        }
        if (entry->id == id && (entry->encodedStats.values[stat] >> 10) == 3) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
