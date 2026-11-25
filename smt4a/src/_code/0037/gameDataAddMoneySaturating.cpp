/* NON_MATCHING: retail loads the save-block pointer twice, reading the counter at its direct offset and
 * writing through the body at +0x88; the compiler combines the accesses. */
#include "gamedata/GameSaveBlocks.h"

/* Adds to the saved count of received StreetPass records, capped at 9,999,999. */
extern "C" void gameDataAddMoneySaturating(u32 amount)
{
    enum { MAX_RECEIVED_RECORDS = 9999999 };
    u32 total = g_gameDataBlocks.saveBlock->body.record.tail.unk08 + amount;
    if (total > MAX_RECEIVED_RECORDS) {
        g_gameDataBlocks.saveBlock->body.record.tail.unk08 = MAX_RECEIVED_RECORDS;
    } else {
        g_gameDataBlocks.saveBlock->body.record.tail.unk08 = total;
    }
}
