/* NON_MATCHING: initial map load/zero initialization scheduling and literal-pool order differ. */
#include "shard/W5_W5Match7_SceneState.h"

extern "C" {
s32 gameFlagIsSet(u32 flag);
void scrSetResult(s32 result);

// Classify the current map range, suppressing it by flag except in game mode 26.
u32 FUN_003b9a48(const GameState* state)
{
    u8 result = 0;
    if (state->sourceMap - 200u < 100u)
        result = 1;
    if (gameFlagIsSet(0x594) != 0)
        result = 0;
    if (g_gameState.mode == 0x1a)
        result = 2;
    scrSetResult(result);
    return 1;
}
}
