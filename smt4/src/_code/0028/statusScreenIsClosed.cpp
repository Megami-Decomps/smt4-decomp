#include "status/StatusDown.h"

extern "C" {



u8 statusScreenIsClosed(void)
{
    int value = 0;

    if (g_statusDown != NULL) {
        value = g_statusDown->track.state;
    }
    return g_statusDown == NULL || value == 0;
}

} /* extern "C" */
