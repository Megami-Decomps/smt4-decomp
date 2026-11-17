#include "status/StatusDownA.h"

extern "C" {




static __inline void stateTransitionSet(StatusDownTrack *transition, s32 next)
{
    transition->previous = transition->state;
    transition->state = next;
}

/* Switches the status screen to state 1, remembering the previous state, and restarts its timer. */
void statusDownEnterState1(void)
{
    g_statusDown->stateTimer = 0;
    stateTransitionSet(&g_statusDown->track, 1);
}

} /* extern "C" */
