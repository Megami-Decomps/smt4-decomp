#include "common.h"

extern "C" {

typedef struct Entry002c1ce4 {
    /* 0x00 */ u8 data[0x30];
} Entry002c1ce4;

typedef struct AocSystem002c1ce4 AocSystem002c1ce4;

u8 *entryListFindById(AocSystem002c1ce4 *aoc, u32 id);
void *dataTableGet(s32 table, s32 slot);
Entry002c1ce4 *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);

extern AocSystem002c1ce4 *g_aocSystem; /* 0x570280 */

/* Address of entry `id`'s data (add-on content first, else data table 1; `second` selects the part at +0x10). */
u8 *contentEntryDataGet(u32 id, s32 second)
{
    u8 *result = entryListFindById(g_aocSystem, id);
    void *table;
    Entry002c1ce4 *entries;
    u32 count;

    if (result != NULL) {
        return result + 2;
    }
    table = dataTableGet(1, 0);
    entries = dataTableGetEntries(table);
    count = dataTableGetCount(table);
    if (count > id) {
        result = (u8 *)&entries[id];
        if (second != 0) {
            result += 0x10;
        }
    } else {
        result = (u8 *)entries;
    }
    return result;
}

} /* extern "C" */
