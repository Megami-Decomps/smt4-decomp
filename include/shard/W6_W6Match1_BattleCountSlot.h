#ifndef SHARD_W6_W6MATCH1_BATTLECOUNTSLOT_H
#define SHARD_W6_W6MATCH1_BATTLECOUNTSLOT_H

#include "common.h"

struct BattleCountSlot {
    s16 id;    // 0x00
    u16 count; // 0x02: saturates at 0xffff
};

#endif
