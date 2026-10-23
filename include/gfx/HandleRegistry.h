#ifndef GFX_HANDLEREGISTRY_H
#define GFX_HANDLEREGISTRY_H
#include "common.h"
#include <stddef.h>
struct GfxHandleNode {
    u32 id;
    u32 data[5];
    GfxHandleNode *next;
};
struct GfxHandleAllocator {
    void *(*allocate)(u32 category, u32 alignment, u32 flags, u32 size);
    union {
        u32 unk04;
        void (*release)(u32 category, u32 alignment, u32 size, void *memory);
    };
    union {
        u32 unk08;
        u32 nextBufferId;
    };
    u32 nextId;
};
typedef char GfxHandleRegistryOffsets[sizeof(GfxHandleNode) == 0x1C && offsetof(GfxHandleNode, next) == 0x18 && offsetof(GfxHandleAllocator, nextId) == 0xC ? 1 : -1];
typedef char GfxHandleAllocatorBufferOffsets[
    offsetof(GfxHandleAllocator, release) == 4 &&
    offsetof(GfxHandleAllocator, nextBufferId) == 8 &&
    sizeof(GfxHandleAllocator) == 0x10 ? 1 : -1];
#endif
