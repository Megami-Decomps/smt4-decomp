#include "shard/W6_W6Match5_StatisticsBanks.h"

extern "C" {
StatisticsBankPrefix *gameGetQuestCenterBlock(void);

// Returns counter (row, column) of statistics bank 0 (seven per row) or 1 (two per row); NULL for other banks. Rows count from 1.
u32 *statisticsGetCounter(s32 bank, s32 row, s32 column)
{
    StatisticsBankPrefix *statistics = gameGetQuestCenterBlock();
    switch (bank) {
    case 0:
        return &statistics->primary[(row - 1) * 7 + column].word;
    case 1:
        return &statistics->secondary[(row - 1) * 2 + column].word;
    }
    return NULL;
}
}
