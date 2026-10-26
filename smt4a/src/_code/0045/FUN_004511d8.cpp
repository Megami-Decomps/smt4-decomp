/* NON_MATCHING: retail reloads *owner after resolving the block and keeps the allocator in r5 (virtual release calls take it from r0); built caches *owner and folds the block resolve differently. */
#include "classes/AsdAllocatorObject.h"
#include "shard/S1NwGfx.h"

struct RelativeAllocationBlock {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ RelativePointer data;
    /* 0x10 */ AsdAllocatorObject *allocator;
};
struct RelativeAllocationOwner {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ RelativePointer block;
};

extern "C" {
void FUN_004511d8(RelativeAllocationOwner **owner)
{
    AsdAllocatorObject *allocator = static_cast<RelativeAllocationBlock *>((*owner)->block.get())->allocator;
    if (*owner) {
        RelativeAllocationBlock *block = static_cast<RelativeAllocationBlock *>((*owner)->block.get());
        if (block) {
            void *data = block->data.get();
            if (data) {
                allocator->release(data);
            }
            allocator->release(block);
        }
        allocator->release(*owner);
        *owner = NULL;
    }
}
}
