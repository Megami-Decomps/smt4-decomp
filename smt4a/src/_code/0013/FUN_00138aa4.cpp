/* NON_MATCHING: only the play-time store differs: retail reloads g_gameDataBlocks.table for the clamped store through a second base (`add r1, r2, #0`, likely a section-anchor/multifile effect), the build reuses the first table pointer. */
#include "common.h"

extern "C" {

/* The save block's state from +0x88 on. */
struct SaveTableHeader {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 activeTimer;
};

struct SaveTable {
    /* 0x00000 */ u8 unk00000[0x88];
    /* 0x00088 */ SaveTableHeader header;
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

/* Stores the play time, capped just below 10 hours. */
static __inline void setPlayTime(GameDataBlocksView *blocks, u32 total)
{
    if (total > 35999999) {
        blocks->table->playTime = 35999999;
    } else {
        blocks->table->playTime = total;
    }
}

/* Adds `delta` to the play time (capped just below 10 hours) and takes it off the active countdown timer. */
void FUN_00138aa4(u32 delta)
{
    SaveTable *table = g_gameDataBlocks.table;
    SaveTableHeader *header = &table->header;
    setPlayTime(&g_gameDataBlocks, table->playTime + delta);
    u32 index = header->activeTimer;
    u32 *timers = g_gameDataBlocks.timers;
    if (index < 5) {
        u32 remaining = timers[index];

        timers[index] = remaining <= delta ? 0 : remaining - delta;
    }
}

} /* extern "C" */
