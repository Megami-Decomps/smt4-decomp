/* NON_MATCHING: Search-setup register scheduling differs; retail also lacks a symbol for the comparison callback at 0x165390. */
#include "addon/aocMain.h"
#include "addon/LookupRecord.h"
#include "gamedata/DataTable.h"

extern "C" {
extern AocSystemA *g_aocSystem;
extern u8 LAB_00165390;
typedef s32 (*LookupComparator)(const void *, const void *);
void *libc_bsearch(const void *key, u32 count, const void *entries, u32 stride,
                   s32 (*compare)(const void *, const void *));

// Prefer add-on table data, falling back to the base table's first entry for invalid IDs.
Table01Record *FUN_00180118(u16 id)
{
    if (g_aocSystem->lookup.enabled) {
        AocLookupRecord key;
        key.id = id;
        AocLookupRecord *entry = static_cast<AocLookupRecord *>(
            libc_bsearch(&key, g_aocSystem->lookup.count, g_aocSystem->lookup.entries,
                         sizeof(AocLookupRecord), reinterpret_cast<LookupComparator>(&LAB_00165390)));
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