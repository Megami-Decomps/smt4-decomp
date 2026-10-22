#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;

u8 FUN_0029c48c(void)
{
    if (g_statusDown->state == 2) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
