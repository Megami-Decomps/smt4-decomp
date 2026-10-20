#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[1];
    /* 0x01 */ u8 member[0x63];
} Entry;                        /* 100 bytes */

u32 dataTableGet(u32 table, u32 arg);
u32 dataTableGetCount(u32 table);
Entry *dataTableGetEntries(void);

/* Returns the address of the member at 0x1 of entry `index` of data table (0x16, 2) (100 bytes per entry), or NULL when the index is out of range. */
u8 *FUN_002f8e98(u32 index)
{
    u32 table;
    Entry *entries;
    u32 count;
    u8 *member;

    table = dataTableGet(0x16, 2);
    entries = dataTableGetEntries();
    count = dataTableGetCount(table);
    if (index < count) {
        member = entries[index].member;
    } else {
        member = NULL;
    }
    return member;
}

} /* extern "C" */
