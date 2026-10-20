#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x1A];
} Record; /* 0x3C */

typedef struct RecordTable {
    /* 0x000 */ u8 unk000[0x43C];
    /* 0x43C */ u32 count;
    /* 0x440 */ Record *records;
} RecordTable;

typedef s32 (*CompareFn)(const void *a, const void *b);

extern void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, CompareFn compare);

/* Comparison of two records by id, at 0x151b78 (no symbol of its own yet). */
#define COMPARE_RECORD_BY_ID ((CompareFn)0x151B78)

/* Finds the record with the given id in the table's sorted records, NULL when there are none. */
Record *recordTableFindById(RecordTable *table, u16 id)
{
    Record key;

    if (table->count == 0) {
        return NULL;
    }
    key.id = id;
    return (Record *)libc_bsearch(&key, table->records, table->count, sizeof(Record), COMPARE_RECORD_BY_ID);
}

} /* extern "C" */
