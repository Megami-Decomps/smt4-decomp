/* NON_MATCHING: saved argument registers differ; compiler folds the second bank's row adjustment into the base offset. */
#include "shard/W6_W6Match5_StatisticsBanks.h"

extern "C" {
StatisticsBankPrefix *gameGetQuestCenterBlock(void);

u32 *FUN_002c0a2c(s32 bank, s32 row, s32 column)
{
    StatisticsBankPrefix *statistics = gameGetQuestCenterBlock();
    if (bank == 0)
        return &statistics->primary[(row - 1) * 7 + column];
    if (bank != 1)
        return NULL;
    return &statistics->secondary[row * 2 - 2 + column];
}
}
