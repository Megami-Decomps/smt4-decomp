/* NON_MATCHING: override-aware lookup helper restores common result test/alignment; first bsearch comparator stack argument is still stored early. */
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "gamedata/Table00.h"

extern "C" {
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));
s32 dataTable00CompareRecordIds(const void *left, const void *right);
extern AocSystem *g_aocSystem;

static __inline Table00Record *findTable00RecordWithOverride(u16 id)
{
    Table00Record key;
    key.id = id;
    Table00Record *record = NULL;
    if (g_aocSystem->table00.records != NULL) {
        record = (Table00Record *)libc_bsearch(&key, g_aocSystem->table00.records,
            g_aocSystem->table00.count, sizeof(key), dataTable00CompareRecordIds);
    }
    if (record == NULL) {
        void *table = dataTableGet(0, 1);
        void *records = dataTableGetEntries(table);
        u32 recordCount = dataTableGetCount(table);
        record = (Table00Record *)libc_bsearch(&key, records, recordCount,
            sizeof(key), dataTable00CompareRecordIds);
    }
    return record;
}

/* Copies up to eight identifiers from the add-on or base record. */
s32 FUN_002e1f1c(u16 id, u16 *destination, s32 count)
{
    Table00Record *record = findTable00RecordWithOverride(id);
    if (record != NULL) {
        if (count > 8) {
            count = 8;
        }
        for (s32 i = 0; i < count; ++i) {
            destination[i] = record->copiedIds.ids[i];
        }
        return 1;
    }
    return 0;
}
}
