#include "common.h"

struct ContentGrid { u8 data[0x64]; };
struct ContentNavigation {
    u8 unk00[0x28];
    ContentGrid grid; // 0x28
    s32 topRow; // 0x8c
};
extern "C" {
s32 resourceRunOperationIfUnblocked(ContentGrid *);
s32 listCursorGetRowIfUnblocked(ContentGrid *);
s32 gridNavigationGetItemCount(ContentGrid *);
s32 gridNavigationHandleConfirm(ContentGrid *, u32);
s32 padQueryLogicalKey(u32, u32);
s32 flaggedEntryGetValueA(ContentGrid *);
void eventQueueAddUniqueIfValid(u32);
void scrollOwnerSetValue(ContentGrid *, s32);

void contentListUpdateNavigation(ContentNavigation *screen)
{
    s32 previousRow = resourceRunOperationIfUnblocked(&screen->grid);
    if (gridNavigationHandleConfirm(&screen->grid, 0)) {
        if (gridNavigationGetItemCount(&screen->grid) > 8) {
            resourceRunOperationIfUnblocked(&screen->grid);
            if (listCursorGetRowIfUnblocked(&screen->grid) != 7 && listCursorGetRowIfUnblocked(&screen->grid) != 0)
                eventQueueAddUniqueIfValid(0x100020d);
            while (resourceRunOperationIfUnblocked(&screen->grid) == previousRow) {
                if (resourceRunOperationIfUnblocked(&screen->grid) == 0 && listCursorGetRowIfUnblocked(&screen->grid) == 0)
                    break;
                if (resourceRunOperationIfUnblocked(&screen->grid) == gridNavigationGetItemCount(&screen->grid) - 8 &&
                    listCursorGetRowIfUnblocked(&screen->grid) == 7)
                    break;
                gridNavigationHandleConfirm(&screen->grid, 0);
            }
        }
        screen->topRow = resourceRunOperationIfUnblocked(&screen->grid);
    }
    if (padQueryLogicalKey(9, 0)) {
        if (resourceRunOperationIfUnblocked(&screen->grid) == 0)
            return;
        eventQueueAddUniqueIfValid(0x100020d);
        scrollOwnerSetValue(&screen->grid, --screen->topRow);
    }
    if (padQueryLogicalKey(10, 0) && gridNavigationGetItemCount(&screen->grid) >= 8) {
        s32 row = resourceRunOperationIfUnblocked(&screen->grid);
        s32 count = gridNavigationGetItemCount(&screen->grid);
        if (row != count - 8 &&
            (flaggedEntryGetValueA(&screen->grid) || gridNavigationGetItemCount(&screen->grid) >= 8)) {
            eventQueueAddUniqueIfValid(0x100020d);
            scrollOwnerSetValue(&screen->grid, ++screen->topRow);
        }
    }
}
}
