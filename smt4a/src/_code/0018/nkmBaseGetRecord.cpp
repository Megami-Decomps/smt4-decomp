/* The definition takes a u16 id; callers see the u32 prototype from gamedata/NkmBaseRecordA.h (see the comment there). */
#define NKM_BASE_RECORD_A_OWN_PROTOTYPE
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "gamedata/NkmBaseRecordA.h"
#include "addon/AocSystemA.h"

extern "C" {
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));
s32 devilCompareRecordIds(const void *left, const void *right);

static __inline NkmBaseRecordA *searchDevils(const NkmBaseRecordA *key, const void *records, u32 count,
                                           s32 (*compare)(const void *, const void *))
{
    return (NkmBaseRecordA *)libc_bsearch(key, records, count, sizeof(NkmBaseRecordA), compare);
}

/* Looks up a demon by ID, preferring add-on data over the base records. */
NkmBaseRecordA *nkmBaseGetRecord(u16 id)
{
    NkmBaseRecordA key;
    key.id = id;
    if (g_aocSystem->devils != NULL) {
        NkmBaseRecordA *record =
            searchDevils(&key, g_aocSystem->devils, g_aocSystem->devilCount, devilCompareRecordIds);
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
