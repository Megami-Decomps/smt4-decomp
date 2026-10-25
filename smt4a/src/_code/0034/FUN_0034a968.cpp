#include "status/StatusDown.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

/* Enters `state`, remembering the previous one and restarting the timer. */
static void statusEnterState(StatusDownStateA *status, u32 state)
{
    status->timer = 0;
    status->track.previous = status->track.state;
    status->track.state = state;
}

/* Enters state 3. */
void FUN_0034a968(void)
{
    statusEnterState(g_statusDown, 3);
}

} /* extern "C" */
