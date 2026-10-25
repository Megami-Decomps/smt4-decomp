/* NON_MATCHING: retail addresses the id list as record + (8 + j * 2) through a register offset and keeps the loop counters in separate registers; ours differs in the inner-loop form. */
#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {

/* A 0x288-byte slot record: a list of 50 ids (negative ends the list) at 8. */

struct SlotManager {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BtlEntry *records;
};

/* Finds the slot whose id list contains `id`. */
BtlEntry *btlMainFindEntryByListedId(SlotManager *manager, s32 id)
{
    BtlEntry *records = manager->records;

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
