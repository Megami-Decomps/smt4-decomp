/* Tests whether the requested candidate's remaining MP percentage is below the threshold. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
u32 scrGetArg(u32 index);
void scrSetResult(s32 result);

u32 scrCommBattleGroupMpPercentAtMost(void)
{
    u32 id = scrGetArg(0);
    s32 threshold = scrGetArg(1);
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((g_btlCandidateMasks.unavailable & entry->flags) != 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (g_btlCandidateMasks.excluded & entry->flags) == 0 && entry->id == id) {
            s32 mp = entry->mp;
            s32 maxMp = entry->maxMp;
            if (mp * 100 / maxMp <= threshold) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
