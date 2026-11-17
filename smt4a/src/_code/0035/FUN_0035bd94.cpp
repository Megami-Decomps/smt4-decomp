#include "addon/aocMain.h"
#include "gamedata/Table00.h"
#include "gamedata/DataTable.h"
#include "addon/AocSystemA.h"

extern "C" {
s32 dataTable00CompareRecordIds(const void *left, const void *right);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));

static __inline Table00RecordA *searchTable00(const Table00RecordA *key, const void *records, u32 count,
                                             s32 (*compare)(const void *, const void *))
{
    return static_cast<Table00RecordA *>(libc_bsearch(key, records, count, sizeof(Table00RecordA), compare));
}

static __inline Table00RecordA *findTable00RecordWithOverride(u16 id)
{
    Table00RecordA key;
    key.id = id;
    Table00RecordA *record = NULL;
    if (g_aocSystem->table00Records != NULL) {
        record = searchTable00(&key, g_aocSystem->table00Records, g_aocSystem->table00Count, dataTable00CompareRecordIds);
    }
    if (record == NULL) {
        void *table = dataTableGet(0, 1);
        void *entries = dataTableGetEntries(table);
        u32 entryCount = dataTableGetCount(table);
        record = searchTable00(&key, entries, entryCount, dataTable00CompareRecordIds);
    }
    return record;
}

// Copy up to eight skill IDs, preferring the downloadable table over the base table.
s32 FUN_0035bd94(u16 id, u16 *skills, s32 count)
{
    Table00RecordA *record = findTable00RecordWithOverride(id);
    if (record != NULL) {
        if (count > 8) {
            count = 8;
        }
        for (s32 index = 0; index < count; ++index) {
            skills[index] = record->skills[index];
        }
        return 1;
    }
    return 0;
}
}
