/* NON_MATCHING: unlink layout and instructions match; the category-array updates allocate r1/r2 (usage pointer vs size) opposite to retail (usage r2, size r1; payload path r3/r2/r1). */
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
        AllocationUsage *bytesUsage = g_allocationAddressRanges.usage;
        bytesUsage->categoryBytes[category] -= header->size;
        category = FUN_0019c40c(header);
        AllocationUsage *payloadUsage = g_allocationAddressRanges.usage;
        payloadUsage->categoryPayloadBytes[category] =
            (payloadUsage->categoryPayloadBytes[category] - (header->size - header->alignment)) + 0x40;
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
