/* NON_MATCHING: begin/end load uses r0 as its ldm base instead of retail r2; canonical allocator calls and capacity setter reproduce the final stores. */
#include "classes/AllocatedArray.h"

extern "C" {

/* Grows the array to hold `count` words; returns 1 when it does (or already did), 0 when it cannot grow. */
u32 FUN_002af294(AllocatedArray<void *> *array, u32 count)
{
    if (array->capacity() >= (s32)count) {
        return 1;
    }
    AsdAllocatorObject *allocator = array->allocator;
    if (allocator != NULL && (array->capacityFlags & 0xc0000000u) == 0x40000000u) {
        void **storage = static_cast<void **>(allocator->allocate(count * sizeof(void *), 0x20));
        s32 size = 0;
        if (array->begin != array->end) {
            std::uninitialized_copy(array->begin, array->end, storage);
            size = array->size();
        }
        if (array->begin != NULL) {
            array->allocator->release(array->begin);
        }
        array->end = storage + size;
        array->begin = storage;
        array->setCapacity(count);
        return 1;
    }
    return 0;
}

} /* extern "C" */
