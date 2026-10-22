/* NON_MATCHING: mask loads are hoisted out of the loop, increasing saved registers and spilling the fallback result. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern BtlMainGlobalsA g_btlMain;
u32 recordGetScaledMaximum(u32 sourceId);

// Prefer a matching active battle participant's maximum HP over the record value.
u32 FUN_002b4dcc(u32 sourceId)
{
    BtlMainStateA *state = g_btlMain.state;
    u32 fallback = recordGetScaledMaximum(sourceId);
    if (state != NULL && state->unk0088 != 29) {
        for (s32 index = 0; index < 109; ++index) {
            BtlCombatantEntryA *entry = &state->entries[index];
            if ((entry->flags & g_btlMain.combatantMasks.required) &&
                !(entry->flags & g_btlMain.exclusionMask) &&
                (entry->flags & g_btlMain.actorCategories[1]) &&
                entry->sourceId == sourceId) {
                fallback = entry->maxHp;
                break;
            }
        }
    }
    return fallback;
}
}
