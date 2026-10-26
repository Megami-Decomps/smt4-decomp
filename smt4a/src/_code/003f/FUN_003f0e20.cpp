/* NON_MATCHING: retail addresses the id list as record + (8 + j * 2) through a register offset and keeps the loop counters in separate registers; ours uses the [reg, #8] immediate form. */
#include "common.h"
#include "code/Code003f_Smt4a.h"

extern "C" {

/* A 0x408-byte slot record: a list of 50 ids (negative ends the list) at 8. */
struct SlotRecord {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s16 ids[50];
    /* 0x06C */ u8 unk06C[0x39C];
};

struct SlotManager {
    /* 0x0000 */ u8 unk0000[0x1FFC];
    /* 0x1FFC */ SlotRecord *records;
};

/* Finds the slot whose id list contains `id`. */
SlotRecord *FUN_003f0e20(SlotManager *manager, s32 id)
{
    SlotRecord *records = manager->records;

    for (s32 i = 0; i < 109; i++) {
        SlotRecord *record = &records[i];
        for (s32 j = 0; j < 50; j++) {
            s32 entry = record->ids[j];
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
