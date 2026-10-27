/* NON_MATCHING: the local table-id array copy is reached through r1 and pooled first (retail: r3, pooled last, after g_aocSystem and the comparator). Twin of smt4a FUN_001ad9b4. */
#include "gamedata/DataTable.h"
#include "shard/W5_W5Match7_DataRecord.h"

struct AocSystemView {
    /* 0x000 */ u8 unk000[0x384];
    /* 0x384 */ u32 overrideCount;
    /* 0x388 */ void *overrideRecords;
};

extern "C" {

extern AocSystemView *g_aocSystem;

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 dataTable1bOr1cCompareIds(const void *a, const void *b);

struct KeyedRecord {
    u16 id;
    u8 unk02[0x1b4 - 2];
};

static __inline ItemDataRecord *searchKeyed(const KeyedRecord *key, const void *records, u32 count,
                                            s32 (*compare)(const void *, const void *))
{
    return static_cast<ItemDataRecord *>(libc_bsearch(key, records, count, sizeof(KeyedRecord), compare));
}

/* Look up an add-on override or a base-table record by its identifier. */
ItemDataRecord *dataTable1bOr1cGetRecord(u32 id)
{
    u32 tableIds[2] = {0x1b, 0x1c};
    KeyedRecord key;

    key.id = id;
    if (g_aocSystem->overrideRecords != NULL) {
        ItemDataRecord *record = searchKeyed(&key, g_aocSystem->overrideRecords, g_aocSystem->overrideCount, dataTable1bOr1cCompareIds);
        if (record != NULL)
            return record;
    }
    ItemDataRecord *record;
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
