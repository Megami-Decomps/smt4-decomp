/* NON_MATCHING: first binary-search callback argument is stored three instructions early. */
#include "gamedata/DevilRecord.h"
#include "gamedata/DataTable.h"
#include "addon/aocMain.h"

extern "C" {
extern AocSystem *g_aocSystem;
s32 devilCompareRecordIds(const void *left, const void *right);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                  s32 (*compare)(const void *, const void *));

// Look up a demon by ID, allowing downloaded records to override the base table.
DevilSortRecord *devilGetRecord(u16 id)
{
    DevilRecord key;
    key.header.id = id;
    if (g_aocSystem->devils.records != NULL) {
        DevilSortRecord *record = static_cast<DevilSortRecord *>(
            libc_bsearch(&key, g_aocSystem->devils.records, g_aocSystem->devils.count,
                         sizeof(DevilRecord), devilCompareRecordIds));
        if (record != NULL)
            return record;
    }
    void *table = dataTableGet(0, 0);
    void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    return static_cast<DevilSortRecord *>(
        libc_bsearch(&key, entries, count, sizeof(DevilRecord), devilCompareRecordIds));
}
}
