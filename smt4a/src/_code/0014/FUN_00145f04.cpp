/* NON_MATCHING: saved argument registers differ; compiler folds the second bank's row adjustment into the base offset. */
#include "shard/W6_W6Match5_StatisticsBanks.h"

extern "C" {
StatisticsBankPrefix *gameDataBlocksGetStats(void);

u32 *FUN_00145f04(s32 bank, s32 row, s32 column)
{
    StatisticsBankPrefix *statistics = gameDataBlocksGetStats();
    if (bank == 0)
        return &statistics->primary[(row - 1) * 7 + column];
    if (bank != 1)
        return NULL;
    return &statistics->secondary[row * 2 - 2 + column];
}
}
