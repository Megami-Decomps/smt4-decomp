#include "addon/aocMain.h"
#include "addon/LookupRecord.h"
#include "gamedata/DataTable.h"

extern "C" {
extern AocSystem *g_aocSystem;
s32 lookupRecordCompareIds(const void *first, const void *second);
void *libc_bsearch(const void *key, u32 count, const void *entries, u32 stride,
                   s32 (*compare)(const void *, const void *));

static __inline AocLookupRecord *aocLookupSearch(const AocLookupRecord *key, u32 count, AocLookupRecord *entries,
                                                 s32 (*compare)(const void *, const void *))
{
    return static_cast<AocLookupRecord *>(libc_bsearch(key, count, entries, sizeof(AocLookupRecord), compare));
}

// Prefer add-on table data, falling back to the base table's first entry for invalid IDs.
Table01Record *FUN_00180118(u32 id)
{
    if (g_aocSystem->lookup.enabled) {
        AocLookupRecord key;
        key.id = id;
        AocLookupRecord *entry = aocLookupSearch(&key, g_aocSystem->lookup.count, g_aocSystem->lookup.entries,
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
