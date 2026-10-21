#ifndef SHARD_W6_W6MATCH5_DEVILSORT_H
#define SHARD_W6_W6MATCH5_DEVILSORT_H

#include "common.h"

struct DevilSortRecord {
    u16 id; // 0x00
    u8 race; // 0x02
    u8 level; // 0x03
};

struct RankedDevilEntry {
    u16 id; // 0x00
    u8 rank; // 0x02
};

extern "C" DevilSortRecord *devilGetRecord(u16);

#endif
