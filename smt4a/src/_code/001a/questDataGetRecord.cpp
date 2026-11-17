/* NON_MATCHING: the local table-id array copy is reached through r1 and pooled first (retail: r3, pooled last, after g_aocSystem and the comparator). */
#include "gamedata/DataTable.h"
#include "quest_center/QuestRecordA.h"
#include "addon/AocSystemA.h"

struct TableIds {
    u32 ids[2];
};

extern "C" {

extern const TableIds DAT_00531010; /* {27, 28} */

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 u16KeyRecordCompare(const void *a, const void *b);

static __inline QuestRecordA *searchKeyed(const QuestRecordA *key, const void *records, u32 count,
                                            s32 (*compare)(const void *, const void *))
{
    return static_cast<QuestRecordA *>(libc_bsearch(key, records, count, sizeof(QuestRecordA), compare));
}

/* Look up an add-on override or a base-table record by its identifier. */
QuestRecordA *questDataGetRecord(u32 id)
{
    u32 tableIds[2] = {0x1b, 0x1c};
    QuestRecordA key;

    key.id = id;
    if (g_aocSystem->table1bRecords != NULL) {
        QuestRecordA *record = searchKeyed(&key, g_aocSystem->table1bRecords, g_aocSystem->table1bCount, u16KeyRecordCompare);
        if (record != NULL)
            return record;
    }
    QuestRecordA *record;
    for (u32 i = 0; i < 2; i++) {
        void *table = dataTableGet(tableIds[i], 0);
        void *entries = dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);

        record = searchKeyed(&key, entries, count, u16KeyRecordCompare);
        if (record != NULL)
            return record;
    }
    return record;
}

} /* extern "C" */
