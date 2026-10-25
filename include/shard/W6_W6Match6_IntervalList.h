#ifndef SHARD_W6_W6MATCH6_INTERVAL_LIST_H
#define SHARD_W6_W6MATCH6_INTERVAL_LIST_H

#include "shard/W6_W6Match2_RangePresets.h"
#include "shard/W4_W4Match2_BtlUnits.h"

struct RangeLink {
    RangeLink *previous, *next;

    void unlink()
    {
        previous->next = next;
        next->previous = previous;
    }
};
struct RangeNode : RangeLink {
    RangePreset range;

    explicit RangeNode(RangeLink *following)
    {
        previous = following->previous;
        next = following;
        following->previous = this;
        previous->next = this;
    }
};
struct RangeSet : RangeLink {
    void *allocator;
};

extern "C" {
u32 intersectInclusiveRangeSet(RangeSet *, const RangeSet *);
u32 intersectInclusiveRangeSet(RangeSet *, const RangeSet *);
}

#ifdef __cplusplus
extern "C" {
#endif

u32 btlHasReserveReplacement(const BtlEntry* entry);

#ifdef __cplusplus
}
#endif

#endif
