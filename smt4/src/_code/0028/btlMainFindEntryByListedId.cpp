/* NON_MATCHING: retail preserves the outer index and recomputes the record pointer on a hit.
 * Its inner scan also uses a register offset for the ID load. */
#include "common.h"
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"

extern "C" {

/* Battle entries are 0x288 bytes; each lists up to 50 member ids at 8 (negative ends the list). */

/* Finds the slot whose id list contains `id`. */
BtlEntry *btlMainFindEntryByListedId(BtlMainState *state, s32 id)
{
    for (s32 i = 0; i < 109; i++) {
        BtlEntry *record = &state->entries[i];
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
