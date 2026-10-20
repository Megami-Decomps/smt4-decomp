#include "common.h"

extern "C" {

int nnosAddressSpaceManagerInitialize(u8 *manager, u32 base, u32 size);

extern s8 DAT_00471b54;
extern u8 DAT_004e6ef0;

/* Initializes the address space manager once. */
void nnosInitAddressSpaceOnce(u32 base, u32 size)
{
    if (DAT_00471b54 == 0) {
        DAT_00471b54 = 1;
        nnosAddressSpaceManagerInitialize(&DAT_004e6ef0, base, size);
    }
}

} /* extern "C" */
