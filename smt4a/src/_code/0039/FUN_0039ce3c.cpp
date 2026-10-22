/* NON_MATCHING: retail loads mask 0 with one ldm into r3/r7 (saving r7-r8); this build loads it with two ldr and saves only r4-r6. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

extern u64 g_btlCandidateMasks[6];
BtlMainStateA *btlGetMainState(void);
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);

// Script command: result 1 when a combatant with flags of masks 3 and 0 and none of mask 5 is missing
// at least the argument's amount of HP.
u32 FUN_0039ce3c(void)
{
    s32 amount = scrGetArg(0);
    for (s32 i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        u64 flags = entry->flags;
        if ((g_btlCandidateMasks[3] & flags) != 0 && (flags & g_btlCandidateMasks[0]) != 0 &&
            (flags & g_btlCandidateMasks[5]) == 0 && entry->maxHp - entry->hp >= amount) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
