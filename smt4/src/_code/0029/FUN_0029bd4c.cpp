#include "ui/UiSpriteApi.h"
#include "status/StatusDown.h"

extern "C" {


/* If the status screen is up, restarts its timer, moves it to state 2, removes its touch regions and clears its slot block. */
void FUN_0029bd4c(void)
{
    StatusDownState *screen = g_statusDown;
    StatusDownState *status;
    s32 previous;

    if (screen->track.state == 0) {
        return;
    }
    uiSpriteSetKeyframe(screen->sprites, 2, 0);
    status = g_statusDown;
    status->stateTimer = 0;
    previous = status->track.state;
    status->track.state = 2;
    status->track.previous = previous;
    screen->nextState = 0;
    screen->tab = 0;
    statusDownClearTouchRegions(status);
}

} /* extern "C" */
