/* NON_MATCHING: std::vector<12-byte element>::reserve written as C (same shape as FUN_00134338); retail passes max_size() into the length_error report (r1 kept live) and allocates the loop/pointer registers differently. Real fix needs the element type and out-of-line __rw_new_capacity/uninitialized_copy instantiations. */
#include "shard/ElementVector12.h"
extern "C" {
void _ZN4__rw10__rw_throwEiz(s32, ...);
void asdOperatorDeleteArray(void*);
ElementRecord12* FUN_00307ad6(ElementRecord12*, ElementRecord12*, ElementRecord12*, ElementVector12*);
s32 vectorSize12B(ElementVector12*);
u32 bufGrowCapacity5(u32, ElementVector12*);
const u32* _ZSt3maxIjERKT_S2_S2_(const u32*, const u32*);
void* rt_malloc(u32);
extern const char LAB_00133b44[];

// Grows storage for 12-byte elements without changing the vector's used size.
void FUN_00133ab8(ElementVector12* vector, u32 requestedCapacity)
{
    if (requestedCapacity > 0x15555555) {
        _ZN4__rw10__rw_throwEiz(8, LAB_00133b44, LAB_00133b44);
    }
    u32 capacity = vector->capacityEnd - vector->begin;
    if (capacity < requestedCapacity) {
        u32 growth = bufGrowCapacity5(vectorSize12B(vector), vector);
        u32 newCapacity = *_ZSt3maxIjERKT_S2_S2_(&requestedCapacity, &growth);
        ElementRecord12* storage = (ElementRecord12*)rt_malloc(newCapacity * sizeof(ElementRecord12));
        FUN_00307ad6(vector->begin, vector->end, storage, vector);
        for (ElementRecord12* entry = vector->begin; entry != vector->end; ++entry) {
        }
        asdOperatorDeleteArray(vector->begin);
        s32 size = vectorSize12B(vector);
        vector->begin = storage;
        vector->capacityEnd = storage + newCapacity;
        vector->end = storage + size;
    }
}
}
