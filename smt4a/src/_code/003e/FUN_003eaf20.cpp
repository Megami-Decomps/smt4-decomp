/* NON_MATCHING: loop-invariant hoisting only: retail hoists just the 0x78 mask words (the 0x58 mask is reloaded with ldm inside the loop, 4 saved registers); the build hoists both. */
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

extern BtlMainGlobalsA g_btlMain; /* 0x573920 */

/* Finds the first battle entry whose mask matches both the actor category mask and the required mask; NULL if none. */
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle)
{
    for (s32 i = 0; i < 109; i++) {
        BtlCombatantEntryA *entry = &battle->entries[i];
        if ((entry->flags & g_btlMain.actorCategories[3]) != 0) {
            if ((entry->flags & g_btlMain.combatantMasks.required) != 0) {
                return entry;
            }
        }
    }
    return NULL;
}

} /* extern "C" */
