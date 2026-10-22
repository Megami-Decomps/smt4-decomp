#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;

int timerStart(void *timer, s32 arg0, s32 arg1);
int ifTouchRegionRemove(void);
void __aeabi_memset4(void *block, u32 size, u32 value);

/* If the status screen is up, restarts its timer, moves it to state 2, removes its touch regions and clears its slot block. */
void FUN_0029bd4c(void)
{
    StatusDownState *screen = g_statusDown;
    StatusDownState *status;
    s32 previous;
    s32 i;

    if (screen->state == 0) {
        return;
    }
    timerStart(screen->timer, 2, 0);
    status = g_statusDown;
    status->unk40C = 0;
    previous = status->state;
    status->state = 2;
    status->previousState = previous;
    screen->unk408 = 0;
    screen->unk3FC = 0;
    for (i = 0; i < status->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    status->touchRegionCount = 0;
    __aeabi_memset4(status->slots, 0x29, 0xFFFFFFFF);
}

} /* extern "C" */
