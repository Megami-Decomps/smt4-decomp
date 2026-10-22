#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);

/* Script check: whether the eligible battle entry with id argument 0 has a value at 0x27a of at
 * least argument 1. */
u32 FUN_0038bf08(void)
{
    u32 id = scrGetArg(0);
    s32 minimum = scrGetArg(1);
    for (s32 i = 0; i < 0x6d; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            entry->id == id && entry->thresholdView.unk27A >= minimum) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
