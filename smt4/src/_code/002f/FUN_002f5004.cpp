/* NON_MATCHING: retail reads the money-like word through the save pointer and writes it through a second, separately loaded save pointer (+0x88 body block); armcc folds the two global loads. */
#include "common.h"

namespace {
struct Body { u8 padding[0x24b20]; u32 money; };
struct Game { u8 header[0x88]; Body body; };
struct Blocks { u32 header; Game *game; };
}

extern "C" {
extern Blocks g_gameDataBlocks;
void FUN_002f5004(u32 amount)
{
    u32 money = g_gameDataBlocks.game->body.money + amount;
    Body *body = &g_gameDataBlocks.game->body;
    if (money > 9999999) { body->money = 9999999; } else { body->money = money; }
}
}
