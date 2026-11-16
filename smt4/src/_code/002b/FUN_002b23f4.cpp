/* NON_MATCHING: the byte counter now matches; the payload counter loads usage/alignment into r1/r3 where retail uses r3/r1. */
#include "sys/AllocationTracking.h"

extern "C" {
extern AllocationTracking DAT_00465120;
u32 FUN_002b30fc(const AllocationHeader *);

static void addCategoryBytes(u32 bytes, AllocationUsage *usage, u32 category)
{
    usage->categoryBytes[category] = bytes + usage->categoryBytes[category];
}

static void addCategoryPayloadBytes(u32 bytes, AllocationUsage *usage, u32 category)
{
    usage->categoryPayloadBytes[category] = bytes + usage->categoryPayloadBytes[category];
}

// Account for a backing allocation and append it to the active allocation list.
void FUN_002b23f4(AllocationHeader *block)
{
    AllocationUsage *usage = DAT_00465120.usage;
    ++usage->count;
    usage->bytes += block->size;
    if ((usage->tag & 0xff) < 8) {
        u32 category = FUN_002b30fc(block);
        addCategoryBytes(block->size, DAT_00465120.usage, category);
        category = FUN_002b30fc(block);
        addCategoryPayloadBytes(block->size - block->alignment - sizeof(AllocationHeader), DAT_00465120.usage, category);
    }
    usage = DAT_00465120.usage;
    AllocationLink *link = &block->link;
    if (usage->head == NULL) {
        usage->tail = link;
        usage->head = link;
        link->next = NULL;
        link->previous = NULL;
    } else {
        link->previous = usage->tail;
        DAT_00465120.usage->tail = link;
        link->previous->next = link;
        link->next = NULL;
    }
    block->tag = DAT_00465120.usage->tag;
}
}
