#include "status/StatusDown.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

extern void FUN_00230d30(void);

/* Switches the status screen to mode 4, remembering the previous mode. */
void FUN_00371ef4(void)
{
    StatusDownStateA *status = g_statusDown;

    status->timer = 0;
    status->track.previous = status->track.state;
    status->track.state = 4;
    FUN_00230d30();
}

}
