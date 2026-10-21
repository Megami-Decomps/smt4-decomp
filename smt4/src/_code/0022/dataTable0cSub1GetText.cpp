#include "gamedata/DataTable.h"
#include "shard/W6_W6Match3_Table0cSub1Text.h"

extern "C" {
typedef s32 (*CompareFn)(const void* left, const void* right);
void* libc_bsearch(const void* key, const void* entries, u32 count,
                    u32 stride, CompareFn compare);
s32 mapRecordCompareValue(const ScalarRecord* left, const ScalarRecord* right);

u16* dataTable0cSub1GetText(u16 id)
{
    void* section = dataTableGet(0xc, 1);
    void* entries = dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    Table0cSub1TextRecord key;
    key.key.value = id;
    Table0cSub1TextRecord* match = (Table0cSub1TextRecord*)libc_bsearch(
        &key, entries, count, sizeof(key), (CompareFn)mapRecordCompareValue);
    return match->text;
}

} /* extern "C" */
