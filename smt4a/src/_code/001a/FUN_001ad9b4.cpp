/* NON_MATCHING: only the DAT_00531010 table-id copy differs: retail loads it into r3 before the push with its literal pooled last (after g_aocSystem and the comparator); built pools it first in r1. */
#include "gamedata/DataTable.h"
#include "shard/W5_W5Match7_DataRecord.h"

struct AocSystemView {
    /* 0x000 */ u8 unk000[0x384];
    /* 0x384 */ u32 overrideCount;
    /* 0x388 */ void *overrideRecords;
};

struct TableIds {
    u32 ids[2];
};

extern "C" {

extern AocSystemView *g_aocSystem;
extern const TableIds DAT_00531010; /* {27, 28} */

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 u16KeyRecordCompare(const void *a, const void *b);


struct KeyedRecord {
    u16 id;
    u8 unk02[0x134 - 2];
};

static __inline ItemDataRecord *searchKeyed(const KeyedRecord *key, const void *records, u32 count,
                                            s32 (*compare)(const void *, const void *))
{
    return static_cast<ItemDataRecord *>(libc_bsearch(key, records, count, sizeof(KeyedRecord), compare));
}

/* Look up an add-on override or a base-table record by its identifier. */
ItemDataRecord *FUN_001ad9b4(u32 id)
{
    TableIds tables = DAT_00531010;
    KeyedRecord key;

    key.id = id;
    if (g_aocSystem->overrideRecords != NULL) {
        ItemDataRecord *record = searchKeyed(&key, g_aocSystem->overrideRecords, g_aocSystem->overrideCount, u16KeyRecordCompare);
        if (record != NULL)
            return record;
    }
    ItemDataRecord *record;
    for (u32 i = 0; i < 2; i++) {
        void *table = dataTableGet(tables.ids[i], 0);
        void *entries = dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);

        record = searchKeyed(&key, entries, count, u16KeyRecordCompare);
        if (record != NULL)
            return record;
    }
    return record;
}

} /* extern "C" */
