#ifndef SHARD_W6_W6MATCH5_PAIRED_AVAILABILITY_H
#define SHARD_W6_W6MATCH5_PAIRED_AVAILABILITY_H

#include "common.h"

struct AvailabilityState {
    u32 unk00;
    s32 value; // 0x04
    u8 unk08[8];
    u8 state; // 0x10
    u8 unk11[3];
};

static __inline bool availabilityStateReady(const AvailabilityState *entry)
{
    return entry->state == 0 || (entry->state == 3 && entry->value >= 1);
}

#endif
