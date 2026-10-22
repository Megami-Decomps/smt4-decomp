/* NON_MATCHING: the entry array base and the 0x60 id offset swap registers (r5/r4) in the unrolled search. */
#include "common.h"

extern "C" {

typedef struct IdEntry {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u16 id;
    /* 0x62 */ u8 unk62[0x1e];
} IdEntry;

typedef struct IdEntryTable {
    /* 0x000 */ u8 unk000[0x3a8];
    /* 0x3A8 */ s32 count;
    /* 0x3AC */ IdEntry *entries;
} IdEntryTable;

/* Returns the entry with id `id`, or NULL. */
IdEntry *FUN_0014148c(IdEntryTable *table, u32 id)
{
    for (s32 i = 0; i < table->count; i++) {
        if (table->entries[i].id == id) {
            return &table->entries[i];
        }
    }
    return NULL;
}

} /* extern "C" */
