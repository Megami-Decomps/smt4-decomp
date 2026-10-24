/* NON_MATCHING: same arithmetic; retail loads g_gameDataBlocks.table twice (once for the read, once for the clamped store) and reaches the timer index through a +0x88 sub-struct, built reuses one table pointer */
#include "common.h"

extern "C" {

struct SaveTable {
    /* 0x00000 */ u8 unk00000[0x8b];
    /* 0x0008b */ u8 activeTimer;
    /* 0x0008c */ u8 unk0008c[0x21e18 - 0x8c];
    /* 0x21e18 */ u32 playTime;
};

struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ SaveTable *table;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u32 *timers;
};

extern GameDataBlocksView g_gameDataBlocks;

/* Adds `delta` to the play time (capped just below 10 hours) and takes it off the active countdown timer. */
void FUN_00138aa4(u32 delta)
{
    SaveTable *table = g_gameDataBlocks.table;
    u32 total = table->playTime + delta;

    if (total > 35999999) {
        g_gameDataBlocks.table->playTime = 35999999;
    } else {
        g_gameDataBlocks.table->playTime = total;
    }
    u32 index = table->activeTimer;
    if (index < 5) {
        u32 remaining = g_gameDataBlocks.timers[index];

        g_gameDataBlocks.timers[index] = remaining > delta ? remaining - delta : 0;
    }
}

} /* extern "C" */
