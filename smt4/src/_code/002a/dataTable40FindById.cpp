#include "common.h"
#include "gamedata/DataTable.h"

extern "C" {

struct AocSystem;

/* A record of data table 4/0 (0x68 bytes); `id` at 0x20 is the search key. */
struct DataTable40Record {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x68 - 0x22];
};

extern AocSystem *g_aocSystem;

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 dataCompareUnsignedRecordKeys(const void *a, const void *b);
DataTable40Record *FUN_0014ca60(AocSystem *system, u32 id);


/* Finds the record with `id`: the add-on content's override first, else a search of data table 4/0. */
DataTable40Record *dataTable40FindById(u32 id)
{
    DataTable40Record *record = FUN_0014ca60(g_aocSystem, id);

    if (record != NULL) {
        return record;
    }
    void *table = dataTableGet(4, 0);
    void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    DataTable40Record key;
    key.id = id;
    return (DataTable40Record *)libc_bsearch(&key, entries, count, sizeof(DataTable40Record), dataCompareUnsignedRecordKeys);
}

} /* extern "C" */
