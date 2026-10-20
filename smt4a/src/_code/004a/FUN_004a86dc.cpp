#include "common.h"

extern "C" {

typedef struct SlotEntry {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 id;
    /* 0x64 */ u8 unk64[0xC8];
} SlotEntry;

typedef struct SlotTable {
    /* 0x0000 */ u8 unk0000[0x68];
    /* 0x0068 */ SlotEntry entries[22];
    /* 0x1A30 */ u8 unk1a30[0x258];
    /* 0x1C88 */ s8 order[0x1B];  /* entry index per position, negative when empty */
    /* 0x1CA3 */ u8 count;
} SlotTable;

SlotTable *gameGetSlotTable(void);

/* Finds the entry with the given id among the table's ordered entries; NULL when absent. */
SlotEntry *FUN_004a86dc(u32 id)
{
    SlotTable *table = gameGetSlotTable();
    u16 i;

    for (i = 0; i < table->count; i++) {
        s32 index = table->order[i];

        if (index >= 0) {
            SlotEntry *entry = &table->entries[index];

            if (entry->id == id) {
                return entry;
            }
        }
    }
    return NULL;
}

} /* extern "C" */
