#include "ui/UiSpriteApi.h"
#include "status/StatusDown.h"

extern "C" {

int ifTouchRegionRemove(void);
void __aeabi_memset4(void *block, u32 size, u32 value);

/* If the status screen is up, restarts its timer, moves it to state 2, removes its touch regions and clears its slot block. */
void FUN_0029bd4c(void)
{
    StatusDownState *screen = g_statusDown;
    StatusDownState *status;
    s32 previous;
    s32 i;

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
    for (i = 0; i < status->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    status->touchRegionCount = 0;
    __aeabi_memset4(status->slots, 0x29, 0xFFFFFFFF);
}

} /* extern "C" */
