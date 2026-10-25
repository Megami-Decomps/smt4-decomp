#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 scrGetArg(s32 index);
BtlMainStateA *btlGetMainState(void);
static __inline s32 entryHpPercentage(const BtlCombatantEntryA *entry)
{
    s32 hp = entry->hp;
    s32 maximum = entry->maxHp;
    return hp * 100 / maximum;
}

// Script command: sets 1 when a candidate entry that is not excluded has at most the given HP percentage.
u32 btlScriptAnyCandidateHpAtMost(void)
{
    s32 percent = scrGetArg(0);
    s32 i;

    for (i = 0; i < 0x6d; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) && (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) && entryHpPercentage(entry) <= percent) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
