/* NON_MATCHING: The add-on search stores its comparator argument three instructions earlier than retail. */
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "gamedata/Table00.h"

extern "C" {
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));
s32 FUN_001ab89c(const void *left, const void *right);
extern AocSystemA *g_aocSystem;

/* Prefers add-on records, then searches the base table by identifier. */
Table00Record *dataTable00FindById(u16 id)
{
    Table00Record key;
    key.id = id;
    if (g_aocSystem->table00.records != NULL) {
        Table00Record *record = (Table00Record *)libc_bsearch(&key, g_aocSystem->table00.records,
            g_aocSystem->table00.count, sizeof(key), FUN_001ab89c);
        if (record != NULL) {
            return record;
        }
    }
    void *table = dataTableGet(0, 1);
    void *records = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    return (Table00Record *)libc_bsearch(&key, records, count, sizeof(key), FUN_001ab89c);
}
}
