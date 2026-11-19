/* NON_MATCHING: the byte counter now matches; the payload counter loads usage/alignment into r1/r3 where retail uses r3/r1. */
#include "sys/AllocationTracking.h"
#include "classes/AllocatorState.h"

extern "C" {
u32 asdMemClassifyAddress(const AllocationHeader *);

static void addCategoryBytes(u32 bytes, AllocationUsage *usage, u32 category)
{
    usage->categoryBytes[category] = bytes + usage->categoryBytes[category];
}

static void addCategoryPayloadBytes(u32 bytes, AllocationUsage *usage, u32 category)
{
    usage->categoryPayloadBytes[category] = bytes + usage->categoryPayloadBytes[category];
}

// Account for a backing allocation and append it to the active allocation list.
void asdMemoryTrackAllocation(AllocationHeader *block)
{
    AllocationUsage *usage = g_asdMemState.usage;
    ++usage->count;
    usage->bytes += block->size;
    if ((usage->tag & 0xff) < 8) {
        u32 category = asdMemClassifyAddress(block);
        addCategoryBytes(block->size, g_asdMemState.usage, category);
        category = asdMemClassifyAddress(block);
        addCategoryPayloadBytes(block->size - block->alignment - sizeof(AllocationHeader), g_asdMemState.usage, category);
    }
    usage = g_asdMemState.usage;
    AllocationLink *link = &block->link;
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
    block->tag = g_asdMemState.usage->tag;
}
}
