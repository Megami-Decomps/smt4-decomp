#ifndef CLASSES_ALLOCATORWORDVECTOR_H
#define CLASSES_ALLOCATORWORDVECTOR_H
#include "classes/AsdAllocatorObject.h"
#include <stddef.h>
#include <new>
struct AllocatorWordVector {
    AsdAllocatorObject *allocator;
    u32 *begin;
    u32 *end;
    u32 capacityFlags;
};
/* Appends `value`, growing the allocator-owned storage geometrically (only a vector that owns its
 * storage can grow); returns whether the value was stored. */
static __inline bool allocatorWordVectorPush(AllocatorWordVector *vector, u32 value)
{
    s32 capacity = vector->capacityFlags & 0x3FFFFFFF;
    if (capacity <= vector->end - vector->begin) {
        s32 newCapacity = capacity != 0 ? capacity * 2 : 1;
        if ((s32)(vector->capacityFlags & 0x3FFFFFFF) < newCapacity) {
            if (vector->allocator == NULL || (vector->capacityFlags & 0xC0000000) != 0x40000000)
                return false;
            u32 *allocation = (u32 *)vector->allocator->allocate(newCapacity * sizeof(u32), 32);
            u32 *source = vector->begin;
            u32 *sourceEnd = vector->end;
            u32 *destination = allocation;
            s32 count = 0;
            if (source != sourceEnd) {
                do {
                    if (destination != NULL)
                        new (destination) u32(*source);
                    ++source;
                    ++destination;
                } while (source != sourceEnd);
                count = vector->end - vector->begin;
            }
            if (vector->begin != NULL)
                vector->allocator->release(vector->begin);
            vector->end = allocation + count;
            vector->begin = allocation;
            vector->capacityFlags = (vector->capacityFlags & 0xC0000000) | newCapacity;
        }
    }
    if (vector->end != NULL)
        new (vector->end) u32(value);
    ++vector->end;
    return true;
}

typedef char AllocatorWordVectorOffsets[sizeof(AllocatorWordVector) == 0x10 && offsetof(AllocatorWordVector, capacityFlags) == 0xC ? 1 : -1];
#endif
