#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

extern "C" {
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);

/* Script check: whether any eligible battle entry is a demon of category 4. */
u32 FUN_0035ebe0(void)
{
    for (s32 i = 0; i < 0x6d; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            FUN_00184310(entry->id)->categoryView.category == 4) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
