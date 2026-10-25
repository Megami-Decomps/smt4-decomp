#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
u32 scrGetArg(u32 index);
void scrSetResult(s32 result);

/* Script command: sets the result to whether any eligible battle entry lacks status bit `arg 0`. */
u32 scrCommBattleAnyEntryLacksStatus(void)
{
    u32 status = scrGetArg(0);

    for (s32 i = 0; i < 0x6D; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) && (g_btlCandidateMasks.required & entry->flags) &&
            !(entry->flags & g_btlCandidateMasks.excluded) && !(entry->statusFlags & (1 << (u8)status))) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
