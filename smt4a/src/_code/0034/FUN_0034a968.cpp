/* NON_MATCHING: scheduling only: retail materialises the constants 0 and 3 (r2, r1) before loading g_statusDown */
#include "status/StatusDown.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

/* Changes the state, remembering the previous one. */
static void stateTrackSet(StatusDownTrack *track, u32 state)
{
    u32 previous = track->state;

    track->state = state;
    track->previous = previous;
}

/* Enters state 3, remembering the previous state, and restarts the timer. */
void FUN_0034a968(void)
{
    StatusDownStateA *status = g_statusDown;

    status->timer = 0;
    stateTrackSet(&status->track, 3);
}

} /* extern "C" */
