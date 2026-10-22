/* Tests whether a candidate combatant's auxiliary record has its selection flag set. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
void scrSetResult(s32 result);

u32 FUN_0038ba08(void)
{
    BtlMainStateA *state = btlGetMainState();
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &state->entries[i];
        if (entry != NULL &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 &&
            (entry->flags & g_btlCandidateMasks.unavailable) != 0) {
            BattleCandidateRecord *record = entry->candidate.record;
            if (record != NULL && (record->flags & 0x100) != 0) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
