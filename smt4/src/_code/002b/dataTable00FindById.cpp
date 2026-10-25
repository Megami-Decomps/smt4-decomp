#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "gamedata/Table00.h"

extern "C" {
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));
s32 dataTable00CompareRecordIds(const void *left, const void *right);
extern AocSystem *g_aocSystem;

static inline Table00Record *table00FindRecord(const Table00Record *key,
    const Table00Record *records, u32 count)
{
    return (Table00Record *)libc_bsearch(key, records, count, sizeof(*key),
        dataTable00CompareRecordIds);
}

/* Prefers add-on records, then searches the base table by identifier. */
Table00Record *dataTable00FindById(u16 id)
{
    Table00Record key;
    key.id = id;
    if (g_aocSystem->table00.records != NULL) {
        Table00Record *record = table00FindRecord(&key, g_aocSystem->table00.records,
            g_aocSystem->table00.count);
        if (record != NULL) {
            return record;
        }
    }
    void *table = dataTableGet(0, 1);
    void *records = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    return table00FindRecord(&key, (const Table00Record *)records, count);
}
}
