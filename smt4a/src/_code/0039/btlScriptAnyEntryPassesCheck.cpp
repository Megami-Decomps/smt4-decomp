#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 FUN_002b54a0(BtlCombatantEntryA *entry, s32 arg);

// Report whether any eligible battle entry passes FUN_002b54a0 with the script argument.
u32 btlScriptAnyEntryPassesCheck(void)
{
    s32 arg = scrGetArg(0);
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & g_btlCandidateMasks.unavailable) &&
            (entry->flags & g_btlCandidateMasks.required) &&
            !(g_btlCandidateMasks.excluded & entry->flags) &&
            FUN_002b54a0(entry, arg)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
