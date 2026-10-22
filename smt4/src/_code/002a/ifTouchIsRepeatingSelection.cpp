#include "common.h"

extern "C" {

typedef struct Counters {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u8 unk008;
    /* 0x009 */ u8 unk009[0x645];
    /* 0x64E */ s16 unk64E;
    /* 0x650 */ s16 unk650;
} Counters;

extern struct {
    u8 unk0[4];
    Counters *counters;
} g_ifTouch;

u32 ifTouchIsRepeatingSelection(int id)
{
    int value;

    if (((g_ifTouch.counters->unk64E == id) &&
         (g_ifTouch.counters->unk008 == 1 || g_ifTouch.counters->unk008 == 2)) &&
        ((value = g_ifTouch.counters->unk650, value < 1 ||
          ((value >= 0xf && (((value - 0xfU) & 3) == 0)))))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
