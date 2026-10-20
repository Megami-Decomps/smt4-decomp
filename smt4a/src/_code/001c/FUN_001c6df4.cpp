#include "common.h"

extern "C" {

void nn_os_AddressSpaceManager_Free(u8 *object, u32 value);
extern u8 g_nnosAddressSpaceManagerHeap[];

/* Forwards `value` to nn_os_AddressSpaceManager_Free with the object at 0x647660. */
void FUN_001c6df4(u32 value)
{
    nn_os_AddressSpaceManager_Free(g_nnosAddressSpaceManagerHeap, value);
}

} /* extern "C" */
