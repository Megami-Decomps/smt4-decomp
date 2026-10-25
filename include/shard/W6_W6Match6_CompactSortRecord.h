#ifndef SHARD_W6_W6MATCH6_COMPACT_SORT_RECORD_H
#define SHARD_W6_W6MATCH6_COMPACT_SORT_RECORD_H

#include "common.h"
#include "shard/W5_W5Match2_LinkedItems.h"

struct CompactSortRecord {
    u16 id;
    u8 category;
    u8 flags;
};

extern "C" CompactSortRecord *findSkillMetadataById(u16 id);

#ifdef __cplusplus
extern "C" {
#endif

void FUN_003c2df0(LinkedItems *items, LinkedItem *item, LinkedItem *replacement);

#ifdef __cplusplus
}
#endif

#endif
