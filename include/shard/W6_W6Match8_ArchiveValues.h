#ifndef SHARD_W6_W6MATCH8_ARCHIVEVALUES_H
#define SHARD_W6_W6MATCH8_ARCHIVEVALUES_H

#include "common.h"

struct ArchiveAttribute {
    u32 name;
    u32 value;
};
struct ArchiveAttributeTable {
    u8 unk00[0x18];
    ArchiveAttribute *entries;
    u32 count;
};
struct Archive {
    ArchiveAttributeTable *table;
};

#endif
