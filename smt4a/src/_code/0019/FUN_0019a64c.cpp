/* NON_MATCHING: only register numbering differs: retail loads the usage pointer into r2 and the allocation size into r1 for both category updates (build: usage r1, size r2). */
#include "sys/AllocationTracking.h"

extern "C" {
extern AllocationTracking g_allocationAddressRanges;
u32 FUN_0019c40c(AllocationHeaderA *allocation);

static void addCategoryBytes(AllocationUsage *usage, u32 category, u32 bytes)
{
    usage->categoryBytes[category] = bytes + usage->categoryBytes[category];
}

static void addCategoryPayloadBytes(AllocationUsage *usage, u32 category, u32 bytes)
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
        addCategoryBytes(g_allocationAddressRanges.usage, category, allocation->size);
        category = FUN_0019c40c(allocation);
        addCategoryPayloadBytes(g_allocationAddressRanges.usage, category, allocation->size - allocation->alignment - 0x40);
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
