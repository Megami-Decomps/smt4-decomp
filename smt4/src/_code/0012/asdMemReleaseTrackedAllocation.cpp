/* NON_MATCHING: only register numbering differs (retail keeps the usage record in r0/r2 where the build uses r1). */
#include "sys/AllocationTracking.h"
#include "classes/AllocatorState.h"

extern "C" {
u32 asdMemClassifyAddress(AllocationHeader *header);

AllocationHeader *asdMemReleaseTrackedAllocation(void *payload)
{
    AllocationHeader *header = reinterpret_cast<AllocationHeader **>(payload)[-1];
    AllocationUsage *usage = g_asdMemState.usage;
    --usage->count;
    usage->bytes -= header->size;
    if ((header->tag & 0xFF) < 8) {
        u32 category = asdMemClassifyAddress(header);
        usage = g_asdMemState.usage;
        usage->categoryBytes[category] -= header->size;
        category = asdMemClassifyAddress(header);
        usage = g_asdMemState.usage;
        usage->categoryPayloadBytes[category] =
            (usage->categoryPayloadBytes[category] -
             (header->size - header->alignment)) + sizeof(AllocationHeader);
    }
    AllocationLink *link = &header->link;
    if (!(link->previous)) {
        if (link->next) {
            g_asdMemState.usage->head = link->next;
            link->next->previous = NULL;
        } else {
            g_asdMemState.usage->tail = NULL;
            g_asdMemState.usage->head = NULL;
        }
    } else {
        if (!link->next) {
            g_asdMemState.usage->tail = link->previous;
            link->previous->next = NULL;
        } else {
            link->previous->next = link->next;
            link->next->previous = link->previous;
        }
    }
    if (g_asdMemState.usage->cursor == link) {
        g_asdMemState.usage->cursor = NULL;
    }
    header->tag = 0;
    return header;
}
}
