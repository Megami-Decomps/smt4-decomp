/* NON_MATCHING: retail reads the entry flags with ldm (not ldrd) and keeps the constant 1 live in r7; mask tests otherwise match. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
u32 scrGetArg(u32 index);
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);

/* Script check: report whether every candidate battle entry has the status bit from argument 0. */
u32 FUN_003a83c0(void)
{
    u32 bit = scrGetArg(0);

    for (s32 i = 0; i < 0x6d; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            !(entry->statusFlags & (1 << (u8)bit))) {
            scrSetResult(0);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}
}
