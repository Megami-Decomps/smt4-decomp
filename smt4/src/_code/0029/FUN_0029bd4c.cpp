#include "common.h"

extern "C" {

typedef struct StatusDown {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ u8 timer[0x3D4];
    /* 0x3FC */ u8 unk3FC;
    /* 0x3FD */ u8 unk3FD[3];
    /* 0x400 */ s32 state;
    /* 0x404 */ s32 prevState;
    /* 0x408 */ u32 unk408;
    /* 0x40C */ u32 unk40C;
    /* 0x410 */ u8 unk410[0x1C];
    /* 0x42C */ u8 slots[0x29];
    /* 0x455 */ u8 unk455[0x2B];
    /* 0x480 */ u8 touchRegionCount;
} StatusDown;

extern StatusDown *g_statusDown;

int timerStart(void *timer, s32 arg0, s32 arg1);
int ifTouchRegionRemove(void);
void __aeabi_memset4(void *block, u32 size, u32 value);

/* If the status screen is up, restarts its timer, moves it to state 2, removes its touch regions and clears its slot block. */
void FUN_0029bd4c(void)
{
    StatusDown *screen = g_statusDown;
    StatusDown *status;
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
    status->prevState = previous;
    screen->unk408 = 0;
    screen->unk3FC = 0;
    for (i = 0; i < status->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    status->touchRegionCount = 0;
    __aeabi_memset4(status->slots, 0x29, 0xFFFFFFFF);
}

} /* extern "C" */
