#include "common.h"

extern "C" {

typedef struct IndexTable {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u32 *entries;
} IndexTable;

/* Entry `index` of the table's entry array. */
u32 FUN_00304d10(IndexTable *table, int index)
{
    u32 *entry = &table->entries[index];

    return *entry;
}

} /* extern "C" */
