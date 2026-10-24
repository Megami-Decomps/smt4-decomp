/* NON_MATCHING: register allocation and loop layout differ (retail keeps the ranges pointer in ip and the group index 0 in r5, tests the key with blt to an increment block) */
#include "common.h"

struct KeyRange {
    u16 first;  // 0x00
    u16 count;  // 0x02
};

struct KeyEntry {
    s32 key;        // 0x00
    u8 unk04[8];    // 0x04
};

struct KeyTable {
    u8 unk00[0x24];      // 0x00
    KeyRange *ranges;    // 0x24
    u8 unk28[8];         // 0x28
    KeyEntry *entries;   // 0x30
};

extern "C" {

/* Finds the entry in the first range whose key is at least `key`, stepping back one entry when the key is not matched exactly. */
s32 FUN_004fefe0(KeyTable *table, s32 key)
{
    s32 group = 0;
    KeyRange *range = &table->ranges[group];
    s32 index = range->first;
    s32 last = range->first - 1 + range->count;

    if (index <= last) {
        while (table->entries[index].key < key) {
            index++;
            if (index > last) {
                return index;
            }
        }
        if (table->entries[index].key != key && table->ranges[group].first != index) {
            index--;
        }
    }
    return index;
}

} /* extern "C" */
