#include "common.h"

extern "C" {

typedef struct Counters {
    /* 0x000 */ u8 unk000[0x64C];
    /* 0x64C */ s16 unk64C;
} Counters;

extern struct {
    u8 unk0[4];
    Counters *counters;
} g_ifTouch;

/* Counts unk64C down towards 0. */
void FUN_002a87e8(void)
{
    if (0 < g_ifTouch.counters->unk64C) {
        g_ifTouch.counters->unk64C = g_ifTouch.counters->unk64C - 1;
    }
}

} /* extern "C" */
