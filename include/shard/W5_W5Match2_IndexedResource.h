#ifndef SHARD_W5_W5MATCH2_INDEXEDRESOURCE_H
#define SHARD_W5_W5MATCH2_INDEXEDRESOURCE_H

#include "common.h"

struct IndexedResource;
struct IndexedResourceVtbl {
    /* 0x00 */ void *unk00[2];
    /* 0x08 */ s32 (*query)(IndexedResource *resource);
};
struct IndexedResource {
    /* 0x00 */ const IndexedResourceVtbl *vtable;
};
struct IndexedResourceEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ IndexedResource *object;
    /* 0x0C */ u8 unk0C[0x20];
};
struct IndexedResourceTable {
    /* 0x00 */ IndexedResourceEntry *entries;
    /* 0x04 */ u32 count;
};

static __inline IndexedResourceEntry *indexedResourceEntry(IndexedResourceTable *table, u32 index)
{
    if (table->entries != NULL && index < table->count) {
        return &table->entries[index];
    }
    return NULL;
}

#endif
