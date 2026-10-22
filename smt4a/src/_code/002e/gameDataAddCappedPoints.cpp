/* NON_MATCHING: typed counter view keeps the save-block pointer live; retail reloads g_gameDataBlocks before the final capped store and allocates different registers. */
#include "shard/W4_W4Match6b_GameDataBlock.h"

struct GamePointCounters {
    u8 unk0000[0x2db4];
    s32 total; // 0x2db4
    u32 current; // 0x2db8
};

extern "C" {
// Accumulate the lifetime count and cap the available count at 9999.
void gameDataAddCappedPoints(s32 amount)
{
    GamePointCounters *counters = (GamePointCounters *)g_gameDataBlocks.saveBlock;
    counters->total += amount;
    counters->current += amount;
    u32 current = counters->current;
    ((GamePointCounters *)g_gameDataBlocks.saveBlock)->current =
        current <= 9999 ? current : 9999;
}
}
