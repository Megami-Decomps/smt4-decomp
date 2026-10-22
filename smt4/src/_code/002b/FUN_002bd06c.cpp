/* NON_MATCHING: callback literal setup is scheduled before the search-key store; retail loads the callback after loading the lookup entries. */
#include "addon/aocMain.h"
#include "addon/LookupRecord.h"
#include "gamedata/DataTable.h"

extern "C" {
extern AocSystem *g_aocSystem;
s32 dataCompareLookupHalfwordKeys(const void *first, const void *second);
void *libc_bsearch(const void *key, u32 count, const void *entries, u32 stride,
                   s32 (*compare)(const void *, const void *));

// Prefer add-on table data, falling back to the base table's first entry for invalid IDs.
Table01Record *FUN_002bd06c(u16 id)
{
    if (g_aocSystem->lookup.enabled) {
        AocLookupRecord key;
        key.id = id;
        AocLookupRecord *entry = static_cast<AocLookupRecord *>(
            libc_bsearch(&key, g_aocSystem->lookup.count, g_aocSystem->lookup.entries,
                         sizeof(AocLookupRecord), dataCompareLookupHalfwordKeys));
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
