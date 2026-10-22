/* NON_MATCHING: compiler peels the first row and unrolls the remaining search loop. */
#include "shard/W4_Match6_DataSet.h"
#include <stddef.h>

extern "C" {
bool FUN_002ac12c(DataEntry *entry);
DataRow *FUN_002ac0f8(DataEntry *entry);
u32 FUN_002ac0c4(DataEntry *entry);

u32 FUN_00385ccc(DataSet *set, u32 key)
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
        if (FUN_002ac12c(entry)) {
            const KeyedDataRowView *rows = (const KeyedDataRowView *)FUN_002ac0f8(entry);
            u32 count = FUN_002ac0c4(entry);
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
