/* NON_MATCHING: the first category update now matches; in the payload update retail loads usage into r3 and the alignment into r1 (build: r1 and r3). */
#include "sys/AllocationTracking.h"
#include "classes/AllocatorState.h"

extern "C" {
u32 FUN_0019c40c(AllocationHeaderA *allocation);

static void addCategoryBytes(u32 bytes, AllocationUsage *usage, u32 category)
{
    usage->categoryBytes[category] = bytes + usage->categoryBytes[category];
}

static void addCategoryPayloadBytes(u32 bytes, AllocationUsage *usage, u32 category)
{
    usage->categoryPayloadBytes[category] = bytes + usage->categoryPayloadBytes[category];
}

// Account for a backing allocation and append it to the active allocation list.
void FUN_0019a64c(AllocationHeaderA *allocation)
{
    AllocationUsage *usage = g_allocationAddressRanges.usage;
    ++usage->count;
    usage->bytes += allocation->size;
    if ((usage->tag & 0xff) < 8) {
        u32 category = FUN_0019c40c(allocation);
        addCategoryBytes(allocation->size, g_allocationAddressRanges.usage, category);
        category = FUN_0019c40c(allocation);
        addCategoryPayloadBytes(allocation->size - allocation->alignment - 0x40, g_allocationAddressRanges.usage, category);
    }
    usage = g_allocationAddressRanges.usage;
    AllocationLink *link = &allocation->link;
    if (usage->head == NULL) {
        usage->tail = link;
        usage->head = link;
        link->next = NULL;
        link->previous = NULL;
    } else {
        link->previous = usage->tail;
        g_allocationAddressRanges.usage->tail = link;
        link->previous->next = link;
        link->next = NULL;
    }
    allocation->tag = g_allocationAddressRanges.usage->tag;
}
}
