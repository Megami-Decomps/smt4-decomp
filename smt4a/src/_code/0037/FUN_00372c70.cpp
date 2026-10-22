/* NON_MATCHING: candidate MP percentage calculation uses different multiply/divide argument registers. */
/* Tests whether the requested candidate's remaining MP percentage is below the threshold. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
u32 scrGetArg(u32 index);
void scrSetResult(s32 result);

u32 FUN_00372c70(void)
{
    u32 id = scrGetArg(0);
    s32 threshold = scrGetArg(1);
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((g_btlCandidateMasks.unavailable & entry->flags) != 0 &&
            (g_btlCandidateMasks.required & entry->flags) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 && entry->id == id &&
            entry->mp * 100 / entry->maxMp <= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
