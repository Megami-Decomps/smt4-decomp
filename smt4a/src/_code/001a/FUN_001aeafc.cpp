/* NON_MATCHING: backing-buffer load is scheduled before the state reset instead of after it. */
#include "common.h"

struct OwnedResource;
struct OwnedResourceVtable {
    void (*unk00)(OwnedResource *);
    void (*release)(OwnedResource *); // 0x04
};
struct OwnedResource {
    OwnedResourceVtable *vtable;
};
struct Buffers;
struct ResourceOwner {
    u32 unk00;
    OwnedResource *resource; // 0x04
    u8 unk08[0xc];
    Buffers *buffers; // 0x14
    u8 unk18[0x20];
    u32 state; // 0x38
};

extern "C" void FUN_001b55f8(Buffers *);

// Release the owned polymorphic resource and any backing buffers.
extern "C" void FUN_001aeafc(ResourceOwner *owner)
{
    if (owner->resource != NULL) {
        owner->resource->vtable->release(owner->resource);
        owner->resource = NULL;
    }
    owner->state = 0;
    if (owner->buffers != NULL)
        FUN_001b55f8(owner->buffers);
}
