/* NON_MATCHING: Vector diagnostics, trivial-destructor traversal and pointer updates differ. */
#include "shard/ElementVector12.h"
extern "C" {
void _ZN4__rw10__rw_throwEiz(s32, ...);
void asdOperatorDeleteArray(void*);
ElementRecord12* FUN_00307940(ElementRecord12*, ElementRecord12*, ElementRecord12*, ElementVector12*);
s32 vectorSize12A(ElementVector12*);
u32 vectorGrowCapacity_00307962(u32);
const u32* _ZSt3maxIjERKT_S2_S2_(const u32*, const u32*);
void* rt_malloc(u32);
extern const char LAB_001343c4[];

// Grows storage for 12-byte elements without changing the vector's used size.
void FUN_00134338(ElementVector12* vector, u32 requestedCapacity)
{
    if (requestedCapacity > 0x15555555) {
        _ZN4__rw10__rw_throwEiz(8, LAB_001343c4, LAB_001343c4);
    }
    u32 capacity = vector->capacityEnd - vector->begin;
    if (capacity < requestedCapacity) {
        u32 growth = vectorGrowCapacity_00307962(vectorSize12A(vector));
        u32 newCapacity = *_ZSt3maxIjERKT_S2_S2_(&requestedCapacity, &growth);
        ElementRecord12* storage = (ElementRecord12*)rt_malloc(newCapacity * sizeof(ElementRecord12));
        FUN_00307940(vector->begin, vector->end, storage, vector);
        for (ElementRecord12* entry = vector->begin; entry != vector->end; ++entry) {
            entry->~ElementRecord12();
        }
        asdOperatorDeleteArray(vector->begin);
        s32 size = vectorSize12A(vector);
        vector->begin = storage;
        vector->capacityEnd = storage + newCapacity;
        vector->end = storage + size;
    }
}
}