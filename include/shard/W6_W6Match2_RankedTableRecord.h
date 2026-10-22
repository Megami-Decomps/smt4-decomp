#ifndef SHARD_W6_W6MATCH2_RANKED_TABLE_RECORD_H
#define SHARD_W6_W6MATCH2_RANKED_TABLE_RECORD_H

#include "common.h"
#include <stddef.h>

struct RankedTableRecord {
    u8 unk00[0x59]; // 0x00
    u8 category;     // 0x59
    u8 unk5a;        // 0x5a
    u8 rank;         // 0x5b
    union {
        u8 unk5c[0x3c]; // 0x5c
        struct {
            u8 unk5c[0x0a]; // 0x5c
            s16 value;        // 0x66
            u8 unk68[0x30]; // 0x68
        } stats;
        struct {
            u8 unk5c[0x18];
            s16 affinities[8]; // 0x74: affinity class occupies the high six bits.
            u8 unk84[0x14];
        } elements;
    };
    u16 order;       // 0x98
    u8 unk9a[2]; // 0x9a
};

typedef char RankedTableRecordSizeCheck[sizeof(RankedTableRecord) == 0x9c ? 1 : -1];
typedef char RankedTableRecordAffinitiesOffsetCheck[offsetof(RankedTableRecord, elements.affinities) == 0x74 ? 1 : -1];

// The backing table word is aligned; keep this prefix view's original alignment.
static __inline u32 rankedTableRecordGetSortFlags(const RankedTableRecord *record)
{
    return *(const u32 *)(record->unk00 + 0x54);
}

extern "C" RankedTableRecord* dataTable08Sub2GetRecord(u16 id);

#endif
