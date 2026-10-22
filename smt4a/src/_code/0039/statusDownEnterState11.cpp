/* NON_MATCHING: scheduling only: retail materialises the constants -1, 0 and 0x11 before loading g_statusDown */
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

/* Enters state 0x11 and restarts the timer; keeps the selection only when keepSelection is set. */
void statusDownEnterState11(s32 keepSelection)
{
    StatusDownStateA *status = g_statusDown;

    if (keepSelection == 0) {
        status->selection = -1;
    }
    status->timer = 0;
    stateTrackSet(&status->track, 0x11);
}

} /* extern "C" */
