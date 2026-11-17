#include "status/StatusDownA.h"

extern "C" {

void statusDownSetSpriteMode(s32 mode, s32 selection, s32 flag);

/* Enters `state`, remembering the previous one and restarting the state timer. */
static __inline void statusDownEnter(StatusDownStateA *status, u32 state)
{
    status->stateTimer = 0;
    status->track.previous = status->track.state;
    status->track.state = state;
}

void FUN_00285774(void)
{
    StatusDownStateA *status = g_statusDown;
    statusDownSetSpriteMode(1, -1, 0);
    statusDownEnter(g_statusDown, 1);
    status->nextState = 3;
}

} /* extern "C" */
