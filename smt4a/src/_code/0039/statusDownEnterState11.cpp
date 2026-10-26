/* NON_MATCHING: scheduling only: retail materialises -1, 0 and 0x11 before/around the g_statusDown load; setter/helper forms tried. */
#include "status/StatusDown.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

static void statusDownSetSelection(StatusDownStateA *status, s32 selection)
{
    status->selection = selection;
}

/* Enters `state`, remembering the previous one and restarting the state timer. */
static void statusDownEnter(StatusDownStateA *status, u32 state)
{
    status->timer = 0;
    status->track.previous = status->track.state;
    status->track.state = state;
}

/* Enters state 0x11 and restarts the timer; keeps the selection only when keepSelection is set. */
void statusDownEnterState11(s32 keepSelection)
{
    if (keepSelection == 0) {
        statusDownSetSelection(g_statusDown, -1);
    }
    statusDownEnter(g_statusDown, 0x11);
}

} /* extern "C" */
