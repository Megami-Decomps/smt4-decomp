#include "status/StatusDown.h"
extern "C" {
extern StatusDownState *g_statusDown;

extern s32 FUN_0029efa8(u8 *list);
s32 statusDownGetCursorIndex(void)
{
    if (g_statusDown == NULL) {
        return -1;
    }
    return FUN_0029efa8(g_statusDown->list);
}
}
