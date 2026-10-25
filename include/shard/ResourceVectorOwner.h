#ifndef SHARD_RESOURCEVECTOROWNER_H
#define SHARD_RESOURCEVECTOROWNER_H

#include "common.h"
#include <vector>
#include <stddef.h>
class Obj55813c;

struct ResourceVectorOwner {
    ~ResourceVectorOwner();
    union {
        u8 unk00[0x14];
        struct {
            void *data;
            u32 size;
            u32 cursor;
            u32 capacity;
            Obj55813c *file;
        } storage;
    };
    /* 0x14 */ u32 flags;
    /* 0x18 */ std::vector<void *> resources;
};
typedef char ResourceVectorOwnerLayoutCheck[
    offsetof(ResourceVectorOwner, storage.file) == 0x10 &&
    offsetof(ResourceVectorOwner, flags) == 0x14 &&
    offsetof(ResourceVectorOwner, resources) == 0x18 &&
    sizeof(ResourceVectorOwner) == 0x24 ? 1 : -1];

#endif
