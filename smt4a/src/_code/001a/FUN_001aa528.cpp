/* NON_MATCHING: uninitialized-copy loop register roles, null predication and final field writeback differ. */
#include "classes/AllocatorWordVector.h"

// Grow an owning word vector without changing the number of live elements.
extern "C" bool FUN_001aa528(AllocatorWordVector *vector, s32 capacity)
{
    if ((s32)(vector->capacityFlags & 0x3fffffff) >= capacity)
        return true;
    if (vector->allocator == NULL || (vector->capacityFlags & 0xc0000000) != 0x40000000)
        return false;

    u32 *allocation = (u32 *)vector->allocator->allocate(capacity * sizeof(u32), 32);
    if (allocation == NULL)
        return false;

    s32 count = 0;
    u32 *source = vector->begin;
    u32 *sourceEnd = vector->end;
    u32 *destination = allocation;
    if (source != sourceEnd) {
        do {
            if (destination != NULL)
                new (destination) u32(*source);
            ++source;
            ++destination;
        } while (source != sourceEnd);
        count = vector->end - vector->begin;
    }
    if (vector->begin != NULL) {
        vector->end = vector->begin;
        vector->allocator->release(vector->begin);
    }
    vector->end = allocation + count;
    vector->begin = allocation;
    vector->capacityFlags = (vector->capacityFlags & 0xc0000000) | capacity;
    return true;
}
