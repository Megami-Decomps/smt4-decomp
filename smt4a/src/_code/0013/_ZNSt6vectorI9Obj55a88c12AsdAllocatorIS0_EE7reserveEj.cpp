/* NON_MATCHING: Diagnostic argument addresses, allocation-byte bookkeeping, and final pointer stores differ. */
#include "shard/ElementVector.h"
extern "C" {
void _ZN4__rw10__rw_throwEiz(s32, ...);
void asdOperatorDeleteArray(void*);
ElementRecord* FUN_00307a28(ElementRecord*, ElementRecord*, ElementRecord*, ElementVector*);
s32 vectorSize24A(ElementVector*);
void destroyRangeElem24(ElementVector*, ElementRecord*, ElementRecord*);
u32 vectorGrowCapacity_00307a4a(u32);
const u32* _ZSt3maxIjERKT_S2_S2_(const u32*, const u32*);
void* rt_malloc(u32);
extern const char LAB_00133f18[];

// Grows storage for 24-byte elements without changing the vector's used size.
void _ZNSt6vectorI9Obj55a88c12AsdAllocatorIS0_EE7reserveEj(ElementVector* vector, u32 requestedCapacity)
{
    if (requestedCapacity > 0xAAAAAAA) {
        _ZN4__rw10__rw_throwEiz(8, LAB_00133f18, LAB_00133f18);
    }
    u32 capacity = vector->capacityEnd - vector->begin;
    if (capacity < requestedCapacity) {
        u32 growth = vectorGrowCapacity_00307a4a(vectorSize24A(vector));
        u32 newCapacity = *_ZSt3maxIjERKT_S2_S2_(&requestedCapacity, &growth);
        ElementRecord* storage = (ElementRecord*)rt_malloc(newCapacity * sizeof(ElementRecord));
        FUN_00307a28(vector->begin, vector->end, storage, vector);
        destroyRangeElem24(vector, vector->begin, vector->end);
        asdOperatorDeleteArray(vector->begin);
        s32 size = vectorSize24A(vector);
        vector->begin = storage;
        vector->capacityEnd = storage + newCapacity;
        vector->end = storage + size;
    }
}
}
