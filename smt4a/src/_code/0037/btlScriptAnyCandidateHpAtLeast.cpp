#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 scrGetArg(s32 index);

static __inline s32 entryHpPercentage(const BtlCombatantEntryA *entry)
{
    s32 hp = entry->hp;
    s32 maximum = entry->maxHp;
    return hp * 100 / maximum;
}

/* Script check: report whether any candidate battle entry is at or above the HP percentage in argument 0. */
u32 btlScriptAnyCandidateHpAtLeast(void)
{
    s32 percent = scrGetArg(0);

    for (s32 i = 0; i < 0x6d; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            entryHpPercentage(entry) >= percent) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
