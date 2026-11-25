/* NON_MATCHING: retail loads the save-block pointer twice, reading the counter at its direct offset and
 * writing through the body at +0x88; the compiler combines the accesses. */
#include "gamedata/GameSaveBlocks.h"

extern "C" {
/* Adds to the saved count of received StreetPass records, capped at 9,999,999. */
void FUN_002f5004(u32 amount)
{
    enum { MAX_RECEIVED_RECORDS = 9999999 };
    u32 total = g_gameDataBlocks.saveBlock->body.config.selection.state.money + amount;
    if (total > MAX_RECEIVED_RECORDS) {
        g_gameDataBlocks.saveBlock->body.config.selection.state.money = MAX_RECEIVED_RECORDS;
    } else {
        g_gameDataBlocks.saveBlock->body.config.selection.state.money = total;
    }
}

} /* extern "C" */
