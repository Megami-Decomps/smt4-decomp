/* The definition takes a u16 id; callers see the u32 prototype from gamedata/NkmBaseRecord.h (see the comment there). */
#define NKM_BASE_RECORD_OWN_PROTOTYPE
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/DataTable.h"
#include "addon/aocMain.h"
#include "addon/AocSystem.h"

extern "C" {
s32 devilCompareRecordIds(const void *left, const void *right);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                  s32 (*compare)(const void *, const void *));

static __inline NkmBaseRecord *searchDevils(const NkmBaseRecord *key, const void *records, u32 count,
                                              s32 (*compare)(const void *, const void *))
{
    return static_cast<NkmBaseRecord *>(libc_bsearch(key, records, count, sizeof(NkmBaseRecord), compare));
}

// Look up a demon by ID, allowing downloaded records to override the base table.
NkmBaseRecord *nkmBaseGetRecord(u16 id)
{
    NkmBaseRecord key;
    key.id = id;
    if (g_aocSystem->devils != NULL) {
        NkmBaseRecord *record = searchDevils(&key, g_aocSystem->devils, g_aocSystem->devilCount,
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
