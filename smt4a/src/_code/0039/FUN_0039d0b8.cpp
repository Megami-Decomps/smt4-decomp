#include "gamedata/NkmBaseRecordA.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

void scrSetResult(s32 result);

// Report whether any eligible battle entry is a devil of kind 1.
u32 FUN_0039d0b8(void)
{
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((g_btlCandidateMasks.unavailable & entry->flags) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded) &&
            nkmBaseGetRecord(entry->id)->category == 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
