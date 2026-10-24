#include "common.h"

extern "C" {

struct AocSystem;

/* A record of data table 4 (0x88 bytes); `id` is the search key. */
struct DataTable04Record {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x86 - 0x22];
    /* 0x86 */ u16 unk86;
};

extern AocSystem *g_aocSystem;

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 dataTableCompareEntryIds(const void *a, const void *b);
DataTable04Record *FUN_001b2e34(AocSystem *system, u32 id);
u32 dataTableGet(u32 table, u32 index);
u32 dataTableGetCount(u32 table);
void *dataTableGetEntries(u32 table);

/* Finds the record with `id`: the add-on content's override first, else a search of data table 4. */
DataTable04Record *dataTable04FindById(u32 id)
{
    DataTable04Record *record = FUN_001b2e34(g_aocSystem, id);

    if (record != NULL) {
        return record;
    }
    u32 table = dataTableGet(4, 0);
    void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    DataTable04Record key;
    key.id = id;
    return (DataTable04Record *)libc_bsearch(&key, entries, count, sizeof(DataTable04Record), dataTableCompareEntryIds);
}

} /* extern "C" */
