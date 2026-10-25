#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "gamedata/Table00.h"

extern "C" {
extern AocSystem *g_aocSystem;
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));
s32 dataTable00CompareRecordIds(const void *left, const void *right);
u32 FUN_0038971c(AocSystem *system, u32 id);

static __inline Table00Record *searchTable00(const Table00Record *key, const void *records, u32 count,
                                             s32 (*compare)(const void *, const void *))
{
    return (Table00Record *)libc_bsearch(key, records, count, sizeof(Table00Record), compare);
}

/* Finds an allowed add-on portrait record, otherwise searches the base portrait table. */
Table00Record *FUN_0031bbc4(u32 id)
{
    Table00Record key;
    key.id = static_cast<u16>(id);
    if (g_aocSystem->table00.records != NULL) {
        Table00Record *record = searchTable00(&key,
            g_aocSystem->table00.records, g_aocSystem->table00.count, dataTable00CompareRecordIds);
        if (record != NULL && FUN_0038971c(g_aocSystem, id) != 0) {
            return record;
        }
    }
    void *table = dataTableGet(0, 1);
    void *records = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    return searchTable00(&key, records, count, dataTable00CompareRecordIds);
}
}
