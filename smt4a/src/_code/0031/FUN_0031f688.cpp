#include "status/StatusDownA.h"

extern "C" {



/* Moves the screen to `next`, remembering the previous state and restarting its timer. */
static inline void statusDownSetState(StatusDownStateA *screen, s32 next)
{
    screen->stateTimer = 0;
    screen->track.previous = screen->track.state;
    screen->track.state = next;
}

void FUN_0031f688(void)
{
    statusDownSetState(g_statusDown, 6);
}

} /* extern "C" */
