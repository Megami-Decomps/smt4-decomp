/* The definition takes a u16 id; callers see the u32 prototype from shard/W6_W6Match8_DevilRecordA.h (see the comment there). */
#define DEVIL_RECORD_A_OWN_PROTOTYPE
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "gamedata/DevilRecordA.h"

extern "C" {
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));
s32 devilCompareRecordIds(const void *left, const void *right);
extern AocSystemA *g_aocSystem;

static __inline DevilRecordA *searchDevils(const DevilTableRecordA *key, const void *records, u32 count,
                                           s32 (*compare)(const void *, const void *))
{
    return (DevilRecordA *)libc_bsearch(key, records, count, sizeof(DevilTableRecordA), compare);
}

/* Looks up a demon by ID, preferring add-on data over the base records. */
DevilRecordA *FUN_00184310(u16 id)
{
    DevilTableRecordA key;
    key.header.id = id;
    if (g_aocSystem->devils.records != NULL) {
        DevilRecordA *record =
            searchDevils(&key, g_aocSystem->devils.records, g_aocSystem->devils.count, devilCompareRecordIds);
        if (record != NULL) {
            return record;
        }
    }
    void *table = dataTableGet(0, 0);
    void *records = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    return searchDevils(&key, records, count, devilCompareRecordIds);
}
}
