#include "status/StatusDown.h"

extern "C" {



/* Enters `state`, remembering the previous one and restarting the state timer. */
static __inline void statusDownEnter(StatusDownState *status, u32 state)
{
    status->stateTimer = 0;
    status->track.previous = status->track.state;
    status->track.state = state;
}

/* Enters state 14 (remembering the previous one); resets the cursor when `keepCursor` is 0. */
void FUN_0030ab34(s32 keepCursor)
{
    StatusDownState *status = g_statusDown;

    if (keepCursor == 0) {
        g_statusDown->selection = -1;
    }
    statusDownEnter(status, 14);
}

}
