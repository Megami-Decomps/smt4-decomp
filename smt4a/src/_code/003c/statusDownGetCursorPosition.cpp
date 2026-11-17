#include "status/StatusDownA.h"

extern "C" {




extern s32 listCursorGetRowIfUnblocked(ScrollSelection *list);

/* Returns the status screen cursor's position, or -1 when the screen does not exist. */
s32 statusDownGetCursorPosition(void)
{
    if (g_statusDown == NULL) {
        return -1;
    }
    return listCursorGetRowIfUnblocked(&g_statusDown->list);
}

} /* extern "C" */
