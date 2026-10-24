/* NON_MATCHING: allocation-size and final pointer-update register allocation differ. */
#include "shard/ElementVector.h"

extern "C" {
void _ZN4__rw10__rw_throwEiz(s32 kind, ...);
void asdOperatorDeleteArray(void *allocation);
void FUN_00307b44(ElementRecord *begin, ElementRecord *end,
                  ElementRecord *destination, ElementVector *owner);
s32 elemVectorCount(ElementVector *vector);
void vectorDestroyRangeStride24(ElementVector *vector, ElementRecord *begin, ElementRecord *end);
const u32 *_ZSt3maxIjERKT_S2_S2_(const u32 *left, const u32 *right);
void *rt_malloc(u32 bytes);
u32 vectorGrowCapacity_00307b66(u32 count, ElementVector *vector);

// Reserve enough room for the requested number of records, preserving the existing elements.
void FUN_00133810(ElementVector *vector, u32 required)
{
    if (required > 0x0aaaaaaa)
        _ZN4__rw10__rw_throwEiz(8, "", "", required, 0x0aaaaaaa);
    u32 capacity = vector->capacityEnd - vector->begin;
    if (capacity < required) {
        u32 grown = vectorGrowCapacity_00307b66(elemVectorCount(vector), vector);
        u32 bytes = *_ZSt3maxIjERKT_S2_S2_(&required, &grown) * sizeof(ElementRecord);
        ElementRecord *allocation = static_cast<ElementRecord *>(rt_malloc(bytes));
        FUN_00307b44(vector->begin, vector->end, allocation, vector);
        vectorDestroyRangeStride24(vector, vector->begin, vector->end);
        asdOperatorDeleteArray(vector->begin);
        s32 count = elemVectorCount(vector);
        vector->begin = allocation;
        vector->capacityEnd = reinterpret_cast<ElementRecord *>(
            reinterpret_cast<u8 *>(allocation) + bytes);
        vector->end = allocation + count;
    }
}
}
