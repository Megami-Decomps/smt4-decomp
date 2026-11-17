#include "status/StatusDown.h"

extern "C" {
/* Reads or updates the requested object state. */

void FUN_002f6728(void)
{
    StatusDownState *status = g_statusDown;
    status->stateTimer = 0;
    status->track.previous = status->track.state;
    status->track.state = 3;
}
}
