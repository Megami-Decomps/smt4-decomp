#ifndef SHARD_W6_W6MATCH5_STATISTICS_BANKS_H
#define SHARD_W6_W6MATCH5_STATISTICS_BANKS_H

#include "gamedata/GameDataAccess.h"
#include <stddef.h>

/* A statistics counter; the rolled statistics (data table 0x24, statisticsRollAll / smt4a statisticsRollAll) keep
 * their roll state in it, laid out as the encounter roll state (gamedata/ItemFlagState.h). */
union StatisticsCounter {
    u32 word;
    struct {
        /* 0x00 */ u16 count;             /* the rolled result */
        /* 0x02 */ u8 rolledMask;         /* weight groups already used this phase */
        /* 0x03 */ u8 countdown : 5;      /* rolls left before the result is rolled again */
        u8 changed : 1;
        u8 notify : 1;
        u8 enabled : 1;
    } fields;
};

struct StatisticsBankPrefix {
    /* 0x000 */ u8 unk00[0x1c];
    /* 0x01C */ StatisticsCounter primary[12 * 7]; // seven counters per row
    /* 0x16C */ StatisticsCounter secondary[2]; // first row of a two-counters-per-row bank
};

typedef char StatisticsBankLayoutCheck[sizeof(StatisticsCounter) == 4 &&
    offsetof(StatisticsBankPrefix, primary) == 0x1c &&
    offsetof(StatisticsBankPrefix, secondary) == 0x16c ? 1 : -1];

/* Look up a counter by bank and one-based row. */
static __inline StatisticsCounter *statisticsFindCounter(s32 bank, s32 row, s32 column)
{
    StatisticsBankPrefix *statistics = reinterpret_cast<StatisticsBankPrefix *>(gameDataBlocksGetStats());
    switch (bank) {
    case 0:
        return &statistics->primary[(row - 1) * 7 + column];
    case 1:
        return &statistics->secondary[(row - 1) * 2 + column];
    }
    return NULL;
}

#endif
