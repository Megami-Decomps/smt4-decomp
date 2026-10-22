#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;

extern int FUN_0029ee54(u8 *block);

int statusDownGetLastEntryIndex(void)
{
    int count;

    if (g_statusDown == NULL) {
        return 0;
    }
    count = FUN_0029ee54(g_statusDown->list);
    return count - 1;
}

} /* extern "C" */
