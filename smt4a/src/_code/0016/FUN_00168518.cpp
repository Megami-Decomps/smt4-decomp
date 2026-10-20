#include "common.h"

extern "C" {

typedef struct Entry00168518 {
    /* 0x00 */ u8 unk00[0x68];
} Entry00168518;

void *dataTableGet(s32 table, s32 slot);
Entry00168518 *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);

/* Entry `index` of the category's data table (table 10), or 0 past its end. The category picks the section: 5 -> 2, 4 -> 1, 0x5c -> 4, 0x5d -> 3, others 0. */
Entry00168518 *FUN_00168518(s32 category, u32 index)
{
    s32 section = 0;
    void *table;
    Entry00168518 *entries;
    u32 count;

    switch (category) {
    case 5:
        section = 2;
        break;
    case 3:
        break;
    case 4:
        section = 1;
        break;
    case 0x5c:
        section = 4;
        break;
    case 0x5d:
        section = 3;
        break;
    }
    table = dataTableGet(10, section);
    entries = dataTableGetEntries(table);
    count = dataTableGetCount(table);
    if (index < count) {
        return &entries[index];
    }
    return NULL;
}

} /* extern "C" */
