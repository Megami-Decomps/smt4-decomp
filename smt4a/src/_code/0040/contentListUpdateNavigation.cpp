#include "addon/ContentListScreen.h"

typedef GridNavigation ContentGrid;
extern "C" {
s32 resourceRunOperationIfUnblocked(ContentGrid *);
s32 listCursorGetRowIfUnblocked(ContentGrid *);
s32 gridNavigationGetItemCount(ContentGrid *);
s32 gridNavigationHandleConfirm(ContentGrid *, u32);
s32 padQueryLogicalKey(u32, u32);
s32 flaggedEntryGetValueA(ContentGrid *);
void eventQueueAddUniqueIfValid(u32);
void scrollOwnerSetValue(ContentGrid *, s32);

/* Updates the grid cursor and scroll offset for the content list. */
void contentListUpdateNavigation(ContentListScreen *screen)
{
    s32 previousRow = resourceRunOperationIfUnblocked(&screen->navigation);
    if (gridNavigationHandleConfirm(&screen->navigation, 0)) {
        if (gridNavigationGetItemCount(&screen->navigation) > 8) {
            resourceRunOperationIfUnblocked(&screen->navigation);
            if (listCursorGetRowIfUnblocked(&screen->navigation) != 7 && listCursorGetRowIfUnblocked(&screen->navigation) != 0)
                eventQueueAddUniqueIfValid(0x100020d);
            while (resourceRunOperationIfUnblocked(&screen->navigation) == previousRow) {
                if (resourceRunOperationIfUnblocked(&screen->navigation) == 0 && listCursorGetRowIfUnblocked(&screen->navigation) == 0)
                    break;
                if (resourceRunOperationIfUnblocked(&screen->navigation) == gridNavigationGetItemCount(&screen->navigation) - 8 &&
                    listCursorGetRowIfUnblocked(&screen->navigation) == 7)
                    break;
                gridNavigationHandleConfirm(&screen->navigation, 0);
            }
        }
        screen->topRow = resourceRunOperationIfUnblocked(&screen->navigation);
    }
    if (padQueryLogicalKey(9, 0)) {
        if (resourceRunOperationIfUnblocked(&screen->navigation) == 0)
            return;
        eventQueueAddUniqueIfValid(0x100020d);
        scrollOwnerSetValue(&screen->navigation, --screen->topRow);
    }
    if (padQueryLogicalKey(10, 0) && gridNavigationGetItemCount(&screen->navigation) >= 8) {
        s32 row = resourceRunOperationIfUnblocked(&screen->navigation);
        s32 count = gridNavigationGetItemCount(&screen->navigation);
        if (row != count - 8 &&
            (flaggedEntryGetValueA(&screen->navigation) || gridNavigationGetItemCount(&screen->navigation) >= 8)) {
            eventQueueAddUniqueIfValid(0x100020d);
            scrollOwnerSetValue(&screen->navigation, ++screen->topRow);
        }
    }
}
}
