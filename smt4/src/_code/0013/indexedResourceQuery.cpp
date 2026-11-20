#include "common.h"

struct IndexedResourceQuery {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ void *resource;
    /* 0x3C */ u32 handle;
};
extern "C" {
s32 soundArchiveFindIndexedResource(u32 handle);
s32 indexedResourceGetEntry(void *resource, s32 index);
}

/* Resolve the owner's handle before querying its optional resource. */
extern "C" s32 indexedResourceQuery(IndexedResourceQuery *owner)
{
    if (owner->resource == NULL) {
        return 0;
    }
    s32 index = soundArchiveFindIndexedResource(owner->handle);
    if (index == -1) {
        return 0;
    }
    return indexedResourceGetEntry(owner->resource, index);
}
