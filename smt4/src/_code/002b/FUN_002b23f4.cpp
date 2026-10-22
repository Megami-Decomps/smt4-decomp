/* NON_MATCHING: allocation-category counter addressing and empty-list branch placement differ. */
#include "sys/AllocationTracking.h"

extern "C" {
extern AllocationTracking DAT_00465120;
u32 FUN_002b30fc(const AllocationHeader *);

// Account for a backing allocation and append it to the active allocation list.
void FUN_002b23f4(AllocationHeader *block)
{
    AllocationUsage *usage = DAT_00465120.usage;
    ++usage->count;
    usage->bytes += block->size;
    if ((usage->tag & 0xff) < 8) {
        u32 category = FUN_002b30fc(block);
        DAT_00465120.usage->categoryBytes[category] += block->size;
        category = FUN_002b30fc(block);
        DAT_00465120.usage->categoryPayloadBytes[category] +=
            block->size - block->alignment - sizeof(AllocationHeader);
    }
    usage = DAT_00465120.usage;
    AllocationLink *link = &block->link;
    if (usage->head != NULL) {
        link->previous = usage->tail;
        DAT_00465120.usage->tail = link;
        link->previous->next = link;
        link->next = NULL;
    } else {
        usage->tail = link;
        usage->head = link;
        link->next = NULL;
        link->previous = NULL;
    }
    block->tag = DAT_00465120.usage->tag;
}
}
