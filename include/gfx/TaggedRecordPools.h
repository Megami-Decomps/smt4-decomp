#ifndef GFX_TAGGED_RECORD_POOLS_H
#define GFX_TAGGED_RECORD_POOLS_H
#include "common.h"
#include <stddef.h>

struct TaggedPoolRecord {
    u8 unk00[6];
    s16 tag; // 0x06
    u8 enabled; // 0x08
    u8 unk09[0x9f];
};
/* The record counts and pool pointers of the collision global (smt4 g_mapCollision). */
struct TaggedRecordPools {
    u32 unk00;
    s32 counts[5]; // 0x04, the fifth count belongs to the static pool
    TaggedPoolRecord *pools[4]; // 0x18
};
typedef char TaggedPoolRecordLayoutCheck[sizeof(TaggedPoolRecord) == 0xa8 &&
    offsetof(TaggedPoolRecord, tag) == 6 && offsetof(TaggedPoolRecord, enabled) == 8 ? 1 : -1];
typedef char TaggedRecordPoolsLayoutCheck[sizeof(TaggedRecordPools) == 0x28 &&
    offsetof(TaggedRecordPools, counts) == 4 &&
    offsetof(TaggedRecordPools, pools) == 0x18 ? 1 : -1];
#endif
