/* NON_MATCHING: retail loads hp/maxHp as a pair and reuses fewer saved registers in the mask tests (r7/r8 extra here); logic matches. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);

/* Script check: report whether any candidate battle entry is at or above the HP percentage in argument 0. */
u32 FUN_00372ab0(void)
{
    s32 percent = scrGetArg(0);

    for (s32 i = 0; i < 0x6d; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            entry->hp * 100 / entry->maxHp >= percent) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
