/* NON_MATCHING: post-reserve pointer/capacity stores and successful-return scheduling differ. */
#include "classes/AllocatorWordVector.h"
#include <new>
#include <memory>

static inline bool allocatorWordVectorReserve(AllocatorWordVector *vector, s32 requested)
{
    if (requested <= (s32)(vector->capacityFlags & 0x3FFFFFFF))
        return true;
    if (vector->allocator == NULL || (vector->capacityFlags & 0xC0000000) != 0x40000000)
        return false;
    u32 *storage = (u32 *)vector->allocator->allocate(requested * sizeof(u32), 0x20);
    if (storage == NULL)
        return false;
    s32 size = 0;
    u32 *source = vector->begin;
    u32 *sourceEnd = vector->end;
    if (source != sourceEnd) {
        std::uninitialized_copy(source, sourceEnd, storage);
        size = vector->end - vector->begin;
    }
    if (vector->begin != NULL) {
        vector->end = vector->begin;
        vector->allocator->release(vector->begin);
    }
    vector->end = storage + size;
    vector->begin = storage;
    vector->capacityFlags = (vector->capacityFlags & 0xC0000000) | requested;
    return true;
}

/* Append a copied word, doubling allocator-owned storage when it is full. */
extern "C" u32 FUN_00515cec(AllocatorWordVector *vector, const u32 *value)
{
    s32 capacity = vector->capacityFlags & 0x3FFFFFFF;
    bool available = true;
    if (capacity <= vector->end - vector->begin)
        available = allocatorWordVectorReserve(vector, capacity != 0 ? capacity * 2 : 1);
    if (available) {
        new (vector->end) u32(*value);
        ++vector->end;
    }
    return available;
}
