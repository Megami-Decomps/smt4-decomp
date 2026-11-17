#include "addon/aocMain.h"
#include "addon/LookupRecord.h"
#include "gamedata/DataTable.h"
#include "addon/AocSystemA.h"

extern "C" {
s32 lookupRecordCompareIds(const void *first, const void *second);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));

static __inline AocLookupRecord *aocLookupSearch(const AocLookupRecord *key, AocLookupRecord *records, u32 count,
                                                 s32 (*compare)(const void *, const void *))
{
    return static_cast<AocLookupRecord *>(libc_bsearch(key, records, count, sizeof(AocLookupRecord), compare));
}

// Prefer add-on table data, falling back to the base table's first entry for invalid IDs.
Table01Record *dataTable01GetRecordWithAocOverride(u32 id)
{
    if (g_aocSystem->table00Records != NULL) { /* retail tests table 0's add-on records here */
        AocLookupRecord key;
        key.id = id;
        AocLookupRecord *entry = aocLookupSearch(&key, g_aocSystem->table01Records, g_aocSystem->table01Count,
                                                    lookupRecordCompareIds);
        if (entry != NULL)
            return &entry->record;
    }
    void *table = dataTableGet(1, 1);
    Table01Record *entries = static_cast<Table01Record *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);
    if (count > id)
        return &entries[id];
    return entries;
}
}
