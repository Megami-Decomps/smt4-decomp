#include "sys/AllocationTracking.h"

extern "C" {

extern AllocationRegions DAT_00465120;
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void *FUN_001246cc(void *payload);
void asdMemoryFreeRegion(void *payload);

// Free a block under the tracking lock; blocks outside the two pooled regions first lose their tracking header.
void asdMemFree(void *payload)
{
    u32 address = (u32)payload;
    nn_os_CriticalSection_Enter(DAT_00465120.lock);
    AllocationRegionPair base = DAT_00465120.base;
    if ((address < base.first || address > base.first + DAT_00465120.size.first) &&
        (address < base.second || address > base.second + DAT_00465120.size.second)) {
        payload = FUN_001246cc(payload);
    }
    asdMemoryFreeRegion(payload);
    nn_os_CriticalSection_Leave(DAT_00465120.lock);
}

} /* extern "C" */
