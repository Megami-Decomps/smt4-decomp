/* NON_MATCHING: compiler merges cached region bases into LDM and changes the saved allocation/guard registers; O2 has the same difference. */
#include "common.h"

struct AllocationCallbackHeader {
    u8 unk00[0x0c]; // 0x00
    const void* callback; // 0x0c
    void* argument; // 0x10
};

struct AllocationPrefix {
    AllocationCallbackHeader* header;
};

struct AllocationAddressRanges {
    u8 unk00[0x28]; // 0x00
    u32 firstBase;   // 0x28
    u32 secondBase;  // 0x2c
    u8 unk30[8];     // 0x30
    u32 firstSize;   // 0x38
    u32 secondSize;  // 0x3c
};

extern "C" AllocationAddressRanges g_allocationAddressRanges;

// Only ordinary allocations have the prefix/header that can hold a release callback.
extern "C" u32 asdMemorySetReleaseCallback(void* allocation, const void* callback, void* argument)
{
    u32 address = (u32)allocation;
    u32 firstBase = g_allocationAddressRanges.firstBase;
    u32 secondBase = g_allocationAddressRanges.secondBase;
    if ((firstBase <= address && address <= firstBase + g_allocationAddressRanges.firstSize) ||
        (secondBase <= address && address <= secondBase + g_allocationAddressRanges.secondSize)) {
        return 0;
    }
    AllocationPrefix* prefix = (AllocationPrefix*)allocation - 1;
    AllocationCallbackHeader* header = prefix->header;
    header->callback = callback;
    header->argument = argument;
    return 1;
}
