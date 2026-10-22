/* NON_MATCHING: retail keeps the constant 1 in r8 (shift base and return value) and loads the required mask with ldm; this build rematerializes 1 and loads the mask with two ldr. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlMainStateA *btlGetMainState(void);

/* Script check: 0 when the eligible battle entry with id argument 0 has status flag bit argument 1
 * clear, else 1. */
u32 FUN_003b7f64(void)
{
    u32 id = scrGetArg(0);
    u32 bit = scrGetArg(1);
    for (s32 i = 0; i < 0x6d; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            entry->id == id && !(entry->statusFlags & (1 << bit))) {
            scrSetResult(0);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}
}
