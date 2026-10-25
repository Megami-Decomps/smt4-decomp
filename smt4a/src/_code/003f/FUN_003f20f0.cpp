/* NON_MATCHING: Exclusion-mask loads are hoisted out of the loop, increasing the saved-register set; retail loads them after the required-mask test. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern BtlMainGlobalsA g_btlMain;

/* Finds an unexcluded combatant with the required flags and a nonzero query value. */
u32 FUN_003f20f0(const BtlMainStateA *state)
{
    for (s32 i = 0; i < 109; ++i) {
        const BtlCombatantEntryA *entry = &state->entries[i];
        if ((g_btlMain.combatantMasks.required & entry->flags) != 0 &&
            (entry->flags & g_btlMain.exclusionMask) == 0 && entry->queryValue.unk334 != 0) {
            return 1;
        }
    }
    return 0;
}
}
