#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);

/* Script check: whether any eligible battle entry's encoded stat (argument 0) has level 4 in its
 * top six bits. */
u32 FUN_0038c0d0(void)
{
    s32 stat = scrGetArg(0);
    for (s32 i = 0; i < 0x6d; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            entry->encodedStats.values[stat] >> 10 == 4) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
