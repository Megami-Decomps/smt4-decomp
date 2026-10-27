/* NON_MATCHING: empty-region return matches; mapped/backing/size/permission registers remain permuted. */
#include "nn/os/AddressSpaceManager.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {
void FUN_0017e1c0(AddressSpaceManager *manager, AddressSpaceRegion *region);
s32 FUN_0016236c(u32 *outAddress, u32 address, u32 source, u32 size, u32 operation, u32 permission);
extern AddressSpaceManager g_nnosAddressSpaceManagerApplication;

/* Removes a mapped region and frees its backing allocation. */
u32 FUN_001469a8(AddressSpaceRegion *region)
{
    u32 mappedAddress = region->mappedAddress;
    if (mappedAddress == 0)
        return 0;
    u32 backingAddress = region->backingAddress;
    u32 size = region->size;
    FUN_0017e1c0(&g_nnosAddressSpaceManagerApplication, region);
    u32 address;
    s32 result = FUN_0016236c(&address, mappedAddress, backingAddress, size, 5, 3);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
    result = FUN_0016236c(&address, backingAddress, 0, size, 6, 3);
    failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
    return backingAddress;
}
}
