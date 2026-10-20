#include "common.h"

extern "C" {

extern void nn_os_AddressSpaceManager_Free(u8 *manager, u32 address);

extern u8 g_nnosAddressSpaceManagerHeap;

void FUN_001597a4(u32 address)
{
    nn_os_AddressSpaceManager_Free(&g_nnosAddressSpaceManagerHeap, address);
}

} /* extern "C" */
