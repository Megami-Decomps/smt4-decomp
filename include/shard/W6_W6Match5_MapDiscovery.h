#ifndef SHARD_W6_W6MATCH5_MAPDISCOVERY_H
#define SHARD_W6_W6MATCH5_MAPDISCOVERY_H

#include "common.h"

struct MapDiscoveryState {
    u8 unk0000[0x12f0];
    u8 discovered[1]; // 0x12f0: variable-length cell bitset
};

#endif
