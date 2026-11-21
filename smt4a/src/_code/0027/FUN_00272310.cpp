/* NON_MATCHING: through the masks pointer the mask loads stay in the loop as in retail; registers differ (retail reuses
   the global's address register for the masks) and the decoder's address scheduling differs. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"
extern "C" {

// Decode the selected active combatant's 21 packed stat levels.
u8 *FUN_00272310(u32 id)
{
    if (g_btlMain.state != NULL) {
        const BtlMainGlobalsA *main = &g_btlMain;
        for (s32 index = 0; index < 109; ++index) {
            BtlCombatantEntryA *entry = &g_btlMain.state->entries[index];
            if (entry != NULL &&
                (entry->flags & main->combatantMasks.required) &&
                !(entry->flags & main->exclusionMask) &&
                (entry->flags & main->actorCategories[1]) && entry->data.id == id) {
                for (s32 stat = 0; stat < 21; ++stat)
                    entry->data.levels[stat] = (u8)(entry->data.values[stat] >> 10);
                return entry->data.levels;
            }
        }
    }
    return NULL;
}
}
