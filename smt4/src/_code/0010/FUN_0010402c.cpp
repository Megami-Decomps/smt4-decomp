/* NON_MATCHING: retail loads g_gameDataBlocks and the save block twice, reading the play time at its direct offset and
 * writing it through the save body (+0x88); armcc folds the two loads into one address. */
#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Adds to the play time and caps it at 9999:59:59. */
void FUN_0010402c(u32 amount)
{
    u32 total = g_gameDataBlocks.saveBlock->body.playSeconds + amount;
    if (total > 0x22550FF) {
        g_gameDataBlocks.saveBlock->body.playSeconds = 0x22550FF;
    } else {
        g_gameDataBlocks.saveBlock->body.playSeconds = total;
    }
}

} /* extern "C" */
