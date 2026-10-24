/* NON_MATCHING: Retail mov r1, r0 differs from recovered bls.n 1a. */
#include "common.h"

// Private views of the vector storage used by this function.
struct Element184View {
    u8 unk00[0xB8]; // 0x00
};

struct Vector184View {
    Element184View* begin;       // 0x00
    Element184View* end;         // 0x04
    Element184View* capacityEnd; // 0x08
};

extern "C" {

void _ZN4__rw10__rw_throwEiz(s32 kind, ...);
void asdOperatorDeleteArray(void* storage);
s32 vectorCountxB8_00307c56(Vector184View* vector);
u32 bufGrowCapacity3(s32 count, Vector184View* vector);
u32* _ZSt3maxIjERKT_S2_S2_(u32* requested, u32* grown);
Element184View* allocElements184(Vector184View* vector, u32 capacity,
                                Element184View* oldStorage);
void FUN_00307c28(Element184View* begin, Element184View* end,
                  Element184View* destination, Vector184View* vector);
void vectorDestroyRangeStride184(Vector184View* vector,
                                 Element184View* begin, Element184View* end);

// Grow the vector's allocation when the requested capacity exceeds its current capacity.
void _ZNSt6vectorI9Obj559edc12AsdAllocatorIS0_EE7reserveEj(Vector184View* vector, u32 requestedCapacity)
{
    if (requestedCapacity > 0x01642C85u) {
        _ZN4__rw10__rw_throwEiz(8, "", "",
                     requestedCapacity, 0x01642C85u);
    }

    if (static_cast<u32>(vector->capacityEnd - vector->begin) < requestedCapacity) {
        u32 grownCapacity = bufGrowCapacity3(vectorCountxB8_00307c56(vector), vector);
        u32 newCapacity = *_ZSt3maxIjERKT_S2_S2_(&requestedCapacity, &grownCapacity);
        Element184View* newStorage = allocElements184(vector, newCapacity, vector->begin);

        FUN_00307c28(vector->begin, vector->end, newStorage, vector);
        vectorDestroyRangeStride184(vector, vector->begin, vector->end);
        asdOperatorDeleteArray(vector->begin);

        s32 count = vectorCountxB8_00307c56(vector);
        vector->begin = newStorage;
        vector->capacityEnd = newStorage + newCapacity;
        vector->end = newStorage + count;
    }
}
}
