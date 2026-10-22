/* NON_MATCHING: The add-on comparator stack argument is stored three instructions earlier than retail. */
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "gamedata/Table00.h"

extern "C" {
extern AocSystem *g_aocSystem;
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));
s32 dataTable00CompareRecordIds(const void *left, const void *right);
u32 FUN_0038971c(AocSystem *system, u32 id);

/* Finds an allowed add-on portrait record, otherwise searches the base portrait table. */
Table00Record *FUN_0031bbc4(u32 id)
{
    Table00Record key;
    key.id = static_cast<u16>(id);
    if (g_aocSystem->table00.records != NULL) {
        Table00Record *record = static_cast<Table00Record *>(libc_bsearch(&key,
            g_aocSystem->table00.records, g_aocSystem->table00.count, sizeof(key), dataTable00CompareRecordIds));
        if (record != NULL && FUN_0038971c(g_aocSystem, id) != 0) {
            return record;
        }
    }
    void *table = dataTableGet(0, 1);
    void *records = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    return static_cast<Table00Record *>(libc_bsearch(&key, records, count, sizeof(key), dataTable00CompareRecordIds));
}
}
