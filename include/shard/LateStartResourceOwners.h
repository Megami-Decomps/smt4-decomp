#ifndef SHARD_LATESTARTRESOURCEOWNERS_H
#define SHARD_LATESTARTRESOURCEOWNERS_H
#include "common.h"

/* Allocator interface used by the resource containers in Apocalypse. */
struct ResourceBufferAllocator;
struct ResourceBufferAllocatorVtable {
    void (*unk00)(void);
    void (*unk04)(void);
    void (*unk08)(void);
    void (*release)(ResourceBufferAllocator *, void *);
};
struct ResourceBufferAllocator {
    ResourceBufferAllocatorVtable *vtable;
};
struct AllocatedResourceBuffer {
    /* 0x00 */ ResourceBufferAllocator *allocator;
    /* 0x04 */ void *begin;
    /* 0x08 */ void *end;
    /* 0x0C */ void *capacityEnd;

    void clearAndRelease()
    {
        end = begin;
        if (allocator != NULL && begin != NULL)
            allocator->vtable->release(allocator, begin);
    }
};

/* Objects owned by the resource wrappers have a cleanup entry at vtable +0. */
struct AllocatedResourceObject;
struct AllocatedResourceObjectVtable {
    void (*destroy)(AllocatedResourceObject *);
};
struct AllocatedResourceObject {
    AllocatedResourceObjectVtable *vtable;
    ResourceBufferAllocator *allocator;
};
struct OwnedResourceObject {
    AllocatedResourceObject *object;
    u8 owned;
    u8 unk05[3];

    void release()
    {
        if (object != NULL && owned) {
            object->vtable->destroy(object);
            object->allocator->vtable->release(object->allocator, object);
        }
    }
};
#endif
