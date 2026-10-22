/* NON_MATCHING: The global address load moves before the prologue, and the add-on search stores its comparator argument early. */
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "gamedata/DevilRecordA.h"

extern "C" {
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));
s32 FUN_0018449c(const void *left, const void *right);
extern AocSystemA *g_aocSystem;

/* Looks up a demon by ID, preferring add-on data over the base records. */
DevilRecordA *FUN_00184310(u32 id)
{
    DevilTableRecordA key;
    key.header.id = (u16)id;
    if (g_aocSystem->devils.records != NULL) {
        DevilRecordA *record = (DevilRecordA *)libc_bsearch(&key, g_aocSystem->devils.records,
            g_aocSystem->devils.count, sizeof(key), FUN_0018449c);
        if (record != NULL) {
            return record;
        }
    }
    void *table = dataTableGet(0, 0);
    void *records = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    return (DevilRecordA *)libc_bsearch(&key, records, count, sizeof(key), FUN_0018449c);
}
}
