/* NON_MATCHING: compiler allocates two reference temporaries with SUB/ADD SP instead of spare PUSH/POP registers and lowers the final pointer scaling differently. */
#include "common.h"

struct VectorItem40 {
    u8 data[0x28];
};

struct Vector40 {
    VectorItem40* begin;
    VectorItem40* end;
    VectorItem40* capacity;
};

extern "C" {
u32 vectorGrowCapacity_0030fd7e(u32 count, Vector40* vector);
u32 vectorCountx28_0030fd70(const Vector40* vector);
const u32& _ZSt3maxIjERKT_S2_S2_(const u32& left, const u32& right);
VectorItem40* vectorAllocx28(Vector40* vector, u32 count, u32 hint);
void FUN_0030fd40(const VectorItem40* first, const VectorItem40* last, VectorItem40* destination, Vector40* owner);

Vector40* FUN_003038a0(Vector40* destination, const Vector40* source)
{
    destination->begin = NULL;
    destination->end = NULL;
    destination->capacity = NULL;
    u32 capacity = _ZSt3maxIjERKT_S2_S2_(vectorCountx28_0030fd70(source), vectorGrowCapacity_0030fd7e(0, destination));
    destination->begin = vectorAllocx28(destination, capacity, 0);
    FUN_0030fd40(source->begin, source->end, destination->begin, destination);
    u32 copied = vectorCountx28_0030fd70(source);
    destination->capacity = destination->begin + capacity;
    destination->end = destination->begin + copied;
    return destination;
}
}
