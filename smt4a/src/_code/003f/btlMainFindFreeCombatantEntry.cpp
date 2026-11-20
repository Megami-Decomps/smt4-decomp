#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

/* Returns the first free combatant entry from slot 4 to slot 53, or NULL if all are taken. */
BtlCombatantEntryA *btlMainFindFreeCombatantEntry(BtlMainStateA *state)
{
    BtlCombatantEntryA *found = NULL;

    for (s16 index = 4; index < 54; index++) {
        if ((g_btlMain.combatantMasks.required & state->entries[index].flags) == 0) {
            found = &state->entries[index];
            break;
        }
    }
    return found;
}

} /* extern "C" */
