/* NON_MATCHING: retail uses ARMv5-style Thumb moves and stack-resident saved data/success status; compiled code keeps them in registers. */
#include "common.h"

struct ResourceAllocation {
    u8 unk00[0x0c]; // 0x00
    u32 flags;      // 0x0c
    void* data;     // 0x10
    u32 handle;     // 0x14
    u8 unk18[0x34]; // 0x18
    u32 linkFlags;  // 0x4c
};

extern "C" {
void FUN_002e6cc0(ResourceAllocation* resource);
s32 returnMinusOne1(u32 handle);
void asdOperatorDeleteC(void* allocation);
void sysMemClear(void* allocation, u32 size);

// Releases an active allocation and clears its ownership flag on success.
s32 FUN_002e61e8(ResourceAllocation* resource)
{
    u32 handle = resource->handle;
    void* data = resource->data;
    u32 flags = resource->flags;
    if ((flags & 3) != 0) {
        FUN_002e6cc0(resource);
        if (returnMinusOne1(handle) >= 0) {
            if ((flags & 0x800) != 0) {
                asdOperatorDeleteC(data);
            }
            sysMemClear(resource, 0x48);
            resource->linkFlags &= ~1u;
            return 0;
        }
    }
    return -1;
}
}
