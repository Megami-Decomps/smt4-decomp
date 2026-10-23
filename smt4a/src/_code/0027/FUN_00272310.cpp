/* NON_MATCHING: compiler hoists mask loads and allocates more registers; decoder address scheduling differs. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
extern "C" {
extern BtlMainGlobalsA g_btlMain;

// Decode the selected active combatant's 21 packed stat levels.
u8 *FUN_00272310(u32 id)
{
    if (g_btlMain.state != NULL) {
        for (s32 index = 0; index < 109; ++index) {
            BtlCombatantEntryA *entry = &g_btlMain.state->entries[index];
            if (entry != NULL &&
                (entry->flags & g_btlMain.combatantMasks.required) &&
                !(entry->flags & g_btlMain.exclusionMask) &&
                (entry->flags & g_btlMain.actorCategories[1]) && entry->id == id) {
                for (s32 stat = 0; stat < 21; ++stat)
                    entry->encodedLevels.levels[stat] = (u8)(entry->encodedStats.values[stat] >> 10);
                return entry->encodedLevels.levels;
            }
        }
    }
    return NULL;
}
}
