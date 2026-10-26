#include "common.h"

extern "C" {

typedef struct IdEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x1A];
} IdEntry;

typedef struct IdEntryTable {
    /* 0x000 */ u8 unk000[0x3C0];
    /* 0x3C0 */ s32 count;
    /* 0x3C4 */ IdEntry *entries;
} IdEntryTable;

/* Return the entry with the given id, or NULL. */
IdEntry *FUN_001762d4(IdEntryTable *table, u32 id)
{
    for (s32 i = 0; i < table->count; i++) {
        if (table->entries[i].id == id) {
            return &table->entries[i];
        }
    }
    return NULL;
}

} /* extern "C" */
