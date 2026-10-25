#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

/* Current HP as a percentage of the maximum. */
static inline s32 hpPercent(s32 hp, s32 maxHp)
{
    return hp * 100 / maxHp;
}

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);

/* Script check: whether the eligible battle entry with id argument 0 is at or below the HP
 * percentage of argument 1. */
u32 FUN_00372b80(void)
{
    u32 id = scrGetArg(0);
    s32 percent = scrGetArg(1);
    for (s32 i = 0; i < 0x6d; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            entry->id == id && hpPercent(entry->hp, entry->maxHp) <= percent) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
