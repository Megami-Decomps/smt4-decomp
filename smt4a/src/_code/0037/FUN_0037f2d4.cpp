#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
u32 scrGetArg(s32 index);
void scrSetResult(s32 result);

// Script command: sets 1 when a candidate entry that is not excluded has encoded stat `stat` (below 21) free of its top six bits.
u32 FUN_0037f2d4(void)
{
    u32 stat = scrGetArg(0);
    s32 i;

    if (stat < 21) {
        for (i = 0; i < 0x6d; i++) {
            BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
            u64 flags = entry->flags;
            if ((flags & g_btlCandidateMasks.unavailable) && (flags & g_btlCandidateMasks.required) &&
                !(flags & g_btlCandidateMasks.excluded) && !(entry->encodedStats.values[stat] & 0xfc00)) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
