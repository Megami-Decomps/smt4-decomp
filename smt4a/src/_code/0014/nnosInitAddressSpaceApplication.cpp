#include "common.h"

extern "C" {

void nnosAddressSpaceManagerInitialize(u8 *manager, s32 base, s32 size);
extern u8 g_nnosAddressSpaceManagerApplication[];

/* Initialises the address-space manager at 0x62D630 for the range 0xE000000..+0x2000000. */
void nnosInitAddressSpaceApplication(void)
{
    nnosAddressSpaceManagerInitialize(g_nnosAddressSpaceManagerApplication, 0xE000000, 0x2000000);
}

} /* extern "C" */
