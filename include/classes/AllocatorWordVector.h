#ifndef CLASSES_ALLOCATORWORDVECTOR_H
#define CLASSES_ALLOCATORWORDVECTOR_H
#include "classes/AsdAllocatorObject.h"
#include <stddef.h>
struct AllocatorWordVector {
    AsdAllocatorObject *allocator;
    u32 *begin;
    u32 *end;
    u32 capacityFlags;
};
typedef char AllocatorWordVectorOffsets[sizeof(AllocatorWordVector) == 0x10 && offsetof(AllocatorWordVector, capacityFlags) == 0xC ? 1 : -1];
#endif
