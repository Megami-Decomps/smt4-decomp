#include "common.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTable40.h"
#include "addon/AocSystem.h"

extern "C" {

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 dataCompareUnsignedRecordKeys(const void *a, const void *b);
Table04Record *dataTable40BsearchRecord(AocSystem *system, u32 id);


/* Finds the record with `id`: the add-on content's override first, else a search of data table 4/0. */
Table04Record *dataTable40FindById(u32 id)
{
    Table04Record *record = dataTable40BsearchRecord(g_aocSystem, id);

    if (record != NULL) {
        return record;
    }
    void *table = dataTableGet(4, 0);
    void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    Table04Record key;
    key.identity.id = id;
    return static_cast<Table04Record *>(libc_bsearch(&key, entries, count, sizeof(Table04Record), dataCompareUnsignedRecordKeys));
}

} /* extern "C" */
