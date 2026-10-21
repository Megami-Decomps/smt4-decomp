#include "common.h"

extern "C" {

typedef struct StatsBlock {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 points;
} StatsBlock;

extern StatsBlock *gameDataBlocksGetStats(void);

/* Adds `amount` to the stats block's points, capped at 0xFFFF. */
void gameAddPointsClamped(int amount)
{
    StatsBlock *block = gameDataBlocksGetStats();

    amount = block->points + amount;
    if (amount >= 0x10000) {
        amount = 0xFFFF;
    }
    block->points = amount;
}

} /* extern "C" */
