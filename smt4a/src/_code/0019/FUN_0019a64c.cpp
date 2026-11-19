/* NON_MATCHING: the first category update now matches; in the payload update retail loads usage into r3 and the alignment into r1 (build: r1 and r3). */
#include "sys/AllocationTracking.h"
#include "classes/AllocatorState.h"

extern "C" {
u32 asdMemClassifyAddress(AllocationHeaderA *allocation);

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
    AllocationUsage *usage = g_asdMemState.usage;
    ++usage->count;
    usage->bytes += allocation->size;
    if ((usage->tag & 0xff) < 8) {
        u32 category = asdMemClassifyAddress(allocation);
        addCategoryBytes(allocation->size, g_asdMemState.usage, category);
        category = asdMemClassifyAddress(allocation);
        addCategoryPayloadBytes(allocation->size - allocation->alignment - 0x40, g_asdMemState.usage, category);
    }
    usage = g_asdMemState.usage;
    AllocationLink *link = &allocation->link;
    if (usage->head == NULL) {
        usage->tail = link;
        usage->head = link;
        link->next = NULL;
        link->previous = NULL;
    } else {
        link->previous = usage->tail;
        g_asdMemState.usage->tail = link;
        link->previous->next = link;
        link->next = NULL;
    }
    allocation->tag = g_asdMemState.usage->tag;
}
}
