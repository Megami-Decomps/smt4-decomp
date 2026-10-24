/* NON_MATCHING: retail branches around an unpredicated tail call to asdTMTexTableReleaseNode (separate epilogue); built predicates it (movge/blge) */
#include "gamedata/DataTable.h"

struct TexTableKey {
    u16 id;     // 0x00
    s16 node;   // 0x02
};

extern "C" {
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 FUN_002321f8(const void *a, const void *b);
void asdTMTexTableReleaseNode(s32 node);

/* Releases texture table node 0x34 when the id has a non-negative entry in data table 0x47. */
void FUN_0023a55c(u16 id)
{
    void *section = dataTableGet(0x47, 0);
    const void *entries = dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    TexTableKey key;

    key.id = id;
    TexTableKey *found = (TexTableKey *)libc_bsearch(&key, entries, count, 4, FUN_002321f8);
    if (found != NULL && found->node >= 0) {
        asdTMTexTableReleaseNode(0x34);
    }
}

} /* extern "C" */
