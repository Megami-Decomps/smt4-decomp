#include "ui/UiSpriteApi.h"
#include "status/StatusDown.h"


extern "C" {


/* Enters `next`, remembering the previous one and restarting the state counter. */
static __inline void statusDownEnter(StatusDownState *work, u32 next)
{
    work->stateTimer = 0;
    work->track.previous = work->track.state;
    work->track.state = next;
}

/* Restarts the status-down timer and enters its third update state. */
void FUN_001ddbbc(void)
{
    StatusDownState *work = g_statusDown;
    uiSpriteSetKeyframe(work->sprites, 1, 0);
    statusDownEnter(g_statusDown, 1);
    work->nextState = 3;
}

} /* extern "C" */
