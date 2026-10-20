#include "common.h"

extern "C" {

int nnosAddressSpaceManagerInitialize(u8 *manager, int base, int size);

extern u8 DAT_004eac5c;

void nnosInitAddressSpaceHeap(void)
{
    nnosAddressSpaceManagerInitialize(&DAT_004eac5c, 0x10000000, 0x4000000);
}

} /* extern "C" */
