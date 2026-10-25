#include "common.h"

extern "C" {

typedef struct StatusDown {
    /* 0x000 */ u8 unk000[0x518];
    /* 0x518 */ u32 state[2];       /* current and previous state */
    /* 0x520 */ u8 unk520[4];
    /* 0x524 */ u32 step;
} StatusDown;

extern StatusDown *g_statusDown; /* 0x588fe8 */

static __inline void statusSetState(StatusDown *status, u32 value)
{
    u32 *state = status->state;
    u32 previous;

    status->step = 0;
    previous = state[0];
    state[0] = value;
    state[1] = previous;
}

/* Switches the status screen to state 3, remembering the previous state and restarting the step counter. */
void statusDownEnterState3(void)
{
    statusSetState(g_statusDown, 3);
}

} /* extern "C" */
