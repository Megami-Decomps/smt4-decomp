/* NON_MATCHING: retail uses `mov r2, #0` where armcc emits `mov r3, #0`. */
#include "common.h"

extern "C" {

struct Status { u8 unk000[0x518]; u32 state; u32 previous; u32 mode; u32 timer; };
extern Status *g_statusDown;
void FUN_00230b9c(s32 mode, s32 selection, s32 flag);

void statusDownEnterStateOne(void)
{
    Status *status = g_statusDown;
    FUN_00230b9c(1, -1, 0);
    Status *current = g_statusDown;
    current->timer = 0;
    current->previous = current->state;
    current->state = 1;
    status->mode = 32;
}

} /* extern "C" */
