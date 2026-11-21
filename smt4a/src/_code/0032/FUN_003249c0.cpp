/* NON_MATCHING: retail loads the unavailable mask with ldm and singleAction with two ldr (the build swaps them), and its pair-unrolled loop needs two fewer saved registers. */
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

/* Count matching kind-two or kind-three actions, selecting the restricted list when masked. */
extern "C" s32 FUN_003249c0(const BtlCombatantEntryA *entry, s32 id)
{
    s32 count = 0;
    if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 ||
        (entry->flags & g_btlCandidateMasks.singleAction) != 0) {
        if ((entry->data.actionList.single.kind == 2 || entry->data.actionList.single.kind == 3) && entry->data.actionList.single.id == id)
            return 1;
    } else {
        for (s32 i = 0; i < 10; ++i) {
            if ((entry->data.actionList.available[i].kind == 2 || entry->data.actionList.available[i].kind == 3) && entry->data.actionList.available[i].id == id)
                ++count;
        }
    }
    return count;
}
