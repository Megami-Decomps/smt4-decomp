#include "common.h"

namespace {
struct GameCounters {
    /* 0x00 */ u8 unk00[0x66];
    /* 0x66 */ u16 count;
};
struct GameBlocks {
    /* 0x00 */ void *unk00;
    /* 0x04 */ GameCounters *counters;
};
}

extern "C" {
extern GameBlocks g_gameDataBlocks;

/* Increments the saved counter, clamping it to 9998. */
void FUN_002ced88(void)
{
    GameCounters *counters = g_gameDataBlocks.counters;
    if (counters->count < 9998) {
        counters->count++;
    }
    if (counters->count >= 9998) {
        counters->count = 9998;
    }
}
}
