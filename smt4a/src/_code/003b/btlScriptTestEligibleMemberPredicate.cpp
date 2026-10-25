#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
u32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 FUN_002b54a0(BtlCombatantEntryA *entry, u32 value);

// Report whether an eligible combatant with the requested id satisfies the supplied predicate.
u32 btlScriptTestEligibleMemberPredicate()
{
    u32 id = scrGetArg(0);
    u32 value = scrGetArg(1);
    for (s32 i = 0; i < 109; ++i) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) &&
            (flags & g_btlCandidateMasks.required) && !(flags & g_btlCandidateMasks.excluded) &&
            entry->id == id && FUN_002b54a0(entry, value)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
