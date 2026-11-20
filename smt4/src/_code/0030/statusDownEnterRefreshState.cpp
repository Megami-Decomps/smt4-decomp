#include "status/StatusDown.h"

extern "C" {



extern int statusDownRebuildTouchRegions(void);

/* Switches the status screen to state 6, remembering the previous state, and clears its flag after the refresh. */
void statusDownEnterRefreshState(void)
{
    StatusDownState *status = g_statusDown;
    u32 previous;

    status->stateTimer = 0;
    previous = status->track.state;
    status->track.state = 6;
    status->track.previous = previous;
    statusDownRebuildTouchRegions();
    status->unk2391 = 0;
}

} /* extern "C" */
