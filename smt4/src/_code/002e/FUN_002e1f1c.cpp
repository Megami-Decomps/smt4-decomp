#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "gamedata/NkmEnemyRecord.h"
#include "addon/AocSystem.h"

extern "C" {
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));
s32 dataTable00CompareRecordIds(const void *left, const void *right);

static __inline NkmEnemyRecord *searchTable00(const NkmEnemyRecord *key, const void *records, u32 count,
                                             s32 (*compare)(const void *, const void *))
{
    return (NkmEnemyRecord *)libc_bsearch(key, records, count, sizeof(NkmEnemyRecord), compare);
}

static __inline NkmEnemyRecord *findTable00RecordWithOverride(u16 id)
{
    NkmEnemyRecord key;
    key.id = id;
    NkmEnemyRecord *record = NULL;
    if (g_aocSystem->table00Records != NULL) {
        record = searchTable00(&key, g_aocSystem->table00Records, g_aocSystem->table00Count,
                               dataTable00CompareRecordIds);
    }
    if (record == NULL) {
        void *table = dataTableGet(0, 1);
        void *records = dataTableGetEntries(table);
        u32 recordCount = dataTableGetCount(table);
        record = searchTable00(&key, records, recordCount, dataTable00CompareRecordIds);
    }
    return record;
}

/* Copies up to eight identifiers from the add-on or base record. */
s32 FUN_002e1f1c(u16 id, u16 *destination, s32 count)
{
    NkmEnemyRecord *record = findTable00RecordWithOverride(id);
    if (record != NULL) {
        if (count > 8) {
            count = 8;
        }
        for (s32 i = 0; i < count; ++i) {
            destination[i] = record->skills[i];
        }
        return 1;
    }
    return 0;
}
}
