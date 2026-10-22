#include "common.h"

struct IndexedResourceQuery {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ void *resource;
    /* 0x3C */ u32 handle;
};
extern "C" {
s32 FUN_00141bdc(u32 handle);
s32 FUN_00141e1c(void *resource, s32 index);
}

/* Resolve the owner's handle before querying its optional resource. */
extern "C" s32 indexedResourceQuery(IndexedResourceQuery *owner)
{
    if (owner->resource == NULL) {
        return 0;
    }
    s32 index = FUN_00141bdc(owner->handle);
    if (index == -1) {
        return 0;
    }
    return FUN_00141e1c(owner->resource, index);
}
