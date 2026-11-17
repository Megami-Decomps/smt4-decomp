#include "status/StatusDownA.h"

static inline ScrollSelection *statusDownGetSelectionList(StatusDownStateA *status)
{
    return &status->list;
}

extern "C" {

extern void ifTouchRegionRemove(void);
extern void __aeabi_memset4(void *dst, int size, u32 value);
extern void gridNavigationConfigure(ScrollSelection *list, s32 count, s32 visible, s32 columns, s32 wrap, s32 alternateKeys);
extern void FUN_00230d30(void);
extern void scrollListSetSelectionTracked(ScrollSelection *list, s32 index);
extern s32 objectApplyIfUnblocked(ScrollSelection *list);

/* Opens the status screen's list with the two arguments: rebuilds the list, resets the touch regions and slots and enters state 0xE. */
void statusDownOpenList(u32 argA, u32 argB)
{
    StatusDownStateA *status = g_statusDown;
    u32 previous;

    status->selection = argA;
    status->unk658 = argB;
    gridNavigationConfigure(statusDownGetSelectionList(status), objectApplyIfUnblocked(statusDownGetSelectionList(status)) + 1, 9, 1, 0, 1);
    scrollListSetSelectionTracked(statusDownGetSelectionList(status), objectApplyIfUnblocked(statusDownGetSelectionList(status)) - 1);
    status->listActive = 1;
    status = g_statusDown;
    for (int i = 0; i < status->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    status->touchRegionCount = 0;
    __aeabi_memset4(status->slots, 0x54, 0xFFFFFFFF);
    status = g_statusDown;
    status->stateTimer = 0;
    previous = status->track.state;
    status->track.state = 0xE;
    status->track.previous = previous;
    FUN_00230d30();
}

} /* extern "C" */
