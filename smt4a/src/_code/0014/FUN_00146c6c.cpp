#include "common.h"

extern "C" {

void nnosAddressSpaceManagerInitialize(u8 *manager, s32 base, s32 size);
extern u8 DAT_00647660[];

/* Initialises the address-space manager at 0x647660 for the range 0x10000000..+0x4000000. */
void FUN_00146c6c(void)
{
    nnosAddressSpaceManagerInitialize(DAT_00647660, 0x10000000, 0x4000000);
}

} /* extern "C" */
