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
struct TaggedRecordPools {
    s32 counts[5]; // 0x00, the fifth count belongs to the static pool
    TaggedPoolRecord *pools[4]; // 0x14
};
typedef char TaggedPoolRecordLayoutCheck[sizeof(TaggedPoolRecord) == 0xa8 &&
    offsetof(TaggedPoolRecord, tag) == 6 && offsetof(TaggedPoolRecord, enabled) == 8 ? 1 : -1];
typedef char TaggedRecordPoolsLayoutCheck[sizeof(TaggedRecordPools) == 0x24 &&
    offsetof(TaggedRecordPools, pools) == 0x14 ? 1 : -1];
#endif
