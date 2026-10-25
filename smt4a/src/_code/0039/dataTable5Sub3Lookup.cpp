#include "common.h"
#include "shard/dataTable5Sub3Lookup.h"

extern "C" {

typedef struct PackedKey {
    u32 kind : 8;
    u32 value : 16;
    u32 unused : 8;
} PackedKey;

typedef s32 (*CompareFn)(const void *a, const void *b);

extern void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, CompareFn compare);
extern void *dataTableGet(u32 table, u32 index);
extern u32 dataTableGetCount(void *table);
extern void *dataTableGetEntries(void);

/* Comparison of two packed keys, at 0x3372a8 (no symbol of its own yet). */
#define COMPARE_PACKED_KEY ((CompareFn)0x3372A8)

/* Looks the (kind, value) key up in the sorted entries of data table 5/3 (the result is not used). */
void dataTable5Sub3Lookup(u8 kind, u16 value)
{
    void *table = dataTableGet(5, 3);
    void *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);
    PackedKey key;

    key.kind = kind;
    key.value = value;
    libc_bsearch(&key, entries, count, sizeof(PackedKey), COMPARE_PACKED_KEY);
}

} /* extern "C" */
