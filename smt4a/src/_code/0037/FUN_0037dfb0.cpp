/* NON_MATCHING: register naming only: retail keeps the status block in r4 and the list pointer (add r0; mov r5, r0) in r5; the build swaps them. */
#include "status/StatusDown.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

static inline GridNavigation *statusDownGetList(StatusDownStateA *status)
{
    return reinterpret_cast<GridNavigation *>(status->unk5EC);
}

static inline ScrollSelection *statusDownGetSelectionList(StatusDownStateA *status)
{
    return reinterpret_cast<ScrollSelection *>(status->unk5EC);
}

typedef char StatusListViewOffsetsCheck[
    offsetof(StatusDownStateA, unk5EC) == 0x5EC &&
    offsetof(StatusDownStateA, unk658) == 0x658 &&
    sizeof(GridNavigation) <= 0x68 && sizeof(ScrollSelection) <= 0x68 ? 1 : -1];

extern "C" {

extern StatusDownStateA *g_statusDown;

extern void ifTouchRegionRemove(void);
extern void __aeabi_memset4(void *dst, int size, u32 value);
extern void FUN_00203b40(GridNavigation *list, s32 count, s32 visible, s32 columns, s32 wrap, s32 alternateKeys);
extern void FUN_00230d30(void);
extern void FUN_002a4964(ScrollSelection *list, s32 index);
extern s32 objectApplyIfUnblocked(ScrollSelection *list);

/* Opens the status screen's list with the two arguments: rebuilds the list, resets the touch regions and slots and enters state 0xE. */
void FUN_0037dfb0(u32 argA, u32 argB)
{
    StatusDownStateA *status = g_statusDown;
    u32 previous;
    int i;

    status->selection = argA;
    *reinterpret_cast<u32 *>(status->unk658) = argB;
    FUN_00203b40(statusDownGetList(status), objectApplyIfUnblocked(statusDownGetSelectionList(status)) + 1, 9, 1, 0, 1);
    FUN_002a4964(statusDownGetSelectionList(status), objectApplyIfUnblocked(statusDownGetSelectionList(status)) - 1);
    status->inventoryDirty = 1;
    status = g_statusDown;
    for (i = 0; i < status->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    status->touchRegionCount = 0;
    __aeabi_memset4(status->slots, 0x54, 0xFFFFFFFF);
    status = g_statusDown;
    status->timer = 0;
    previous = status->track.state;
    status->track.state = 0xE;
    status->track.previous = previous;
    FUN_00230d30();
}

} /* extern "C" */
