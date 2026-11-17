/* NON_MATCHING: retail addresses the id list as record + (8 + j * 2) through a register offset and keeps the loop counters in separate registers; ours differs in the inner-loop form. */
#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"

extern "C" {

/* Battle entries are 0x288 bytes; each lists up to 50 member ids at 8 (negative ends the list). */

/* Finds the slot whose id list contains `id`. */
BtlEntry *btlMainFindEntryByListedId(BtlMainState *state, s32 id)
{
    BtlEntry *records = state->entries;

    for (s32 i = 0; i < 109; i++) {
        BtlEntry *record = &records[i];
        for (s32 j = 0; j < 50; j++) {
            s32 entry = record->members.ids[j];
            if (entry < 0) {
                break;
            }
            if (entry == id) {
                return &records[i];
            }
        }
    }
    return NULL;
}

} /* extern "C" */
