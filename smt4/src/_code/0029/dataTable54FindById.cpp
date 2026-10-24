#include "common.h"

extern "C" {

struct AocSystem;

/* A record of data table 5/4 (0x1c bytes); `id` at 0 is the search key. */
struct DataTable54Record {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0x1c - 2];
};

extern AocSystem *g_aocSystem;

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 recordCompareUnsignedValue(const void *a, const void *b);
DataTable54Record *FUN_002c9df8(AocSystem *system, u32 id);
u32 dataTableGet(u32 table, u32 index);
u32 dataTableGetCount(u32 table);
void *dataTableGetEntries(u32 table);

/* Finds the record with `id` in data table 5/4 (the add-on override stub finds nothing in this build). */
DataTable54Record *dataTable54FindById(u32 id)
{
    DataTable54Record *record = FUN_002c9df8(g_aocSystem, id);

    if (record != NULL) {
        return record;
    }
    u32 table = dataTableGet(5, 4);
    void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    DataTable54Record key;
    key.id = id;
    return (DataTable54Record *)libc_bsearch(&key, entries, count, sizeof(DataTable54Record), recordCompareUnsignedValue);
}

} /* extern "C" */
