#ifndef SHARD_W7_W7MATCH2_SHAREDALLOCATION_H
#define SHARD_W7_W7MATCH2_SHAREDALLOCATION_H

#include "common.h"
#include <stddef.h>

struct SharedAllocationAllocator;
struct SharedAllocationAllocatorVtable {
    /* 0x00 */ void (*destroy)(SharedAllocationAllocator *allocator);
    /* 0x04 */ void (*release)(SharedAllocationAllocator *allocator, void *allocation);
};
struct SharedAllocationAllocator {
    /* 0x00 */ const SharedAllocationAllocatorVtable *vtable;
};

// References to one allocation form a circular doubly-linked list.
struct SharedAllocationLink {
    /* 0x00 */ SharedAllocationAllocator *allocator;
    /* 0x04 */ void *allocation;
    /* 0x08 */ SharedAllocationLink *next;
    /* 0x0c */ SharedAllocationLink *previous;

    SharedAllocationLink &operator=(SharedAllocationLink &source)
    {
        if (this != &source) {
            if (next == NULL || next == this) {
                if (allocation != NULL)
                    allocator->vtable->release(allocator, allocation);
            } else {
                next->previous = previous;
                previous->next = next;
                next = NULL;
                previous = NULL;
            }
            allocation = NULL;
            allocation = source.allocation;
            previous = source.previous;
            previous->next = this;
            next = &source;
            source.previous = this;
        }
        return *this;
    }
};

struct SharedAllocationArray {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ SharedAllocationLink *entries;
};

typedef char SharedAllocationLinkSizeCheck[sizeof(SharedAllocationLink) == 0x10 ? 1 : -1];
typedef char SharedAllocationLinkNextOffsetCheck[offsetof(SharedAllocationLink, next) == 8 ? 1 : -1];

#endif
