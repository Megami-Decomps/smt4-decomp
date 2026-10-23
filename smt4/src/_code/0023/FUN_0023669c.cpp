/* NON_MATCHING: capacity load grouping, copy-loop registers, and final vector update scheduling differ. */
#include "classes/AllocatorWordVector.h"
#include <new>

// Grow an allocator-owned word vector geometrically and append one copied value.
extern "C" u32 FUN_0023669c(AllocatorWordVector *vector, const u32 *value)
{
    s32 capacity = vector->capacityFlags & 0x3FFFFFFF;
    if (capacity <= vector->end - vector->begin) {
        s32 newCapacity = capacity != 0 ? capacity * 2 : 1;
        if ((s32)(vector->capacityFlags & 0x3FFFFFFF) < newCapacity) {
            if (vector->allocator == NULL || (vector->capacityFlags & 0xC0000000) != 0x40000000)
                return 0;
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
        new (vector->end) u32(*value);
    ++vector->end;
    return 1;
}
