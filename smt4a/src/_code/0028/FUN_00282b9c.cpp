#include "common.h"

struct SearchTable;
struct SecondaryTableRecord {
    u8 unk00[0x20];
    u16 key; // 0x20
    u8 unk22[0x56];
};

extern "C" {
SearchTable *dataTableGet(u32, u32);
const void *dataTableGetEntries(SearchTable *);
u32 dataTableGetCount(SearchTable *);
s32 arrayCompareRecordKey(const void *, const void *);
void *libc_bsearch(const void *, const void *, u32, u32,
                   s32 (*)(const void *, const void *));

// Find a record in table twelve using its 16-bit key.
SecondaryTableRecord *FUN_00282b9c(u16 id)
{
    SearchTable *table = dataTableGet(0xc, 0);
    const void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    SecondaryTableRecord key;
    key.key = id;
    return (SecondaryTableRecord *)libc_bsearch(&key, entries, count, sizeof(key),
                                                arrayCompareRecordKey);
}
}
