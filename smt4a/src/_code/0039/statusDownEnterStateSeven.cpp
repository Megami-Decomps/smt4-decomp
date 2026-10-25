#include "common.h"

extern "C" {

struct Status { u8 unk000[0x518]; u32 state; u32 previous; u32 unk520; u32 timer; u8 unk528[0x1f81]; u8 active; };
extern Status *g_statusDown;
void FUN_00230d30(u32 state, u32 previous, u32 *track);

/* Enters `state`, remembering the previous one and restarting the state timer. */
static __inline void statusDownEnter(Status *status, u32 state)
{
    status->timer = 0;
    status->previous = status->state;
    status->state = state;
}

void statusDownEnterStateSeven(void)
{
    Status *status = g_statusDown;
    statusDownEnter(status, 7);
    FUN_00230d30(7, status->previous, &status->state);
    status->active = 0;
}

} /* extern "C" */
