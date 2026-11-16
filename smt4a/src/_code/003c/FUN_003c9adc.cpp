#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"

extern "C" {
void scrSetResult(s32 result);

// Script command: sets 1 when a candidate entry that is not excluded has a positive value of kind 0x13.
u32 FUN_003c9adc(void)
{
    s32 i;

    for (i = 0; i < 0x6d; i++) {
        BtlMainStateA *state = btlGetMainState();
        BtlCombatantEntryA *entry = &state->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) && (entry->flags & g_btlCandidateMasks.required) &&
            !(g_btlCandidateMasks.excluded & entry->flags) && btlFindEntryValue(entry->unitIndex, 0x13) > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
