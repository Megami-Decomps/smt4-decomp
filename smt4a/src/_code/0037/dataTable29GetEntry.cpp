#include "shard/Shard0037.h"

extern "C" {

typedef struct Entry10 {
    /* 0x00 */ u8 data[0x10];
} Entry10;

extern void *dataTableGet(u32 index, u32 type);
extern Entry10 *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x29 (type 5), or NULL when out of range. */
Entry10 *dataTable29GetEntry(u32 index)
{
    void *table = dataTableGet(0x29, 5);
    Entry10 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
