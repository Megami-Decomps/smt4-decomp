#include "common.h"

extern "C" {

int nnosAddressSpaceManagerInitialize(u8 *manager, int base, int size);

extern u8 g_nnosAddressSpaceManagerApplication;

void nnosInitAddressSpaceApplication(void)
{
    nnosAddressSpaceManagerInitialize(&g_nnosAddressSpaceManagerApplication, 0xe000000, 0x2000000);
}

} /* extern "C" */
