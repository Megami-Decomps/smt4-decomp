#include "battle/BattleHelpers.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Script command: sets whether the candidate combatants' combined HP is at most `argument 0` percent of their combined maximum. */
u32 scrCommBtlHpPercentWithin(void)
{
    s32 percent = scrGetArg(0);
    HpSums sums;

    sums.maximum = 0;
    sums.current = 0;
    for (s32 index = 0; index < 109; ++index) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0) {
            sums.maximum += entry->data.maxHp;
            sums.current += entry->data.hp;
        }
    }
    scrSetResult(sums.current * 100 / sums.maximum <= percent);
    return 1;
}

} /* extern "C" */
