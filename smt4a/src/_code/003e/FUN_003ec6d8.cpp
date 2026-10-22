/* NON_MATCHING: invariant masks are hoisted and the canonical entry access removes retail's null-address check. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern BtlMainGlobalsA g_btlMain;

bool FUN_003ec6d8(const BtlMainStateA *state, u32 id)
{
    for (s32 index = 0; index < 109; ++index) {
        const BtlCombatantEntryA *unit = &state->entries[index];
        u64 flags = unit->flags;
        if ((flags & g_btlMain.combatantMasks.required) &&
            !(flags & g_btlMain.exclusionMask) &&
            (flags & g_btlMain.actorCategories[1]) && unit->id == id) {
            return true;
        }
    }
    return false;
}
}
