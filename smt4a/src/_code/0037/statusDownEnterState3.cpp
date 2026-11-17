#include "status/StatusDownA.h"

extern "C" {



static __inline void statusSetState(StatusDownStateA *status, u32 value)
{
    StatusDownTrack *track = &status->track;
    s32 previous;

    status->stateTimer = 0;
    previous = track->state;
    track->state = value;
    track->previous = previous;
}

/* Switches the status screen to state 3, remembering the previous state and restarting the step counter. */
void statusDownEnterState3(void)
{
    statusSetState(g_statusDown, 3);
}

} /* extern "C" */
