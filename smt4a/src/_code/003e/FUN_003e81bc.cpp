/* NON_MATCHING: retail loads g_btlMain into ip before the push and uses r5/r6 for the required mask.
 * The build instead keeps the global base in r5 and assigns the mask and entry pointer differently. */
#include "battle/BtlGlobals.h"
#include "shard/W5_W5Match7_BattleMask.h"

/* Finds the first eligible, non-excluded enemy in the encounter's enemy slots. */
extern "C" BtlCombatantEntryA *FUN_003e81bc(BtlMainStateA *state)
{
    enum { FIRST_ENEMY_SLOT = 4, END_ENEMY_SLOT = 54, ENEMY_CATEGORY = 2 };
    const BtlMainGlobalsA *battle = &g_btlMain;
    BtlCombatantEntryA *entries = state->entries;
    const u64 required = battle->combatantMasks.required;

    for (s32 slot = FIRST_ENEMY_SLOT; slot < END_ENEMY_SLOT; ++slot) {
        BtlCombatantEntryA *entry = &entries[slot];
        const u64 flags = entry->flags;

        if ((flags & required) != 0 &&
            !battleMaskIntersects(flags, battle->exclusionMask) &&
            (flags & battle->actorCategories[ENEMY_CATEGORY]) != 0) {
            return entry;
        }
    }
    return NULL;
}
