/* NON_MATCHING: mask-half AND operands and the shared success-return block use different register allocation. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlMainAccess.h"

extern "C" {
u32 scrGetArg(u32 argument);
void scrSetResult(s32 result);

// Test whether an eligible combatant with the requested id has a positive entry value.
u32 FUN_003cc218()
{
    u32 id = scrGetArg(0);
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) &&
            (flags & g_btlCandidateMasks.required) && !(flags & g_btlCandidateMasks.excluded) &&
            entry->id == id && btlFindEntryValue(entry->unitIndex, 19) > 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
