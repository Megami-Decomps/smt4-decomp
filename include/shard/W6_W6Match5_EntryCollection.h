#ifndef SHARD_W6_W6MATCH5_ENTRY_COLLECTION_H
#define SHARD_W6_W6MATCH5_ENTRY_COLLECTION_H

#include "common.h"

struct CollectionEntry {
    u16 id;
    u8 unk02[0x1e];
};
struct EntryCollection {
    s16 count; // 0x0000
    u16 unk0002;
    CollectionEntry entries[0x500]; // 0x0004
    s8 sortMode; // 0xa004
};
typedef s32 (*EntryComparator)(const void *, const void *);

extern "C" void __aeabi_memcpy4(void *, const void *, u32);

#endif
