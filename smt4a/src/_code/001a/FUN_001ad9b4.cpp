/* NON_MATCHING: scheduling: retail stores the comparator stack argument after the other argument setup of the first bsearch call */
#include "common.h"

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
u32 dataTableGet(u32 table, u32 index);
u32 dataTableGetCount(u32 table);
void *dataTableGetEntries(u32 table);

struct KeyedRecord {
    u16 id;
    u8 unk02[0x134 - 2];
};

/* Looks the id up in the add-on content's override records, then in data tables 27 and 28; the result is unused. */
void FUN_001ad9b4(u16 id)
{
    TableIds tables = DAT_00531010;
    KeyedRecord key;

    key.id = id;
    if (g_aocSystem->overrideRecords != NULL && libc_bsearch(&key, g_aocSystem->overrideRecords, g_aocSystem->overrideCount, sizeof(KeyedRecord), u16KeyRecordCompare) != NULL) {
        return;
    }
    for (u32 i = 0; i < 2; i++) {
        u32 table = dataTableGet(tables.ids[i], 0);
        void *entries = dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);

        if (libc_bsearch(&key, entries, count, sizeof(KeyedRecord), u16KeyRecordCompare) != NULL) {
            return;
        }
    }
}

} /* extern "C" */
