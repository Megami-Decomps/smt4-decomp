#include "shard/W6_W6Match5_DevilSort.h"

struct DevilPrimaryKeyView {
    DevilSortRecord base;
    u8 unk04[0x12];
    u16 key; // 0x16; do not extend the shared record prefix.
};

extern "C" s32 FUN_003ac9a8(const u16 *left, const u16 *right)
{
    const DevilPrimaryKeyView *leftRecord =
        reinterpret_cast<const DevilPrimaryKeyView *>(devilGetRecord(*left));
    const DevilPrimaryKeyView *rightRecord =
        reinterpret_cast<const DevilPrimaryKeyView *>(devilGetRecord(*right));
    s32 comparison = leftRecord->key - rightRecord->key;
    if (comparison == 0) {
        leftRecord = reinterpret_cast<const DevilPrimaryKeyView *>(devilGetRecord(*left));
        rightRecord = reinterpret_cast<const DevilPrimaryKeyView *>(devilGetRecord(*right));
        comparison = rightRecord->base.level - leftRecord->base.level;
        if (comparison == 0)
            comparison = *left - *right;
    }
    return comparison;
}
