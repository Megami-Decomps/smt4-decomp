#include "status/StatusDown.h"
extern "C" {

extern s32 listCursorGetRowIfUnblocked(ScrollSelection *list);
s32 statusDownGetCursorIndex(void)
{
    if (g_statusDown == NULL) {
        return -1;
    }
    return listCursorGetRowIfUnblocked(&g_statusDown->list);
}
}
