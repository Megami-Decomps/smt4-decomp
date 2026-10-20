#include "common.h"

extern "C" {

typedef struct TableEntry {
    /* 0x00 */ u8 unk00[0x5C];
} TableEntry;

void *dataTableGet(u32 table, u8 section);
TableEntry *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);

/* Returns entry `index` of data table 10; the section is picked from `kind`. NULL if the index is out of range. */
TableEntry *FUN_002b6a54(s32 kind, u32 index)
{
    u8 section = 0;
    void *table;
    TableEntry *entries;

    switch (kind) {
    case 3:
        section = 0;
        break;
    case 4:
        section = 1;
        break;
    case 5:
        section = 2;
        break;
    case 92:
        section = 4;
        break;
    case 93:
        section = 3;
        break;
    }
    table = dataTableGet(10, section);
    entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    return NULL;
}

} /* extern "C" */
