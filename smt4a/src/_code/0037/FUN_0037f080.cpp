/* NON_MATCHING: the two running sums swap registers (retail keeps the HP total in r6 and the maximum in r5). */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Script command: sets whether the candidate combatants' combined HP is at most `argument 0` percent of their combined maximum. */
u32 FUN_0037f080(void)
{
    s32 percent = scrGetArg(0);
    s32 hp = 0;
    s32 maxHp = 0;

    for (s32 index = 0; index < 109; ++index) {
        const BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0) {
            maxHp += entry->maxHp;
            hp += entry->hp;
        }
    }
    scrSetResult(hp * 100 / maxHp <= percent);
    return 1;
}

} /* extern "C" */
