/* NON_MATCHING: Vector growth, diagnostic address generation and pointer updates differ. */
#include "shard/ElementVector.h"
extern "C" {
void FUN_002e32a4(s32, ...);
void asdOperatorDeleteArray(void*);
ElementRecord* FUN_00307c74(ElementRecord*, ElementRecord*, ElementRecord*, ElementVector*);
s32 vecCount24(ElementVector*);
void FUN_0030fdf0(ElementVector*, ElementRecord*, ElementRecord*);
u32 vectorGrowCapacity_0030c61a(u32);
const u32* wordRefMax(const u32*, const u32*);
ElementRecord* allocArrayElem24(ElementVector*, u32, ElementRecord*);
extern const char LAB_00133390[];

// Grows storage for 24-byte elements without changing the vector's used size.
void FUN_00133304(ElementVector* vector, u32 requestedCapacity)
{
    if (requestedCapacity > 0xAAAAAAA) {
        FUN_002e32a4(8, LAB_00133390, LAB_00133390);
    }
    u32 capacity = vector->capacityEnd - vector->begin;
    if (capacity < requestedCapacity) {
        u32 growth = vectorGrowCapacity_0030c61a(vecCount24(vector));
        u32 newCapacity = *wordRefMax(&requestedCapacity, &growth);
        ElementRecord* storage = allocArrayElem24(vector, newCapacity, vector->begin);
        FUN_00307c74(vector->begin, vector->end, storage, vector);
        FUN_0030fdf0(vector, vector->begin, vector->end);
        asdOperatorDeleteArray(vector->begin);
        s32 size = vecCount24(vector);
        vector->begin = storage;
        vector->capacityEnd = storage + newCapacity;
        vector->end = storage + size;
    }
}
}