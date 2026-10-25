/* NON_MATCHING: only the schedule of the pooled comparator address differs (retail loads it into r0 after mov r2,r0; the build loads r1 early) */
#include "common.h"

extern "C" {

typedef struct Entry0026a69c {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 index;
    /* 0x03 */ u8 unk03;
} Entry0026a69c;

typedef s32 Compare0026a69c(const void *a, const void *b);

void *dataTableGet(s32 table, s32 slot);
Entry0026a69c *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
Entry0026a69c *libc_bsearch(const Entry0026a69c *key, const Entry0026a69c *base, u32 count, u32 size, Compare0026a69c *compare);

s32 idMapCompareKeys(const void *left, const void *right);

extern u8 DAT_00404386[]; /* 0x404386 */

/* Finds the entry with the given id in data table 6's section 1 and maps its index through a byte table. */
u8 idMapLookup(u16 id)
{
    void *table = dataTableGet(6, 1);
    Entry0026a69c *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    Entry0026a69c key;

    key.id = id;
    return DAT_00404386[libc_bsearch(&key, entries, count, sizeof(Entry0026a69c), idMapCompareKeys)->index];
}

} /* extern "C" */
