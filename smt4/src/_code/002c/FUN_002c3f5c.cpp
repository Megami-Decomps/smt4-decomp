/* NON_MATCHING: Mapped-address, size and permission registers differ; the empty-region return shares the final return instead of returning directly. */
#include "nn/os/AddressSpaceManager.h"
#include "nn/Result.h"

extern "C" {
void FUN_001377a0(AddressSpaceManager *manager, AddressSpaceRegion *region);
s32 FUN_002bb7c4(u32 *outAddress, u32 address, u32 source, u32 size, u32 operation, u32 permission);
void FUN_002c526c(s32 result);
extern AddressSpaceManager g_nnosAddressSpaceManagerApplication;

/* Removes a mapped region and frees its backing allocation. */
u32 FUN_002c3f5c(AddressSpaceRegion *region)
{
    u32 backingAddress;
    u32 mappedAddress = region->mappedAddress;
    if (mappedAddress == 0) {
        backingAddress = 0;
    } else {
        backingAddress = region->backingAddress;
        u32 size = region->size;
        FUN_001377a0(&g_nnosAddressSpaceManagerApplication, region);
        u32 address;
        s32 result = FUN_002bb7c4(&address, mappedAddress, backingAddress, size, 5, 3);
        if (nnResultIsFailure(result)) {
            FUN_002c526c(result);
        }
        result = FUN_002bb7c4(&address, backingAddress, 0, size, 6, 3);
        if (nnResultIsFailure(result)) {
            FUN_002c526c(result);
        }
    }
    return backingAddress;
}
}
