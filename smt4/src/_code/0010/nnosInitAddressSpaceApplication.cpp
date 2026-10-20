#include "common.h"

extern "C" {

int nnosAddressSpaceManagerInitialize(u8 *manager, int base, int size);

extern u8 DAT_004d4600;

void nnosInitAddressSpaceApplication(void)
{
    nnosAddressSpaceManagerInitialize(&DAT_004d4600, 0xe000000, 0x2000000);
}

} /* extern "C" */
