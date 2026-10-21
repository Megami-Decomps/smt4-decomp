#ifndef SHARD_W6_W6MATCH5_SECONDARYSORT_H
#define SHARD_W6_W6MATCH5_SECONDARYSORT_H

#include "common.h"

struct SecondarySortRecord {
    u8 unk000[0x150];
    u32 sortKey; // 0x150
};

extern "C" SecondarySortRecord *dataTable1bOr1cGetRecord(u16);

#endif
