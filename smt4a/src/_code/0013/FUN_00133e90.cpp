/* NON_MATCHING: Diagnostic argument addresses, allocation-byte bookkeeping, and final pointer stores differ. */
#include "shard/ElementVector.h"
extern "C" {
void FUN_002e32a4(s32, ...);
void asdOperatorDeleteArray(void*);
ElementRecord* FUN_00307a28(ElementRecord*, ElementRecord*, ElementRecord*, ElementVector*);
s32 vectorSize24A(ElementVector*);
void destroyRangeElem24(ElementVector*, ElementRecord*, ElementRecord*);
u32 vectorGrowCapacity_00307a4a(u32);
const u32* wordRefMax(const u32*, const u32*);
void* rt_malloc(u32);
extern const char LAB_00133f18[];

// Grows storage for 24-byte elements without changing the vector's used size.
void FUN_00133e90(ElementVector* vector, u32 requestedCapacity)
{
    if (requestedCapacity > 0xAAAAAAA) {
        FUN_002e32a4(8, LAB_00133f18, LAB_00133f18);
    }
    u32 capacity = vector->capacityEnd - vector->begin;
    if (capacity < requestedCapacity) {
        u32 growth = vectorGrowCapacity_00307a4a(vectorSize24A(vector));
        u32 newCapacity = *wordRefMax(&requestedCapacity, &growth);
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
