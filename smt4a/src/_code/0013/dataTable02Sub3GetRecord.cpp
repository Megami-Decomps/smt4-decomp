#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 first;
    /* 0x01 */ u8 second;
} Entry;

void FUN_00148d68(s32 first, s32 second, s32 flag);
u32 dataTableGet(u32 table, u32 index);
s32 dataTableGetCount(u32 table);
Entry *dataTableGetEntries(void);

/* Walks the entries of data table (2, 3) and calls FUN_00148d68(first, second, 0) for each. */
void dataTable02Sub3GetRecord(void)
{
    u32 table;
    Entry *entries;
    s32 count;
    s32 i;

    table = dataTableGet(2, 3);
    entries = dataTableGetEntries();
    count = dataTableGetCount(table);
    for (i = 0; i < count; i++) {
        FUN_00148d68(entries[i].first, entries[i].second, 0);
    }
}

} /* extern "C" */
