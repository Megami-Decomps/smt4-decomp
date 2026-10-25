#include "common.h"

extern "C" {

typedef struct Timer0025d57c {
    /* 0x000 */ u8 unk000[0x3ac];
    /* 0x3ac */ s32 state;
    /* 0x3b0 */ u8 unk3b0[0x428];
    /* 0x7d8 */ u32 handle;
    /* 0x7dc */ f32 time;
} Timer0025d57c;

extern Timer0025d57c *g_campCecRecv;

void FUN_0025cfe4(u32 handle, f32 *time);

/* While the timer is running (time above zero) in state 5, hands it to FUN_0025cfe4. Always returns 0. */
u32 FUN_0025d578(void)
{
    Timer0025d57c *timer = g_campCecRecv;

    if (timer->time > 0.0f && timer->state == 5) {
        FUN_0025cfe4(timer->handle, &timer->time);
    }
    return 0;
}

} /* extern "C" */
