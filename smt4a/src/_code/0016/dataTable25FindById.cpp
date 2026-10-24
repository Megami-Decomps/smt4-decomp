#include "common.h"

extern "C" {

struct AocSystem;

/* A record of data table 25 (0x28 bytes); `id` at 0x20 is the search key. */
struct DataTable25Record {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x28 - 0x22];
};

extern AocSystem *g_aocSystem;

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 signedKeyRecordCompare(const void *a, const void *b);
DataTable25Record *FUN_00175f90(AocSystem *system, u32 id);
u32 dataTableGet(u32 table, u32 index);
u32 dataTableGetCount(u32 table);
void *dataTableGetEntries(u32 table);

/* Finds the record with `id`: the add-on content's override first, else a search of data table 25. */
DataTable25Record *dataTable25FindById(u32 id)
{
    DataTable25Record *record = FUN_00175f90(g_aocSystem, id);

    if (record != NULL) {
        return record;
    }
    u32 table = dataTableGet(25, 0);
    void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    DataTable25Record key;
    key.id = id;
    return (DataTable25Record *)libc_bsearch(&key, entries, count, sizeof(DataTable25Record), signedKeyRecordCompare);
}

} /* extern "C" */
