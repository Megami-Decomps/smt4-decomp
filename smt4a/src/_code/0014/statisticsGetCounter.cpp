#include "shard/W6_W6Match5_StatisticsBanks.h"

extern "C" {
// Returns the raw counter word for the specified bank, one-based row and column.
u32 *statisticsGetCounter(s32 bank, s32 row, s32 column)
{
    StatisticsBankPrefix *statistics = reinterpret_cast<StatisticsBankPrefix *>(gameDataBlocksGetStats());
    switch (bank) {
    case 0:
        return &statistics->primary[(row - 1) * 7 + column].word;
    case 1:
        return &statistics->secondary[(row - 1) * 2 + column].word;
    }
    return NULL;
}
}
