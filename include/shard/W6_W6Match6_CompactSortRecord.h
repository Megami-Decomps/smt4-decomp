#ifndef SHARD_W6_W6MATCH6_COMPACT_SORT_RECORD_H
#define SHARD_W6_W6MATCH6_COMPACT_SORT_RECORD_H

#include "common.h"

struct CompactSortRecord {
    u16 id;
    u8 category;
    u8 flags;
};

extern "C" CompactSortRecord *findSkillMetadataById(u16 id);

#endif
