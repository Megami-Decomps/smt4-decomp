#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
BtlMainStateA *btlGetMainState();
s32 scrGetArg(u32 index);
void scrSetResult(s32 value);

/* Script command: sets 1 when a combatant with id `argument 0` passes the candidate masks, else 0. */
u32 scrCommBattleHasCandidateId(void)
{
    u32 id = scrGetArg(0);

    for (s32 index = 0; index < 109; ++index) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 && entry->id == id) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
