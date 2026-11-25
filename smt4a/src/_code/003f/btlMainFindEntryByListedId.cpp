/* NON_MATCHING: retail preserves the outer index and recomputes the record pointer on a hit.
 * Its inner scan also uses a register offset for the ID load. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "code/Code003f_Smt4a.h"
#include "battle/BtlGlobals.h"

extern "C" {

/* Finds the slot whose id list contains `id`. */
BtlCombatantEntryA *btlMainFindEntryByListedId(BtlMainStateA *state, s32 id)
{
    for (s32 i = 0; i < 109; i++) {
        BtlCombatantEntryA *record = &state->entries[i];
        for (s32 j = 0; j < 50; j++) {
            s32 entry = record->ids[j];
            if (entry < 0) {
                break;
            }
            if (entry == id) {
                return record;
            }
        }
    }
    return NULL;
}

} /* extern "C" */
