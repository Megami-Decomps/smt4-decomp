/* NON_MATCHING: the list arms now match retail's layout; the category counters are addressed as `mov r2, #60; add r0, r2, r0, lsl #2; [state, r0]` where retail folds the constant offset into the ldr/str (`[r0, #60]`). */
#include "sys/AllocationTracking.h"

extern "C" {
extern AllocationTracking DAT_00465120;
u32 FUN_002b30fc(const AllocationHeader *);

static void addCategoryBytes(AllocationUsage *usage, u32 category, u32 bytes)
{
    usage->categoryBytes[category] = bytes + usage->categoryBytes[category];
}

static void addCategoryPayloadBytes(AllocationUsage *usage, u32 category, u32 bytes)
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
        addCategoryBytes(DAT_00465120.usage, category, block->size);
        category = FUN_002b30fc(block);
        addCategoryPayloadBytes(DAT_00465120.usage, category, block->size - block->alignment - sizeof(AllocationHeader));
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
