/* NON_MATCHING: one operand order left: the second range end is `add ip, r3, r4` here, retail `add ip, r4, r3` (base + size). */
#include "common.h"
#include "classes/AllocatorState.h"

struct AllocationCallbackHeader {
    u8 unk00[0x0c]; // 0x00
    const void* callback; // 0x0c
    void* argument; // 0x10
};

struct AllocationPrefix {
    AllocationCallbackHeader* header;
};


// Only ordinary allocations have the prefix/header that can hold a release callback.
extern "C" u32 asdMemorySetReleaseCallback(void* allocation, const void* callback, void* argument)
{
    const AllocatorStateA *ranges = &g_allocationAddressRanges;
    u32 firstBase = ranges->regionBase[2];
    u32 secondBase = ranges->regionBase[3];
    u32 address = (u32)allocation;
    if ((firstBase <= address && address <= firstBase + ranges->regionSize[2]) ||
        (secondBase <= address && address <= secondBase + ranges->regionSize[3])) {
        return 0;
    }
    AllocationPrefix* prefix = (AllocationPrefix*)allocation - 1;
    AllocationCallbackHeader* header = prefix->header;
    header->callback = callback;
    header->argument = argument;
    return 1;
}
