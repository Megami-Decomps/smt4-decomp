#include "common.h"

extern "C" {

typedef struct StatusDown {
    /* 0x000 */ u8 unk000[0x518];
    /* 0x518 */ s32 state;
    /* 0x51C */ s32 prevState;
    /* 0x520 */ u8 unk520[4];
    /* 0x524 */ u32 unk524;
} StatusDown;

extern StatusDown *g_statusDown;

/* Moves the screen to `next`, remembering the previous state and restarting its timer. */
static inline void statusDownSetState(StatusDown *screen, s32 next)
{
    screen->unk524 = 0;
    screen->prevState = screen->state;
    screen->state = next;
}

void FUN_0031f688(void)
{
    statusDownSetState(g_statusDown, 6);
}

} /* extern "C" */
