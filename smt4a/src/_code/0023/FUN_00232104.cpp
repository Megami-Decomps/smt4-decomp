/* NON_MATCHING: invalid-slot tests and category/priority register allocation differ. */
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {
s32 FUN_0020e83c(const s32 *, const s32 *);

// Sort valid slots by category, then priority, before the ordinary slot tie-breaker.
s32 FUN_00232104(const s32 *left, const s32 *right)
{
    // The category lies beyond the shared three-byte sort-info prefix.
    struct SortInfoView {
        u8 unk00[9];
        u8 category;
    };
    if (*left < 0)
        return *right >= 0;
    if (*right < 0)
        return -1;
    SlotRecord *leftSlot = gameGetSlotRecord(*left);
    SlotRecord *rightSlot = gameGetSlotRecord(*right);
    const SortInfoView *leftInfo = reinterpret_cast<const SortInfoView *>(FUN_00184310(leftSlot->entryId));
    const SortInfoView *rightInfo = reinterpret_cast<const SortInfoView *>(FUN_00184310(rightSlot->entryId));
    s32 difference = leftInfo->category - rightInfo->category;
    if (difference == 0) {
        if (*left < 0)
            return *right >= 0;
        if (*right < 0)
            return -1;
        leftSlot = gameGetSlotRecord(*left);
        rightSlot = gameGetSlotRecord(*right);
        SlotSortInfo *leftPriority = FUN_00184310(leftSlot->entryId);
        SlotSortInfo *rightPriority = FUN_00184310(rightSlot->entryId);
        difference = leftPriority->priority - rightPriority->priority;
        if (difference == 0)
            difference = FUN_0020e83c(left, right);
    }
    return difference;
}
}
