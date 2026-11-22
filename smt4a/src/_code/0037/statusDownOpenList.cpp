#include "status/StatusDownA.h"

static inline ScrollSelection *statusDownGetSelectionList(StatusDownStateA *status)
{
    return &status->list;
}

extern "C" {

extern void gridNavigationConfigure(ScrollSelection *list, s32 count, s32 visible, s32 columns, s32 wrap, s32 alternateKeys);
extern void statusDownRebuildTouchRegions(void);
extern void scrollListSetSelectionTracked(ScrollSelection *list, s32 index);
extern s32 gridNavigationGetItemCount(ScrollSelection *list);

/* Opens the status screen's list with the two arguments: rebuilds the list, resets the touch regions and slots and enters state 0xE. */
void statusDownOpenList(u32 argA, u32 argB)
{
    StatusDownStateA *status = g_statusDown;
    u32 previous;

    status->selection = argA;
    status->unk658 = argB;
    gridNavigationConfigure(statusDownGetSelectionList(status), gridNavigationGetItemCount(statusDownGetSelectionList(status)) + 1, 9, 1, 0, 1);
    scrollListSetSelectionTracked(statusDownGetSelectionList(status), gridNavigationGetItemCount(statusDownGetSelectionList(status)) - 1);
    status->listActive = 1;
    status = g_statusDown;
    statusDownClearTouchRegions(status);
    status = g_statusDown;
    status->stateTimer = 0;
    previous = status->track.state;
    status->track.state = 0xE;
    status->track.previous = previous;
    statusDownRebuildTouchRegions();
}

} /* extern "C" */
