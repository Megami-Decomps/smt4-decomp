#include "status/StatusDown.h"

extern "C" {



s32 gridNavigationGetItemCount(ScrollSelection *list);
void gridNavigationConfigure(ScrollSelection *list, s32 count, s32 a, s32 b, s32 c, s32 d);
void ifTouchRegionRemove(void);
void *__aeabi_memset4(void *dest, s32 size, s32 value);
void statusDownRebuildTouchRegions(void);

static __inline ScrollSelection *statusGetList(StatusDownState *status)
{
    return &status->list;
}

/* Stores the two values, appends an entry to the status list and selects it, drops the touch regions and moves to state 11. */
void statusDownOpenList(u32 first, u32 second)
{
    StatusDownState *status = g_statusDown;
    StatusDownState *current;

    status->selection = first;
    status->unk540 = second;
    gridNavigationConfigure(statusGetList(status), gridNavigationGetItemCount(statusGetList(status)) + 1, 9, 1, 0, 1);
    scrollListSetSelectionMarkChanged(statusGetList(status), gridNavigationGetItemCount(statusGetList(status)) - 1);
    status->listActive = 1;
    current = g_statusDown;
    for (s32 i = 0; i < current->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    current->touchRegionCount = 0;
    __aeabi_memset4(current->slots, 0x29, -1);
    current = g_statusDown;
    current->stateTimer = 0;
    current->track.previous = current->track.state;
    current->track.state = 11;
    statusDownRebuildTouchRegions();
}

} /* extern "C" */
