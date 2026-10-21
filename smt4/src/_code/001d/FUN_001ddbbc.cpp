/* NON_MATCHING: instruction selection/order differs: retail mov r2, #0; compiler mov r3, #0. */
#include "common.h"

struct StatusDownWork {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ u8 timer[0x3D8];
    /* 0x400 */ u32 current;
    /* 0x404 */ u32 previous;
    /* 0x408 */ u32 state;
    /* 0x40C */ u32 counter;
};

extern "C" {

extern StatusDownWork *g_statusDown;
extern void timerStart(void *timer, s32 mode, s32 value);

/* Restarts the status-down timer and enters its third update state. */
void FUN_001ddbbc(void)
{
    StatusDownWork *work = g_statusDown;
    timerStart(work->timer, 1, 0);
    g_statusDown->counter = 0;
    g_statusDown->previous = g_statusDown->current;
    g_statusDown->current = 1;
    work->state = 3;
}

} /* extern "C" */
