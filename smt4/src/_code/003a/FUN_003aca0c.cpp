#include "common.h"

extern "C" {

typedef struct Countdown {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u8 state;
    /* 0x1D */ u8 unk1D[2];
    /* 0x1F */ u8 unk1F;
} Countdown;

extern struct {
    u8 unk0[4];
    Countdown *countdown;
} g_countdown; /* 0x43d9e0 */

void FUN_003aca0c(void)
{
    if (g_countdown.countdown->state >= 3) {
        g_countdown.countdown->unk1F = 4;
    }
}

} /* extern "C" */
