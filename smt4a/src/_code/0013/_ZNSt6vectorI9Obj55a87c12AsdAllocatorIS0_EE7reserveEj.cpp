/* NON_MATCHING: overflow-report setup and final capacity/end pointer-update register allocation differ. */
#include "shard/ElementVector.h"

extern "C" {
void _ZN4__rw10__rw_throwEiz(s32 kind, ...);
void asdOperatorDeleteArray(void *allocation);
void FUN_00307a98(ElementRecord40 *begin, ElementRecord40 *end,
                  ElementRecord40 *destination, ElementVector40 *owner);
void destroyRangeElem40(ElementVector40 *vector, ElementRecord40 *begin, ElementRecord40 *end);
s32 _ZNKSt6vectorI9Obj55a87c12AsdAllocatorIS0_EE4sizeEv(ElementVector40 *vector);
const u32 *_ZSt3maxIjERKT_S2_S2_(const u32 *left, const u32 *right);
ElementRecord40 *_ZN12AsdAllocatorI9Obj55a87cE8allocateEjPKv(ElementVector40 *vector, u32 count, ElementRecord40 *hint);
u32 _ZN4__rw17__rw_new_capacityISt6vectorI9Obj55a87c12AsdAllocatorIS2_EEEEjjPKT_(u32 count, ElementVector40 *vector);

// Reserve space for the requested number of records while retaining the current contents.
void _ZNSt6vectorI9Obj55a87c12AsdAllocatorIS0_EE7reserveEj(ElementVector40 *vector, u32 required)
{
    if (required > 0x06666666)
        _ZN4__rw10__rw_throwEiz(8, "", "", required, 0x06666666);
    u32 capacity = vector->capacityEnd - vector->begin;
    if (capacity < required) {
        u32 grown = _ZN4__rw17__rw_new_capacityISt6vectorI9Obj55a87c12AsdAllocatorIS2_EEEEjjPKT_(_ZNKSt6vectorI9Obj55a87c12AsdAllocatorIS0_EE4sizeEv(vector), vector);
        u32 count = *_ZSt3maxIjERKT_S2_S2_(&required, &grown);
        ElementRecord40 *allocation = _ZN12AsdAllocatorI9Obj55a87cE8allocateEjPKv(vector, count, vector->begin);
        FUN_00307a98(vector->begin, vector->end, allocation, vector);
        destroyRangeElem40(vector, vector->begin, vector->end);
        asdOperatorDeleteArray(vector->begin);
        s32 size = _ZNKSt6vectorI9Obj55a87c12AsdAllocatorIS0_EE4sizeEv(vector);
        vector->begin = allocation;
        vector->capacityEnd = allocation + count;
        vector->end = allocation + size;
    }
}
}
