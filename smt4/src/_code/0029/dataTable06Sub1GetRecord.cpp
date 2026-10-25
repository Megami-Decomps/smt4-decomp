/* Finds the record of data table 6/1 (four bytes each, a halfword key first) whose key is `id`. */
#include "common.h"
#include "gamedata/DataTable.h"
#include "util/CalleeContracts.h"

extern "C" {

void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 idMapCompareKeys(const void *left, const void *right);

void *dataTable06Sub1GetRecord(u16 id)
{
    void *section = dataTableGet(6, 1);
    void *entries = dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    u16 key = id;

    return libc_bsearch(&key, entries, count, 4, idMapCompareKeys);
}

}
