/* NON_MATCHING: retail loads mask 0 with one ldm into r3/r7 (saving r7-r8); this build loads it with two ldr and saves only r4-r6. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

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
        if ((g_btlCandidateMasks.unavailable & entry->flags) != 0 && (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 && entry->maxHp - entry->hp >= amount) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
