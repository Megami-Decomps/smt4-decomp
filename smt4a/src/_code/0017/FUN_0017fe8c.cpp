/* NON_MATCHING: the category-bytes update now matches; in the payload-bytes update retail holds the usage block in r3 and the alignment in r1 (the build swaps them), and schedules add r0, r4, #20 one instruction later. */
#include "sys/AllocationTracking.h"

extern "C" {
extern AllocationTracking g_allocationAddressRanges;
u32 FUN_0019c40c(AllocationHeaderA *header);

static void subtractCategoryBytes(u32 bytes, AllocationUsage *usage, u32 category)
{
    usage->categoryBytes[category] -= bytes;
}

static void subtractCategoryPayloadBytes(AllocationUsage *usage, u32 category, u32 bytes)
{
    usage->categoryPayloadBytes[category] = (usage->categoryPayloadBytes[category] - bytes) + 0x40;
}

// Run an allocation's release callback, remove it from tracking, and return its backing header.
AllocationHeaderA *FUN_0017fe8c(void *payload)
{
    AllocationHeaderA *header = reinterpret_cast<AllocationHeaderA **>(payload)[-1];
    if (header->release)
        header->release(payload, header->releaseArgument);
    AllocationUsage *usage = g_allocationAddressRanges.usage;
    --usage->count;
    usage->bytes -= header->size;
    if ((header->tag & 0xFF) < 8) {
        u32 category = FUN_0019c40c(header);
        subtractCategoryBytes(header->size, g_allocationAddressRanges.usage, category);
        category = FUN_0019c40c(header);
        subtractCategoryPayloadBytes(g_allocationAddressRanges.usage, category, header->size - header->alignment);
    }
    AllocationLink *link = &header->link;
    if (!link->previous) {
        if (link->next) {
            g_allocationAddressRanges.usage->head = link->next;
            link->next->previous = NULL;
        } else {
            g_allocationAddressRanges.usage->tail = NULL;
            g_allocationAddressRanges.usage->head = NULL;
        }
    } else {
        if (!link->next) {
            g_allocationAddressRanges.usage->tail = link->previous;
            link->previous->next = NULL;
        } else {
            link->previous->next = link->next;
            link->next->previous = link->previous;
        }
    }
    if (g_allocationAddressRanges.usage->cursor == link)
        g_allocationAddressRanges.usage->cursor = NULL;
    header->tag = 0;
    header->release = NULL;
    header->releaseArgument = NULL;
    return header;
}
}
