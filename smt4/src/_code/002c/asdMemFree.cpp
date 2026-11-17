#include "sys/AllocationTracking.h"
#include "classes/AllocatorState.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "util/MemoryHelpers_VariantB.h"

extern "C" {

void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void *FUN_001246cc(void *payload);
void asdMemoryFreeRegion(void *payload);

// Free a block under the tracking lock; blocks outside the two pooled regions first lose their tracking header.
void asdMemFree(void *payload)
{
    u32 address = (u32)payload;
    nn_os_CriticalSection_Enter(DAT_00465120.lock);
    u32 firstBase = DAT_00465120.regionBase[2];
    u32 secondBase = DAT_00465120.regionBase[3];
    if ((firstBase > address || firstBase + DAT_00465120.regionSize[2] < address) &&
        (secondBase > address || secondBase + DAT_00465120.regionSize[3] < address)) {
        payload = FUN_001246cc(payload);
    }
    asdMemoryFreeRegion(payload);
    nn_os_CriticalSection_Leave(DAT_00465120.lock);
}

} /* extern "C" */
