/* NON_MATCHING: relative-pointer loads fold together and virtual release calls use different saved registers. */
#include "classes/AsdAllocatorObject.h"

struct RelativeAllocationBlock {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ s32 dataOffset;
    /* 0x10 */ AsdAllocatorObject *allocator;

    void *data()
    {
        return dataOffset ? (u8 *)&dataOffset + dataOffset : NULL;
    }
};
struct RelativeAllocationOwner {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 blockOffset;

    RelativeAllocationBlock *block()
    {
        return blockOffset ? (RelativeAllocationBlock *)((u8 *)&blockOffset + blockOffset) : NULL;
    }
};

extern "C" {
void FUN_0036ef0c(RelativeAllocationOwner **owner)
{
    AsdAllocatorObject *allocator = (*owner)->block()->allocator;
    if (*owner) {
        RelativeAllocationBlock *block = (*owner)->block();
        if (block) {
            void *data = block->data();
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
