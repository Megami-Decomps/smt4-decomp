/* NON_MATCHING: the masks pointer and flag words take r3/r2 where retail uses r2/r3, and retail indexes the stat values through a pooled 0x2b6 offset. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

extern BtlMainGlobalsA g_btlMain;

/* Decodes the first combatant's 21 stat values into levels (value >> 10) when it is an eligible
 * combatant; returns the levels, or NULL. */
u8 *FUN_002cf5bc(void)
{
    if (g_btlMain.state == NULL) {
        return NULL;
    }
    BtlCombatantEntryA *entry = g_btlMain.state->entries;
    if (entry == NULL) {
        return NULL;
    }
    if (!(entry->flags & g_btlMain.combatantMasks.required)) {
        return NULL;
    }
    if (entry->flags & g_btlMain.exclusionMask) {
        return NULL;
    }
    for (s32 i = 0; i < 21; i++) {
        entry->encodedLevels.levels[i] = (u8)(entry->encodedStats.values[i] >> 10);
    }
    return entry->encodedLevels.levels;
}

} /* extern "C" */
