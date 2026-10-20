#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 unk8;
} Entry;

typedef struct EntryTable {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Entry *entries;
    /* 0x8 */ u8 unk8[4];
    /* 0xC */ u8 enabled;
} EntryTable;

/* First word of entry index+1, or 0 when the table is disabled. */
u32 FUN_001522ac(EntryTable *table, s32 index)
{
    u32 value;

    if (table->enabled == 0) {
        value = 0;
    } else {
        value = table->entries[index + 1].unk0;
    }
    return value;
}

} /* extern "C" */
