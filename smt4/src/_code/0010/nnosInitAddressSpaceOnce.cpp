#include "common.h"

extern "C" {

int nnosAddressSpaceManagerInitialize(u8 *manager, u32 base, u32 size);

extern s8 g_nnosAddressSpaceInitialized;
extern u8 g_nnosAddressSpaceManager;

/* Initializes the address space manager once. */
void nnosInitAddressSpaceOnce(u32 base, u32 size)
{
    if (g_nnosAddressSpaceInitialized == 0) {
        g_nnosAddressSpaceInitialized = 1;
        nnosAddressSpaceManagerInitialize(&g_nnosAddressSpaceManager, base, size);
    }
}

} /* extern "C" */
