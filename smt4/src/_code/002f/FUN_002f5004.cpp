/* NON_MATCHING: compiler folds repeated game-data pointer loads and uses a different clamp/pool layout. */
#include "common.h"

namespace { struct Game { u8 padding[0x24ba8]; u32 money; }; struct Blocks { u32 header; Game *game; }; }

extern "C" {
extern Blocks g_gameDataBlocks;
void FUN_002f5004(u32 amount)
{
    u32 money = g_gameDataBlocks.game->money + amount;
    if (money >= 10000000) { money = 9999999; }
    g_gameDataBlocks.game->money = money;
}
}
