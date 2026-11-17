#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "gamedata/Table00.h"
#include "gamedata/Table00Lookup.h"
#include "addon/AocSystemA.h"

extern "C" {
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));
s32 dataTable00CompareRecordIds(const void *left, const void *right);

static inline Table00RecordA *table00FindRecord(const Table00RecordA *key,
    const Table00RecordA *records, u32 count)
{
    return (Table00RecordA *)libc_bsearch(key, records, count, sizeof(*key),
        dataTable00CompareRecordIds);
}

/* Prefers add-on records, then searches the base table by identifier. */
Table00RecordA *dataTable00FindById(u16 id)
{
    Table00RecordA key;
    key.id = id;
    if (g_aocSystem->table00Records != NULL) {
        Table00RecordA *record = table00FindRecord(&key, g_aocSystem->table00Records,
            g_aocSystem->table00Count);
        if (record != NULL) {
            return record;
        }
    }
    void *table = dataTableGet(0, 1);
    void *records = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    return table00FindRecord(&key, (const Table00RecordA *)records, count);
}
}
