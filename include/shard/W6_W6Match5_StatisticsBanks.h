#ifndef SHARD_W6_W6MATCH5_STATISTICS_BANKS_H
#define SHARD_W6_W6MATCH5_STATISTICS_BANKS_H

#include "common.h"

struct StatisticsBankPrefix {
    u8 unk00[0x1c];
    u32 primary[12 * 7]; // 0x01c: seven counters per row
    u32 secondary[2]; // 0x16c: first row of a two-counters-per-row bank
};

#endif
