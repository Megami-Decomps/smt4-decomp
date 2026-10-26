/* NON_MATCHING: code matches retail instruction for instruction; only the literal pool order differs (retail g_aocSystem then FUN_0018449c, built the reverse). */
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "gamedata/DevilRecordA.h"
#include "code/Code0018_VariantA_DevilRecordA.h"

extern "C" {
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));
s32 FUN_0018449c(const void *left, const void *right);
extern AocSystemA *g_aocSystem;

static __inline DevilRecordA *searchDevils(const DevilTableRecordA *key, const void *records, u32 count,
                                           s32 (*compare)(const void *, const void *))
{
    return (DevilRecordA *)libc_bsearch(key, records, count, sizeof(DevilTableRecordA), compare);
}

/* Looks up a demon by ID, preferring add-on data over the base records. */
DevilRecordA *FUN_00184310(u32 id)
{
    DevilTableRecordA key;
    key.header.id = (u16)id;
    AocSystemA *system = g_aocSystem;
    if (system->devils.records != NULL) {
        DevilRecordA *record =
            searchDevils(&key, system->devils.records, system->devils.count, FUN_0018449c);
        if (record != NULL) {
            return record;
        }
    }
    void *table = dataTableGet(0, 0);
    void *records = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    return searchDevils(&key, records, count, FUN_0018449c);
}
}
