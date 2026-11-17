#include "status/StatusDownA.h"

extern "C" {

int ifTouchRegionRemove(void);
void __aeabi_memset4(void *block, u32 size, u32 value);
void statusDownSetSpriteMode(s32 mode, s32 imageKey, s32 flag);

/* Enters `next`, remembering the previous state and restarting the state timer. */
static __inline void statusDownEnter(StatusDownStateA *status, s32 next)
{
    status->stateTimer = 0;
    status->track.previous = status->track.state;
    status->track.state = next;
}

/* If the status screen is up, restarts its slide sprite, moves it to state 2, removes its touch regions and clears its slots. */
void statusDownRestartTransition(void)
{
    StatusDownStateA *screen = g_statusDown;
    StatusDownStateA *status;

    if (screen->track.state == 0) {
        return;
    }
    statusDownSetSpriteMode(2, -1, 0);
    status = g_statusDown;
    statusDownEnter(status, 2);
    screen->nextState = 0;
    screen->tab = 0;
    for (s32 i = 0; i < status->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    status->touchRegionCount = 0;
    __aeabi_memset4(status->slots, sizeof(status->slots), 0xFFFFFFFF);
}

} /* extern "C" */
