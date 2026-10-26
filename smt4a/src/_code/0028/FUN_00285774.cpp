#include "common.h"

extern "C" {

struct Status { u8 unk000[0x518]; u32 state; u32 previous; u32 mode; u32 timer; };
extern Status *g_statusDown;
void FUN_00230b9c(s32 mode, s32 selection, s32 flag);

/* Enters `state`, remembering the previous one and restarting the state timer. */
static __inline void statusDownEnter(Status *status, u32 state)
{
    status->timer = 0;
    status->previous = status->state;
    status->state = state;
}

void FUN_00285774(void)
{
    Status *status = g_statusDown;
    FUN_00230b9c(1, -1, 0);
    statusDownEnter(g_statusDown, 1);
    status->mode = 3;
}

} /* extern "C" */
