/* NON_MATCHING: retail loads hp/maxHp as one ldm pair and the required mask with two ldr, saving r7/r8; masks and control flow otherwise match */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);

// Script command: sets 1 when a candidate entry that is not excluded has at most the given HP percentage.
u32 FUN_0034de78(void)
{
    s32 percent = scrGetArg(0);
    s32 i;

    for (i = 0; i < 0x6d; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) && (flags & g_btlCandidateMasks.required) &&
            !(flags & g_btlCandidateMasks.excluded) && entry->hp * 100 / entry->maxHp <= percent) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
