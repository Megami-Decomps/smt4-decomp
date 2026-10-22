#ifndef GFX_RELATIVERESOURCECLONE_H
#define GFX_RELATIVERESOURCECLONE_H
#include "shard/S1NwGfx.h"
#include "classes/AsdAllocatorObject.h"

struct RelativeCloneStorage {
    u32 flags;
    RelativePointer owner;
    u32 data[6];
};
struct RelativeCloneResource {
    u32 flags;
    u32 unk04;
    RelativePointer child;
    RelativePointer storage;
    u8 unk10[0x3C];
};
typedef char RelativeCloneLayoutCheck[
    sizeof(RelativeCloneStorage) == 0x20 && sizeof(RelativeCloneResource) == 0x4C &&
    offsetof(RelativeCloneStorage, owner) == 4 && offsetof(RelativeCloneResource, child) == 8 &&
    offsetof(RelativeCloneResource, storage) == 0xC ? 1 : -1];
#endif
