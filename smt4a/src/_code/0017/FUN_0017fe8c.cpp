/* NON_MATCHING: category-array address formation and shared unlink epilogue placement differ; 73 built versus 71 retail rows. */
#include "sys/AllocationTracking.h"

extern "C" {
extern AllocationTracking g_allocationAddressRanges;
u32 FUN_0019c40c(AllocationHeaderA *header);

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
        g_allocationAddressRanges.usage->categoryBytes[category] -= header->size;
        category = FUN_0019c40c(header);
        g_allocationAddressRanges.usage->categoryPayloadBytes[category] =
            (g_allocationAddressRanges.usage->categoryPayloadBytes[category] -
             (header->size - header->alignment)) + 0x40;
    }
    AllocationLink *link = &header->link;
    if (link->previous) {
        if (!link->next) {
            g_allocationAddressRanges.usage->tail = link->previous;
            link->previous->next = NULL;
        } else {
            link->previous->next = link->next;
            link->next->previous = link->previous;
        }
    } else {
        if (link->next) {
            g_allocationAddressRanges.usage->head = link->next;
            link->next->previous = NULL;
        } else {
            g_allocationAddressRanges.usage->tail = NULL;
            g_allocationAddressRanges.usage->head = NULL;
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
