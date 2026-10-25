/* NON_MATCHING: retail materialises the constants 0 and 6 first and writes state/prevState with one `stm r0, {r1, r2}`; built orders the loads differently and stores them separately. */
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

/* Moves the screen to `next`, remembering the previous state. */
static inline void statusDownSetState(StatusDown *screen, s32 next)
{
    s32 previous = screen->state;
    screen->state = next;
    screen->prevState = previous;
}

void FUN_0031f688(void)
{
    StatusDown *screen = g_statusDown;

    screen->unk524 = 0;
    statusDownSetState(screen, 6);
}

} /* extern "C" */
