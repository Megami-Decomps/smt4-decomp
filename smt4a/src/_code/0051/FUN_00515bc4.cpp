/* NON_MATCHING: capacity growth checks, pointer/size registers and successful-return lifetime differ. */
#include "classes/AllocatorWordVector.h"
#include <new>

/* Append one word, doubling owned storage when the current capacity is exhausted. */
extern "C" u32 FUN_00515bc4(AllocatorWordVector *vector, const u32 *value)
{
    u32 flags = vector->capacityFlags;
    s32 capacity = flags & 0x3fffffff;
    if (capacity <= vector->end - vector->begin) {
        s32 newCapacity = capacity != 0 ? capacity * 2 : 1;
        if (capacity < newCapacity) {
            if (vector->allocator == NULL || (flags & 0xc0000000) != 0x40000000)
                return 0;
            u32 *storage = static_cast<u32 *>(vector->allocator->allocate(newCapacity * sizeof(u32), 0x20));
            if (storage == NULL)
                return 0;
            s32 size = 0;
            u32 *source = vector->begin;
            u32 *end = vector->end;
            u32 *destination = storage;
            if (source != end) {
                do {
                    new (destination) u32(*source);
                    ++source;
                    ++destination;
                } while (source != end);
                size = vector->end - vector->begin;
            }
            if (vector->begin != NULL) {
                vector->end = vector->begin;
                vector->allocator->release(vector->begin);
            }
            vector->end = storage + size;
            vector->begin = storage;
            vector->capacityFlags = (vector->capacityFlags & 0xc0000000) | newCapacity;
        }
    }
    new (vector->end) u32(*value);
    ++vector->end;
    return 1;
}
