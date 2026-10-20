#include "common.h"

extern "C" {

void nnosAddressSpaceManagerInitialize(u8 *manager, s32 base, s32 size);
extern u8 DAT_0062d630[];

/* Initialises the address-space manager at 0x62D630 for the range 0xE000000..+0x2000000. */
void FUN_00146c58(void)
{
    nnosAddressSpaceManagerInitialize(DAT_0062d630, 0xE000000, 0x2000000);
}

} /* extern "C" */
