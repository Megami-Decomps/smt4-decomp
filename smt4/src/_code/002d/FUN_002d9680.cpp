#include "status/StatusDown.h"

extern "C" {



static __inline void statusEnterState(StatusDownState *status, u32 next)
{
    status->stateTimer = 0;
    status->track.previous = status->track.state;
    status->track.state = next;
}

/* Switches the status screen to state 3, remembering the previous state and restarting the step counter. */
void FUN_002d9680(void)
{
    statusEnterState(g_statusDown, 3);
}

} /* extern "C" */
