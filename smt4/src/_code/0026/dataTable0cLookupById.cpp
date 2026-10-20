#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x52];
} Record; /* 0x74 */

typedef s32 (*CompareFn)(const void *a, const void *b);

extern void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, CompareFn compare);
extern void *dataTableGet(u32 table, u32 index);
extern u32 dataTableGetCount(void *table);
extern Record *dataTableGetEntries(void);

/* Comparison of two records by id, at 0x206d2c (no symbol of its own yet). */
#define COMPARE_RECORD_BY_ID ((CompareFn)0x206D2C)

/* Looks the id up in the sorted records of data table 0x0c (the result is not used). */
void dataTable0cLookupById(u16 id)
{
    void *table = dataTableGet(0xC, 0);
    Record *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);
    Record key;

    key.id = id;
    libc_bsearch(&key, entries, count, sizeof(Record), COMPARE_RECORD_BY_ID);
}

} /* extern "C" */
