#ifndef SHARD_W6_W6MATCH5_ENTRYSORTPRIMARYKEY_H
#define SHARD_W6_W6MATCH5_ENTRYSORTPRIMARYKEY_H

#include "shard/W5_W5Match7_EntrySort.h"

struct EntrySortPrimaryKeyView {
    u8 unk00[0x7e];
    u16 primaryKey; // 0x7e; outside the shared 0x72-byte prefix.
};

static __inline u16 entrySortGetPrimaryKey(const EntrySortData *entry)
{
    return reinterpret_cast<const EntrySortPrimaryKeyView *>(entry)->primaryKey;
}

#endif
