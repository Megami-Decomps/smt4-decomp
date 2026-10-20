#include "common.h"

extern "C" {

void nnosAddressSpaceManagerInitialize(u8 *manager, u32 base, u32 size);
extern s8 g_nnosAddressSpaceInitialized;
extern u8 g_nnosAddressSpaceManager[];

/* Initialises the address-space manager at 0x643310 for the range (base, size) the first time it is called. */
void nnosInitAddressSpaceOnce(u32 base, u32 size)
{
    if (g_nnosAddressSpaceInitialized == 0) {
        g_nnosAddressSpaceInitialized = 1;
        nnosAddressSpaceManagerInitialize(g_nnosAddressSpaceManager, base, size);
        return;
    }
}

} /* extern "C" */
