#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "script/ScriptArgs.h"

namespace {

struct BattleMessageFlagMasksView {
    u8 unk00[0x20];            // 0x00
    u64 eligible;              // 0x20
};

}

extern "C" {
extern BattleMessageFlagMasksView g_btlMessageFlagMasks;

// Report the signed value of the first eligible entry with the requested ID, or -1.
u32 btlScriptFindEligibleEntryValueById(void)
{
    const u32 requestedId = scrGetArg(0);
    s32 result = -1;

    for (s32 index = 0; index < 109; ++index) {
        const BtlCombatantEntryA* entry = &btlGetMainState()->entries[index];

        if (!(entry->flags & g_btlMessageFlagMasks.eligible))
            continue;
        if (entry->id != requestedId)
            continue;

        result = entry->unitIndex;
        break;
    }

    scrSetResult(result);
    return 1;
}
}
