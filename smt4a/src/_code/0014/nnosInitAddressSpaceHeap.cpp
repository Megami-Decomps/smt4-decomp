#include "common.h"

extern "C" {

void nnosAddressSpaceManagerInitialize(u8 *manager, s32 base, s32 size);
extern u8 g_nnosAddressSpaceManagerHeap[];

/* Initialises the address-space manager at 0x647660 for the range 0x10000000..+0x4000000. */
void nnosInitAddressSpaceHeap(void)
{
    nnosAddressSpaceManagerInitialize(g_nnosAddressSpaceManagerHeap, 0x10000000, 0x4000000);
}

} /* extern "C" */
