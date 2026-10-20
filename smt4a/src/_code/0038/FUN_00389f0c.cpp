/* NON_MATCHING: retail materialises the table index 0 in r1 before storing the key id and copies it to r0 (mov r1,#0; strh; mov r0,r1); built loads r0 directly. */
#include "common.h"

extern "C" {

typedef int (*SearchCompare)(const void *key, const void *entry);

typedef struct SearchKey {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0xB2];
} SearchKey; /* 0xB4 bytes, the size of a table entry */

extern u32 dataTableGet(u32 table);
extern void *dataTableGetEntries(void);
extern u32 dataTableGetCount(u32 table);
extern void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, SearchCompare compare);

/* Looks up table entry `id` in data table 0 by binary search (result unused). */
void FUN_00389f0c(u16 id)
{
    SearchKey key;
    u32 table;
    void *entries;

    key.id = id;
    table = dataTableGet(0);
    entries = dataTableGetEntries();
    libc_bsearch(&key, entries, dataTableGetCount(table), 0xB4, (SearchCompare)0x18449C);
}

} /* extern "C" */
