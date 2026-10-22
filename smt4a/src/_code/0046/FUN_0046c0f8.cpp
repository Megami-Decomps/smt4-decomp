/* NON_MATCHING: compiler peels the first row and unrolls the remaining search loop. */
#include "shard/W4_Match6_DataSet.h"
#include <stddef.h>

extern "C" {
bool FUN_001b315c(DataEntry *entry);
DataRow *FUN_001b31ac(DataEntry *entry);
u32 FUN_001b31e0(DataEntry *entry);

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
        if (FUN_001b315c(entry)) {
            const KeyedDataRowView *rows = (const KeyedDataRowView *)FUN_001b31ac(entry);
            u32 count = FUN_001b31e0(entry);
            u32 row = 0;
            if (row < count) {
                do {
                    if (rows[row].type == 3 && rows[row].key == key && entry->files[row].status.requested != 0) {
                        return entry->files[row].file;
                    }
                    ++row;
                } while (row < count);
            }
        }
    }
    return 0;
}
}
