#include "shard/W4_Match6_DataSet.h"
#include <stddef.h>

extern "C" {
bool packageEntryIsLoaded(DataEntry *entry);
DataRow *packageEntryGetDirectory(DataEntry *entry);
u32 packageEntryGetFileCount(DataEntry *entry);

u32 FUN_0046c0f8(DataSet *set, u32 key)
{
    // DataRow's byte-aligned name union cannot expose an aligned word in place.
    struct KeyedDataRowView {
        u8 type;
        u8 unk01[0x3b];
        u32 key; // 0x3c
    };
    typedef char KeyedDataRowLayoutCheck[sizeof(KeyedDataRowView) == 0x40 && offsetof(KeyedDataRowView, key) == 0x3c ? 1 : -1];
    for (s32 entryIndex = 0; entryIndex < set->entryCount; ++entryIndex) {
        DataEntry *entry = &set->entries[entryIndex];
        if (packageEntryIsLoaded(entry)) {
            const KeyedDataRowView *rows = (const KeyedDataRowView *)packageEntryGetDirectory(entry);
            u32 count = packageEntryGetFileCount(entry);
            for (u32 row = 0; row < count; ++row) {
                const KeyedDataRowView *candidate = &rows[row];
                if (candidate->type == 3 && candidate->key == key && entry->files[row].status.requested != 0) {
                    return entry->files[row].file;
                }
            }
        }
    }
    return 0;
}
}
