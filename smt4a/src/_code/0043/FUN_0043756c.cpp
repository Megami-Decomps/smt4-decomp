/* NON_MATCHING: native payload construction matches retail's ADDS guard; iterator register allocation and the failure epilogue still differ. */
#include "gfx/MaskWork.h"
#include <new>

extern "C" {
void *FUN_004387f0(void *allocator, u32 units);

// Copy each selected source's nontrivial actions into the mask's pending list.
u32 FUN_0043756c(MaskSourceProcessor *processor, MaskWorkState **state)
{
    for (u32 index = 0; index < processor->byteCount; ++index) {
        if ((*state)->baseline[index] == 0)
            continue;
        MaskWorkList *source = &processor->sources[index]->actions;
        MaskWorkNode *sentinel = reinterpret_cast<MaskWorkNode *>(source);
        for (MaskWorkNode *action = source->next; action != sentinel; action = action->next) {
            if (action->payload.type == 1)
                continue;
            MaskWorkList *pending = &(*state)->pending;
            MaskWorkNode *added = (MaskWorkNode *)FUN_004387f0(pending->allocator, 2);
            if (added == NULL)
                return 0;
            new (&added->payload) Variant;
            added->previous = pending->previous;
            added->next = reinterpret_cast<MaskWorkNode *>(pending);
            pending->previous = added;
            added->previous->next = added;
            if (variantCopy(&added->payload, &action->payload, processor->allocator) == 0)
                return 0;
        }
    }
    return 1;
}
}
