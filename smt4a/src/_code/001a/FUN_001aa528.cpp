#include "classes/AllocatedArray.h"

extern "C" {

/* Grows the array to hold `count` words; returns whether it does (or already did): false when it
 * does not own its storage or the allocation fails. */
bool FUN_001aa528(AllocatedArray<u32> *array, s32 count)
{
    if (array->capacity() >= count) {
        return true;
    }
    AsdAllocatorObject *allocator = array->allocator;
    if (allocator != NULL && (array->capacityFlags & 0xc0000000u) == 0x40000000u) {
        u32 *storage = static_cast<u32 *>(allocator->allocate(count * sizeof(u32), 0x20));
        if (storage == NULL) {
            return false;
        }
        s32 size = 0;
        if (array->begin != array->end) {
            std::uninitialized_copy(array->begin, array->end, storage);
            size = array->size();
        }
        if (array->begin != NULL) {
            array->end = array->begin;
            array->allocator->release(array->begin);
        }
        array->end = storage + size;
        array->begin = storage;
        array->setCapacity(count);
        return true;
    }
    return false;
}

} /* extern "C" */
