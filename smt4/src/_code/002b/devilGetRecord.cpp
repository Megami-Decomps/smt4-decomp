#include "gamedata/DevilRecord.h"
#include "gamedata/DataTable.h"
#include "addon/aocMain.h"
#include "addon/AocSystem.h"

extern "C" {
s32 devilCompareRecordIds(const void *left, const void *right);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                  s32 (*compare)(const void *, const void *));

static __inline DevilRecord *searchDevils(const DevilRecord *key, const void *records, u32 count,
                                              s32 (*compare)(const void *, const void *))
{
    return static_cast<DevilRecord *>(libc_bsearch(key, records, count, sizeof(DevilRecord), compare));
}

// Look up a demon by ID, allowing downloaded records to override the base table.
DevilRecord *devilGetRecord(u16 id)
{
    DevilRecord key;
    key.id = id;
    if (g_aocSystem->devils != NULL) {
        DevilRecord *record = searchDevils(&key, g_aocSystem->devils, g_aocSystem->devilCount,
                                               devilCompareRecordIds);
        if (record != NULL)
            return record;
    }
    void *table = dataTableGet(0, 0);
    void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    return searchDevils(&key, entries, count, devilCompareRecordIds);
}
}
