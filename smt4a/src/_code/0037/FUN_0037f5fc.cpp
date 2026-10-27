#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "script/ScriptArgs.h"

extern "C" {


/* Script command: result 1 when some candidate combatant's encoded stat `arg0` has level 0 or 2. */
s32 FUN_0037f5fc(void)
{
    s32 stat = scrGetArg(0);
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) == 0) {
            continue;
        }
        if ((flags & g_btlCandidateMasks.required) == 0) {
            continue;
        }
        if ((flags & g_btlCandidateMasks.excluded) != 0) {
            continue;
        }
        u16 value = entry->encodedStats.values[stat];
        if ((value & 0xfc00) != 0 && (value >> 10) != 2) {
            continue;
        }
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
