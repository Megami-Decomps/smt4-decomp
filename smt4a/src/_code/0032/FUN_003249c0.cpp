/* NON_MATCHING: action loop unrolls correctly, but loads are hoisted into additional registers and two extra saves. */
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

/* Count matching kind-two or kind-three actions, selecting the restricted list when masked. */
extern "C" s32 FUN_003249c0(const BtlCombatantEntryA *entry, s32 id)
{
    s32 count = 0;
    if ((g_btlCandidateMasks.unavailable & entry->flags) ||
        (entry->flags & g_btlCandidateMasks.singleAction)) {
        const BtlCombatantActionA *action = &entry->actionList.single;
        if ((action->kind == 2 || action->kind == 3) && action->id == id)
            count = 1;
    } else {
        const BtlCombatantActionA *action = entry->actionList.available;
        for (s32 remaining = 10; remaining; --remaining, ++action) {
            if ((action->kind == 2 || action->kind == 3) && action->id == id)
                ++count;
        }
    }
    return count;
}
