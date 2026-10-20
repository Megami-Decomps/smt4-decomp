#include "common.h"

extern "C" {

int nnosAddressSpaceManagerInitialize(u8 *manager, int base, int size);

extern u8 g_nnosAddressSpaceManagerHeap;

void nnosInitAddressSpaceHeap(void)
{
    nnosAddressSpaceManagerInitialize(&g_nnosAddressSpaceManagerHeap, 0x10000000, 0x4000000);
}

} /* extern "C" */
