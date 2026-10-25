/* NON_MATCHING: retail loads the mask 5 halves with two ldr (high into r3); this build uses one ldm. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "script/ScriptArgs.h"

extern "C" {

extern u64 g_btlMessageFlagMasks[6];

// Script command: result is the unit index of the first combatant that has a flag of mask 1, none of
// mask 5 and one of mask 4, or -1.
u32 FUN_003b8880(void)
{
    s32 result = -1;
    for (s32 i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[i];
        u64 flags = entry->flags;
        if ((flags & g_btlMessageFlagMasks[1]) != 0 && (flags & g_btlMessageFlagMasks[5]) == 0 &&
            entry->unitIndex >= 0 && (flags & g_btlMessageFlagMasks[4]) != 0) {
            result = entry->unitIndex;
            break;
        }
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
