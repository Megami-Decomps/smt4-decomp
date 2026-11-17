/* NON_MATCHING: the local table-id array copy is reached through r1 and pooled first (retail: r3, pooled last, after g_aocSystem and the comparator). Twin of smt4a FUN_001ad9b4. */
#include "gamedata/DataTable.h"
#include "quest_center/QuestRecord.h"
#include "addon/AocSystem.h"

extern "C" {

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 dataTable1bOr1cCompareIds(const void *a, const void *b);

static __inline QuestRecord *searchKeyed(const QuestRecord *key, const void *records, u32 count,
                                            s32 (*compare)(const void *, const void *))
{
    return static_cast<QuestRecord *>(libc_bsearch(key, records, count, sizeof(QuestRecord), compare));
}

/* Look up an add-on override or a base-table record by its identifier. */
QuestRecord *questDataGetRecord(u32 id)
{
    u32 tableIds[2] = {0x1b, 0x1c};
    QuestRecord key;

    key.id = id;
    if (g_aocSystem->table1bRecords != NULL) {
        QuestRecord *record = searchKeyed(&key, g_aocSystem->table1bRecords, g_aocSystem->table1bCount, dataTable1bOr1cCompareIds);
        if (record != NULL)
            return record;
    }
    QuestRecord *record;
    for (u32 i = 0; i < 2; i++) {
        void *table = dataTableGet(tableIds[i], 0);
        void *entries = dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);

        record = searchKeyed(&key, entries, count, dataTable1bOr1cCompareIds);
        if (record != NULL)
            return record;
    }
    return record;
}

} /* extern "C" */
