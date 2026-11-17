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
    nn_os_CriticalSection_Enter(g_asdMemState.lock);
    u32 firstBase = g_asdMemState.regionBase[2];
    u32 secondBase = g_asdMemState.regionBase[3];
    if ((firstBase > address || firstBase + g_asdMemState.regionSize[2] < address) &&
        (secondBase > address || secondBase + g_asdMemState.regionSize[3] < address)) {
        payload = FUN_001246cc(payload);
    }
    asdMemoryFreeRegion(payload);
    nn_os_CriticalSection_Leave(g_asdMemState.lock);
}

} /* extern "C" */
