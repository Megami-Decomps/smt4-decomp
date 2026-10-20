#include "common.h"

extern "C" {

typedef struct Countdown {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s8 state;
} Countdown;

extern struct {
    u8 unk0[4];
    Countdown *countdown;
} g_countdown; /* 0x43d9e0 */

/* 0 when the countdown is in state 5, else 1. */
u8 FUN_00241a44(void)
{
    if (g_countdown.countdown->state == 5) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
