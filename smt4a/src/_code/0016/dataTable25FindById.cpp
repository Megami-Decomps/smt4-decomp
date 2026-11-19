#include "gamedata/DataTable25Apocalypse.h"
#include "addon/AocSystemA.h"

extern "C" {

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 signedKeyRecordCompare(const void *a, const void *b);
u32 dataTableGet(u32 table, u32 index);
u32 dataTableGetCount(u32 table);
void *dataTableGetEntries(u32 table);

/* Finds the record with `id`: the add-on content's override first, else a search of data table 25. */
DataTable25RecordA *dataTable25FindById(u32 id)
{
    DataTable25RecordA *record = aocPackageFindRecordById(g_aocSystem, id);

    if (record != NULL) {
        return record;
    }
    u32 table = dataTableGet(25, 0);
    void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    DataTable25RecordA key;
    key.id = id;
    return (DataTable25RecordA *)libc_bsearch(&key, entries, count, sizeof(DataTable25RecordA), signedKeyRecordCompare);
}

} /* extern "C" */
