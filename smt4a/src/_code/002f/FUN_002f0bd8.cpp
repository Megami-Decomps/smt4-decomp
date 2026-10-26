/* NON_MATCHING: semantics now match (clamped subtraction stored and returned); retail reaches the stored counter through a second save-block view (saveBlock + 0x8c, then + 0x2d2c) with its own global load, which a single typed view does not reproduce. */
#include "shard/W4_W4Match6b_GameDataBlock.h"

struct GamePointCounters {
    u8 unk0000[0x2db4];
    s32 total; // 0x2db4
    u32 current; // 0x2db8
};

extern "C" {
/* Spends `value` points from the available count (clamped at zero) and returns what is left. */
u32 FUN_002f0bd8(u32 value)
{
    u32 current = ((GamePointCounters *)g_gameDataBlocks.saveBlock)->current;
    u32 remaining = current < value ? 0 : current - value;
    ((GamePointCounters *)g_gameDataBlocks.saveBlock)->current = remaining;
    return remaining;
}
}
