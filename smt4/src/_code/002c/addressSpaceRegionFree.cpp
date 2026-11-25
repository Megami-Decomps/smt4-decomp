/* NON_MATCHING: only registers differ: retail keeps the mapped address in r7 and the permission constant 3 in r6 (swapped here). */
#include "nn/os/AddressSpaceManager.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {
void FUN_001377a0(AddressSpaceManager *manager, AddressSpaceRegion *region);
s32 svcControlMemory(u32 *outAddress, u32 address, u32 source, u32 size, u32 operation, u32 permission);
extern AddressSpaceManager g_nnosAddressSpaceManagerApplication;

/* Runs one memory-control operation (svc ControlMemory wrapper) and reports a failure. */
static __inline void controlMemory(u32 address, u32 source, u32 size, u32 operation, u32 permission)
{
    u32 output;
    s32 result = svcControlMemory(&output, address, source, size, operation, permission);
    bool failed = nnResultIsFailure(result);
    if (failed)
        resultHandleFailure(result, failed);
}

/* Removes a mapped region and frees its backing allocation. */
u32 addressSpaceRegionFree(AddressSpaceRegion *region)
{
    u32 mappedAddress = region->mappedAddress;
    if (mappedAddress == 0)
        return 0;
    u32 backingAddress = region->backingAddress;
    u32 size = region->size;
    FUN_001377a0(&g_nnosAddressSpaceManagerApplication, region);
    controlMemory(mappedAddress, backingAddress, size, 5, 3);
    controlMemory(backingAddress, 0, size, 6, 3);
    return backingAddress;
}
}
