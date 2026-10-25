/* NON_MATCHING: Retail ldrh r1, [r1, #44] differs from recovered ldrh r2, [r1, #44]. */
#include "common.h"
#include "gamedata/DataTable.h"

struct TableEntryLocalView {
    u8 unk00[0x2C]; // 0x00
    u16 unk2C;      // 0x2C
    u8 unk2E[0x16]; // 0x2E
};

extern "C" {

// Compare entry values at 0x2C, treating zero or out-of-range indices as 99.
s32 FUN_0049ebf0(const u16* leftIndex, const u16* rightIndex)
{
    void *table = dataTableGet(0x46, 0);
    const TableEntryLocalView* entries = static_cast<const TableEntryLocalView*>(dataTableGetEntries(table));
    if (entries == 0) {
        return 0;
    }

    s32 count = dataTableGetCount(table);
    s32 left = *leftIndex;
    s32 leftValue = (count <= left || left == 0)
        ? 99 : entries[left].unk2C;

    s32 right = *rightIndex;
    s32 rightValue = (right >= count || right == 0)
        ? 99 : entries[right].unk2C;

    return leftValue - rightValue;
}
}
