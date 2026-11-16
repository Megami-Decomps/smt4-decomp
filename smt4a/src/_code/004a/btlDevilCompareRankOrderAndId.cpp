#include "shard/W6_W6Match5_DevilSort.h"

struct SlotSecondarySortInfo {
    u8 unk00[6];
    u16 secondaryOrder; // 0x06; beyond SlotSortInfo's preserved three-byte prefix.
};

// Sort by entry rank, descending secondary metadata, then ascending ID.
extern "C" s32 btlDevilCompareRankOrderAndId(const RankedDevilEntry *first, const RankedDevilEntry *second)
{
    s32 order = first->rank - second->rank;
    if (order == 0) {
        const SlotSecondarySortInfo *firstRecord =
            reinterpret_cast<const SlotSecondarySortInfo *>(devilGetRecord(first->id));
        const SlotSecondarySortInfo *secondRecord =
            reinterpret_cast<const SlotSecondarySortInfo *>(devilGetRecord(second->id));
        order = secondRecord->secondaryOrder - firstRecord->secondaryOrder;
        if (order == 0)
            order = first->id - second->id;
    }
    return order;
}
