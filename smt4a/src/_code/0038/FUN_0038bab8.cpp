#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" BtlMainStateA *btlGetMainState(void);
extern "C" s32 scrGetArg(u32 index);
extern "C" int scrSetResult(s32 value);

/* Report whether a permitted combatant has encoded level three in the requested stat. */
extern "C" u32 FUN_0038bab8(void)
{
    s32 stat = scrGetArg(0);
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((g_btlCandidateMasks.unavailable & entry->flags) &&
            (g_btlCandidateMasks.required & entry->flags) &&
            !(g_btlCandidateMasks.excluded & entry->flags) &&
            (entry->encodedStats.values[stat] >> 10) == 3) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
