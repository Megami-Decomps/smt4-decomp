#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 member08[0x8C];
} Entry;                        /* 0x94 */

u32 dataTableGet(u32 table, u32 arg);
u32 dataTableGetCount(u32 table);
Entry *dataTableGetEntries(void);

/* Returns the address of the member at 8 of entry `index` of data table 0x24 (0x94 bytes per entry), or NULL when the index is out of range. */
u8 *dataTableGetEntry24Member(u32 index)
{
    u32 table;
    Entry *entries;
    u32 count;
    u8 *member;

    table = dataTableGet(0x24, 0);
    entries = dataTableGetEntries();
    count = dataTableGetCount(table);
    if (index >= count) {
        member = NULL;
    } else {
        member = entries[index].member08;
    }
    return member;
}

} /* extern "C" */
