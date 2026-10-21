#ifndef SHARD_W6_W6MATCH4_UNITPAIRS_H
#define SHARD_W6_W6MATCH4_UNITPAIRS_H

#include "common.h"

struct UnitPairTable {
    u8 unk000[0x5a8];
    s32 pairs[133][2]; // 0x5a8
};

extern "C" UnitPairTable *btlUnitGet(void *contextHandle);

#endif
