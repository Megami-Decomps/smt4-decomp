/* NON_MATCHING: semantics now match (clamped subtraction stored and returned); retail reaches the stored counter through a second save-block view (saveBlock + 0x8c, then + 0x2d2c) with its own global load, which a single typed view does not reproduce. */
#include "gamedata/GameSaveBlocks.h"

extern "C" {
/* Spends `value` points from the available count (clamped at zero) and returns what is left. */
u32 FUN_002f0bd8(u32 value)
{
    u32 current = g_gameDataBlocks.saveBlock->body.points;
    u32 remaining = current < value ? 0 : current - value;
    g_gameDataBlocks.saveBlock->body.points = remaining;
    return remaining;
}
} /* extern "C" */
