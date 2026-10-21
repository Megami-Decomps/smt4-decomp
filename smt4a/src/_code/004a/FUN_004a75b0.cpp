#include "shard/W6_W6Match5_DevilSort.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

struct SlotSecondarySortInfo {
    u8 unk00[6];
    u16 secondaryOrder; // 0x06; beyond SlotSortInfo's preserved three-byte prefix.
};

// Sort by entry rank, descending secondary metadata, then ascending ID.
extern "C" s32 FUN_004a75b0(const RankedDevilEntry *first, const RankedDevilEntry *second)
{
    s32 order = first->rank - second->rank;
    if (order == 0) {
        const SlotSecondarySortInfo *firstRecord =
            reinterpret_cast<const SlotSecondarySortInfo *>(FUN_00184310(first->id));
        const SlotSecondarySortInfo *secondRecord =
            reinterpret_cast<const SlotSecondarySortInfo *>(FUN_00184310(second->id));
        order = secondRecord->secondaryOrder - firstRecord->secondaryOrder;
        if (order == 0)
            order = first->id - second->id;
    }
    return order;
}
