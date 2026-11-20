#include "status/StatusDownA.h"

extern "C" {

extern void statusDownRegisterTouchRegions(void);

/* Switches the status screen to mode 4, remembering the previous mode. */
void FUN_00371ef4(void)
{
    StatusDownStateA *status = g_statusDown;

    status->stateTimer = 0;
    status->track.previous = status->track.state;
    status->track.state = 4;
    statusDownRegisterTouchRegions();
}

}
