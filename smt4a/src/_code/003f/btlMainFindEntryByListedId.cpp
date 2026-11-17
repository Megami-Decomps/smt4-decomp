/* NON_MATCHING: retail addresses the id list as record + (8 + j * 2) through a register offset and keeps the loop counters in separate registers; ours uses the [reg, #8] immediate form. */
#include "common.h"
#include "code/Code003f_Smt4a.h"
#include "battle/BtlGlobals.h"

extern "C" {

/* A battle entry's member id list (50 ids at 8, negative ends the list), not yet in BtlCombatantEntryA. */
struct SlotRecord {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s16 ids[50];
    /* 0x06C */ u8 unk06C[0x39C];
};

/* Finds the slot whose id list contains `id`. */
BtlCombatantEntryA *btlMainFindEntryByListedId(BtlMainStateA *state, s32 id)
{
    SlotRecord *records = reinterpret_cast<SlotRecord *>(state->entries);

    for (s32 i = 0; i < 109; i++) {
        SlotRecord *record = &records[i];
        for (s32 j = 0; j < 50; j++) {
            s32 entry = record->ids[j];
            if (entry < 0) {
                break;
            }
            if (entry == id) {
                return reinterpret_cast<BtlCombatantEntryA *>(&records[i]);
            }
        }
    }
    return NULL;
}

} /* extern "C" */
