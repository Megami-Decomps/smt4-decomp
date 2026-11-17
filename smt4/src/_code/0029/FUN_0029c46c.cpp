#include "status/StatusDown.h"

extern "C" {

u8 FUN_0029c46c(void)
{
    if (g_statusDown->track.state == 1) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
