#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x0E];
} Record; /* 0x30 */

typedef struct AocSystem {
    /* 0x000 */ u8 unk000[0x3D0];
    /* 0x3D0 */ s32 loaded;
} AocSystem;

typedef s32 (*CompareFn)(const void *a, const void *b);

extern AocSystem *g_aocSystem;

extern void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, CompareFn compare);
extern void *dataTableGet(u32 table, u32 index);
extern u32 dataTableGetCount(void *table);
extern Record *dataTableGetEntries(void);
extern s32 FUN_001763a4(AocSystem *system, u32 id);

/* Comparison of two records by id, at 0x12654c (no symbol of its own yet). */
#define COMPARE_RECORD_BY_ID ((CompareFn)0x169230)

/* Looks the id up in data table 8/4 unless the AOC system already handles it (the result is not used). */
void aocRecordLookup84(u16 id)
{
    Record key;
    void *table;
    Record *entries;
    u32 count;

    key.id = id;
    if ((g_aocSystem->loaded == 0 || FUN_001763a4(g_aocSystem, id) == 0) && (table = dataTableGet(8, 4)) != NULL) {
        entries = dataTableGetEntries();
        count = dataTableGetCount(table);
        libc_bsearch(&key, entries, count, sizeof(Record), COMPARE_RECORD_BY_ID);
    }
}

} /* extern "C" */
