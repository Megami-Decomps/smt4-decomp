#include "common.h"

extern "C" {

/* One 0x18-byte entry of data table 0x2B type 1: a key pair then data; a key of -1 ends the table. */
typedef struct Table2BEntry {
    /* 0x00 */ s8 first;
    /* 0x01 */ u8 second;
    /* 0x02 */ u8 unk02[0x16];
} Table2BEntry;

s32 dataTable2BType1Count(u32 *table);
Table2BEntry *dataTable2BType1GetEntry(u32 *table, u32 index);

/* Finds the table 0x2B type 1 entry whose key pair is (first, second); NULL when absent. */
Table2BEntry *dataTable2BFindType1Entry(u32 unused, s32 first, u32 second, u32 unused2)
{
    u32 table;
    s32 count = dataTable2BType1Count(&table);
    Table2BEntry *entries = dataTable2BType1GetEntry(&table, 0);

    for (s32 i = 0; i < count; i++) {
        if (entries[i].first == -1) {
            return NULL;
        }
        if (entries[i].first == first && entries[i].second == second) {
            return &entries[i];
        }
    }
    return NULL;
}

} /* extern "C" */
