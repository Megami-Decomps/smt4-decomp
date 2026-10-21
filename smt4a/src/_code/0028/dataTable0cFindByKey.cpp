#include "gamedata/DataTable.h"

struct Table0cRecord {
    u8 unk00[0x20]; // 0x00
    u16 key;         // 0x20
    u8 unk22[0x56]; // 0x22
};

extern "C" {
s32 arrayCompareRecordKey(const void* first, const void* second);
void* libc_bsearch(const void* key, const void* entries, u32 count, u32 size,
                   s32 (*compare)(const void*, const void*));

// Searches table 0x0c, section zero, by its halfword key.
Table0cRecord* dataTable0cFindByKey(u16 key)
{
    void* section = dataTableGet(0x0c, 0);
    void* entries = dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    Table0cRecord search;
    search.key = key;
    return static_cast<Table0cRecord*>(
        libc_bsearch(&search, entries, count, sizeof(Table0cRecord), arrayCompareRecordKey));
}
}
