#include "status/StatusDown.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

/* Enters `state`, remembering the previous one and restarting the state timer. */
static __inline void statusDownEnter(StatusDownStateA *status, u32 state)
{
    status->timer = 0;
    status->track.previous = status->track.state;
    status->track.state = state;
}

/* Enters state 0x11 and restarts the timer; keeps the selection only when keepSelection is set. */
void statusDownEnterState11(s32 keepSelection)
{
    StatusDownStateA *status = g_statusDown;

    if (keepSelection == 0) {
        g_statusDown->selection = -1;
    }
    statusDownEnter(status, 0x11);
}

} /* extern "C" */
