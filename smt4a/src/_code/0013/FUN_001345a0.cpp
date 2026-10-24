/* NON_MATCHING: Retail mov r1, r0 differs from recovered bls.n 1a. */
#include "common.h"

// Private view of the three-pointer container of 12-byte elements.
struct Vector12View {
    u8* begin;        // 0x00
    u8* end;          // 0x04
    u8* capacityEnd;  // 0x08
};

extern "C" {
void _ZN4__rw10__rw_throwEiz(s32 kind, ...);
u32 FUN_00301bd4(Vector12View* container);
u32 vectorGrowCapacity_003078de(u32 size, Vector12View* container);
const u32* _ZSt3maxIjERKT_S2_S2_(const u32* first, const u32* second);
void* rt_malloc(u32 bytes);
void FUN_003078bc(u8* first, u8* last, u8* destination,
                  Vector12View* container);
void destroyRangeElem12(Vector12View* container, u8* first, u8* last);
void asdOperatorDeleteArray(void* allocation);
}

// Grow the container's storage when its capacity is below the requested count.
extern "C" void FUN_001345a0(Vector12View* container, u32 requestedCount)
{
    if (requestedCount > 0x15555555u) {
        _ZN4__rw10__rw_throwEiz(8, "", "",
                     requestedCount, 0x15555555u);
    }

    u32 capacity = static_cast<u32>(
        static_cast<s32>(container->capacityEnd - container->begin) / 12);
    if (capacity < requestedCount) {
        u32 growthCount = vectorGrowCapacity_003078de(
            FUN_00301bd4(container), container);
        u32 allocationBytes = *_ZSt3maxIjERKT_S2_S2_(&requestedCount, &growthCount) * 12;
        u8* newStorage = static_cast<u8*>(rt_malloc(allocationBytes));

        FUN_003078bc(container->begin, container->end, newStorage, container);
        destroyRangeElem12(container, container->begin, container->end);
        asdOperatorDeleteArray(container->begin);

        u32 size = FUN_00301bd4(container);
        container->begin = newStorage;
        container->capacityEnd = newStorage + allocationBytes;
        container->end = newStorage + size * 12;
    }
}
