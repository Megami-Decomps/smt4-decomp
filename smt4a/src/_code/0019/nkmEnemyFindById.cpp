/* The definition takes a u16 id; callers see the u32 prototype from gamedata/Table00Lookup.h (see the comment there). */
#define TABLE00_OWN_PROTOTYPE
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "gamedata/NkmEnemyRecord.h"
#include "gamedata/NkmEnemyLookup.h"
#include "addon/AocSystemA.h"

extern "C" {
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));
s32 dataTable00CompareRecordIds(const void *left, const void *right);

static inline NkmEnemyRecordA *table00FindRecord(const NkmEnemyRecordA *key,
    const NkmEnemyRecordA *records, u32 count)
{
    return (NkmEnemyRecordA *)libc_bsearch(key, records, count, sizeof(*key),
        dataTable00CompareRecordIds);
}

/* Prefers add-on records, then searches the base table by identifier. */
NkmEnemyRecordA *nkmEnemyFindById(u16 id)
{
    NkmEnemyRecordA key;
    key.id = id;
    if (g_aocSystem->table00Records != NULL) {
        NkmEnemyRecordA *record = table00FindRecord(&key, g_aocSystem->table00Records,
            g_aocSystem->table00Count);
        if (record != NULL) {
            return record;
        }
    }
    void *table = dataTableGet(0, 1);
    void *records = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    return table00FindRecord(&key, (const NkmEnemyRecordA *)records, count);
}
}
