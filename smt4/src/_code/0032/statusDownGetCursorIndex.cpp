#include "status/StatusDown.h"
extern "C" {
extern StatusDownState *g_statusDown;

extern s32 listCursorGetRowIfUnblocked(u8 *list);
s32 statusDownGetCursorIndex(void)
{
    if (g_statusDown == NULL) {
        return -1;
    }
    return listCursorGetRowIfUnblocked(g_statusDown->list);
}
}
