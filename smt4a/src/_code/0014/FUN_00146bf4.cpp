#include "common.h"

extern "C" {

void nnosAddressSpaceManagerInitialize(u8 *manager, u32 base, u32 size);
extern s8 DAT_005c0ad4;
extern u8 DAT_00643310[];

/* Initialises the address-space manager at 0x643310 for the range (base, size) the first time it is called. */
void FUN_00146bf4(u32 base, u32 size)
{
    if (DAT_005c0ad4 == 0) {
        DAT_005c0ad4 = 1;
        nnosAddressSpaceManagerInitialize(DAT_00643310, base, size);
        return;
    }
}

} /* extern "C" */
