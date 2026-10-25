/* NON_MATCHING: retail loads the required mask with one ldm (r3/r6); this loads its words separately, adding a row */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "battle/BtlMainAccess.h"

extern "C" {
void scrSetResult(s32 result);
s32 btlFindEntryValue(s32 unitIndex, s32 kind);

// Script command: sets 1 when a candidate entry that is not excluded has a positive value of kind 0x13.
u32 FUN_003c9adc(void)
{
    s32 i;

    for (i = 0; i < 0x6d; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) && (flags & g_btlCandidateMasks.required) &&
            !(flags & g_btlCandidateMasks.excluded) && btlFindEntryValue(entry->unitIndex, 0x13) > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
