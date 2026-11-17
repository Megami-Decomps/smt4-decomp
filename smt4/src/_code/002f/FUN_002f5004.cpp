/* NON_MATCHING: retail reads the money-like word through the save pointer and writes it through a second, separately loaded save pointer (+0x88 body block); armcc folds the two global loads. */
#include "gamedata/GameSaveBlocks.h"

extern "C" {
void FUN_002f5004(u32 amount)
{
    u32 money = g_gameDataBlocks.saveBlock->body.config.selection.money + amount;
    GameSaveBody *body = &g_gameDataBlocks.saveBlock->body;
    if (money > 9999999) {
        body->config.selection.money = 9999999;
    } else {
        body->config.selection.money = money;
    }
}
}
