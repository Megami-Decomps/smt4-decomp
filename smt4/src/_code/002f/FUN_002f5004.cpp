/* NON_MATCHING: retail loads g_gameDataBlocks and the save block twice, reading the money at its direct offset and
 * writing it through the save body (+0x88); armcc folds the two loads into one address. */
#include "gamedata/GameSaveBlocks.h"

extern "C" {
/* Adds to the money and caps it at 9,999,999. */
void FUN_002f5004(u32 amount)
{
    u32 money = g_gameDataBlocks.saveBlock->body.config.selection.money + amount;
    if (money > 9999999) {
        g_gameDataBlocks.saveBlock->body.config.selection.money = 9999999;
    } else {
        g_gameDataBlocks.saveBlock->body.config.selection.money = money;
    }
}
}
