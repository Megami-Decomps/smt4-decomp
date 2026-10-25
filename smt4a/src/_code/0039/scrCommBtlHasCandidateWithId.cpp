#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

extern u64 g_btlCandidateMasks[6];
u32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 FUN_003248e4(BtlCombatantEntryA *entry);

// Script command: result 1 when a combatant with flags of masks 3 and 0, none of mask 5, the argument's
// ID and passing FUN_003248e4 exists.
u32 scrCommBtlHasCandidateWithId(void)
{
    u32 id = scrGetArg(0);
    for (s32 i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        u64 flags = entry->flags;
        if ((g_btlCandidateMasks[3] & flags) != 0 && (g_btlCandidateMasks[0] & flags) != 0 &&
            (flags & g_btlCandidateMasks[5]) == 0 && entry->id == id && FUN_003248e4(entry) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
