/* NON_MATCHING: allocated object is polymorphic; its class and vtable symbols must be recovered before replacing the explicit layout initialization with its real constructor. */
#include "common.h"

class ObjectAllocator {
public:
    virtual void* allocate(u32 size) = 0;
};
struct AllocatedObjectState {
    const u32* vtable;      // 0x00
    u32 active;             // 0x04
    u32 kind;               // 0x08
    ObjectAllocator* owner; // 0x0c
    u32 parameter;          // 0x10
    s32 index;              // 0x14
    u8 unk18[0x0c];         // 0x18
};

extern "C" {
extern const u32 DAT_0055c980[];

// Allocates and initializes the recovered 0x24-byte object layout.
AllocatedObjectState* FUN_004acea0(ObjectAllocator* allocator, u32 parameter)
{
    AllocatedObjectState* object =
        static_cast<AllocatedObjectState*>(allocator->allocate(sizeof(AllocatedObjectState)));
    if (object != NULL) {
        object->index = -1;
        object->vtable = DAT_0055c980;
        object->active = 1;
        object->kind = 0xc;
        object->owner = allocator;
        object->parameter = parameter;
    }
    return object;
}
}
