/* NON_MATCHING: identical except the ldm base register of the begin/end load (retail r2, this build r0) and the final pointer stores, which this build emits as str r6, [r4, #4]! with different scheduling. */
#include "common.h"
#include <memory>

struct ArrayAllocator;
struct ArrayAllocatorVtbl {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *(*allocate)(ArrayAllocator *allocator, u32 bytes, u32 alignment);
    /* 0x0C */ void (*release)(ArrayAllocator *allocator, void *block);
};
struct ArrayAllocator {
    /* 0x00 */ ArrayAllocatorVtbl *vtbl;
};

#define POINTER_ARRAY_CAPACITY_MASK 0x3fffffffu
#define POINTER_ARRAY_MODE_MASK 0xc0000000u
#define POINTER_ARRAY_MODE_OWNED 0x40000000u

/* A growable array of pointers that allocates through its own allocator; the capacity shares a word with a mode (the owned
 * mode may grow). */
struct PointerArray {
    /* 0x00 */ ArrayAllocator *allocator;
    /* 0x04 */ void **begin;
    /* 0x08 */ void **end;
    /* 0x0C */ u32 capacityAndMode;
};

extern "C" {

/* Grows the array to hold `count` words; returns 1 when it does (or already did), 0 when it cannot grow. */
u32 FUN_002af294(PointerArray *array, u32 count)
{
    if ((s32)(array->capacityAndMode & POINTER_ARRAY_CAPACITY_MASK) >= (s32)count) {
        return 1;
    }
    ArrayAllocator *allocator = array->allocator;
    if (allocator != NULL && (array->capacityAndMode & POINTER_ARRAY_MODE_MASK) == POINTER_ARRAY_MODE_OWNED) {
        void **storage = static_cast<void **>(allocator->vtbl->allocate(allocator, count << 2, 0x20));
        s32 size = 0;
        if (array->begin != array->end) {
            std::uninitialized_copy(array->begin, array->end, storage);
            size = array->end - array->begin;
        }
        if (array->begin != NULL) {
            array->allocator->vtbl->release(array->allocator, array->begin);
        }
        array->end = storage + size;
        array->begin = storage;
        array->capacityAndMode = (array->capacityAndMode & POINTER_ARRAY_MODE_MASK) | count;
        return 1;
    }
    return 0;
}

} /* extern "C" */
