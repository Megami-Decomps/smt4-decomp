#include "status/StatusDown.h"
#include "code/Code0029_VariantA.h"
#include "code/Code0029_VariantB.h"

extern "C" {




/* Returns whether the cursor's current position is the last index of its list (size - 1); false if there is no holder. */
u32 statusCursorIsAtLast(void)
{
    StatusDownState *holder = g_statusDown;
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

} /* extern "C" */
