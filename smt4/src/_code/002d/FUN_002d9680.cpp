#include "common.h"

extern "C" {

typedef struct StatusDown {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ u32 state;
    /* 0x404 */ u32 prevState;
    /* 0x408 */ u8 unk408[4];
    /* 0x40C */ u32 step;
} StatusDown;

extern StatusDown *g_statusDown; /* 0x44e190 */

static __inline void statusEnterState(StatusDown *status, u32 next)
{
    status->step = 0;
    status->prevState = status->state;
    status->state = next;
}

/* Switches the status screen to state 3, remembering the previous state and restarting the step counter. */
void FUN_002d9680(void)
{
    statusEnterState(g_statusDown, 3);
}

} /* extern "C" */
