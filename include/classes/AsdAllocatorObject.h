#ifndef CLASSES_ASDALLOCATOROBJECT_H
#define CLASSES_ASDALLOCATOROBJECT_H

#include "common.h"

/* The engine's allocator objects (the ones AsdMemory keeps): objects are made from one with
 * `new (allocator, alignment) T(...)` and handed back with release(). Slots 0 and 1 are its
 * destructors. */
class AsdAllocatorObject {
public:
    virtual ~AsdAllocatorObject();
    virtual void *allocate(u32 size, u32 alignment);   /* +0x08 */
    virtual void release(void *block);                 /* +0x0C */
};

#endif
