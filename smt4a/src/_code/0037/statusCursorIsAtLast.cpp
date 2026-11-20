/* Returns 1 if the cursor sub-state's current position is the last one of its range. */
#include "status/StatusDownA.h"

extern "C" {




extern s32 listCursorGetRowIfUnblocked(ScrollSelection *list);
extern s32 gridNavigationGetItemCount(ScrollSelection *list);

u32 statusCursorIsAtLast(void)
{
    StatusDownStateA *holder = g_statusDown;
    if (holder != NULL) {
        s32 position = listCursorGetRowIfUnblocked(&holder->list);
        ScrollSelection *cursor = &holder->list;
        s32 count = gridNavigationGetItemCount(cursor);

        if (position == count - 1) {
            return 1;
        }
    }
    return 0;
}

}
