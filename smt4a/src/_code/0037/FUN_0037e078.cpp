/* NON_MATCHING: retail materialises the zero in r2 and the new state (3) in r1 and stores state/previous with one `stm r0,{r1,r2}` after a pre-indexed load; the build uses the opposite constant registers and two stores. */
#include "common.h"

extern "C" {

typedef struct StatusDown {
    /* 0x000 */ u8 unk000[0x518];
    /* 0x518 */ u32 state[2];       /* current and previous state */
    /* 0x520 */ u8 unk520[4];
    /* 0x524 */ u32 step;
} StatusDown;

extern StatusDown *g_statusDown; /* 0x588fe8 */

/* Switches the status screen to state 3, remembering the previous state and restarting the step counter. */
void FUN_0037e078(void)
{
    StatusDown *status = g_statusDown;
    u32 *state;
    u32 previous;

    status->step = 0;
    state = status->state;
    previous = state[0];
    state[0] = 3;
    state[1] = previous;
}

} /* extern "C" */
