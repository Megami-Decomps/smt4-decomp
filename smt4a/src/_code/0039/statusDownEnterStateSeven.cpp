#include "status/StatusDownA.h"

extern "C" {

void statusDownRebuildTouchRegions(u32 state, u32 previous, StatusDownTrack *track);

/* Enters `state`, remembering the previous one and restarting the state timer. */
static __inline void statusDownEnter(StatusDownStateA *status, u32 state)
{
    status->stateTimer = 0;
    status->track.previous = status->track.state;
    status->track.state = state;
}

void statusDownEnterStateSeven(void)
{
    StatusDownStateA *status = g_statusDown;
    statusDownEnter(status, 7);
    statusDownRebuildTouchRegions(7, status->track.previous, &status->track);
    status->unk24A9 = 0;
}

} /* extern "C" */
