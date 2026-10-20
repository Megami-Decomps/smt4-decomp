#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u32 value;
    /* 0x04 */ u32 unk04;
} Entry;

typedef struct Table {
    /* 0x000 */ u8 unk000[0x780];
    /* 0x780 */ Entry entries[1];
} Table;
extern Table *g_mapTable;

/* Returns the first word of entry `index` (8 bytes each) of the table at 0x780. */
u32 mapTableGetValue(s32 index)
{
    return g_mapTable->entries[index].value;
}

} /* extern "C" */
