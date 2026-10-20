/* NON_MATCHING: retail loads the previous state with a pre-indexed `ldr r2,[r0,#1024]!` and stores state/previous together with `stm r0,{r1,r2}`; the build emits two separate stores and keeps the constants in the other registers. */
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

/* Switches the status screen to state 3, remembering the previous state and restarting the step counter. */
void FUN_002d9680(void)
{
    StatusDown *status = g_statusDown;
    u32 previous;

    status->step = 0;
    previous = status->state;
    status->state = 3;
    status->prevState = previous;
}

} /* extern "C" */
