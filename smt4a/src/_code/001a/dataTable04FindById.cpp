#include "common.h"
#include "gamedata/Table04Record.h"
#include "addon/AocSystemA.h"

extern "C" {

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 dataTableCompareEntryIds(const void *a, const void *b);
Table04RecordA *FUN_001b2e34(AocSystemA *system, u32 id);
u32 dataTableGet(u32 table, u32 index);
u32 dataTableGetCount(u32 table);
void *dataTableGetEntries(u32 table);

/* Finds the record with `id`: the add-on content's override first, else a search of data table 4. */
Table04RecordA *dataTable04FindById(u32 id)
{
    Table04RecordA *record = FUN_001b2e34(g_aocSystem, id);

    if (record != NULL) {
        return record;
    }
    u32 table = dataTableGet(4, 0);
    void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    Table04RecordA key;
    key.identity.id = id;
    return (Table04RecordA *)libc_bsearch(&key, entries, count, sizeof(Table04RecordA), dataTableCompareEntryIds);
}

} /* extern "C" */
