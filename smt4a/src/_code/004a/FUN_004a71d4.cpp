#include "shard/W5_W5Match5_GameSaveViews.h"

struct SlotSortKeysView {
    SlotSortInfo base;
    u8 unk03[3];
    u16 secondary; // 0x06
    u8 unk08[0x12];
    u16 primary; // 0x1a; preserve the shared three-byte prefix.
};

extern "C" s32 FUN_004a71d4(const u16 *left, const u16 *right)
{
    const SlotSortKeysView *leftRecord =
        reinterpret_cast<const SlotSortKeysView *>(FUN_00184310(*left));
    const SlotSortKeysView *rightRecord =
        reinterpret_cast<const SlotSortKeysView *>(FUN_00184310(*right));
    s32 comparison = leftRecord->primary - rightRecord->primary;
    if (comparison == 0) {
        leftRecord = reinterpret_cast<const SlotSortKeysView *>(FUN_00184310(*left));
        rightRecord = reinterpret_cast<const SlotSortKeysView *>(FUN_00184310(*right));
        comparison = rightRecord->secondary - leftRecord->secondary;
        if (comparison == 0)
            comparison = *left - *right;
    }
    return comparison;
}
