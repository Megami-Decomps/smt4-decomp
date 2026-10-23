#include "shard/W5_W5Match7_DataRecord.h"

extern "C" {
s32 idIsAtLeast350(u32 id);
s32 gameFlagEntryGetBit(u32 id, u32 flag);
s32 FUN_001ada74(u32 id);

// Test whether an unlocked, usable item exists in the selected display category.
u32 itemCategoryHasUsableEntry(const void *work)
{
    struct ItemFilterView {
        u8 prefix[0x18];
        u8 category;
    };
    u32 found = 0;
    const ItemFilterView *filter = static_cast<const ItemFilterView *>(work);
    for (u16 id = 0; id < 400; ++id) {
        ItemDataRecord *record = FUN_001ad9b4(id);
        if (record == NULL || record->ordering.sortGroup != 0 || gameFlagEntryGetBit(id, 1) == 0)
            continue;
        u16 kind = record->filter.kind;
        if (idIsAtLeast350(id) == 0 && kind != 0) {
            switch (kind) {
            case 1:
                if (filter->category != 0)
                    continue;
                break;
            case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 14:
                if (filter->category != 1)
                    continue;
                break;
            case 9:
                if (filter->category != 2)
                    continue;
                break;
            case 10: case 11: case 12: case 13:
                if (filter->category != 3)
                    continue;
                break;
            default:
                continue;
            }
        }
        if (FUN_001ada74(id) != 0) {
            found = 1;
            break;
        }
    }
    return found;
}
}
