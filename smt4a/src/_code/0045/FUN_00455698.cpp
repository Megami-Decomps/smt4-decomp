/* NON_MATCHING: retail resolves each relative pointer from &field (tests the resolved address, rebuilds it for the call with moveq NULL) and pushes before the NULL check; armcc here folds the offset tests. */
#include "shard/S1NwGfx.h"

/* nw::os::IAllocator as far as this file uses it. */
class NwAllocator {
public:
    virtual void vfunc00();
    virtual void vfunc04();
    virtual void *alloc(u32 size, s32 alignment);
    virtual void free(void *block); /* +0x0C */
};

namespace {
struct AllocatedResource {
    /* 0x00 */ u8 unk00[0xbc];
    /* 0xBC */ RelativePointer second;
    /* 0xC0 */ RelativePointer first;
};
}

extern "C" {

/* Free a resource's two relatively-addressed buffers, then the resource itself. */
void FUN_00455698(NwAllocator *allocator, AllocatedResource *resource)
{
    if (resource != NULL) {
        if (resource->first.get() != NULL) {
            allocator->free(resource->first.get());
            resource->first.offset = 0;
        }
        if (resource->second.get() != NULL) {
            allocator->free(resource->second.get());
            resource->second.offset = 0;
        }
        allocator->free(resource);
    }
}

} /* extern "C" */
