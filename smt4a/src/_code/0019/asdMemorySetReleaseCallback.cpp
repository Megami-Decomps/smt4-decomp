/* NON_MATCHING: one operand order left: the second range end is `add ip, r3, r4` here, retail `add ip, r4, r3` (base + size). */
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
    const AllocationAddressRanges* ranges = &g_allocationAddressRanges;
    u32 firstBase = ranges->firstBase;
    u32 secondBase = ranges->secondBase;
    u32 address = (u32)allocation;
    if ((firstBase <= address && address <= firstBase + ranges->firstSize) ||
        (secondBase <= address && address <= secondBase + ranges->secondSize)) {
        return 0;
    }
    AllocationPrefix* prefix = (AllocationPrefix*)allocation - 1;
    AllocationCallbackHeader* header = prefix->header;
    header->callback = callback;
    header->argument = argument;
    return 1;
}
