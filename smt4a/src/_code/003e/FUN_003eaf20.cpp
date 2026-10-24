/* NON_MATCHING: loop-invariant hoisting only: retail hoists just the 0x78 mask words (the 0x58 mask is reloaded with ldm inside the loop, 4 saved registers); the build hoists both. */
#include "battle/btlMain.h"
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {

extern BtlMainGlobalsA g_btlMain; /* 0x573920 */

/* Finds the first battle entry whose mask matches both the actor category mask and the required mask; NULL if none. */
BattleMaskEntry *FUN_003eaf20(BattleMaskState *battle)
{
    for (s32 i = 0; i < 109; i++) {
        BattleMaskEntry *entry = &battle->entryView.entries[i];
        if ((entry->mask & g_btlMain.actorCategories[3]) != 0) {
            if ((entry->mask & g_btlMain.combatantMasks.required) != 0) {
                return entry;
            }
        }
    }
    return NULL;
}

} /* extern "C" */
