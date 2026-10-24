/* NON_MATCHING: typed reserve preserves behavior, but diagnostic argument setup, scalar destruction loop registers, and storage-update scheduling differ. */
#include "classes/WordVector.h"

extern "C" {
void _ZN4__rw10__rw_throwEiz(int kind, ...);
u32 _ZNKSt6vectorIPv12AsdAllocatorIS0_EE4sizeEv(const WordVector *vector);
u32 _ZN4__rw17__rw_new_capacityISt6vectorIPv12AsdAllocatorIS2_EEEEjjPKT_(u32 count, const WordVector *vector);
const u32 *_ZSt3maxIjERKT_S2_S2_(const u32 *first, const u32 *second);
u32 *_ZN12AsdAllocatorIPvE8allocateEjPKv(WordVector *vector, u32 count, u32 *hint);
void _ZSt18uninitialized_copyIPPvS1_12AsdAllocatorIS0_EET0_T_S5_S4_RT1_(u32 *first, u32 *last, u32 *destination, WordVector *vector);

// Ensure enough storage, preserving the vector's existing words.
void FUN_00135778(WordVector *vector, u32 capacity)
{
    if (capacity > 0x3fffffff) {
        _ZN4__rw10__rw_throwEiz(8, "", "", capacity, 0x3fffffff);
    }
    if ((u32)(vector->capacityEnd - vector->begin) < capacity) {
        u32 grownCapacity = _ZN4__rw17__rw_new_capacityISt6vectorIPv12AsdAllocatorIS2_EEEEjjPKT_(_ZNKSt6vectorIPv12AsdAllocatorIS0_EE4sizeEv(vector), vector);
        u32 newCapacity = *_ZSt3maxIjERKT_S2_S2_(&capacity, &grownCapacity);
        u32 *storage = _ZN12AsdAllocatorIPvE8allocateEjPKv(vector, newCapacity, vector->begin);
        _ZSt18uninitialized_copyIPPvS1_12AsdAllocatorIS0_EET0_T_S5_S4_RT1_(vector->begin, vector->end, storage, vector);
        for (u32 *element = vector->begin; element != vector->end; ++element)
            element->~u32();
        asdOperatorDeleteArray(vector->begin);
        u32 count = _ZNKSt6vectorIPv12AsdAllocatorIS0_EE4sizeEv(vector);
        vector->begin = storage;
        vector->capacityEnd = storage + newCapacity;
        vector->end = storage + count;
    }
}
}
