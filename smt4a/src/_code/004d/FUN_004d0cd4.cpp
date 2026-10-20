/* NON_MATCHING: loop shape only: retail counts the ordered slots with a plain signed index and a separate counter (`add r0; cmp r0, #24; add r1; blt`); built needs a u16 index (extra uxth, bcc) to keep the two counters apart. */
#include "common.h"

extern "C" {

typedef struct SlotEntry {
    /* 0x000 */ u8 data[300];
} SlotEntry;

typedef struct SlotTable {
    /* 0x0000 */ u8 unk0000[0x68];
    /* 0x0068 */ SlotEntry entries[22];
    /* 0x1A30 */ u8 unk1a30[0x258];
    /* 0x1C88 */ s8 order[0x1B];
    /* 0x1CA3 */ u8 count;
} SlotTable;

SlotTable *gameGetSlotTable(void);
s32 FUN_004bd730(SlotEntry *entry);

/* Returns the index of the first free slot entry when the ordered slots are not all in use, else -1. */
s32 FUN_004d0cd4(void)
{
    SlotTable *table = gameGetSlotTable();
    SlotTable *orderTable = gameGetSlotTable();
    s32 used = 0;
    u16 i = 0;
    s32 index;

    do {
        if (orderTable->order[i] < 0) {
            break;
        }
        i++;
        used++;
    } while (i < 0x18);
    if (table->count > used) {
        SlotTable *entries = gameGetSlotTable();

        index = 0;
        do {
            if (FUN_004bd730(&entries->entries[index]) == 0) {
                return index;
            }
            index++;
        } while (index < 0x18);
    }
    return -1;
}

} /* extern "C" */
