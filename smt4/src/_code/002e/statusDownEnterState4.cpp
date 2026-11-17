#include "status/StatusDown.h"

extern "C" {

int FUN_0026ae68(void);

static __inline void stateTransitionSet(StatusDownTrack *transition, s32 next)
{
    transition->previous = transition->state;
    transition->state = next;
}

/* Switches the status screen to state 4, remembering the previous state, and restarts its timer. */
void statusDownEnterState4(void)
{
    g_statusDown->stateTimer = 0;
    stateTransitionSet(&g_statusDown->track, 4);
    FUN_0026ae68();
}

} /* extern "C" */
