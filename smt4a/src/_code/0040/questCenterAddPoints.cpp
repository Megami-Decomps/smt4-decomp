#include "common.h"

extern "C" {

typedef struct StatsBlock {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u16 counter;
} StatsBlock;

extern StatsBlock *gameDataBlocksGetStats(void);

/* Adds `amount` to the quest center counter, saturating at 0xFFFF. */
void questCenterAddPoints(s32 amount)
{
    StatsBlock *block = gameDataBlocksGetStats();
    s32 total = block->counter + amount;

    block->counter = total >= 0x10000 ? 0xFFFF : total;
}

} /* extern "C" */
