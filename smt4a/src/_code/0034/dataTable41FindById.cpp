#include "common.h"

extern "C" {

struct AocSystem;

/* A record of data table 4/1 (0x48 bytes); `id` at 0x20 is the search key. */
struct DataTable41Record {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x48 - 0x22];
};

extern AocSystem *g_aocSystem;

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 FUN_001ac8dc(const void *a, const void *b);
DataTable41Record *FUN_001b2e78(AocSystem *system, u32 id);
u32 dataTableGet(u32 table, u32 index);
u32 dataTableGetCount(u32 table);
void *dataTableGetEntries(u32 table);

/* Finds the record with `id`: the add-on content's override first, else a search of data table 4/1. */
DataTable41Record *dataTable41FindById(u32 id)
{
    DataTable41Record *record = FUN_001b2e78(g_aocSystem, id);

    if (record != NULL) {
        return record;
    }
    u32 table = dataTableGet(4, 1);
    void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    DataTable41Record key;
    key.id = id;
    return (DataTable41Record *)libc_bsearch(&key, entries, count, sizeof(DataTable41Record), FUN_001ac8dc);
}

} /* extern "C" */
