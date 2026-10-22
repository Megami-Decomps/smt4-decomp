/* NON_MATCHING: Retail movs r7, r0 differs from recovered sub sp, #4. */
#include "common.h"

typedef s32 (*ElementCompare)(const void *, const void *);

extern "C" void FUN_0010043c(void *elements, u32 count, u32 elementSize,
                            ElementCompare compare);

// Finishes sorting fixed-size elements by insertion after a preliminary pass on larger arrays.
extern "C" void qsort(void *elements, u32 count, u32 elementSize,
                      ElementCompare compare)
{
    if (elementSize == 0 || count == 0) {
        return;
    }

    if (count > 10) {
        FUN_0010043c(elements, count, elementSize, compare);
    }

    const u32 baseAddress = reinterpret_cast<u32>(elements);
    const u32 lastAddress = baseAddress + (count - 1) * elementSize;
    u32 currentAddress = baseAddress;

    while (currentAddress < lastAddress) {
        u32 previousAddress = currentAddress;
        currentAddress += elementSize;

        while (previousAddress >= baseAddress &&
               compare(reinterpret_cast<const void *>(previousAddress),
                       reinterpret_cast<const void *>(currentAddress)) > 0) {
            previousAddress -= elementSize;
        }

        const u32 insertionAddress = previousAddress + elementSize;
        u32 offset = 0;
        if (((elementSize | currentAddress) & 3) != 0) {
            for (; offset < elementSize; ++offset) {
                u32 sourceAddress = currentAddress + offset;
                const u8 saved = *reinterpret_cast<const u8 *>(sourceAddress);
                while ((sourceAddress -= elementSize) >= insertionAddress) {
                    *reinterpret_cast<u8 *>(sourceAddress + elementSize) =
                        *reinterpret_cast<const u8 *>(sourceAddress);
                }
                *reinterpret_cast<u8 *>(sourceAddress + elementSize) = saved;
            }
        } else {
            for (; offset < elementSize; offset += 4) {
                u32 sourceAddress = currentAddress + offset;
                const u32 saved = *reinterpret_cast<const u32 *>(sourceAddress);
                while ((sourceAddress -= elementSize) >= insertionAddress) {
                    *reinterpret_cast<u32 *>(sourceAddress + elementSize) =
                        *reinterpret_cast<const u32 *>(sourceAddress);
                }
                *reinterpret_cast<u32 *>(sourceAddress + elementSize) = saved;
            }
        }
    }
}
